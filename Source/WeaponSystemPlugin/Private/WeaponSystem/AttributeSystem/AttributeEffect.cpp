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

void UAttributeEffect::Modify_Implementation(UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) const
{
	if(!AttributesComponent) return;
	for(const FAttributeModParams& Modifier : Modifiers)
	{
		FAttributeHandle Attribute = AttributesComponent->FindAttributeByName(Modifier.GetAttributeName());
		if(!Attribute.IsValid()) continue;

		// Init NewValue as the CurrentValue
		float NewValue = Attribute->GetValue();

		// Modify value by each calculator
		for(const UAttributeEffectCalculation* ModifierCalculation : Modifier.GetEffectCalculations())
		{
			if(!ModifierCalculation || !ModifierCalculation->CanModifyAttribute(Attribute, this, AttributesComponent, Context)) continue;
			ModifierCalculation->CallModify(NewValue, Attribute, this, AttributesComponent, Context);// Modifies the NewValue
		}

		// Set the new value
		Attribute->SetValue(NewValue);
	}
}


















