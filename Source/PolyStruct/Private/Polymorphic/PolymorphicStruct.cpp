// Fill out your copyright notice in the Description page of Project Settings.


#include "Polymorphic/PolymorphicStruct.h"



FPolyStruct::FPolyStruct(const FPolyStruct& Other)
{
	SetStruct(Other.Memory, Other.ScriptStruct);
}

FPolyStruct::FPolyStruct(const void* InStruct, const UScriptStruct* InScriptStruct)
{
	SetStruct(InStruct, InScriptStruct);
}

FPolyStruct::~FPolyStruct()
{
	Empty();
}

bool FPolyStruct::operator==(const FPolyStruct& Other) const
{
	if(!IsValid() && !Other.IsValid()) return true;
	if(ScriptStruct != Other.ScriptStruct) return false;
	bool bIdentical;
	ScriptStruct->GetCppStructOps()->Identical(GetMemory(), Other.GetMemory(), PPF_None, bIdentical);
	return bIdentical;
}

void FPolyStruct::SetStruct(const void* InStruct, const UScriptStruct* InScriptStruct)
{
	if(!InStruct || !InScriptStruct) return;
	Empty();
	ScriptStruct = (UScriptStruct*)InScriptStruct;
	Memory = (uint8*)FMemory::Malloc(ScriptStruct->GetStructureSize());
	ScriptStruct->CopyScriptStruct(Memory, InStruct);
}

void FPolyStruct::SetStruct(const UScriptStruct* InScriptStruct)
{
	if(!InScriptStruct) return;
	Empty();
	ScriptStruct = (UScriptStruct*)InScriptStruct;
	Memory = (uint8*)FMemory::Malloc(ScriptStruct->GetStructureSize());
	ScriptStruct->InitializeStruct(Memory);
}

bool FPolyStruct::ExtractStruct(void* const OutStruct, const UScriptStruct* InScriptStruct) const
{
	if(!IsValid() || !IsA(InScriptStruct)) return false;
	FMemory::Memcpy(OutStruct, Memory, InScriptStruct->GetStructureSize());
	return true;
}


void FPolyStruct::Empty()
{
	if(!Memory || !ScriptStruct) return;
	
	ScriptStruct->DestroyStruct(Memory);
	FMemory::Free(Memory);
	Memory = nullptr;
	ScriptStruct = nullptr;
}

bool FPolyStruct::Serialize(FArchive& Ar)
{
	TCheckedObjPtr<UScriptStruct> CheckedScriptStruct;
	if(Ar.IsSaving())
		CheckedScriptStruct = ScriptStruct;

	Ar << CheckedScriptStruct;
	
	if(const UScriptStruct* Struct = CheckedScriptStruct.Get())
	{
		if(Ar.IsLoading())
			SetStruct(Struct);// Set struct uninitialized
		
		for(TFieldIterator<FProperty> Itr(Struct); Itr; ++Itr)
		{
			if(Itr->PropertyFlags & CPF_SkipSerialization) continue;
			void* const PropItem = Itr->ContainerPtrToValuePtr<void>(Memory);
			Itr->SerializeItem(FStructuredArchiveFromArchive(Ar).GetSlot(), PropItem);
		}
	}
	else
	{
		Empty();
	}
	return true;
}


bool FPolyStruct::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	bOutSuccess = true;
	TCheckedObjPtr<UScriptStruct> CheckedScriptStruct;
	if(Ar.IsSaving())
		CheckedScriptStruct = ScriptStruct;

	Ar << CheckedScriptStruct;

	if(const UScriptStruct* Struct = CheckedScriptStruct.Get())
	{
		if(Ar.IsLoading())
			SetStruct(Struct);// Set struct uninitialized

		// Net serialize each property
		for(TFieldIterator<FProperty> Itr(Struct); Itr; ++Itr)
		{
			if(Itr->PropertyFlags & CPF_RepSkip) continue;
			void* const PropItem = Itr->ContainerPtrToValuePtr<void>(Memory);
			Itr->NetSerializeItem(Ar, Map, PropItem);
		}
	}
	else
	{
		Empty();
	}
	return true;
}









void FPolyStructHandle::Append(const TArray<FPolyStruct>& InPolyStructs)
{
	for(const FPolyStruct& PolyStruct : InPolyStructs) Add(PolyStruct);
}


FPolyStruct* FPolyStructHandle::GetAt(const int32 Index)
{
	if(!IsValidIndex(Index) || !PolyStructs[Index].IsValid()) return nullptr;
	return PolyStructs[Index].Get();
}

const FPolyStruct* FPolyStructHandle::GetAt(const int32 Index) const
{
	if(!IsValidIndex(Index) || !PolyStructs[Index].IsValid()) return nullptr;
	return PolyStructs[Index].Get();
}

bool FPolyStructHandle::ExtractStructAt(void* const OutStruct, const UScriptStruct* ScriptStruct, const int32 Index) const
{
	const FPolyStruct* PolyStruct = GetAt(Index);
	if(!PolyStruct) return false;
	return PolyStruct->ExtractStruct(OutStruct, ScriptStruct);
}

template <typename T>
void FPolyStructHandle::CastStructs(TArray<T*>& Structs)
{
	for(FPolyStruct& PolyStruct : PolyStruct)
		if(T* Struct = Cast<T>(PolyStruct))
			Structs.Add(Struct);
}


bool FPolyStructHandle::operator==(const FPolyStructHandle& Other) const
{
	if(Num() != Other.Num()) return false;
	for(int32 i = 0; i < Num(); i++) {
		const bool bIsValidIdx = IsValidIndex(i);
		const bool bOtherIsValidIdx = Other.IsValidIndex(i);
		if(bIsValidIdx && bOtherIsValidIdx ? (*this)[i] != Other[i] :
			bIsValidIdx != bOtherIsValidIdx) return false;
	}
		
	return true;
}

void FPolyStruct::AddStructReferencedObjects(FReferenceCollector& Collector)
{
	if(!ScriptStruct) return;
	Collector.AddReferencedObjects((const UScriptStruct*&)ScriptStruct, Memory);
}

bool FPolyStructHandle::Serialize(FArchive& Ar)
{
	uint8 NumStructs;
	if(Ar.IsSaving())
		NumStructs = Num();

	Ar << NumStructs;

	if(Ar.IsLoading())
		PolyStructs.SetNum(NumStructs);
	
	for(uint8 i = 0; i < NumStructs; i++)
	{
		bool bIsValidStruct;
		if(Ar.IsSaving())
			bIsValidStruct = PolyStructs[i].IsValid();

		Ar << bIsValidStruct;

		if(bIsValidStruct)
		{
			if(Ar.IsLoading() && !PolyStructs[i].IsValid())
				PolyStructs[i] = MakeShared<FPolyStruct>();

			FPolyStruct& Struct = *PolyStructs[i].Get();
			Struct.Serialize(Ar);
		}
		else if(Ar.IsLoading())
		{
			PolyStructs[i] = nullptr;
		}
	}
	return true;
}

bool FPolyStructHandle::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	uint8 NumStructs;
	if(Ar.IsSaving())
		NumStructs = Num();

	Ar << NumStructs;

	if(Ar.IsLoading())
		PolyStructs.SetNum(NumStructs);
	
	for(uint8 i = 0; i < NumStructs; i++)
	{
		bool bIsValidStruct;
		if(Ar.IsSaving())
			bIsValidStruct = PolyStructs[i].IsValid();

		Ar << bIsValidStruct;

		if(bIsValidStruct)
		{
			if(Ar.IsLoading() && !PolyStructs[i].IsValid())
				PolyStructs[i] = MakeShared<FPolyStruct>();

			FPolyStruct& Struct = *PolyStructs[i].Get();
			Struct.NetSerialize(Ar, Map, bOutSuccess);
		}
		else if(Ar.IsLoading())
		{
			PolyStructs[i] = nullptr;
		}
	}
	return true;
}







