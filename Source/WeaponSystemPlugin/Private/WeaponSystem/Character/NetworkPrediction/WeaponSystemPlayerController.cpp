// Copyright 2022, Gannet Markozen, All rights reserved


#include "WeaponSystem/Character/NetworkPrediction/WeaponSystemPlayerController.h"
#include "Polymorphic/PolymorphicStruct.h"
#include "WeaponSystem/AttributeSystem/AttributesComponent.h"

/*
void FNetParams::Set(const UFunction* InFunction, const uint8* InParams)
{
	Invalidate();
	if(!InFunction) return;

	Function = (UFunction*)InFunction;

	// If the Function has parameters, set parameters from the
	// InParams. Else Memory should remain NULL
	if(HasParams())
	{
		checkf(InParams != nullptr, TEXT("FNetParams: Attempted to create NetParams for a UFUNCTION with parameters but not passing in any parameters"));
		
		Memory = (uint8*)FMemory::Malloc(GetParamsSize());
		 
		// Copy each parameter
		ForEachParam([&](FProperty* Prop, const int32 Offset)
		{
			uint8* const MemoryPtr = Memory + Offset;
			const uint8* ParamPtr = InParams + Offset;
			if(const auto* StructProp = CastField<FStructProperty>(Prop))
			{
				const auto* ScriptStruct = StructProp->Struct;
				ScriptStruct->InitializeStruct(MemoryPtr, 1);// Must init struct first or may crash
				if(ScriptStruct->GetCppStructOps()->HasCopy())
				{// Use the struct defined copy
					ScriptStruct->GetCppStructOps()->Copy(MemoryPtr, ParamPtr, 1);
				}
				else for(TFieldIterator<FProperty> Itr(ScriptStruct); Itr; ++Itr)
				{// Copy each member variable
					void* const MemoryItemPtr = Itr->ContainerPtrToValuePtr<void>(MemoryPtr);
					const void* ParamItemPtr = Itr->ContainerPtrToValuePtr<void>(ParamPtr);
					Itr->CopyCompleteValue(MemoryItemPtr, ParamItemPtr);
				}
			}
			else
			{// Memcpy generic property
				if(!(Prop->PropertyFlags & CPF_IsPlainOldData))
					Prop->InitializeValue(MemoryPtr);
				
				Prop->CopyCompleteValue(MemoryPtr, ParamPtr);
			}
		});
	}
}

void FNetParams::Invalidate()
{
	// If already invalid. Simple nullify
	if(!IsValid())
	{
		if(Memory) FMemory::Free(Memory);
		Memory = nullptr;
		Function = nullptr;
		return;
	}

	// If there are parameters in memory
	if(Memory)
	{
		ForEachParam([&](FProperty* Prop, const int32 Offset)->void
		{
			uint8* const MemoryPtr = Memory + Offset;
			if(const auto* StructProp = CastField<FStructProperty>(Prop))
			{// Struct defined destroy
				const auto* ScriptStruct = StructProp->Struct;
				ScriptStruct->DestroyStruct(MemoryPtr, 1);
			}
			else
			{// Generic prop destroy
				Prop->DestroyValue(MemoryPtr);
			}
		});
		
		FMemory::Free(Memory);
	}

	Memory = nullptr;
	Function = nullptr;
}

void FNetParams::ForEachParam(const TFunction<void(FProperty*, int32)> Func) const
{
	if(!Function || !Memory) return;// Do nothing if invalid or has no parameters
	FProperty* ParamProp = CastField<FProperty>(Function->ChildProperties);
	int32 Offset = 0;
	while(ParamProp)
	{
		Func(ParamProp, Offset);
		Offset += ParamProp->ElementSize;
		ParamProp = CastField<FProperty>(ParamProp->Next);
	}
}

uint8* FNetParams::GetAt(const int32 Index) const
{
	if(!IsValid()) return nullptr;
	FProperty* ParamProp = CastField<FProperty>(Function->ChildProperties);
	int32 Offset = 0;
	int32 CurrentIndex = 0;
	while(ParamProp)
	{
		if(Index == CurrentIndex++) return Memory + Offset;
		Offset += ParamProp->ElementSize;
		ParamProp = CastField<FProperty>(ParamProp->Next);
	}
	return nullptr;
}

bool FNetParams::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	// Invalidate current data if loading before writing
	if(Ar.IsLoading())
		Invalidate();

	// Net serialize Function reference
	Ar << Function;

	// If function is valid and function has parameters.
	// Net serialize each parameter. Else do nothing
	if(Function && Function->NumParms != 0)
	{
		// Set memory before initialization
		if(Ar.IsLoading())
			Memory = (uint8*)FMemory::Malloc(GetParamsSize());

		// Net serialize each parameter
		ForEachParam([&](FProperty* Prop, const int32 Offset)->void
		{
			uint8* const MemoryPtr = Memory + Offset;
			if(const auto* StructProp = CastField<FStructProperty>(Prop))
			{
				const auto* ScriptStruct = StructProp->Struct;

				// Init struct before writing
				if(Ar.IsLoading())
					ScriptStruct->InitializeStruct(MemoryPtr);
				
				if(ScriptStruct->GetCppStructOps()->HasNetSerializer())
				{// Use native struct net serializer
					ScriptStruct->GetCppStructOps()->NetSerialize(Ar, Map, bOutSuccess, MemoryPtr);
				}
				else for(TFieldIterator<FProperty> Itr(ScriptStruct); Itr; ++Itr)
				{// Net serialize each struct member var
					void* const MemoryItemPtr = Itr->ContainerPtrToValuePtr<void>(MemoryPtr);
					Itr->NetSerializeItem(Ar, Map, MemoryItemPtr);
				}
			}
			else
			{
				// Init property before writing
				if(Ar.IsLoading())
					Prop->InitializeValue(MemoryPtr);
				
				Prop->NetSerializeItem(Ar, Map, MemoryPtr);
			}
		});
	}
	
	return true;
}


/* 
 *
 *
 */



AWeaponSystemPlayerController::AWeaponSystemPlayerController()
{
	bReplicates = true;
}


AWeaponSystemPlayerController* AWeaponSystemPlayerController::StaticGetOwningPlayerController(AActor* Target)
{
	if(!IsValid(Target)) return nullptr;
	while(Target)
	{
		if(auto* Controller = Cast<AWeaponSystemPlayerController>(Target)) return Controller;
		Target = Target->GetOwner();
	}
	UE_LOG(LogTemp, Error, TEXT("%s: Target has no valid owning Weapon System Player Controller!"), *FString(__FUNCTION__));
	return nullptr;
}

void AWeaponSystemPlayerController::CallRemoteFunctionOnObject(UObject* Target, UFunction* Function, const FPolyStruct& NetParams, const ENetAuthority Authority, const ENetReliability Reliability)
{
	if(!Target || !NetParams.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("%s: Parameter(s) are invalid"));
		return;
	}
	
	if(Authority == Server)
	{
		if(Reliability == Reliable)
		{
			Server_Reliable_CallRemoteFunctionOnObject(Target, Function, NetParams);
		}
		else
		{
			Server_Unreliable_CallRemoteFunctionOnObject(Target, Function, NetParams);
		}
	}
	else
	{
		if(Reliability == Reliable)
		{
			Client_Reliable_CallRemoteFunctionOnObject(Target, Function, NetParams);
		}
		else
		{
			Client_Unreliable_CallRemoteFunctionOnObject(Target, Function, NetParams);
		}
	}
}

void AWeaponSystemPlayerController::Remote_CallRemoteFunctionOnObject(UObject* Target, UFunction* Function, const FPolyStruct& NetParams)
{
	check(Target);
	check(Function);
	check((Function->NumParms != 0) == NetParams.IsValid());
	Target->ProcessEvent(Function, (uint8*)NetParams.GetMemory());
}


















