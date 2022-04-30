// Copyright 2022, Gannet Markozen, All rights reserved


#include "WeaponSystem/AttributeSystem/AttributesComponent.h"

#include "Net/UnrealNetwork.h"
#include "WeaponSystem/ReplicatedObject.h"
#include "WeaponSystem/AttributeSystem/AttributeEffect.h"



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

void UAttributesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//DOREPLIFETIME_CONDITION(ThisClass, ActiveEffects, COND_OwnerOnly);
}

void UAttributesComponent::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);

	for(UAttributeEffect* Effect : ActiveEffects) if(Effect) Effect->CallPreReplication();
}

bool UAttributesComponent::ApplyEffect(const TSubclassOf<UAttributeEffect> Effect, FPolyStructHandle& Context)
{
	if(!Effect) return false;
	const UAttributeEffect* EffectDefObj = Effect.GetDefaultObject();
	checkf(EffectDefObj, TEXT("Apply Effect: The effect parameter is not a UAttributeEffect"));

	// Ensure this effect can be applied
	const FAttributeHandle ModAttribute = FindAttributeByName(EffectDefObj->AttrTargetName);
	if(!EffectDefObj->CanApplyEffect(ModAttribute, this, Context)) return false;

	// Where the effect is actually applied
	CallApplyEffect(Effect, EffectDefObj, ModAttribute, Context);

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
		CallOnActiveEffectRemoved(Effect, FindAttributeByName(Effect->GetAttributeTargetName()), FPolyStructHandle(), EEffectRemovalReason::ManualRemoval);
		NumRemoved++;
	}
	return NumRemoved;
}


void UAttributesComponent::CallApplyEffect(const TSubclassOf<UAttributeEffect> EffectClass, const UAttributeEffect* EffectDefObj, const FAttributeHandle& ModAttribute, FPolyStructHandle& Context)
{
	if(HasAuthority())// Nothing to do if called on the server
	{
		Internal_ApplyEffect(EffectClass, EffectDefObj, ModAttribute, Context);
		return;
	}

	switch(EffectDefObj->GetRepCond())
	{
	case EEffectRepCond::LocalOnly:
		Internal_ApplyEffect(EffectClass, EffectDefObj, ModAttribute, Context);
		break;
	case EEffectRepCond::ServerOnly:
		Server_Internal_ApplyEffect(EffectClass, ModAttribute, Context);
		break;
	case EEffectRepCond::LocalPredicted:
		Internal_ApplyEffect_NetPrediction(EffectClass, ModAttribute, Context);
		break;
	}
}


UAttributeEffect* UAttributesComponent::Internal_ApplyEffect(const TSubclassOf<UAttributeEffect> EffectClass, const UAttributeEffect* EffectDefObj, const FAttributeHandle& ModAttribute, FPolyStructHandle& Context)
{
	if(EffectDefObj->GetDurationType() == EEffectDuration::Instant)
	{
		// Call applied effect
		CallOnEffectApplied(EffectDefObj, ModAttribute, Context);

		// Modify attribute value
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

void UAttributesComponent::CallOnEffectApplied(const UAttributeEffect* Effect, const FAttributeHandle& Attribute, FPolyStructHandle& Context) const
{
	if(!Effect) return;
	Effect->CallOnEffectApplied(Attribute, this, Context);
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
	
	const float ModValue = Effect->ModifyAttribute(ModAttribute, this, Context);
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



void UAttributesComponent::OnActiveEffectInterval(const UAttributeEffect* ActiveEffect, const FAttributeHandle& Attribute, FPolyStructHandle& Context)
{
	CallModifyAttribute(ActiveEffect, Context);
}

void UAttributesComponent::OnActiveEffectRemoved(UAttributeEffect* ActiveEffect, const FAttributeHandle& Attribute, const FPolyStructHandle& Context, const EEffectRemovalReason Reason)
{
	const int32 NumRemoved = ActiveEffects.Remove(ActiveEffect);
	if(!NumRemoved || !ActiveEffect) return;
	
	ActiveEffect->CallOnEffectRemoved(Attribute, this, Context, Reason);
	
	GetWorld()->GetTimerManager().ClearTimer(ActiveEffect->IntervalTimerHandle);
	GetWorld()->GetTimerManager().ClearTimer(ActiveEffect->LifespanTimerHandle);
	ActiveEffect->Destroy();
}

void UAttributesComponent::Internal_ApplyEffect_NetPrediction(const TSubclassOf<UAttributeEffect> EffectClass, const FAttributeHandle& ModAttribute, FPolyStructHandle& Context)
{
	// Apply effect locally
	UAttributeEffect* NewEffect = Internal_ApplyEffect(EffectClass, EffectClass.GetDefaultObject(), ModAttribute, Context);
	
	// Cache effect in predicted effects map
	const FEffectNetPredKey PredictionKey = MakePredictionKey();
	if(NewEffect)
		LocalPredictedEffects.Add(PredictionKey, NewEffect);

	// Try apply effect server-side. Await response from server for success / fail to apply
	Server_Internal_ApplyEffect_NetPrediction(EffectClass, ModAttribute, Context, PredictionKey);
}


void UAttributesComponent::Server_Internal_ApplyEffect_NetPrediction_Implementation(UClass* EffectClass, const FAttributeHandle& ModAttribute, const FPolyStructHandle& Context, const FEffectNetPredKey Key)
{
	// If can't apply effect
	if(!EffectClass->GetDefaultObject<UAttributeEffect>()->CanApplyEffect(ModAttribute, this, Context))
	{
		checkf(ModAttribute.IsValid(), TEXT("Mod attribute is invalid on the server"));
		Client_Internal_ApplyEffect_Fail(ModAttribute, ModAttribute->GetValue(), Key);
		return;
	}
	// If can apply effect
	Internal_ApplyEffect(EffectClass, EffectClass->GetDefaultObject<UAttributeEffect>(), ModAttribute, (FPolyStructHandle&)Context);
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
	OnActiveEffectRemoved(LocalPredictedEffect, FindAttributeByName(LocalPredictedEffect->GetAttributeTargetName()), FPolyStructHandle(), EEffectRemovalReason::NetPredSuccess);
}

void UAttributesComponent::Client_Internal_ApplyEffect_Fail_Implementation(const FAttributeHandle& Attribute, const float CorrectValue, const FEffectNetPredKey Key)
{
	if(const TWeakObjectPtr<UAttributeEffect>* LocalPredictedEffectPtr = LocalPredictedEffects.Find(Key))
	{
		if(UAttributeEffect* LocalPredictedEffect = LocalPredictedEffectPtr->Get())
		{
			OnActiveEffectRemoved(LocalPredictedEffect, Attribute, FPolyStructHandle(), EEffectRemovalReason::NetPredFail);
		}

		LocalPredictedEffects.Remove(Key);
		if(LocalPredictedEffects.IsEmpty())
			ClearCurrentPredictionKey();
	}

	checkf(Attribute.IsValid(), TEXT("Attribute is invalid on the client"));
	const_cast<FAttribute*>(Attribute.Get())->SetValue(CorrectValue);
}


















