// Fill out your copyright notice in the Description page of Project Settings.


#include "Polymorphic/PolymorphicStruct.h"

#include "JsonObjectConverter.h"


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
	if(!IsValid() && !Other.IsValid()) return true;// Both invalid
	if(ScriptStruct != Other.ScriptStruct) return false;// Not the same type or one is invalid
	UScriptStruct::ICppStructOps* StructOps = ScriptStruct->GetCppStructOps();
	if(StructOps && StructOps->HasIdentical())// Check data for validity
	{
		bool bOutIdentical;
		StructOps->Identical(GetMemory(), Other.GetMemory(), PPF_None, bOutIdentical);
		return bOutIdentical;
	}
	// Memory compare if no Has Identical
	return FMemory::Memcmp(Memory, Other.Memory, GetSize()) == 0;
}

FString FPolyStruct::ToJsonString() const
{
	if(!IsValid()) return TEXT("None");
	FString OutString;
	FJsonObjectConverter::UStructToJsonObjectString(ScriptStruct, Memory, OutString);
	return OutString;
}

FString FPolyStruct::ToValueString() const
{
	if(!IsValid()) return TEXT("None");
	FString String(ScriptStruct->GetName());
	return String += TEXT(":\n") + ToJsonString();
}



void FPolyStruct::SetStruct(const void* InStruct, const UScriptStruct* InScriptStruct)
{
	// Always empty, even if the other poly struct is invalid (to match)
	SetStruct(InScriptStruct);
	if(!ScriptStruct || !Memory) return;
	ScriptStruct->CopyScriptStruct(Memory, InStruct);
}

void FPolyStruct::SetStruct(const UScriptStruct* InScriptStruct)
{
	Empty();
	if(!InScriptStruct) return;
	
	ScriptStruct = (UScriptStruct*)InScriptStruct;
	Memory = (uint8*)FMemory::Malloc(ScriptStruct->GetStructureSize());
	ScriptStruct->InitializeStruct(Memory);
}

bool FPolyStruct::ExtractStruct(void* const OutStruct, const UScriptStruct* InScriptStruct) const
{
	if(!IsValid() || !IsA(InScriptStruct)) return false;
	ScriptStruct->CopyScriptStruct(OutStruct, Memory);
	
	return true;
}


void FPolyStruct::Empty()
{
	if(!Memory || !ScriptStruct) return;

	UScriptStruct::ICppStructOps* StructOps = ScriptStruct->GetCppStructOps();
	if(StructOps && StructOps->HasDestructor())
	{
		StructOps->Destruct(Memory);
	}
	else
	{
		ScriptStruct->DestroyStruct(Memory);
	}
	
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

		UScriptStruct::ICppStructOps* StructOps = ScriptStruct->GetCppStructOps();
		if(StructOps && StructOps->HasSerializer())
		{
			StructOps->Serialize(Ar, Memory);
		}
		else for(TFieldIterator<FProperty> Itr(Struct); Itr; ++Itr)
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
	TCheckedObjPtr<UScriptStruct> CheckedScriptStruct;
	if(Ar.IsSaving())
		CheckedScriptStruct = ScriptStruct;

	// Read / write ScriptStruct
	Ar << CheckedScriptStruct;

	if(const UScriptStruct* Struct = CheckedScriptStruct.Get())
	{
		if(Ar.IsLoading())
			SetStruct(Struct);// Initialize struct

		NetSerializeStruct(Ar, Map, bOutSuccess, Struct, Memory);
	}
	else
	{
		// If no valid script struct was serialized,
		// then there was no valid data to serialize.
		// So empty to match
		Empty();
	}
	
	return true;
}

void FPolyStruct::NetSerializeStruct(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess, const UScriptStruct* Struct, void* const Memory)
{
	UScriptStruct::ICppStructOps* StructOps = Struct->GetCppStructOps();
	if(StructOps && StructOps->HasNetSerializer())// If has native net serializer
	{
		StructOps->NetSerialize(Ar, Map, bOutSuccess,  Memory);
	}
	else for(TFieldIterator<FProperty> Itr(Struct); Itr; ++Itr)
	{
		if(Itr->PropertyFlags & CPF_RepSkip) continue;// Skip rep
		if(const auto* StructProp = CastField<FStructProperty>(*Itr))// Net Serialize inner struct
		{
			NetSerializeStruct(Ar, Map, bOutSuccess, StructProp->Struct, StructProp->ContainerPtrToValuePtr<void>(Memory));
		}
		else if(const auto* ArrProp = CastField<FArrayProperty>(*Itr))// Net Serialize inner array
		{
			FScriptArrayHelper Array(ArrProp, ArrProp->ContainerPtrToValuePtr<void>(Memory));
			
			uint32 ArrNum;
			if(Ar.IsSaving())
				ArrNum = Array.Num();

			Ar << ArrNum;

			if(Ar.IsLoading())
				Array.Resize(ArrNum);
			
			if(ArrProp->Inner->PropertyFlags & CPF_RepSkip) continue;
			if(const auto* InnerStructProp = CastField<FStructProperty>(ArrProp->Inner))
			{
				for(uint32 i = 0; i < ArrNum; i++)
				{
					NetSerializeStruct(Ar, Map, bOutSuccess, InnerStructProp->Struct, Array.GetRawPtr(i));
				}
			}
			else for(uint32 i = 0; i < ArrNum; i++)
			{
				ArrProp->Inner->NetSerializeItem(Ar, Map, Array.GetRawPtr(i));
			}
		}
		else// Net Serialize inner property
		{
			void* const Item = Itr->ContainerPtrToValuePtr<void>(Memory);
			Itr->NetSerializeItem(Ar, Map, Item);
		}
	}
}


void FPolyStruct::AddStructReferencedObjects(FReferenceCollector& Collector)
{
	if(!ScriptStruct) return;
	Collector.AddReferencedObjects((const UScriptStruct*&)ScriptStruct, Memory);
}




/*
 *
 *
 *
 *
 *
 */





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

int32 FPolyStructHandle::ExtractAny(void* const OutStruct, const UScriptStruct* ScriptStruct) const
{
	for(int32 i = 0; i < Num(); i++)
	{
		if(ExtractStructAt(OutStruct, ScriptStruct, i)) return i;
	}
	return INDEX_NONE;
}


template<typename To>
To* FPolyStructHandle::GetAny() const
{
	for(int32 i = 0; i < PolyStructs.Num(); i++)
		if(To* Struct = Cast<To>(GetAt(i)))
			return Struct;
	return nullptr;
}

template <typename T>
void FPolyStructHandle::CastStructs(TArray<T*>& Structs)
{
	for(TSharedPtr<FPolyStruct, ESPMode::ThreadSafe>& PolyStruct : PolyStructs)
		if(T* Struct = Cast<T>(PolyStruct.Get()))
			Structs.Add(Struct);
}


bool FPolyStructHandle::operator==(const FPolyStructHandle& Other) const
{
	if(Num() != Other.Num()) return false;
	for(int32 i = 0; i < Num(); i++)
		if(PolyStructs[i].IsValid() != Other.PolyStructs[i].IsValid() ||
			PolyStructs[i].IsValid() && Other.PolyStructs[i].IsValid() &&
				(*this)[i] != Other[i]) return false;
	
	return true;
}

FPolyStructHandle& FPolyStructHandle::operator=(const FPolyStructHandle& Other)
{
	PolyStructs = Other.PolyStructs;
	return *this;
	/*PolyStructs.SetNum(Other.Num());
	for(int32 i = 0; i < Num(); i++)
		PolyStructs[i] = Other.PolyStructs[i].IsValid() ? MakeShared<FPolyStruct>(Other[i]) : TSharedPtr<FPolyStruct>();
	return *this;*/
}

FPolyStructHandle FPolyStructHandle::MakeCopy() const
{
	FPolyStructHandle Copy;
	Copy.PolyStructs.SetNum(Num());
	for(int32 i = 0; i < Num(); i++)
		if(PolyStructs[i].IsValid())
			Copy.PolyStructs[i] = MakeShared<FPolyStruct>((*this)[i]);
	return Copy;
}

FString FPolyStructHandle::ToString() const
{
	if(IsEmpty()) return FString("{}");
	FString String = FString("{ ");
	for(int32 i = 0; i < Num(); i++)
	{
		const TSharedPtr<FPolyStruct>& PolyStruct = PolyStructs[i];
		String += PolyStruct.IsValid() ? PolyStruct->ToString() : FString("None");
		if(i != Num() - 1) String += FString(", ");
	}
	return String += FString(" }");
}

bool FPolyStructHandle::Serialize(FArchive& Ar)
{
	uint8 NumStructs;
	if(Ar.IsSaving())
		NumStructs = Num();

	Ar << NumStructs;

	if(Ar.IsLoading())
		PolyStructs.SetNum(NumStructs);

	if(PolyStructs.Num() <= 0) return true;

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

			FPolyStruct& Struct = (*this)[i];
			Struct.Serialize(Ar);
		}
		else if(Ar.IsLoading())
		{
			PolyStructs[i].Reset();
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
		uint8 IsValidStruct;
		if(Ar.IsSaving())
			IsValidStruct = PolyStructs[i].IsValid();

		Ar << IsValidStruct;

		if(IsValidStruct)
		{
			if(Ar.IsLoading() && !PolyStructs[i].IsValid())
				PolyStructs[i] = MakeShared<FPolyStruct>();

			FPolyStruct& Struct = (*this)[i];
			Struct.NetSerialize(Ar, Map, bOutSuccess);
		}
		else if(Ar.IsLoading())
		{
			PolyStructs[i].Reset();
		}
	}
	return bOutSuccess = true;
}


bool FPolyStructHandle::NetDeltaSerialize(const FNetDeltaSerializeInfo& DeltaParams)
{
	UPackageMap* Map = DeltaParams.Map;
	bool bOutSuccess = false;
	if(!Map || !DeltaParams.Writer && !DeltaParams.Reader) return false;
	FArchive& Ar = DeltaParams.Writer ? *(FArchive*)DeltaParams.Writer : *(FArchive*)DeltaParams.Reader;

	if(Ar.IsSaving())
	{
		if(DeltaParams.NewState && !DeltaParams.OldState)
		{
			*DeltaParams.NewState = MakeShared<FPolyStructHandleDeltaState>(*this);
			return false;
		}

		// Old state of this. If differs there has been a change
		const FPolyStructHandle& OldHandle = reinterpret_cast<FPolyStructHandleDeltaState*>(DeltaParams.OldState)->Handle;

		// Check for changes and add changes to array
		struct FPolyStructChange { int32 Index; FPolyStruct PolyStruct; };
		TArray<FPolyStructChange> Changes;
		for(int32 i = 0; i < Num(); i++)
		{// If changed. Add to array
			if(OldHandle.IsValidIndex(i) && PolyStructs[i].IsValid() == OldHandle.PolyStructs[i].IsValid() && (*this)[i] == OldHandle[i]) continue;
			Changes.Add({ i, PolyStructs[i].IsValid() ? (*this)[i] : FPolyStruct() });
		}

		// Only net serialize changed items
		if(!Changes.IsEmpty() || Num() != OldHandle.Num())
		{
			int32 ArrNum = Num();
			Ar << ArrNum;// Serialize array size
			
			int32 NumChanges = Changes.Num();
			Ar << NumChanges;// Serialize num changes

			// Serialize each index and it's corresponding change
			for(FPolyStructChange& Change : Changes)
			{
				Ar << Change.Index;
				Change.PolyStruct.NetSerialize(Ar, Map, bOutSuccess);
			}

			// Update OldState
			*DeltaParams.NewState = MakeShared<FPolyStructHandleDeltaState>(*this);
			bOutSuccess = true;
		}
	}
	else if(Ar.IsLoading())
	{
		int32 ArrNum, NumChanges;
		Ar << ArrNum << NumChanges;

		// Set the array num to the replicated value
		PolyStructs.SetNum(ArrNum);

		// For each change, get the index and it's
		// corresponding change and update the value at index
		for(int32 i = 0; i < NumChanges; i++)
		{
			int32 Index;
			Ar << Index;// Serialize PolyStruct at index
			
			FPolyStruct& PolyStruct = PolyStructs[Index].IsValid() ? (*this)[Index] : *(PolyStructs[Index] = MakeShared<FPolyStruct>()).Get();
			PolyStruct.NetSerialize(Ar, Map, bOutSuccess);
		}
		bOutSuccess = true;
	}
	
	return bOutSuccess;
}

































