// Copyright 2022, Gannet Markozen, All rights reserved


#include "WeaponSystem/AttributeSystem/AttributesComponent.h"

#include "Engine/ActorChannel.h"
#include "GameFramework/Character.h"
#include "Net/UnrealNetwork.h"
#include "WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h"
#include "WeaponSystem/Character/NetworkPrediction/WeaponSystemPlayerController.h"


UAttributesComponent::UAttributesComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
	SetIsReplicated(true);
}


void UAttributesComponent::BeginPlay()
{
	Super::BeginPlay();

	// Init all attribute handles
	for(TFieldIterator<FStructProperty> Itr(GetClass()); Itr; ++Itr)
	{
		if(!Itr->Struct->IsChildOf(FAttribute::StaticStruct())) continue;
		FAttribute& Attr = *Itr->ContainerPtrToValuePtr<FAttribute>(this);
		Attr.Handle.Set(this, *Itr);
	}
}

void UAttributesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate OwnedTags state
	DOREPLIFETIME(ThisClass, OwnedTags);
}


void UAttributesComponent::BindAllAttributesChanged(const FAttributeValueChangedUniDelegate& Delegate)
{
	for(TFieldIterator<FStructProperty> Itr(GetClass()); Itr; ++Itr)
	{
		if(!Itr->Struct->IsChildOf(FAttribute::StaticStruct())) continue;
		Itr->ContainerPtrToValuePtr<FAttribute>(this)->OnAttributeChanged.Add(Delegate);
	}
}

int32 UAttributesComponent::RemoveActiveEffectsByClass(const TSubclassOf<UAttributeEffect> Class, const bool bIncludeChildren)
{
	if(!Class) return 0;
	int32 NumRemoved = 0;
	ForEachActiveEffect([&](const FActiveEffect& ActiveEffect, const int32 i)
	{
		if(bIncludeChildren ? !ActiveEffect.GetEffect()->IsChildOf(Class) : ActiveEffect.GetEffect() != Class) return;
		Internal_RemoveActiveEffect(i, EEffectRemovalReason::ManualRemoval);
		NumRemoved++;
	});
	return NumRemoved;
} 

int32 UAttributesComponent::RemoveActiveEffectsByTag(const FGameplayTag& Tag, const bool bExact)
{
	if(!Tag.IsValid()) return 0;
	int32 NumRemoved = 0;
	ForEachActiveEffect([&](const FActiveEffect& ActiveEffect, const int32 i)
	{
		const FGameplayTag& EffectTag = ActiveEffect.GetEffect().GetDefaultObject()->GetEffectTag();
		if(bExact ? !EffectTag.MatchesTagExact(Tag) : !EffectTag.MatchesTag(Tag)) return;
		Internal_RemoveActiveEffect(i, EEffectRemovalReason::ManualRemoval);
		NumRemoved++;
	});
	return NumRemoved;
}

int32 UAttributesComponent::GetActiveEffectCountByClass(const TSubclassOf<UAttributeEffect> Class, const bool bIncludeChildren) const
{
	int32 NumEffects = 0;
	ForEachActiveEffect([&](const FActiveEffect& ActiveEffect, const int32 i)
	{
		if(bIncludeChildren ? ActiveEffect.GetEffect()->IsChildOf(Class) : ActiveEffect.GetEffect() == Class) NumEffects++;
	});
	return NumEffects;
}

int32 UAttributesComponent::GetActiveEffectCountByTag(const FGameplayTag& Tag, const bool bExact) const
{
	int32 NumEffects = 0;
	ForEachActiveEffect([&](const FActiveEffect& ActiveEffect, const int32 i)
	{
		const FGameplayTag& EffectTag = ActiveEffect.GetEffect().GetDefaultObject()->GetEffectTag();
		if(bExact ? EffectTag.MatchesTagExact(Tag) : EffectTag.MatchesTag(Tag)) NumEffects++;
	});
	return NumEffects;
}






bool UAttributesComponent::TryApplyEffect(const TSubclassOf<UAttributeEffect> Effect, const float Magnitude, const AActor* Instigator, FPolyStructHandle& Context)
{
	if(!Effect || !Effect.GetDefaultObject()->CanApplyEffect(this, Magnitude, FEffectModContext(Effect, (AActor*)Instigator, Context))) return false;
	
#if WITH_EDITOR// Editor notification only
	if(Effect.GetDefaultObject()->GetRepCond() == EEffectRepCond::LocalPredicted && !HasAuthority() && !AWeaponSystemPlayerController::StaticGetOwningPlayerController((AActor*)Instigator))
	{
		UE_LOG(LogTemp, Error, TEXT("Try Apply Effect: Attempted to apply a locally-predicted effect on the Client with an invalid Instigator."
			"Instigator must be valid and have an owning Weapon System Player Controller"));
		return false;
	}
#endif// WITH_EDITOR
	
	if(HasAuthority())
	{
		Internal_ApplyEffect(Effect, Magnitude, Instigator, Context);
		return true;
	}
	
	switch(Effect.GetDefaultObject()->GetRepCond())
	{
	case EEffectRepCond::LocalOnly:// Apply effect locally
		Internal_ApplyEffect(Effect, Magnitude, Instigator, Context);
		break;
	case EEffectRepCond::ServerOnly:// Call TryApplyEffect on the server
		static UFunction* Function(FindFunction(GET_FUNCTION_NAME_CHECKED(ThisClass, Server_ApplyEffect)));
		AWeaponSystemPlayerController::StaticCallRemoteFunctionOnObject((AActor*)Instigator, this, Function, FServerApplyEffectNetParams(Effect, Magnitude, (AActor*)Instigator, Context));
		break;
	case EEffectRepCond::LocalPredicted:// Apply effect locally, apply effect on server, then send client result of net prediction
		LocalPredicted_ApplyEffect(Effect, Magnitude, Instigator, Context);
		break;
	}

	return true;
}

void UAttributesComponent::Internal_ApplyEffect(const TSubclassOf<UAttributeEffect> Effect, const float Magnitude, const AActor* Instigator, FPolyStructHandle& Context)
{
	const UAttributeEffect* EffectDefObj = Effect.GetDefaultObject();
	const FEffectModContext ModContext(Effect, (AActor*)Instigator, Context);
	
	if(EffectDefObj->GetDurationType() == EEffectDuration::Instant)// Instant-effect simply calls modify and other functions for it's "lifespan"
	{
		EffectDefObj->ModifyAttributes(this, Magnitude, ModContext);
	}
	else// Latent-effect gets added to an array of active effects and calls modify every interval until removed via lifespan or manually
	{
		const TSharedPtr<FActiveEffect> ActiveEffect = MakeShared<FActiveEffect>(Magnitude, ModContext);
		ActiveEffects.Add(ActiveEffect);

		EffectDefObj->OnEffectApplied(this, ActiveEffect->ModContext);
		EffectDefObj->ModifyAttributes(this, Magnitude, ActiveEffect->ModContext);// This where the value of the Attribute is modified

		auto CallModifyAtIntervalLambda = [=](){ EffectDefObj->ModifyAttributes(this, ActiveEffect->Magnitude, ActiveEffect->ModContext); };

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

	const FEffectModContext& ModContext = ActiveEffects[Index]->ModContext;
	ActiveEffects[Index]->GetEffect().GetDefaultObject()->OnEffectRemoved(this, ModContext, Reason);

	GetWorld()->GetTimerManager().ClearTimer(ActiveEffects[Index]->IntervalTimerHandle);
	GetWorld()->GetTimerManager().ClearTimer(ActiveEffects[Index]->LifespanTimerHandle);
	
	ActiveEffects.RemoveAt(Index);
}






void UAttributesComponent::LocalPredicted_ApplyEffect(const TSubclassOf<UAttributeEffect> Effect, const float Magnitude, const AActor* Instigator, FPolyStructHandle& Context)
{
	Internal_ApplyEffect(Effect, Magnitude, Instigator, Context);

	const FEffectNetPredKey PredictionKey = Effect.GetDefaultObject()->GetDurationType() != EEffectDuration::Instant ? MakePredictionKey() : FEffectNetPredKey(MAX_uint8);
	if(PredictionKey.Key != MAX_uint8 && !ActiveEffects.IsEmpty())
		LocalPredictedEffects.Add(PredictionKey, ActiveEffects[ActiveEffects.Num() - 1]);// Add latest effect to map of locally predicted effects

	static UFunction* Function(FindFunctionChecked(GET_FUNCTION_NAME_CHECKED(ThisClass, Server_ApplyEffect_LocalPredicted)));
	AWeaponSystemPlayerController::StaticCallRemoteFunctionOnObject((AActor*)Instigator, this, Function, FServerLocalPredictedNetParams(Effect.Get(), Magnitude, (AActor*)Instigator, Context, PredictionKey));
}

void UAttributesComponent::Server_ApplyEffect_LocalPredicted(UClass* Effect, const float Magnitude, const AActor* Instigator, const FPolyStructHandle& Context, const FEffectNetPredKey PredictionKey)
{
	if(TryApplyEffect(Effect, Magnitude, Instigator, const_cast<FPolyStructHandle&>(Context)))
	{
		static UFunction* SuccessFunction(FindFunctionChecked(GET_FUNCTION_NAME_CHECKED(ThisClass, Client_ApplyEffect_LocalPredicted_Success)));
		AWeaponSystemPlayerController::StaticCallRemoteFunctionOnObject(const_cast<AActor*>(Instigator), this, SuccessFunction, FLocalPredictionResultNetParams(Effect, (AActor*)Instigator, PredictionKey));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Local Prediction Failed for Effect %s. Prediction Key %i"), *FString(Effect ? Effect->GetName() : "None"), (int32)PredictionKey.Key);
		
		static UFunction* FailFunction(FindFunctionChecked(GET_FUNCTION_NAME_CHECKED(ThisClass, Client_ApplyEffect_LocalPredicted_Fail)));
		AWeaponSystemPlayerController::StaticCallRemoteFunctionOnObject(const_cast<AActor*>(Instigator), this, FailFunction, FLocalPredictionResultNetParams(Effect, (AActor*)Instigator, PredictionKey));

		const TArray<FAttributeHandle> Attributes = Effect->GetDefaultObject<UAttributeEffect>()->GetAllModAttributes(this);
		FAttributeValuePairs AttributeValues;
		AttributeValues.AttributeValues.SetNum(Attributes.Num());
		for(int32 i = 0; i < Attributes.Num(); i++)
		{
			AttributeValues.AttributeValues[i] = TPair<FAttributeHandle, float>(Attributes[i], Attributes[i]->GetValue());
		}
		//Client_SyncAttributes(AttributeValues);

		static UFunction* SyncFunction(FindFunctionChecked(GET_FUNCTION_NAME_CHECKED(ThisClass, Client_SyncAttributes)));
		AWeaponSystemPlayerController::StaticCallRemoteFunctionOnObject(const_cast<AActor*>(Instigator), this, SyncFunction, AttributeValues);
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
	if(!LocalPredictedEffectPtr || !LocalPredictedEffectPtr->IsValid()) return;

	const int32 LocalPredictedEffectIndex = ActiveEffects.Find(LocalPredictedEffectPtr->Pin());
	Internal_RemoveActiveEffect(LocalPredictedEffectIndex, EEffectRemovalReason::NetPredFail);
	UE_LOG(LogTemp, Log, TEXT("Locally predicted effect %s failed"), *Effect->GetName());

	LocalPredictedEffects.Remove(PredictionKey);
	if(LocalPredictedEffects.IsEmpty())
		ClearCurrentPredictionKey();
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
		//Value.Get<0>()->SetValue(Value.Get<1>());
		SetAttributeValue(Value.Get<0>(), Value.Get<1>(), FEffectModContext());
	}
}









void UAttributesComponent::ApplyInstantNumericEffect(const FName& AttributeName, const float Magnitude, const EEffectModType ModificationType,
	const EEffectRepCond ReplicationCondition, const AActor* Instigator, FPolyStructHandle& Context)
{
	const FAttributeHandle Attribute = FindAttributeByName(AttributeName);
	if(!Attribute.IsValid()) return;
#if WITH_EDITOR
	if(ReplicationCondition != EEffectRepCond::LocalOnly && !HasAuthority() && !AWeaponSystemPlayerController::StaticGetOwningPlayerController((AActor*)Instigator))
	{
		UE_LOG(LogTemp, Error, TEXT("Apply Numeric Effect: Attempted to apply a locally-predicted effect on the Client with an invalid Instigator."
			"Instigator must be valid and have an owning Weapon System Player Controller"));
		return;
	}
#endif// WITH_EDITOR

	if(HasAuthority())
	{
		Internal_ApplyInstantNumericEffect(Attribute, Magnitude, ModificationType, Instigator, Context);
		return;
	}

	switch(ReplicationCondition)
	{
	case EEffectRepCond::LocalOnly:
		Internal_ApplyInstantNumericEffect(Attribute, Magnitude, ModificationType, Instigator, Context);
		break;
	case EEffectRepCond::ServerOnly:
		AWeaponSystemPlayerController::StaticCallRemoteFunctionOnObject((AActor*)Instigator, this, FindFunction(GET_FUNCTION_NAME_CHECKED(ThisClass, Internal_ApplyInstantNumericEffect)),
			FInstantNumericEffectNetValue(Attribute, Magnitude, ModificationType, Instigator, Context));
		break;
	case EEffectRepCond::LocalPredicted:
		AWeaponSystemPlayerController::StaticCallRemoteFunctionOnObject((AActor*)Instigator, this, FindFunction(GET_FUNCTION_NAME_CHECKED(ThisClass, Internal_ApplyInstantNumericEffect)),
			FInstantNumericEffectNetValue(Attribute, Magnitude, ModificationType, Instigator, Context));
		Internal_ApplyInstantNumericEffect(Attribute, Magnitude, ModificationType, Instigator, Context);
		break;
	}
}

void UAttributesComponent::Internal_ApplyInstantNumericEffect(const FAttributeHandle& Attribute, const float Magnitude, const EEffectModType ModType, const AActor* Instigator, FPolyStructHandle& Context)
{
	checkf(Attribute.IsValid(), TEXT("Attribute parameter is invalid on %s"), *FString(HasAuthority() ? "SERVER" : "CLIENT"));
	float NewValue = Attribute->GetValue();
	switch(ModType)
	{
	case EEffectModType::Additive:
		NewValue += Magnitude;
		break;
	case EEffectModType::Multiplicative:
		NewValue *= Magnitude;
		break;
	case EEffectModType::Overriding:
		NewValue = Magnitude;
		break;
	default:
		break;
	}

	const FEffectModContext ModContext(nullptr, (AActor*)Instigator, Context);
	
	CallPreModifyAttribute(Attribute, ModContext, NewValue);
	//const_cast<FAttributeHandle&>(Attribute)->SetValue(NewValue);
	SetAttributeValue(const_cast<FAttributeHandle&>(Attribute), NewValue, ModContext);
}

void UAttributesComponent::SetAttributeValue(FAttributeHandle& Attribute, const float NewValue, const FEffectModContext& ModContext)
{
	if(!Attribute.IsValid() || Attribute->GetValue() == NewValue) return;
	if(HasAuthority() && ModContext.HasData() && (Attribute.GetUProperty()->PropertyFlags & CPF_Net))
		LatestAttributeModContext.FindOrAdd(Attribute) = ModContext;// Cache mod context for attribute to broadcast on replicated
	
	Attribute->SetValue(NewValue, ModContext);
}




void UAttributesComponent::ForEachActiveEffect(const TFunction<void(FActiveEffect&, int32)>& Functor) const
{
	for(int32 i = 0; i < ActiveEffects.Num(); i++)
		if(FActiveEffect* ActiveEffect = ActiveEffects[i].Get())
			Functor(*ActiveEffect, i);
}

















