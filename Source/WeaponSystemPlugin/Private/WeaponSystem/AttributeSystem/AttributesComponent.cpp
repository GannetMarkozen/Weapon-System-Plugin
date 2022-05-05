// Copyright 2022, Gannet Markozen, All rights reserved


#include "WeaponSystem/AttributeSystem/AttributesComponent.h"

#include "Engine/ActorChannel.h"
#include "GameFramework/Character.h"
#include "WeaponSystem/Character/WeaponSystemPlayerController.h"


UAttributesComponent::UAttributesComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
	SetIsReplicated(true);
}


void UAttributesComponent::BeginPlay()
{
	Super::BeginPlay();

	// Init all attributes' handles
	for(TFieldIterator<FStructProperty> Itr(GetClass()); Itr; ++Itr)
	{
		if(!Itr->Struct->IsChildOf(FAttribute::StaticStruct())) continue;
		FAttribute& Attr = *Itr->ContainerPtrToValuePtr<FAttribute>(this);
		Attr.Handle.Set(this, *Itr);
	}
}

void UAttributesComponent::BindAllAttributesChanged(const FAttributeValueChangedUniDelegate& Delegate)
{
	for(TFieldIterator<FStructProperty> Itr(GetClass()); Itr; ++Itr)
	{
		if(!Itr->Struct->IsChildOf(FAttribute::StaticStruct())) continue;
		Itr->ContainerPtrToValuePtr<FAttribute>(this)->OnAttributeChanged.Add(Delegate);
	}
}


bool UAttributesComponent::ApplyEffect(const TSubclassOf<UAttributeEffect> Effect, const AActor* Instigator, FPolyStructHandle& Context)
{
	if(!Effect || !Instigator || !Effect.GetDefaultObject()->CanApplyEffect(this, Context)) return false;
	if(HasAuthority())
	{
		Internal_ApplyEffect(Effect, Instigator, Context);
		return true;
	}

	switch(Effect.GetDefaultObject()->GetRepCond())
	{
	case EEffectRepCond::LocalOnly:
		Internal_ApplyEffect(Effect, Instigator, Context);
		break;
	case EEffectRepCond::ServerOnly:
		Server_ApplyEffect(Effect, Instigator, Context);
		break;
	case EEffectRepCond::LocalPredicted:
		LocalPredicted_ApplyEffect(Effect, Instigator, Context);
		break;
	}

	return true;
}

void UAttributesComponent::Internal_ApplyEffect(const TSubclassOf<UAttributeEffect> Effect, const AActor* Instigator, FPolyStructHandle& Context)
{
	const UAttributeEffect* EffectDefObj = Effect.GetDefaultObject();
	if(EffectDefObj->GetDurationType() == EEffectDuration::Instant)// Instant-effect simply calls modify and other functions for it's "lifespan"
	{
		EffectDefObj->OnEffectApplied(this, Context);
		EffectDefObj->ModifyAttributes(this, Context);
		EffectDefObj->OnEffectRemoved(this, Context, EEffectRemovalReason::LifespanEnd);
	}
	else// Latent-effect gets added to an array of active effects and calls modify every interval until removed via lifespan or manually
	{
		const TSharedPtr<FActiveEffect> ActiveEffect = MakeShared<FActiveEffect>(Effect, Context);
		ActiveEffects.Add(ActiveEffect);

		EffectDefObj->OnEffectApplied(this, ActiveEffect->Context);
		EffectDefObj->ModifyAttributes(this, ActiveEffect->Context);

		auto CallModifyAtIntervalLambda = [=](){ EffectDefObj->ModifyAttributes(this, ActiveEffect->Context); };

		const float Interval = EffectDefObj->IntervalDuration;
		GetWorld()->GetTimerManager().SetTimer(ActiveEffect->IntervalTimerHandle, CallModifyAtIntervalLambda, Interval, true);

		// If has lifespan
		if(EffectDefObj->GetDurationType() == EEffectDuration::ForDuration)
		{
			auto CallRemoveAtLifespanEndLambda = [=](){ Internal_RemoveActiveEffect(ActiveEffects.Find(ActiveEffect), EEffectRemovalReason::LifespanEnd); };
			
			// If Lifespan is perfectly divisible by Interval. Make Lifespan slightly
			// larger so it is ensured to be called after the Interval has ended
			float Lifespan = EffectDefObj->Lifespan;
			if(std::fmodf(Lifespan / Interval, 1) == 0) Lifespan = std::nextafterf(Lifespan, 1.f);
			GetWorld()->GetTimerManager().SetTimer(ActiveEffect->LifespanTimerHandle, CallRemoveAtLifespanEndLambda, Lifespan, false);
		}
	}
}

void UAttributesComponent::Internal_RemoveActiveEffect(const int32 Index, const EEffectRemovalReason Reason)
{
	if(!ActiveEffects.IsValidIndex(Index)) return;
	checkf(ActiveEffects[Index].IsValid() || ActiveEffects[Index]->GetEffect(), TEXT("Active Effect at %i is invalid???"), Index);

	const FPolyStructHandle& Context = ActiveEffects[Index]->Context;
	ActiveEffects[Index]->GetEffect().GetDefaultObject()->OnEffectRemoved(this, Context, Reason);

	GetWorld()->GetTimerManager().ClearTimer(ActiveEffects[Index]->IntervalTimerHandle);
	GetWorld()->GetTimerManager().ClearTimer(ActiveEffects[Index]->LifespanTimerHandle);
	
	ActiveEffects.RemoveAt(Index);
}






void UAttributesComponent::LocalPredicted_ApplyEffect(const TSubclassOf<UAttributeEffect> Effect, const AActor* Instigator, FPolyStructHandle& Context)
{
	Internal_ApplyEffect(Effect, Instigator, Context);
	//Server_ApplyEffect_LocalPredicted(Effect, Instigator, Context, MakePredictionKey());

	const FEffectNetPredKey PredictionKey = MakePredictionKey();
	LocalPredictedEffects.Add(PredictionKey, ActiveEffects[ActiveEffects.Num() - 1]);// Add latest effect to map of locally predicted effects

	AWeaponSystemPlayerController::StaticCallRemoteFunctionOnObject((AActor*)Instigator, this, FindFunction(GET_FUNCTION_NAME_CHECKED(ThisClass, Server_ApplyEffect_LocalPredicted)),
		Effect.Get(), Instigator, Context, PredictionKey);
	
	/*if(auto* Controller = AWeaponSystemPlayerController::StaticGetOwningPlayerController((AActor*)Instigator))
	{
		Controller->StaticCallRemoteFunctionOnObject(this, FindFunction(GET_FUNCTION_NAME_CHECKED(ThisClass, Server_ApplyEffect_LocalPredicted)),
			Effect.Get(), (AActor*)Instigator, Context, MakePredictionKey());
	}
	else UE_LOG(LogTemp, Error, TEXT("%s: Can't use locally-predicted Attribute Effects without a valid owning Weapon System Player Controller on %s"),
		*FString(__FUNCTION__), *FString(Instigator ? Instigator->GetName() : "Invalid instigator"));*/
}

void UAttributesComponent::Server_ApplyEffect_LocalPredicted_Implementation(UClass* Effect, const AActor* Instigator, const FPolyStructHandle& Context, const FEffectNetPredKey PredictionKey)
{
	if(!Effect) PRINT(TEXT("Effect is NULL"));
	if(!Instigator) PRINT(TEXT("Instigator is NULL"));
	if(Context.IsEmpty()) PRINT(TEXT("Context is empty"));

	if(ApplyEffect(Effect, Instigator, const_cast<FPolyStructHandle&>(Context)))
	{
		PRINT(TEXT("Success"));
		AWeaponSystemPlayerController::StaticCallRemoteFunctionOnObject(const_cast<AActor*>(Instigator), this, FindFunction(GET_FUNCTION_NAME_CHECKED(ThisClass, Client_ApplyEffect_LocalPredicted_Success)),
			Effect, Instigator, PredictionKey);
	}
	else
	{
		PRINT(TEXT("Failed"));
		AWeaponSystemPlayerController::StaticCallRemoteFunctionOnObject(const_cast<AActor*>(Instigator), this, FindFunction(GET_FUNCTION_NAME_CHECKED(ThisClass, Client_ApplyEffect_LocalPredicted_Fail)),
			Effect, Instigator, PredictionKey);

		const TArray<FAttributeHandle> Attributes = Effect->GetDefaultObject<UAttributeEffect>()->GetAllModAttributes(this);
		FAttributeValuePairs AttributeValues;
		AttributeValues.AttributeValues.SetNum(Attributes.Num());
		for(int32 i = 0; i < Attributes.Num(); i++)
		{
			AttributeValues.AttributeValues[i] = TPair<FAttributeHandle, float>(Attributes[i], Attributes[i]->GetValue());
		}
		Client_SyncAttributes(AttributeValues);
		AWeaponSystemPlayerController::StaticCallRemoteFunctionOnObject(const_cast<AActor*>(Instigator), this, FindFunction(GET_FUNCTION_NAME_CHECKED(ThisClass, Client_SyncAttributes)),
			AttributeValues);
	}
}

void UAttributesComponent::Client_ApplyEffect_LocalPredicted_Success_Implementation(UClass* Effect, const AActor* Instigator, const FEffectNetPredKey PredictionKey)
{
	const TWeakPtr<FActiveEffect>* LocalPredictedEffectPtr = LocalPredictedEffects.Find(PredictionKey);
	LocalPredictedEffects.Remove(PredictionKey);
	if(LocalPredictedEffects.IsEmpty()) ClearCurrentPredictionKey();
	if(!LocalPredictedEffectPtr || !LocalPredictedEffectPtr->IsValid()) return;

	const int32 LocalPredictedEffectIndex = ActiveEffects.Find(LocalPredictedEffectPtr->Pin());
	Internal_RemoveActiveEffect(LocalPredictedEffectIndex, EEffectRemovalReason::NetPredSuccess);
	UE_LOG(LogTemp, Log, TEXT("Locally predicted effect %s succeeded"), *Effect->GetName());
}

void UAttributesComponent::Client_ApplyEffect_LocalPredicted_Fail_Implementation(UClass* Effect, const AActor* Instigator, const FEffectNetPredKey PredictionKey)
{
	const TWeakPtr<FActiveEffect>* LocalPredictedEffectPtr = LocalPredictedEffects.Find(PredictionKey);
	LocalPredictedEffects.Remove(PredictionKey);
	if(LocalPredictedEffects.IsEmpty()) ClearCurrentPredictionKey();
	if(!LocalPredictedEffectPtr || !LocalPredictedEffectPtr->IsValid()) return;

	const int32 LocalPredictedEffectIndex = ActiveEffects.Find(LocalPredictedEffectPtr->Pin());
	Internal_RemoveActiveEffect(LocalPredictedEffectIndex, EEffectRemovalReason::NetPredFail);
	
	UE_LOG(LogTemp, Log, TEXT("Locally predicted effect %s failed"), *Effect->GetName());
}

void UAttributesComponent::Server_SyncAttributes_Implementation(const TArray<FAttributeHandle>& Attributes)
{
	FAttributeValuePairs AttributeValues;
	AttributeValues.AttributeValues.SetNum(Attributes.Num());
	for(int32 i = 0; i < Attributes.Num(); i++)
	{
		AttributeValues.AttributeValues[i] = TPair<FAttributeHandle, float>(Attributes[i], Attributes[i]->GetValue());
	}
	Client_SyncAttributes(AttributeValues);
}

void UAttributesComponent::Client_SyncAttributes_Implementation(const FAttributeValuePairs& AttributeValues)
{
	for(TPair<FAttributeHandle, float>& Value : const_cast<FAttributeValuePairs&>(AttributeValues).AttributeValues)
	{
		checkf(Value.Get<0>().IsValid(), TEXT("Attribute is invalid on Client"));
		Value.Get<0>()->SetValue(Value.Get<1>());
	}
}
































/*
bool UAttributesComponent::ApplyEffect(const TSubclassOf<UAttributeEffect> Effect, FPolyStructHandle& Context)
{
	if(!Effect) return false;
	const UAttributeEffect* EffectDefObj = Effect.GetDefaultObject();
	checkf(EffectDefObj, TEXT("Apply Effect: The effect parameter is not a UAttributeEffect"));

	// Ensure this effect can be applied
	//const FAttributeHandle ModAttribute = FindAttributeByName(EffectDefObj->AttrTargetName);
	//if(!ModAttribute.IsValid() || !EffectDefObj->CanApplyEffect(ModAttribute, this, Context)) return false;
	if(!EffectDefObj->CanApplyEffect(this, Context)) return false;

	// Where the effect is actually applied
	CallApplyEffect(Effect, Context);

	// Also attempt to apply inherited effects
	for(const TSubclassOf<UAttributeEffect> InheritedEffect : EffectDefObj->GetInheritedEffects())
	{
		if(!InheritedEffect) continue;
		ApplyEffect(InheritedEffect, Context);
	}

	return true;
}

int32 UAttributesComponent::RemoveEffectsByClass(const TSubclassOf<UAttributeEffect> EffectClass)
{
	int32 NumRemoved = 0;
	for(UAttributeEffect* Effect : ActiveEffects)
	{
		if(!Effect || !Effect->IsA(EffectClass)) continue;
		CallOnActiveEffectRemoved(Effect, FPolyStructHandle(), EEffectRemovalReason::ManualRemoval);
		NumRemoved++;
	}
	return NumRemoved;
}


void UAttributesComponent::CallApplyEffect(const TSubclassOf<UAttributeEffect> EffectClass, FPolyStructHandle& Context)
{
	if(HasAuthority())// Nothing to do if called on the server
	{
		Internal_ApplyEffect(EffectClass, Context);
		return;
	}

	switch(EffectClass.GetDefaultObject()->GetRepCond())
	{
	case EEffectRepCond::LocalOnly:
		Internal_ApplyEffect(EffectClass, Context);
		break;
	case EEffectRepCond::ServerOnly:
		Server_Internal_ApplyEffect(EffectClass, Context);
		break;
	case EEffectRepCond::LocalPredicted:
		Internal_ApplyEffect_NetPrediction(EffectClass, Context);
		break;
	}
}


UAttributeEffect* UAttributesComponent::Internal_ApplyEffect(const TSubclassOf<UAttributeEffect> EffectClass, FPolyStructHandle& Context)
{
	if(EffectClass.GetDefaultObject()->GetDurationType() == EEffectDuration::Instant)
	{
		// Call applied effect
		CallOnEffectApplied(EffectClass, Context);

		// ModifyAttributes attribute value
		ModifyAttribute(EffectClass, EffectDefObj, ModAttribute, Context);

		// Call effect removed
		EffectDefObj->CallOnEffectRemoved(ModAttribute, this, Context, EEffectRemovalReason::LifespanEnd);
	}
	else
	{
		auto* NewEffect = NewObject<UAttributeEffect>(GetOwner(), EffectClass);
		
		ActiveEffects.Add(NewEffect);
		CallOnEffectApplied(NewEffect, ModAttribute, Context);
		
		auto CallFuncOnActiveEffectInterval = [=](){ CallOnActiveEffectInterval(NewEffect, ModAttribute, Context); };

		// Loop call OnActiveEffectInterval until it's destruction
		FTimerHandle& IntervalTimerHandle = NewEffect->IntervalTimerHandle;
		const float Interval = NewEffect->IntervalDuration;
		GetWorld()->GetTimerManager().SetTimer(IntervalTimerHandle, CallFuncOnActiveEffectInterval, Interval, true, 0.f);

		if(EffectDefObj->GetDurationType() == EEffectDuration::ForDuration)
		{
			auto CallOnActiveEffectEnd = [=](){ CallOnActiveEffectRemoved(NewEffect, ModAttribute, Context, EEffectRemovalReason::LifespanEnd); };

			FTimerHandle& LifespanTimerHandle = NewEffect->LifespanTimerHandle;
			const float Lifespan = NewEffect->Lifespan != Interval ? NewEffect->Lifespan : NewEffect->Lifespan + 0.01f;// Make the lifespan duration slightly longer than interval
			GetWorld()->GetTimerManager().SetTimer(LifespanTimerHandle, CallOnActiveEffectEnd, Lifespan, false);
		}

		return NewEffect;
	}

	return nullptr;
}

void UAttributesComponent::CallOnEffectApplied(const UAttributeEffect* Effect, FPolyStructHandle& Context) const
{
	if(!Effect) return;
	Effect->CallOnEffectApplied(this, Context);
	OnEffectApplied(Effect, Context);
	BP_OnEffectApplied(Effect, Context);
}


void UAttributesComponent::CallModifyAttribute(const UAttributeEffect* Effect, FPolyStructHandle& Context)
{
	if(!Effect) return;
	const FAttributeHandle ModAttribute = FindAttributeByName(Effect->GetAttributeTargetName());
	ModifyAttribute(Effect->GetClass(), Effect, ModAttribute, Context);
}

void UAttributesComponent::ModifyAttribute(const TSubclassOf<UAttributeEffect> EffectClass, const UAttributeEffect* Effect, const FAttributeHandle& ModAttribute, FPolyStructHandle& Context)
{
	if(!Effect || !EffectClass || !ModAttribute.IsValid()) return;
	
	const float ModValue = Effect->ModifyAttributes(ModAttribute, this, Context);
	const float OriginalValue = ModAttribute->GetValue();
	float NewValue = OriginalValue;

	// Calculate the new value by the modification type
	switch(Effect->GetModType())
	{
	case EEffectModType::Additive:
		NewValue += ModValue;
		break;
	case EEffectModType::Multiplicative:
		NewValue *= ModValue;
		break;
	case EEffectModType::Overriding:
		NewValue = ModValue;
		break;
	}
	
	CallPreModifyAttribute(ModAttribute, Effect, Context, NewValue);

	// Set the new value. Will automatically call changed delegate
	const_cast<FAttribute*>(ModAttribute.Get())->SetValue(NewValue);

	UE_LOG(LogTemp, Warning, TEXT("New value of %s == %f"), *ModAttribute.GetName(), ModAttribute->GetValue());
}



void UAttributesComponent::OnActiveEffectInterval(const UAttributeEffect* ActiveEffect, FPolyStructHandle& Context)
{
	CallModifyAttribute(ActiveEffect, Context);
}

void UAttributesComponent::OnActiveEffectRemoved(UAttributeEffect* ActiveEffect, const FPolyStructHandle& Context, const EEffectRemovalReason Reason)
{
	const int32 NumRemoved = ActiveEffects.Remove(ActiveEffect);
	if(!NumRemoved || !ActiveEffect) return;
	
	ActiveEffect->CallOnEffectRemoved(this, Context, Reason);
	
	GetWorld()->GetTimerManager().ClearTimer(ActiveEffect->IntervalTimerHandle);
	GetWorld()->GetTimerManager().ClearTimer(ActiveEffect->LifespanTimerHandle);
	ActiveEffect->Destroy();
}

void UAttributesComponent::Internal_ApplyEffect_NetPrediction(const TSubclassOf<UAttributeEffect> EffectClass, FPolyStructHandle& Context)
{
	// Apply effect locally
	UAttributeEffect* NewEffect = Internal_ApplyEffect(EffectClass, Context);
	
	// Cache effect in predicted effects map
	const FEffectNetPredKey PredictionKey = MakePredictionKey();
	if(NewEffect)
		LocalPredictedEffects.Add(PredictionKey, NewEffect);

	// Try apply effect server-side. Await response from server for success / fail to apply
	Server_Internal_ApplyEffect_NetPrediction(EffectClass, Context, PredictionKey);
}


void UAttributesComponent::Server_Internal_ApplyEffect_NetPrediction_Implementation(UClass* EffectClass, const FPolyStructHandle& Context, const FEffectNetPredKey Key)
{
	// If can't apply effect
	if(!EffectClass->GetDefaultObject<UAttributeEffect>()->CanApplyEffect(this, Context))
	{
		Client_Internal_ApplyEffect_Fail(ModAttribute->GetValue(), Key);
		return;
	}
	// If can apply effect
	Internal_ApplyEffect(EffectClass, (FPolyStructHandle&)Context);
	Client_Internal_ApplyEffect_Success(Key);
}

void UAttributesComponent::Client_Internal_ApplyEffect_Success_Implementation(const FEffectNetPredKey Key)
{
	const TWeakObjectPtr<UAttributeEffect>* LocalPredictedEffectPtr = LocalPredictedEffects.Find(Key);
	if(!LocalPredictedEffectPtr) return;

	UAttributeEffect* LocalPredictedEffect = LocalPredictedEffectPtr->Get();
	LocalPredictedEffects.Remove(Key);
	if(LocalPredictedEffects.IsEmpty())
		ClearCurrentPredictionKey();

	if(!LocalPredictedEffect) return;
	OnActiveEffectRemoved(LocalPredictedEffect, FPolyStructHandle(), EEffectRemovalReason::NetPredSuccess);
}

void UAttributesComponent::Client_Internal_ApplyEffect_Fail_Implementation(const float CorrectValue, const FEffectNetPredKey Key)
{
	if(const TWeakObjectPtr<UAttributeEffect>* LocalPredictedEffectPtr = LocalPredictedEffects.Find(Key))
	{
		if(UAttributeEffect* LocalPredictedEffect = LocalPredictedEffectPtr->Get())
		{
			OnActiveEffectRemoved(LocalPredictedEffect, FPolyStructHandle(), EEffectRemovalReason::NetPredFail);
		}

		LocalPredictedEffects.Remove(Key);
		if(LocalPredictedEffects.IsEmpty())
			ClearCurrentPredictionKey();
	}

	//checkf(Attribute.IsValid(), TEXT("Attribute is invalid on the client"));
	//const_cast<FAttribute*>(Attribute.Get())->SetValue(CorrectValue);
}
*/

















