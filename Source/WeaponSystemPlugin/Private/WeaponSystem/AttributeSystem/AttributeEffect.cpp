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

void UAttributeEffect::ModifyAttributes_Implementation(UAttributesComponent* AttributesComponent, const float Magnitude, const FEffectModContext& ModContext) const
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
			if(!ModifierCalculation || !ModifierCalculation->CanModifyAttribute(Attribute, this, AttributesComponent, ModContext)) continue;
			ModifierCalculation->CallModify(CurrentModValue, AttributeValue, Magnitude, Attribute, this, AttributesComponent, ModContext);// Modifies the NewValue
		}

		// Call PreModifyAttribute before applying the final value
		AttributesComponent->CallPreModifyAttribute(Attribute, ModContext, CurrentModValue);
		
		// Set the new value
		AttributesComponent->SetAttributeValue(Attribute, CurrentModValue, ModContext);
		//Attribute->SetValue(CurrentModValue);
	}
}

// Default implementation
void UAttributeEffect::OnEffectApplied(UAttributesComponent* AttributesComponent, const FEffectModContext& ModContext) const
{
	if(!AttributesComponent) return;
	FAggregateGameplayTagContainer& Container = AttributesComponent->OwnedTags;
	//Container.AppendTags(AppliedTags.Tags, AppliedTags.Count);
	//Container.AppendTags(LifespanTags.Tags, LifespanTags.Count);
	//Container.RemoveTags(RemovedTags.Tags, RemovedTags.Count);
	Container.AppendTags(AppliedTags);
	Container.AppendTags(LifespanTags);
	Container.RemoveTagsExact(RemovedTags);
}

// Default implementation
void UAttributeEffect::OnEffectRemoved(UAttributesComponent* AttributesComponent, const FEffectModContext& ModContext, const EEffectRemovalReason Reason) const
{
	if(!AttributesComponent) return;
	if(Reason != EEffectRemovalReason::NetPredSuccess)
	{
		FAggregateGameplayTagContainer& Container = AttributesComponent->OwnedTags;
		//Container.RemoveTags(LifespanTags.Tags, LifespanTags.Count);
		Container.RemoveTagsExact(RemovedTags);
	}
} 


















