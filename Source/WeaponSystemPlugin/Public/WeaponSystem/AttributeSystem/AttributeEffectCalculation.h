// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "AttributeEffectParams.h"
#include "WeaponSystem/ScriptBase.h"
#include "AttributeEffectCalculation.generated.h"

/**
 *  The base-class for modifying an attribute's value from an Attribute Effect.
 *  Each calculation in the array modifies the Attribute sequentially.
 *  NOTE: This is a non-instanced object so do not attempt to modify member-variables
 */
UCLASS(Abstract, DefaultToInstanced, EditInlineNew, Meta = (NotBlueprintSpawnable))
class WEAPONSYSTEMPLUGIN_API UAttributeEffectCalculation : public UObject
{
	GENERATED_BODY()
	friend class UAttributeEffect;
protected:
	// Whether or not we should attempt to modify the attribute. True by default
	UFUNCTION(BlueprintNativeEvent, Category = "Effect Calculation")
	bool CanModifyAttribute(const struct FAttributeHandle& Attribute, const class UAttributeEffect* Effect, const class UAttributesComponent* AttributesComponent, const struct FPolyStructHandle& Context) const;
	virtual bool CanModifyAttribute_Implementation(const struct FAttributeHandle& Attribute, const class UAttributeEffect* Effect, const class UAttributesComponent* AttributesComponent, const struct FPolyStructHandle& Context) const { return true; }

	// Called when modifying an attribute
	UFUNCTION(BlueprintNativeEvent, Category = "Effect Calculation")
	void Modify(const float CurrentValue, const struct FAttributeHandle& Attribute, const class UAttributeEffect* Effect, const class UAttributesComponent* AttributesComponent,
		UPARAM(ref) struct FPolyStructHandle& Context, EEffectModType& OutModificationType, float& OutValue) const;

	// Called when modifying an attribute
	virtual void Modify_Implementation(const float CurrentValue, const struct FAttributeHandle& Attribute, const class UAttributeEffect* Effect, const class UAttributesComponent* AttributesComponent,
		struct FPolyStructHandle& Context, EEffectModType& OutModType, float& OutValue) const { OutModType = EEffectModType::None; }

	// Calls Modify and applies the ModValue and ModType to the InOutNewValue parameter
	FORCEINLINE void CallModify(float& InOutNewValue, const struct FAttributeHandle& Attribute, const class UAttributeEffect* Effect, const class UAttributesComponent* AttributesComponent, struct FPolyStructHandle& Context) const
	{
		float ModifyValue; EEffectModType ModType;
		Modify(InOutNewValue, Attribute, Effect, AttributesComponent, Context, ModType, ModifyValue);
		switch(ModType)
		{
		case EEffectModType::Additive:
			InOutNewValue += ModifyValue;
			break;
		case EEffectModType::Multiplicative:
			InOutNewValue *= ModifyValue;
			break;
		case EEffectModType::Overriding:
			InOutNewValue = ModifyValue;
			break;
		default:
			break;
		}
	}
};











