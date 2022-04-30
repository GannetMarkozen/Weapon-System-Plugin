// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Attribute.h"
#include "Polymorphic/PolymorphicStruct.h"
#include "WeaponSystem/ScriptBase.h"
#include "AttributeEffectParams.h"
#include "AttributeEffect.generated.h"


/**
 * 
 */
UCLASS(Abstract)
class WEAPONSYSTEMPLUGIN_API UAttributeEffect : public UScriptBase
{
	GENERATED_BODY()
public:
	UAttributeEffect() = default;
	friend class UAttributesComponent;

protected:
	// The name of the attribute this effect is attempting to target
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (DisplayName = "Attribute Target Name", AllowPrivateAccess = "true"), Category = "Effect")
	FName AttrTargetName;

	// The modification type that is applied to the targeted Attribute calculated from the Modify Attribute function
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (DisplayName = "Effect Modifier Type", AllowPrivateAccess = "true"), Category = "Effect")
	EEffectModType EffectModType = EEffectModType::Additive;

	// The duration of the effect. Forever being infinite until removed manually. Duration being for the duration time. And instant being instantaneous
	// Note: Using an instant effect does not instance the Attribute Effect thus you should not store any variables. Treat the functions as static functions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (DisplayName = "Effect Duration Type", AllowPrivateAccess = "true"), Category = "Effect")
	EEffectDuration EffectDurType = EEffectDuration::Instant;

	// The delay in-between effect applications for latent-effects
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (ClampMin = "0", DisplayName = "Effect Interval Duration", EditCondition = "EffectDurType != EEffectDuration::Instant"), Category = "Effect")
	float IntervalDuration = 0.25f;

	// The total lifespan of this effect
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (ClampMin = "0", DisplayName = "Effect Lifespan Duration", EditCondition = "EffectDurType == EEffectDuration::ForDuration"), Category = "Effect")
	float Lifespan = 5.f;

	// How this effect should be replicated
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true", DisplayName = "Effect Replication Condition"), Category = "Effect")
	EEffectRepCond EffectRepCond = EEffectRepCond::ServerOnly;

	// Other effects attempted to be applied if this one is successfully applied
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true", DisplayName = "Inherited Effects"), Category = "Effect")
	TArray<TSubclassOf<class UAttributeEffect>> InheritedEffects;

	// Whether or not this effect should be applied. Returns true by default
	UFUNCTION(BlueprintNativeEvent, Category = "Effect")
	bool CanApplyEffect(const FAttributeHandle& Attribute, const class UAttributesComponent* AttributesComponent, const FPolyStructHandle& Context) const;
	virtual bool CanApplyEffect_Implementation(const FAttributeHandle& Attribute, const class UAttributesComponent* AttributesComponent, const FPolyStructHandle& Context) const { return true; }

	// Called everytime an attribute is to be modified. Consider the Effect Modifier Type when calculating the output.
	// The context can be modified to maintain / alter state
	UFUNCTION(BlueprintNativeEvent, Category = "Effect")
	float ModifyAttribute(const FAttributeHandle& Attribute, const class UAttributesComponent* AttributesComponent, UPARAM(ref) FPolyStructHandle& Context) const;
	virtual float ModifyAttribute_Implementation(const FAttributeHandle& Attribute, const class UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) const { return 0.f; }

	// Called when this effect is applied
	virtual void OnEffectApplied(const FAttributeHandle& Attribute, const class UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) const {}

	// Called when this effect is applied
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Effect Applied"), Category = "Effect")
	void BP_OnEffectApplied(const FAttributeHandle& Attribute, const class UAttributesComponent* AttributesComponent, UPARAM(ref) FPolyStructHandle& Context) const;

	// Calls the C++ and BP implementation of OnEffectApplied
	FORCEINLINE void CallOnEffectApplied(const FAttributeHandle& Attribute, const class UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) const
	{
		OnEffectApplied(Attribute, AttributesComponent, Context);
		BP_OnEffectApplied(Attribute, AttributesComponent, Context);
	}

	// Called when this effect is removed before being destroyed
	virtual void OnEffectRemoved(const FAttributeHandle& Attribute, const class UAttributesComponent* AttributesComponent, const FPolyStructHandle& Context, const EEffectRemovalReason Reason) const {}

	// Called when this effect is removed before being destroyed
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Effect Removed"), Category = "Effect")
	void BP_OnEffectRemoved(const FAttributeHandle& Attribute, const class UAttributesComponent* AttributesComponent, const FPolyStructHandle& Context, const EEffectRemovalReason Reason) const;

	// Calls the C++ and BP implementation of OnEffectRemoved
	FORCEINLINE void CallOnEffectRemoved(const FAttributeHandle& Attribute, const class UAttributesComponent* AttributesComponent, const FPolyStructHandle& Context, const EEffectRemovalReason Reason) const
	{
		OnEffectRemoved(Attribute, AttributesComponent, Context, Reason);
		BP_OnEffectRemoved(Attribute, AttributesComponent, Context, Reason);
	}

public:
	FORCEINLINE EEffectModType GetModType() const { return EffectModType; }
	FORCEINLINE const FName& GetAttributeTargetName() const { return AttrTargetName; }
	FORCEINLINE EEffectDuration GetDurationType() const { return EffectDurType; }
	FORCEINLINE EEffectRepCond GetRepCond() const { return EffectRepCond; }
	FORCEINLINE const TArray<TSubclassOf<class UAttributeEffect>>& GetInheritedEffects() const { return InheritedEffects; }

private:
	FTimerHandle IntervalTimerHandle;
	FTimerHandle LifespanTimerHandle;
};
















