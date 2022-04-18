// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PolyStruct.generated.h"

/* A polymorphic struct that can store any USTRUCT and be casted to
 * or extracted back into it's original type. Supports net serialization
 */
USTRUCT(BlueprintType, Meta = (DisplayName = "Polymorphic Struct"))
struct POLYSTRUCT_API FPolyStruct
{
	GENERATED_BODY()

	FPolyStruct() = default;
	FPolyStruct(const FPolyStruct& Other);
	FPolyStruct(const void* InStruct, const UScriptStruct* InScriptStruct);
	template<typename T>
	FPolyStruct(T&& Struct) { SetStruct(&Struct, T::StaticStruct()); }
	~FPolyStruct();

	// Factory function for making an FPolyStruct and initializing it from the Struct parameter
	template<typename T>
	FORCEINLINE static FPolyStruct Make(const T& Struct) { return FPolyStruct(&Struct, T::StaticStruct()); }

	// Calls the constructor of the template struct and initializes with the params
	template<typename T, typename... Args>
	FORCEINLINE static FPolyStruct Make(Args... Params) { const T Struct(Params...); return FPolyStruct(&Struct, T::StaticStruct()); }
	
	FORCEINLINE FPolyStruct& operator=(const FPolyStruct& Other) { SetStruct(Other); return *this; }
	template<typename T>
	FORCEINLINE FPolyStruct& operator=(const T& Struct) { SetStruct<T>(Struct); return *this; }
	
	FORCEINLINE bool operator==(const FPolyStruct& Other) const { return ScriptStruct == Other.ScriptStruct; }
	FORCEINLINE bool operator!=(const FPolyStruct& Other) const { return !(*this == Other); }
	FORCEINLINE bool operator==(const UScriptStruct* Struct) const { return ScriptStruct == Struct; }
	FORCEINLINE bool operator!=(const UScriptStruct* Struct) const { return !(*this == Struct); } 

	FORCEINLINE uint8* GetMemory() { return Memory; }
	FORCEINLINE const uint8* GetMemory() const { return Memory; }
	FORCEINLINE UScriptStruct* GetScriptStruct() const { return ScriptStruct; }

	FORCEINLINE int32 GetSize() const { return ScriptStruct ? ScriptStruct->GetStructureSize() : 0; }
	FORCEINLINE bool IsValid() const { return Memory && ScriptStruct; }
	FORCEINLINE operator bool() const { return IsValid(); }

	FORCEINLINE bool IsA(const UScriptStruct* StructType) const { return ScriptStruct && ScriptStruct->IsChildOf(StructType); }
	template<typename T>
	FORCEINLINE bool IsA() const { return IsA(T::StaticStruct()); }

	// Empties and initializes Poly Struct with the passed in struct parameter
	void SetStruct(const void* InStruct, const UScriptStruct* InScriptStruct);
	FORCEINLINE void SetStruct(const FPolyStruct& Other) { SetStruct(Other.Memory, Other.ScriptStruct); }
	template<typename T>
	FORCEINLINE void SetStruct(const T& InStruct) { SetStruct((uint8*)&InStruct, T::StaticStruct()); }

	// Empties and initializes
	void SetStruct(const UScriptStruct* InScriptStruct);
	template<typename T>
	FORCEINLINE void SetStruct() { SetStruct(T::StaticStruct()); }

	// Extracts the data in the PolyStruct to the OutStruct container. Ensures a valid cast
	bool ExtractStruct(void* const OutStruct, const UScriptStruct* InScriptStruct) const;
	template<typename T>
	FORCEINLINE bool ExtractStruct(T& OutStruct) { return ExtractStruct(&OutStruct, T::StaticStruct()); }

	// Casts the memory. Null on invalid cast
	template<typename To>
	FORCEINLINE To* Get() { return IsA<To>() ? (To*)Memory : nullptr; }

	// Casts the memory. Null on invalid cast
	template<typename To>
	FORCEINLINE const To* Get() const { return IsA<To>() ? (To*)Memory : nullptr; }

	// Empties data from struct and
	void Empty();

	bool Serialize(FArchive& Ar);
	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);
	void AddStructReferencedObjects(class FReferenceCollector& Collector);

protected:	
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
		WithAddStructReferencedObjects = true,
		WithIdenticalViaEquality = true,
	};
};











/* An array of Poly Structs being passed around by-reference via Shared Pointers.
 * Avoids copying when being passed around in Blueprints. Supports net serialization
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
	FORCEINLINE FPolyStructHandle& operator=(const FPolyStructHandle& Other) { Empty(); PolyStructs = Other.PolyStructs; return *this; }
	FORCEINLINE FPolyStructHandle& operator=(const TArray<FPolyStruct>& InPolyStructs) { Empty(); for(const FPolyStruct& PolyStruct : InPolyStructs) { Add(PolyStruct); } return *this; }
	FORCEINLINE FPolyStructHandle& operator=(const std::initializer_list<FPolyStruct>& InPolyStructs) { Empty(); for(const FPolyStruct& PolyStruct : InPolyStructs) { Add(PolyStruct); } return *this; }

	FORCEINLINE int32 Num() const { return PolyStructs.Num(); }
	FORCEINLINE TSharedPtr<FPolyStruct>& operator[](const int32 Index) { return PolyStructs[Index]; }
	FORCEINLINE const TSharedPtr<FPolyStruct>& operator[](const int32 Index) const { return PolyStructs[Index]; }

	FORCEINLINE int32 Add(const FPolyStruct& PolyStruct) { return PolyStructs.Add(MakeShared<FPolyStruct>(PolyStruct)); }
	FORCEINLINE int32 Add(const void* Struct, const UScriptStruct* ScriptStruct) { return PolyStructs.Add(MakeShared<FPolyStruct>(Struct, ScriptStruct)); }
	template<typename T> FORCEINLINE int32 Add(const T& Struct) { return PolyStructs.Add(MakeShared<FPolyStruct>(&Struct, T::StaticStruct())); }
	template<typename T> FORCEINLINE int32 Add(T&& Struct) { return PolyStructs.Add(MakeShared<FPolyStruct>(&Struct, T::StaticStruct())); }

	void Append(const TArray<FPolyStruct>& InPolyStructs); 

	FORCEINLINE void Empty() { PolyStructs.Empty(); }
	FORCEINLINE bool IsEmpty() const { return PolyStructs.IsEmpty(); }
	FORCEINLINE bool IsValidIndex(const int32 Index) const { return PolyStructs.IsValidIndex(Index); }

	// Returns valid pointer if Poly Struct exists at the index
	FPolyStruct* GetAt(const int32 Index) const;

	bool ExtractStructAt(void* const OutStruct, const UScriptStruct* ScriptStruct, const int32 Index = 0) const;
	template<typename T>
	FORCEINLINE bool ExtractStructAt(T& Struct, const int32 Index = 0) const { return ExtractStructAt(&Struct, T::StaticStruct(), Index); }

	// Returns an array of valid struct casts
	template<typename T>
	void CastStructs(TArray<T*>& Structs);

	struct FStreamParam { FPolyStructHandle* Handle; int32 Index; };
	template<typename T>
	FORCEINLINE FStreamParam operator>>(T& Struct) { ExtractStructAt<T>(Struct); return { this, 1 }; }

	bool Serialize(FArchive& Ar);
	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);

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
		WithNetSerializer = true,
		WithIdenticalViaEquality = true,
	};
};



namespace FPolymorphic
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

#define LOG_FAIL {if(!PolyStruct.IsA<To>()) LowLevelFatalError(TEXT("Failed to cast FPolyStruct memory from %s to %s"), *FString(PolyStruct.GetScriptStruct() ? PolyStruct.GetScriptStruct()->GetName() : "None"), *To::StaticStruct()->GetName());}
#define LOG_FAIL_PTR {if(!PolyStruct || !PolyStruct->IsA<To>()) LowLevelFatalError(TEXT("Failed to cast FPolyStruct memory from %s to %s"), *FString(PolyStruct && PolyStruct->GetScriptStruct() ? PolyStruct->GetScriptStruct()->GetName() : "None"), *To::StaticStruct()->GetName());}
	
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

using namespace FPolymorphic;

























