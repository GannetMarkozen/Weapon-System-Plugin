
#pragma once

#include "CoreMinimal.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "GameplayData.generated.h"

struct FDataStructPair
{
	FDataStructPair() = delete;
	FDataStructPair(const TArray<uint8>& Data, FProperty* Property) : Data(MoveTemp(Data)), Property(Property) { checkf(Property, TEXT("Property is not valid")); }
	FDataStructPair(TArray<uint8>&& Data, FProperty* Property) : Data(Data), Property(Property) { checkf(Property, TEXT("Property is not valid")); }
	FDataStructPair(const void* DataPtr, FProperty* Property) : Property(Property)
	{
		constexpr uint8 DefVal = 0;
		TArray<uint8> Buffer(&DefVal, Property->GetSize());
	}

	TArray<uint8> Data;
	FProperty* Property;
};

USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FDataStruct
{
	GENERATED_BODY()
	
	FDataStruct() = default;
	FDataStruct(const TSharedPtr<TArray<uint8>>& Data, UScriptStruct* Struct)
		: DataPtr(Data), Struct(Struct) {}
	FDataStruct(const TArray<uint8>& Data, UScriptStruct* Struct)
		: DataPtr(MakeShared<TArray<uint8>>(Data)), Struct(Struct) {}
	FDataStruct(const void* Data, UScriptStruct* Struct)
		: DataPtr(MakeShared<TArray<uint8>>(GetDataBuffer(Data, Struct))), Struct(Struct) {}
	template<typename T>
	FDataStruct(const T& Struct)
	{
		const int32 Size = T::StaticStruct()->GetStructureSize();
		TArray<uint8> StructData(&InitVal, Size);
		FMemory::Memcpy(StructData.GetData(), &Struct, Size);
		FDataStruct(StructData, T::StaticClass());
	}

	FORCEINLINE static FDataStruct New(UScriptStruct* Struct);

	FORCEINLINE uint8* GetData() const { return DataPtr.IsValid() ? DataPtr.Get()->GetData() : nullptr; }
	FORCEINLINE bool IsValid() const { return GetData() != nullptr; }
	FORCEINLINE bool operator==(const FDataStruct& Other) const { return DataPtr.Get() == Other.DataPtr.Get(); }
	FORCEINLINE bool operator!=(const FDataStruct& Other) const { return !(*this == Other); }

	static constexpr uint8 InitVal = 0;
	
	static FORCEINLINE void GetDataBuffer(TArray<uint8>& OutBuffer, const void* DataPtr, UScriptStruct* Struct)
	{
		if(!DataPtr || !Struct) return;
		const int32 Size = Struct->GetStructureSize();
		OutBuffer.SetNum(Size);
		FMemory::Memcpy(OutBuffer.GetData(), DataPtr, Size);
	}

	static FORCEINLINE TArray<uint8> GetDataBuffer(const void* DataPtr, UScriptStruct* Struct)
	{
		TArray<uint8> Buffer;
		GetDataBuffer(Buffer, DataPtr, Struct);
		return Buffer;
	}

	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);
	
	TSharedPtr<TArray<uint8>> DataPtr;
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

	void AddData(const void* NewData, UScriptStruct* Struct);

	template<typename T>
	FORCEINLINE void AddData(const T& Data) { AddData(&Data, T::StaticClass()); }

	bool ExtractDataAt(void* const OutData, const UScriptStruct* Struct, const int32 Index) const;

	template<typename T>
	FORCEINLINE bool ExtractDataAt(T& OutData, const int32 Index) const { return ExtractDataAt(&OutData, T::StaticStruct(), Index); }

	FORCEINLINE bool HasValidData(const int32 Index = 0) const { return Data.IsValidIndex(Index) && Data[Index].Struct && Data[Index].DataPtr.IsValid() && !Data[Index].DataPtr->IsEmpty(); }
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

UCLASS()
class WEAPONSYSTEMPLUGIN_API UDataContainerFunctionLibrary final : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
protected:
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "Data", AllowPrivateAccess = "true"), Category = "Utility|Data Container")
	static FORCEINLINE void AddDataToContainer(UPARAM(ref) FDataContainer& DataContainer, const int32& Data) { LowLevelFatalError(TEXT("Called AddDataToContainer directly.")); }
	static FORCEINLINE void execAddDataToContainer(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		Stack.StepCompiledIn<FStructProperty>(nullptr);
		FDataContainer* const DataContainerPtr = (FDataContainer*)Stack.MostRecentPropertyAddress;
		//const FStructProperty* DataContainerProp = CastField<FStructProperty>(Stack.MostRecentProperty);

		Stack.StepCompiledIn<FStructProperty>(nullptr);
		const void* DataPtr = Stack.MostRecentPropertyAddress;
		FStructProperty* DataProp = CastField<FStructProperty>(Stack.MostRecentProperty);

		P_FINISH;

		if(!DataContainerPtr || !DataPtr || !DataProp)
		{
			UE_LOG(LogTemp, Error, TEXT("Add Data To Container: Invalid Parameters, Data must be a struct"));
			Stack.bArrayContextFailed = true;
			return;
		}

		P_NATIVE_BEGIN;

		DataContainerPtr->AddData(DataPtr, DataProp->Struct);
			
		P_NATIVE_END;
	}

	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "OutData", AllowPrivateAccess = "true"), Category = "Weapon System Function Library|Data Container")
	static FORCEINLINE bool ExtractDataAt(UPARAM(ref) int32& OutData, const FDataContainer& DataContainer, const int32 Index) { LowLevelFatalError(TEXT("Called ExtractDataAt Directly")); return false; }
	static FORCEINLINE void execExtractDataAt(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		Stack.StepCompiledIn<FStructProperty>(nullptr);
		void* const OutDataPtr = Stack.MostRecentPropertyAddress;
		FStructProperty* OutDataProp = CastField<FStructProperty>(Stack.MostRecentProperty);
		
		Stack.StepCompiledIn<FStructProperty>(nullptr);
		const FDataContainer* DataContainerPtr = (FDataContainer*)Stack.MostRecentPropertyAddress;

		int32 Index = INDEX_NONE;
		Stack.StepCompiledIn<FIntProperty>(&Index);

		P_FINISH;

		if(!DataContainerPtr || !OutDataPtr || !OutDataProp)
		{
			UE_LOG(LogTemp, Error, TEXT("Extract Data At: Invalid Parameters, OutData must be a struct"));
			Stack.bArrayContextFailed = true;
			*(bool*)RESULT_PARAM = false;
			return;
		}

		P_NATIVE_BEGIN;

		*(bool*)RESULT_PARAM = DataContainerPtr->ExtractDataAt(OutDataPtr, OutDataProp->Struct, Index);
		
		P_NATIVE_END;
	}

	UFUNCTION(BlueprintCallable, Meta = (AllowPrivateAccess = "true"), Category = "Weapon System Function Library|Data Container")
	static FORCEINLINE void CopyDataContainer(UPARAM(ref) FDataContainer& OutDataContainer, const FDataContainer& OtherDataContainer)
	{
		OutDataContainer = OtherDataContainer;
	}

	// Gets the number of data parameters begin held
	UFUNCTION(BlueprintPure, Meta = (AllowPrivateAccess = "true", CompactNodeTitle = "Length"), Category = "Weapon System Function Library|Data Container")
	static FORCEINLINE int32 GetNumData(const FDataContainer& DataContainer) { return DataContainer.Data.Num(); }

	// If the container has any data at all
	UFUNCTION(BlueprintPure, Meta = (AllowPrivateAccess = "true", CompactNodeTitle = "Is Empty"), Category = "Weapon System Function Library|Data Container")
	static FORCEINLINE bool IsEmpty(const FDataContainer& DataContainer) { return DataContainer.Data.IsEmpty(); }

	UFUNCTION(BlueprintPure, Meta = (AllowPrivateAccess = "true", CompactNodeTitle = "New Data Container"), Category = "Weapon System Function Library|Data Container")
	static FORCEINLINE void NewDataContainer(FDataContainer& DataContainer) {}

	UFUNCTION(BlueprintPure, Meta = (AllowPrivateAccess = "true"), Category = "Weapon System Function Library|Data Container")
	static FORCEINLINE FName GetTypeNameAtIndex(const FDataContainer& DataContainer, const int32 Index = 0)
	{
		if(!DataContainer.Data.IsValidIndex(Index)) return NAME_None;
		return DataContainer.Data[Index].Struct->GetFName();
	}
};


















