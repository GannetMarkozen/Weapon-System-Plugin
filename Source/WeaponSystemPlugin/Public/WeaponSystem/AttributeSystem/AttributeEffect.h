// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "AggregateTagContainer.h"
#include "Attribute.h"
#include "Polymorphic/PolymorphicStruct.h"
#include "UObject/Object.h"
#include "AttributeEffectParams.h"
#include "GameplayTagContainer.h"
#include "AttributeEffect.generated.h"


USTRUCT(BlueprintType, Meta = (DisplayName = "Attribute Modifier Parameters"))
struct FAttributeModParams
{
	GENERATED_BODY()
private:
	// The name of the attribute to be modified
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Attribute Modifier")
	FName Attribute;

	// Effect calculations used to modify the attribute value
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced, Meta = (AllowPrivateAccess = "true"), Category = "Attribute Modifier")
	TArray<class UAttributeEffectCalculation*> EffectCalculations;

public:
	FORCEINLINE const FName& GetAttributeName() const { return Attribute; }
	FORCEINLINE const TArray<class UAttributeEffectCalculation*>& GetEffectCalculations() const { return EffectCalculations; }
};

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType, Const)
class WEAPONSYSTEMPLUGIN_API UAttributeEffect : public UObject
{
	GENERATED_BODY()
public:
	UAttributeEffect() = default;
	friend class UAttributesComponent;

protected:
	// Modifiers with an Attribute to modify and an array of Attribute Effect Calculations that will be ran sequentially
	// to modify the Attribute's value when this Effect is successfully applied
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (DisplayName = "Effect Attribute Modifiers", AllowPrivateAccess = "true"), Category = "Configurations")
	TArray<FAttributeModParams> Modifiers;

	// How this effect should be replicated. Will make no difference if playing as server / playing in Standalone-Mode
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true", DisplayName = "Effect Replication Condition"), Category = "Configurations")
	EEffectRepCond EffectRepCond = EEffectRepCond::ServerOnly;

	// The duration of the effect. Forever being infinite until removed manually. Duration being for the duration time. And instant being instantaneous
	// Note: Using an instant effect does not instance the Attribute Effect thus you should not store any variables. Treat the functions as static functions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (DisplayName = "Effect Duration Type", AllowPrivateAccess = "true"), Category = "Configurations")
	EEffectDuration EffectDurType = EEffectDuration::Instant;

	// The delay in-between effect applications for latent-effects
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (ClampMin = "0", DisplayName = "Effect Interval Duration", EditCondition = "EffectDurType != EEffectDuration::Instant"), Category = "Configurations")
	float IntervalDuration = 0.25f;

	// The total lifespan of this effect
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (ClampMin = "0", DisplayName = "Effect Lifespan Duration", EditCondition = "EffectDurType == EEffectDuration::ForDuration"), Category = "Configurations")
	float Lifespan = 5.f;

	// The optional tag for representing this Effect to allow for searching for the tag
	// within the Attributes Component
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations|Tags")
	FGameplayTag EffectTag;

	// Tags applied when this Effect is successfully applied
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations|Tags")
	TArray<FAggregateGameplayTagValue> AppliedTags;

	// Tags applied when this Effect is successfully applied. Removed at Lifespan End
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations|Tags")
	TArray<FAggregateGameplayTagValue> LifespanTags;

	// Tags removed when this Effect is successfully applied
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations|Tags")
	TArray<FAggregateGameplayTagValue> RemovedTags;
	
	// Whether or not this effect should be applied. Returns true by default
	UFUNCTION(BlueprintNativeEvent, Category = "Effect")
	bool CanApplyEffect(const UAttributesComponent* AttributesComponent, const float Magnitude, const FEffectModContext& ModificationContext) const;
	virtual bool CanApplyEffect_Implementation(const UAttributesComponent* AttributesComponent, const float Magnitude, const FEffectModContext& ModContext) const { return true; }

	// Called everytime an attribute is to be modified. Consider the Effect Modifier Type when calculating the output.
	// The context can be modified to maintain / alter state. Should generally not be overridden
	UFUNCTION(BlueprintNativeEvent, Meta = (DisplayName = "Modify"), Category = "Effect")
	void ModifyAttributes(UAttributesComponent* AttributesComponent, const float Magnitude, const FEffectModContext& ModificationContext) const;
	virtual void ModifyAttributes_Implementation(UAttributesComponent* AttributesComponent, const float Magnitude, const FEffectModContext& ModContext) const;

	// Called when this effect is applied
	virtual void OnEffectApplied(UAttributesComponent* AttributesComponent, const FEffectModContext& ModContext) const;

	// Called when this effect is applied
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Effect Applied"), Category = "Effect")
	void BP_OnEffectApplied(UAttributesComponent* AttributesComponent, const FEffectModContext& ModificationContext) const;

	// Calls the C++ and BP implementation of OnEffectApplied
	FORCEINLINE void CallOnEffectApplied(UAttributesComponent* AttributesComponent, const FEffectModContext& ModContext) const
	{
		OnEffectApplied(AttributesComponent, ModContext);
		BP_OnEffectApplied(AttributesComponent, ModContext);
	}

	// Called when this effect is removed before being destroyed
	virtual void OnEffectRemoved(UAttributesComponent* AttributesComponent, const FEffectModContext& ModContext, const EEffectRemovalReason Reason) const;

	// Called when this effect is removed before being destroyed
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Effect Removed"), Category = "Effect")
	void BP_OnEffectRemoved(UAttributesComponent* AttributesComponent, const FEffectModContext& ModificationContext, const EEffectRemovalReason Reason) const;

	// Calls the C++ and BP implementation of OnEffectRemoved
	FORCEINLINE void CallOnEffectRemoved(UAttributesComponent* AttributesComponent, const FEffectModContext& ModContext, const EEffectRemovalReason Reason) const
	{
		OnEffectRemoved(AttributesComponent, ModContext, Reason);
		BP_OnEffectRemoved(AttributesComponent, ModContext, Reason);
	}

public:
	FORCEINLINE const FGameplayTag& GetEffectTag() const { return EffectTag; }
	FORCEINLINE const TArray<FAttributeModParams>& GetAttributeModParams() const { return Modifiers; }
	FORCEINLINE EEffectDuration GetDurationType() const { return EffectDurType; }
	FORCEINLINE EEffectRepCond GetRepCond() const { return EffectRepCond; }

	// Gets all the modifying attributes present on the Attributes Component (all handles will be valid)
	UFUNCTION(BlueprintPure, Meta = (DisplayName = "Get All Modifying Attributes"), Category = "Effect")
	void GetAllModAttributes(class UAttributesComponent* AttributesComponent, TArray<FAttributeHandle>& OutAttributes) const;

	// Gets all the modifying attributes present on the Attributes Component (all handles will be valid)
	FORCEINLINE TArray<FAttributeHandle> GetAllModAttributes(class UAttributesComponent* AttributesComponent) const
	{
		TArray<FAttributeHandle> Handles;
		GetAllModAttributes(AttributesComponent, Handles);
		return Handles;
	}

	UFUNCTION(BlueprintPure, Meta = (DisplayName = "Has All Modifying Attributes"), Category = "Effect")
	bool HasAllModAttributes(const class UAttributesComponent* AttributesComponent) const;
};
















