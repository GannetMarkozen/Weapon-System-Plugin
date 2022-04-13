
#include "WeaponSystem/Gameplay/GameplayData.h"

#include "WeaponSystem/WeaponSystemFunctionLibrary.h"


FDataStruct FDataStruct::New(UScriptStruct* Struct)
{
	checkf(Struct || Struct->GetStructureSize() <= 0, TEXT("Struct is invalid"));
	const int32 Size = Struct->GetStructureSize();
	const TSharedPtr<TArray<uint8>> Data = MakeShared<TArray<uint8>>(&InitVal, Size);
	Struct->InitializeStruct(Data.Get()->GetData());
	return FDataStruct(Data, Struct);
}

bool FDataStruct::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	TCheckedObjPtr<FProperty> Property;

	bOutSuccess = true;
	return true;
}


bool FDataContainer::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	uint8 NumData;
	if(Ar.IsSaving())
	{
		UE_CLOG(Data.Num() > MAX_uint8, LogTemp, Warning, TEXT("Too much data to net serialize. Number of data members == %d, clamping range to %d"), Data.Num(), MAX_uint8);
		NumData = FMath::Min<int32>(Data.Num(), MAX_uint8);
	}

	Ar << NumData;

	for(int32 i = 0; i < NumData; i++)
	{
		TCheckedObjPtr<UScriptStruct> Struct;
		if(Ar.IsSaving())
			Struct = Data[i].Struct;

		Ar << Struct;

		if(!Struct.IsValid())
		{
			UE_LOG(LogTemp, Error, TEXT("FDataContainer::NetSerialize Script Struct is invalid"));
			Data.Empty();
			bOutSuccess = false;
			return false;
		}

		if(Ar.IsLoading())
		{
			if(!Data.IsValidIndex(i))
			{
				Data.Add(FDataStruct::New(Struct.Get()));
			}
			else
			{
				Data[i] = FDataStruct::New(Struct.Get());
			}
		}

		for(TFieldIterator<FProperty> Itr(Struct.Get()); Itr; ++Itr)
		{
			if(Itr->PropertyFlags & CPF_RepSkip) continue;
			void* PropPtr = Itr->ContainerPtrToValuePtr<void>(Data[i].GetData());
			Itr->NetSerializeItem(Ar, Map, PropPtr);
		}
	}

	if(Ar.IsLoading())
		Data.SetNum(NumData);
	
	bOutSuccess = true;
	return true;
}


void FDataContainer::AddData(const void* NewData, UScriptStruct* Struct)
{
	if(!NewData || !Struct) return;
	TArray<uint8> Buffer;
	FDataStruct::GetDataBuffer(Buffer, NewData, Struct);
	Data.Add(FDataStruct(Buffer, Struct));
}


bool FDataContainer::ExtractDataAt(void* const OutData, const UScriptStruct* Struct, const int32 Index) const
{
	//if(!OutData || !Struct || !HasValidData(Index) || !Struct->GetClass()->IsChildOf(Data[Index].Struct->GetClass()))
	if(!OutData || !Struct || !HasValidData(Index) || !(Struct->GetFName() == Data[Index].Struct->GetFName()))
	{
		if(!OutData) PRINT(TEXT("OutData is null"));
		if(!Struct) PRINT(TEXT("Struct is null"));
		if(!HasValidData(Index)) PRINT(TEXT("HasValidData failed. Index == %i"), Index);
		else if(!Struct->IsA(Data[Index].Struct->GetClass())) PRINT(TEXT("Wrong class. DataStruct == %s. InStruct == %s"), *Data[Index].Struct->GetName(), *Struct->GetName());
		return false;
	}
	PRINT(TEXT("InStruct == %s. OutStruct == %s"), *Data[Index].Struct->GetName(), *Struct->GetName());
	for(TFieldIterator<FProperty> Itr(Struct); Itr; ++Itr)
	{
		void* const OutPropData = Itr->ContainerPtrToValuePtr<void>(OutData);
		const void* InPropData = Itr->ContainerPtrToValuePtr<void>(Data[Index].GetData());
		FMemory::Memcpy(OutPropData, InPropData, Itr->ElementSize);
	}
	PRINT(TEXT("Extracted data from %s"), *Struct->GetName());
	return true;
}






















