// Copyright 2022, Gannet Markozen, All rights reserved


#include "WeaponSystem/AttributeSystem/AttributeEffect.h"

#include "WeaponSystem/AttributeSystem/AttributeEffectCalculation.h"
#include "WeaponSystem/AttributeSystem/AttributesComponent.h"


void UAttributeEffect::GetAllModAttributes(UAttributesComponent* AttributesComponent, TArray<FAttributeHandle>& OutAttributes) const
{
	if(!AttributesComponent) return;
	for(const FAttributeModParams& Modifier : Modifiers)
	{
		const FAttributeHandle Attribute = AttributesComponent->FindAttributeByName(Modifier.GetAttributeName());
		if(!Attribute.IsValid()) continue;
		OutAttributes.Add(Attribute);
	}
}

bool UAttributeEffect::HasAllModAttributes(const UAttributesComponent* AttributesComponent) const
{
	if(!AttributesComponent) return false;
	for(const FAttributeModParams& Modifier : Modifiers)
	{
		if(const_cast<UAttributesComponent*>(AttributesComponent)->FindAttributeByName(Modifier.GetAttributeName())) continue;
		return false;
	}
	return true;
}

void UAttributeEffect::ModifyAttributes_Implementation(UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) const
{
	if(!AttributesComponent) return;
	for(const FAttributeModParams& Modifier : Modifiers)
	{
		FAttributeHandle Attribute = AttributesComponent->FindAttributeByName(Modifier.GetAttributeName());
		if(!Attribute.IsValid()) continue;

		const float AttributeValue = Attribute->GetValue();
		
		// Init NewValue as the CurrentValue
		float CurrentModValue = AttributeValue;

		// Modify attributes value by each calculator
		for(const UAttributeEffectCalculation* ModifierCalculation : Modifier.GetEffectCalculations())
		{
			if(!ModifierCalculation || !ModifierCalculation->CanModifyAttribute(Attribute, this, AttributesComponent, Context)) continue;
			ModifierCalculation->CallModify(CurrentModValue, AttributeValue, Attribute, this, AttributesComponent, Context);// Modifies the NewValue
		}

		// Call PreModifyAttribute before applying the final value
		AttributesComponent->CallPreModifyAttribute(Attribute, Context, CurrentModValue);
		
		// Set the new value
		Attribute->SetValue(CurrentModValue);
	}
}

// Default implementation
void UAttributeEffect::OnEffectApplied(const UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) const
{
	//FAggregateTagContainerNotify& Container = const_cast<UAttributesComponent*>(AttributesComponent)->OwnedTags;
	FAggregateGameplayTagContainer& Container = const_cast<UAttributesComponent*>(AttributesComponent)->OwnedTags;
	Container.AppendTags(AppliedTags.Tags, AppliedTags.Count);
	Container.AppendTags(LifespanTags.Tags, LifespanTags.Count);
	Container.RemoveTags(RemovedTags.Tags, RemovedTags.Count);
}

// Default implementation
void UAttributeEffect::OnEffectRemoved(const UAttributesComponent* AttributesComponent, const FPolyStructHandle& Context, const EEffectRemovalReason Reason) const
{
	if(Reason != EEffectRemovalReason::NetPredSuccess)
	{
		//FAggregateTagContainerNotify& Container = const_cast<UAttributesComponent*>(AttributesComponent)->OwnedTags;
		FAggregateGameplayTagContainer& Container = const_cast<UAttributesComponent*>(AttributesComponent)->OwnedTags;
		Container.RemoveTags(LifespanTags.Tags, LifespanTags.Count);
	}
}


















