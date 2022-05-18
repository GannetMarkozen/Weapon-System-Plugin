// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "AttributeEffectParams.h"
#include "WeaponSystem/ScriptBase.h"
#include "AttributeEffectCalculation.generated.h"

struct FAttributeHandle;
struct FEffectModContext;
class UAttributesComponent;

/**
 *  The base-class for modifying an attribute's value from an Attribute Effect.
 *  Each calculation in the array modifies the Attribute sequentially.
 *  NOTE: This is a non-instanced object so do not attempt to modify member-variables
 */
UCLASS(Abstract, Blueprintable, BlueprintType, DefaultToInstanced, EditInlineNew, Const, Meta = (NotBlueprintSpawnable))
class WEAPONSYSTEMPLUGIN_API UAttributeEffectCalculation : public UObject
{
	GENERATED_BODY()
	
	friend class UAttributeEffect;
	
protected:
	// Whether or not we should attempt to modify the attribute. True by default
	UFUNCTION(BlueprintNativeEvent, Category = "Effect Calculation")
	bool CanModifyAttribute(const FAttributeHandle& Attribute, const UAttributeEffect* Effect, const UAttributesComponent* AttributesComponent, const FEffectModContext& ModContext) const;
	virtual bool CanModifyAttribute_Implementation(const FAttributeHandle& Attribute, const UAttributeEffect* Effect, const UAttributesComponent* AttributesComponent, const FEffectModContext& ModContext) const { return true; }

	// Called when modifying an attribute
	UFUNCTION(BlueprintNativeEvent, Meta = (DisplayName = "Modify"), Category = "Effect Calculation")
	void ModifyAttribute(const float AttributeValue, const float CurrentModificationValue, const float Magnitude, const FAttributeHandle& Attribute, const UAttributeEffect* Effect, const UAttributesComponent* AttributesComponent,
		const FEffectModContext& ModificationContext, EEffectModType& OutModificationType, float& OutModificationValue) const;

	// Called when modifying an attribute
	virtual void ModifyAttribute_Implementation(const float AttributeValue, const float CurrentModValue, const float Magnitude, const FAttributeHandle& Attribute, const UAttributeEffect* Effect, const UAttributesComponent* AttributesComponent,
		const FEffectModContext& ModContext, EEffectModType& OutModType, float& OutModValue) const { OutModType = EEffectModType::None; }

	// Calls ModifyAttributes and applies the ModValue and ModType to the InOutModValue parameter
	FORCEINLINE void CallModify(float& InOutModValue, const float AttributeValue, const float Magnitude, const FAttributeHandle& Attribute, const UAttributeEffect* Effect, const class UAttributesComponent* AttributesComponent, const FEffectModContext& ModContext) const
	{
		float ModifyValue; EEffectModType ModType;
		ModifyAttribute(AttributeValue, InOutModValue, Magnitude, Attribute, Effect, AttributesComponent, ModContext, ModType, ModifyValue);
		switch(ModType)
		{
		case EEffectModType::Additive:
			InOutModValue += ModifyValue;
			break;
		case EEffectModType::Multiplicative:
			InOutModValue *= ModifyValue;
			break;
		case EEffectModType::Overriding:
			InOutModValue = ModifyValue;
			break;
		default:
			break;
		}
	}
};











