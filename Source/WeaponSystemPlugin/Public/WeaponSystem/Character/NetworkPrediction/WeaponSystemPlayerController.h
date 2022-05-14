

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Polymorphic/PolymorphicStruct.h"
#include "WeaponSystemPlayerController.generated.h"

 

/*
 *	A struct designed for Net-Serializing any number of parameters for a UFUNCTION.
 *	Used in the AWeaponSystemPlayerController for calling RPC's on Objects with no
 *	local net connection through the designated Net Owner.
 *	NOTE: Very finnicky. Can't seem to copy "plain-old-data" values. Works well-enough...
 */
/*
USTRUCT()
struct WEAPONSYSTEMPLUGIN_API FNetParams
{
	GENERATED_BODY()

	FNetParams() = default;
	FNetParams(const FNetParams& Other) { *this = Other; }
	FNetParams(const UFunction* Function, const void* Params) { Set(Function, (uint8*)Params); }
	~FNetParams() { Invalidate(); }

	// Make a NetParams struct from a function with no parameters
	FORCEINLINE static FNetParams Make(const UFunction* Function) { return FNetParams(Function, nullptr); }

	// Make a NetParams struct from a function with multiple parameters
	template<typename... ParamTypes>
	FORCEINLINE static FNetParams Make(const UFunction* Function, const ParamTypes&... Params)
	{
		const TTuple<ParamTypes...> ParamsTuple(Params...);
		return FNetParams(Function, &ParamsTuple);
	}

	// Necessary or else will crash on net serialized
	FORCEINLINE FNetParams& operator=(const FNetParams& Other) { Set(Other.Function, Other.Memory); return *this; }

	FORCEINLINE UFunction* GetFunction() const { return Function; }
	FORCEINLINE uint8* GetMemory() const { return Memory; }
	
	void Set(const UFunction* InFunction, const uint8* InParams);
	void Invalidate();
	void ForEachParam(const TFunction<void(FProperty*, int32)> Func) const;

	// Get all parameters in the order they are declared
	template<typename... ParamTypes>
	FORCEINLINE void Get(ParamTypes&... OutParams) const
	{
		Tie<ParamTypes...>(OutParams...) = *reinterpret_cast<TTuple<ParamTypes...>*>(Memory);
	}
	
	uint8* GetAt(const int32 Index) const;
	template<typename T>
	FORCEINLINE T* GetAt(const int32 Index) const { return (T*)GetAt(Index); }

	FORCEINLINE bool IsValidIndex(const int32 Index) const { return GetAt(Index) != nullptr; }

	template<typename T>
	FORCEINLINE T& GetRefAt(const int32 Index) const { return *GetAt<T>(Index); }

	FORCEINLINE bool IsValid() const { return Function && (Function->NumParms == 0 || Memory); }
	FORCEINLINE bool HasParams() const { return Function && Function->NumParms != 0; }
	FORCEINLINE int32 GetParamsSize() const { return Function ? Function->ParmsSize : 0; }

	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);

protected:
	UFunction* Function = nullptr;
	uint8* Memory = nullptr;
};

template<>
struct TStructOpsTypeTraits<FNetParams> : TStructOpsTypeTraitsBase2<FNetParams>
{
	enum
	{
		WithCopy = true,
		WithNetSerializer = true,
	};
}; 
*/

enum ENetAuthority
{
	Server, Client,
};

enum ENetReliability
{
	Reliable, Unreliable
};

UCLASS()
class WEAPONSYSTEMPLUGIN_API AWeaponSystemPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AWeaponSystemPlayerController();

	UFUNCTION(BlueprintPure, Meta = (DisplayName = "Get Owning Player Controller"))
	static AWeaponSystemPlayerController* StaticGetOwningPlayerController(AActor* Target);

	void CallRemoteFunctionOnObject(UObject* Target, UFunction* Function, const FPolyStruct& NetParams, const ENetAuthority Authority = Server, const ENetReliability Reliability = Reliable);

	// Calls RPC's to Server if Client and Client if Server
	FORCEINLINE void CallRemoteFunctionOnObjectInferred(UObject* Target, UFunction* Function, const FPolyStruct& NetParams, const ENetReliability Reliability = Reliable)
	{
		CallRemoteFunctionOnObject(Target, Function, NetParams, HasAuthority() ? Client : Server, Reliability);
	}

	static void StaticCallRemoteFunctionOnObject(AActor* NetOwner, UObject* Target, UFunction* Function, const FPolyStruct& NetParams)
	{
		if(auto* Controller = StaticGetOwningPlayerController(NetOwner))
			Controller->CallRemoteFunctionOnObjectInferred(Target, Function, NetParams);
	}
	
	template<typename T, typename... Args>
	static void StaticCallRemoteFunctionOnObject(AActor* NetOwner, UObject* Target, UFunction* Function, const Args&... NetParams)
	{
		StaticCallRemoteFunctionOnObject(NetOwner, Target, Function, FPolyStruct::Make<T, Args...>(NetParams...));
	}

	template<typename T>
	static void StaticCallRemoteFunctionOnObject(AActor* NetOwner, UObject* Target, UFunction* Function, const T& NetParams)
	{
		StaticCallRemoteFunctionOnObject(NetOwner, Target, Function, FPolyStruct::Make<T>(NetParams));
	}

protected:
	UFUNCTION(Server, Reliable)
	void Server_Reliable_CallRemoteFunctionOnObject(UObject* Target, UFunction* Function, const FPolyStruct& NetParams);
	FORCEINLINE void Server_Reliable_CallRemoteFunctionOnObject_Implementation(UObject* Target, UFunction* Function, const FPolyStruct& NetParams)
	{
		Remote_CallRemoteFunctionOnObject(Target, Function, NetParams);
	}

	UFUNCTION(Server, Unreliable)
	void Server_Unreliable_CallRemoteFunctionOnObject(UObject* Target, UFunction* Function, const FPolyStruct& NetParams);
	FORCEINLINE void Server_Unreliable_CallRemoteFunctionOnObject_Implementation(UObject* Target, UFunction* Function, const FPolyStruct& NetParams)
	{
		Remote_CallRemoteFunctionOnObject(Target, Function, NetParams);
	}

	UFUNCTION(Client, Reliable)
	void Client_Reliable_CallRemoteFunctionOnObject(UObject* Target, UFunction* Function, const FPolyStruct& NetParams);
	FORCEINLINE void Client_Reliable_CallRemoteFunctionOnObject_Implementation(UObject* Target, UFunction* Function, const FPolyStruct& NetParams)
	{
		Remote_CallRemoteFunctionOnObject(Target, Function, NetParams);
	}

	UFUNCTION(Client, Unreliable)
	void Client_Unreliable_CallRemoteFunctionOnObject(UObject* Target, UFunction* Function, const FPolyStruct& NetParams);
	FORCEINLINE void Client_Unreliable_CallRemoteFunctionOnObject_Implementation(UObject* Target, UFunction* Function, const FPolyStruct& NetParams)
	{
		Remote_CallRemoteFunctionOnObject(Target, Function, NetParams);
	}

	virtual void Remote_CallRemoteFunctionOnObject(UObject* Target, UFunction* Function, const FPolyStruct& NetParams);
};
























