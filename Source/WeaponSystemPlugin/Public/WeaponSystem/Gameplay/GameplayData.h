
#pragma once

#include "CoreMinimal.h"
#include "GameplayData.generated.h"
/*
struct FDataStruct
{
	FDataStruct() = default;
	FDataStruct(const TArray<uint8>& Data, UScriptStruct* Struct)
		: Data(MakeShared<TArray<uint8>>(Data)), Struct(Struct) {}
	FDataStruct(TArray<uint8>&& Data, UScriptStruct* Struct)
		: Data(MakeShared<TArray<uint8>(Data)), Struct(Struct) {}
	FDataStruct(const void* Data, UScriptStruct* Struct)
	{
		if(!Data || !Struct) return;
		constexpr uint8 InitVal = 0;
		const int32 Size = Struct->GetStructureSize();
		TArray<uint8> StructData(&InitVal, Size);
		FMemory::Memcpy(StructData.GetData(), &Struct, Size);
		FDataStruct(Data, Struct);
	}
	template<typename T>
	FDataStruct(const T& Struct)
	{
		constexpr uint8 InitVal = 0;
		const int32 Size = T::StaticStruct()->GetStructureSize();
		TArray<uint8> StructData(&InitVal, Size);
		FMemory::Memcpy(StructData.GetData(), &Struct, Size);
		FDataStruct(Data, T::StaticClass());
	}

	FORCEINLINE uint8* Get() const { return Data.IsValid() ? Data.Get()->GetData() : nullptr; }
	FORCEINLINE bool operator==(const FDataStruct& Other) const { return Data.Get() == Other.Data.Get(); }
	FORCEINLINE bool operator!=(const FDataStruct& Other) const { return !(*this == Other); }
	
	TSharedPtr<TArray<uint8>> Data;
	UScriptStruct* Struct = nullptr;
};

USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FDataContainer
{
	GENERATED_BODY()

	FDataContainer() = default;
	virtual ~FDataContainer() = default;
	FDataContainer(const void* Data, UScriptStruct* Struct) { this->Data.Add(FDataStruct(Data, Struct)); }
	
	template<typename T>
	FORCEINLINE explicit FDataContainer(const T& Data) { FDataContainer(&Data, T::StaticClass()); }
	
	FORCEINLINE virtual bool operator!=(const FDataContainer& Other) const { return !(*this == Other); }
	FORCEINLINE virtual bool operator==(const FDataContainer& Other) const
	{
		if(Data.Num() != Other.Data.Num()) return false;
		for(int32 i = 0; i < Data.Num(); i++)
			if(Data[i] != Other.Data[i]) return false;
		return true;
	}
	FORCEINLINE virtual FDataContainer& operator=(const FDataContainer& Other) { Data = Other.Data; return *this; }

	// The actual data container
	TArray<FDataStruct> Data;

	virtual bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);

	void AddData(const void* Data, UScriptStruct* Struct);

	template<typename T>
	FORCEINLINE void AddData(const T& Data) { AddData(&Data, T::StaticClass()); }
};

template<>
struct TStructOpsTypeTraits<FDataContainer> : TStructOpsTypeTraitsBase2<FDataContainer>
{
	enum
	{
		WithCopy = true,
		WithNetSerializer = true,
		WithIdenticalViaEquality = true,
	};
};

*/