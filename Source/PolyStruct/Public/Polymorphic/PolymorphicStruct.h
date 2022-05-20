// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PolymorphicStruct.generated.h"

/*
 * A polymorphic struct that can store any USTRUCT and can be casted to
 * or extracted back into it's original type. Supports dynamic net serialization
 */
USTRUCT(BlueprintType, Meta = (DisplayName = "Polymorphic Struct"))
struct POLYSTRUCT_API FPolyStruct
{
	GENERATED_BODY()

	FPolyStruct() = default;
	FPolyStruct(const FPolyStruct& Other);
	FPolyStruct(const void* InStruct, const UScriptStruct* InScriptStruct);
	~FPolyStruct();

	// Factory function for making an FPolyStruct and initializing it from the Struct parameter
	template<typename T>
	FORCEINLINE static FPolyStruct Make(const T& Struct) { return FPolyStruct(&Struct, TBaseStructure<T>::Get()); }

	// Calls the constructor of the template struct and initializes with the params
	template<typename T, typename... Args>
	FORCEINLINE static FPolyStruct Make(Args... Params) { const T Struct(Params...); return FPolyStruct(&Struct, TBaseStructure<T>::Get()); }
	
	FORCEINLINE FPolyStruct& operator=(const FPolyStruct& Other) { SetStruct(Other); return *this; }
	template<typename T>
	FORCEINLINE FPolyStruct& operator=(const T& Struct) { SetStruct<T>(Struct); return *this; }
	
	bool operator==(const FPolyStruct& Other) const;
	FORCEINLINE bool operator!=(const FPolyStruct& Other) const { return !(*this == Other); }
	FORCEINLINE bool operator==(const UScriptStruct* Struct) const { return ScriptStruct == Struct; }
	FORCEINLINE bool operator!=(const UScriptStruct* Struct) const { return !(*this == Struct); }

	FORCEINLINE uint8* GetMemory() { return Memory; }
	FORCEINLINE const uint8* GetMemory() const { return Memory; }
	FORCEINLINE UScriptStruct* GetScriptStruct() const { return ScriptStruct; }

	FORCEINLINE FString ToString() const { return ScriptStruct ? ScriptStruct->GetName() : TEXT("None"); }
	FORCEINLINE FName GetFName() const { return ScriptStruct ? ScriptStruct->GetFName() : NAME_None; }
	FORCEINLINE int32 GetSize() const { return ScriptStruct ? ScriptStruct->GetStructureSize() : 0; }
	FORCEINLINE bool IsValid() const { return Memory && ScriptStruct; }
	FORCEINLINE operator bool() const { return IsValid(); }

	FORCEINLINE bool IsA(const UScriptStruct* StructType) const { return ScriptStruct && ScriptStruct->IsChildOf(StructType); }
	template<typename T>
	FORCEINLINE bool IsA() const { return IsA(TBaseStructure<T>::Get()); }

	// Empties and initializes Poly Struct with the passed in struct parameter
	void SetStruct(const void* InStruct, const UScriptStruct* InScriptStruct);
	FORCEINLINE void SetStruct(const FPolyStruct& Other) { SetStruct(Other.Memory, Other.ScriptStruct); }
	template<typename T>
	FORCEINLINE void SetStruct(const T& InStruct) { SetStruct((uint8*)&InStruct, TBaseStructure<T>::Get()); }

	// Empties and initializes
	void SetStruct(const UScriptStruct* InScriptStruct);
	template<typename T>
	FORCEINLINE void SetStruct() { SetStruct(TBaseStructure<T>::Get()); }

	// Extracts the data in the PolyStruct to the OutStruct container. Ensures a valid cast
	bool ExtractStruct(void* const OutStruct, const UScriptStruct* InScriptStruct) const;
	template<typename T>
	FORCEINLINE bool ExtractStruct(T& OutStruct) { return ExtractStruct(&OutStruct, TBaseStructure<T>::Get()); }

	// Casts the memory. Null on invalid cast
	template<typename To>
	FORCEINLINE To* Get() { return IsA<To>() ? (To*)Memory : nullptr; }

	// Casts the memory. Null on invalid cast
	template<typename To>
	FORCEINLINE const To* Get() const { return IsA<To>() ? (To*)Memory : nullptr; }

	FString ToJsonString() const;
	FString ToValueString() const;

	// Empties data from struct and
	void Empty();

	bool Serialize(FArchive& Ar);
	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);
	void AddStructReferencedObjects(class FReferenceCollector& Collector);

protected:
	static void NetSerializeStruct(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess, const UScriptStruct* Struct, void* const Memory);
	
	uint8* Memory = nullptr;
	UScriptStruct* ScriptStruct = nullptr;
};

template<>
struct TStructOpsTypeTraits<FPolyStruct> : TStructOpsTypeTraitsBase2<FPolyStruct>
{
	enum
	{
		WithCopy = true,
		WithSerializer = true,
		WithNetSerializer = true,
		WithIdenticalViaEquality = true,
		WithAddStructReferencedObjects = true,
	};
};





/*
 * An array of Poly Structs being passed around by-reference via Shared Pointer.
 * Avoids copying when being passed around. Supports net serialization
 * and has optimizations for delta serialization so this is preferable to use over a
 * standard array of Poly Structs
 */
USTRUCT(BlueprintType, Meta = (DisplayName = "Polymorphic Struct Handle"))
struct POLYSTRUCT_API FPolyStructHandle
{
	GENERATED_BODY()
	
	FPolyStructHandle() = default;
	FPolyStructHandle(const FPolyStructHandle& Other) : PolyStructs(Other.PolyStructs) {}
	FPolyStructHandle(const std::initializer_list<FPolyStruct>& PolyStructs) { *this = PolyStructs; }
	explicit FPolyStructHandle(const FPolyStruct& PolyStruct) { Add(PolyStruct); }
	explicit FPolyStructHandle(const TArray<FPolyStruct>& PolyStructs) { *this = PolyStructs; }

	bool operator==(const FPolyStructHandle& Other) const;
	FORCEINLINE bool operator!=(const FPolyStructHandle& Other) const { return !(*this == Other); }

	// Passes Poly Structs by TSharedPtr so no copying
	FPolyStructHandle& operator=(const FPolyStructHandle& Other);
	FORCEINLINE FPolyStructHandle& operator=(const TArray<FPolyStruct>& InPolyStructs) { Empty(); for(const FPolyStruct& PolyStruct : InPolyStructs) { Add(PolyStruct); } return *this; }
	FORCEINLINE FPolyStructHandle& operator=(const std::initializer_list<FPolyStruct>& InPolyStructs) { Empty(); for(const FPolyStruct& PolyStruct : InPolyStructs) { Add(PolyStruct); } return *this; }

	FORCEINLINE FPolyStructHandle& operator+=(const FPolyStruct& PolyStruct) { Add(PolyStruct); return *this; }
	FORCEINLINE FPolyStructHandle& operator+=(const FPolyStructHandle& Other) { Append(Other); return *this; }
	
	FPolyStructHandle MakeCopy() const;

	FString ToString() const;
	FORCEINLINE int32 Num() const { return PolyStructs.Num(); }
	FORCEINLINE FPolyStruct& operator[](const int32 Index) { return *PolyStructs[Index].Get(); }
	FORCEINLINE const FPolyStruct& operator[](const int32 Index) const { return *PolyStructs[Index].Get(); }

	FORCEINLINE int32 Add(const FPolyStruct& PolyStruct) { return PolyStructs.Add(MakeShared<FPolyStruct>(PolyStruct)); }
	FORCEINLINE int32 Add(const void* Struct, const UScriptStruct* ScriptStruct) { return PolyStructs.Add(MakeShared<FPolyStruct>(Struct, ScriptStruct)); }
	template<typename T> FORCEINLINE int32 Add(const T& Struct) { return PolyStructs.Add(MakeShared<FPolyStruct>(&Struct, TBaseStructure<T>::Get())); }
	template<typename T> FORCEINLINE int32 Add(T&& Struct) { return PolyStructs.Add(MakeShared<FPolyStruct>(&Struct, TBaseStructure<T>::Get())); }

	void Append(const TArray<FPolyStruct>& InPolyStructs);
	FORCEINLINE void Append(const FPolyStructHandle& Other) { PolyStructs.Append(Other.PolyStructs); }

	FORCEINLINE void Empty() { PolyStructs.Empty(); }
	FORCEINLINE bool IsEmpty() const { return PolyStructs.IsEmpty(); }
	FORCEINLINE bool IsValidIndex(const int32 Index) const { return PolyStructs.IsValidIndex(Index); }

	// Returns valid pointer if Poly Struct exists at the index
	FPolyStruct* GetAt(const int32 Index);
	const FPolyStruct* GetAt(const int32 Index) const;

	template<typename To>
	To* GetAny() const;

	bool ExtractStructAt(void* const OutStruct, const UScriptStruct* ScriptStruct, const int32 Index = 0) const;
	template<typename T>
	FORCEINLINE bool ExtractStructAt(T& Struct, const int32 Index = 0) const { return ExtractStructAt(&Struct, TBaseStructure<T>::Get(), Index); }

	// Will extract the data into the OutStruct if a valid type exists and will return the index of that struct
	int32 ExtractAny(void* const OutStruct, const UScriptStruct* ScriptStruct) const;

	// Will extract the data into the Struct if a valid type exists and will return the index of that struct
	template<typename T>
	FORCEINLINE int32 ExtractAny(T& Struct) const { return ExtractAny(&Struct, TBaseStructure<T>::Get()); }

	// Returns an array of valid struct casts
	template<typename T>
	void CastStructs(TArray<T*>& Structs);

	struct FStreamParam { FPolyStructHandle* Handle; int32 Index; };
	template<typename T>
	FORCEINLINE FStreamParam operator>>(T& Struct) { ExtractStructAt<T>(Struct); return { this, 1 }; }

	bool Serialize(FArchive& Ar);
	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);
	bool NetDeltaSerialize(const FNetDeltaSerializeInfo& DeltaParams);

	// Poly structs being held by shared ptr to allow pass-by-reference in Blueprints
	TArray<TSharedPtr<FPolyStruct>> PolyStructs;
};

template<>
struct TStructOpsTypeTraits<FPolyStructHandle> : TStructOpsTypeTraitsBase2<FPolyStructHandle>
{
	enum
	{
		WithCopy = true,
		WithSerializer = true,
		WithNetSerializer = false,
		WithNetDeltaSerializer = true,
		WithIdenticalViaEquality = true,
	};
};

struct FPolyStructHandleDeltaState : public INetDeltaBaseState
{
	FPolyStructHandleDeltaState() = delete;
	FPolyStructHandleDeltaState(const FPolyStructHandle& InHandle)
	{
		Handle.PolyStructs.SetNum(InHandle.Num());
		for(int32 i = 0; i < InHandle.Num(); i++)
		{
			if(!InHandle.PolyStructs[i].IsValid()) continue;
			FPolyStruct& PolyStruct = Handle.PolyStructs[i].IsValid() ? Handle[i] : *(Handle.PolyStructs[i] = MakeShared<FPolyStruct>()).Get();
			PolyStruct = InHandle[i];
		}
	}
	
	FORCEINLINE virtual bool IsStateEqual(INetDeltaBaseState* OtherState) override
	{
		 return Handle == reinterpret_cast<FPolyStructHandleDeltaState*>(OtherState)->Handle;
	}
	
	FORCEINLINE static FPolyStructHandle& GetHandle(INetDeltaBaseState* BaseState) { return reinterpret_cast<FPolyStructHandleDeltaState*>(BaseState)->Handle; }
	FORCEINLINE static FPolyStructHandle& GetHandle(const FNetDeltaSerializeInfo& DeltaParams) { return GetHandle(DeltaParams.OldState); }
	
	FPolyStructHandle Handle;
};





namespace FPolyUtils
{
	// Ensures a valid PolyStruct cast
	template<typename To>
	FORCEINLINE const To* Cast(const FPolyStruct& PolyStruct) { return PolyStruct.Get<To>(); }

	// Ensures a valid PolyStruct cast
	template<typename To>
	FORCEINLINE const To* Cast(const FPolyStruct* PolyStruct) { return PolyStruct ? PolyStruct->Get<To>() : nullptr; }

	// Ensures a valid PolyStruct cast
	template<typename To>
	FORCEINLINE To* Cast(FPolyStruct& PolyStruct) { return PolyStruct.Get<To>(); }

	// Ensures a valid PolyStruct cast
	template<typename To>
	FORCEINLINE To* Cast(FPolyStruct* PolyStruct) { return PolyStruct ? PolyStruct->Get<To>() : nullptr; }

#define LOG_FAIL {if(!PolyStruct.IsA<To>()) LowLevelFatalError(TEXT("Failed to cast FPolyStruct memory from %s to %s"), *PolyStruct.ToString(), *TBaseStructure<To>::Get()->GetName());}
#define LOG_FAIL_PTR {if(!PolyStruct || !PolyStruct->IsA<To>()) LowLevelFatalError(TEXT("Failed to cast FPolyStruct memory from %s to %s"), *FString(PolyStruct ? PolyStruct->ToString() : "None"), *TBaseStructure<To>::Get()->GetName());}
	
	// Asserts on a failed cast
	template<typename To>
	FORCEINLINE const To* CastChecked(const FPolyStruct& PolyStruct) { LOG_FAIL; return (To*)PolyStruct.GetMemory(); }

	// Asserts on a failed cast
	template<typename To>
	FORCEINLINE const To* CastChecked(const FPolyStruct* PolyStruct) { LOG_FAIL_PTR; return (To*)PolyStruct->GetMemory(); }

	// Asserts on a failed cast
	template<typename To>
	FORCEINLINE To* CastChecked(FPolyStruct& PolyStruct) { LOG_FAIL; return (To*)PolyStruct.GetMemory(); }

	// Asserts on a failed cast
	template<typename To>
	FORCEINLINE To* CastChecked(FPolyStruct* PolyStruct) { LOG_FAIL_PTR; return (To*)PolyStruct->GetMemory(); }

#undef LOG_FAIL
#undef LOG_FAIL_PTR
	
	// Sets struct
	template<typename T>
	FORCEINLINE void operator<<(FPolyStruct& PolyStruct, const T& Struct)
	{
		PolyStruct.SetStruct<T>(Struct);
	}

	// Extracts struct
	template<typename T>
	FORCEINLINE FPolyStruct& operator>>(FPolyStruct& PolyStruct, T& OutStruct)
	{
		PolyStruct.ExtractStruct<T>(OutStruct);
		return PolyStruct;
	}

	template<typename T>
	FORCEINLINE FPolyStructHandle& operator<<(FPolyStructHandle& Handle, const T& Struct) { Handle.Add<T>(Struct); return Handle; }

	template<typename T>
	FORCEINLINE FPolyStructHandle& operator<<(FPolyStructHandle& Handle, T&& Struct) { Handle.Add<T>(Struct); return Handle; }

	template<typename T>
	FORCEINLINE FPolyStructHandle::FStreamParam operator>>(FPolyStructHandle::FStreamParam Stream, T& Struct) { Stream.Handle->ExtractStructAt<T>(Struct, Stream.Index++); return Stream; }
}

using namespace FPolyUtils;


