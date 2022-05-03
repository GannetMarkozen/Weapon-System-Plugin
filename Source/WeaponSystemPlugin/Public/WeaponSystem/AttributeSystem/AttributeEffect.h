// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Attribute.h"
#include "Polymorphic/PolymorphicStruct.h"
#include "WeaponSystem/ScriptBase.h"
#include "AttributeEffectParams.h"
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
UCLASS(Abstract)
class WEAPONSYSTEMPLUGIN_API UAttributeEffect : public UScriptBase
{
	GENERATED_BODY()
public:
	UAttributeEffect() = default;
	friend class UAttributesComponent;

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (DisplayName = "Effect Attribute Modifiers", AllowPrivateAccess = "true"), Category = "Effect")
	TArray<FAttributeModParams> Modifiers;

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

	// How this effect should be replicated. Will make no difference if playing as server / playing in Standalone-Mode
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true", DisplayName = "Effect Replication Condition"), Category = "Effect")
	EEffectRepCond EffectRepCond = EEffectRepCond::ServerOnly;

	// Other effects attempted to be applied if this one is successfully applied
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true", DisplayName = "Inherited Effects"), Category = "Effect")
	TArray<TSubclassOf<class UAttributeEffect>> InheritedEffects;

	// Whether or not this effect should be applied. Returns true by default
	UFUNCTION(BlueprintNativeEvent, Category = "Effect")
	bool CanApplyEffect(const class UAttributesComponent* AttributesComponent, const FPolyStructHandle& Context) const;
	virtual bool CanApplyEffect_Implementation( const class UAttributesComponent* AttributesComponent, const FPolyStructHandle& Context) const { return true; }

	// Called everytime an attribute is to be modified. Consider the Effect Modifier Type when calculating the output.
	// The context can be modified to maintain / alter state. Should generally not be overridden
	UFUNCTION(BlueprintNativeEvent, Category = "Effect")
	void Modify(class UAttributesComponent* AttributesComponent, UPARAM(ref) FPolyStructHandle& Context) const;
	virtual void Modify_Implementation(class UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) const;

	// Called when this effect is applied
	virtual void OnEffectApplied(const class UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) const {}

	// Called when this effect is applied
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Effect Applied"), Category = "Effect")
	void BP_OnEffectApplied(const class UAttributesComponent* AttributesComponent, UPARAM(ref) FPolyStructHandle& Context) const;

	// Calls the C++ and BP implementation of OnEffectApplied
	FORCEINLINE void CallOnEffectApplied(const class UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) const
	{
		OnEffectApplied(AttributesComponent, Context);
		BP_OnEffectApplied(AttributesComponent, Context);
	}

	// Called when this effect is removed before being destroyed
	virtual void OnEffectRemoved(const class UAttributesComponent* AttributesComponent, const FPolyStructHandle& Context, const EEffectRemovalReason Reason) const {}

	// Called when this effect is removed before being destroyed
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Effect Removed"), Category = "Effect")
	void BP_OnEffectRemoved(const class UAttributesComponent* AttributesComponent, const FPolyStructHandle& Context, const EEffectRemovalReason Reason) const;

	// Calls the C++ and BP implementation of OnEffectRemoved
	FORCEINLINE void CallOnEffectRemoved(const class UAttributesComponent* AttributesComponent, const FPolyStructHandle& Context, const EEffectRemovalReason Reason) const
	{
		OnEffectRemoved(AttributesComponent, Context, Reason);
		BP_OnEffectRemoved(AttributesComponent, Context, Reason);
	}

public:
	//FORCEINLINE EEffectModType GetModType() const { return EffectModType; }
	//FORCEINLINE const FName& GetAttributeTargetName() const { return AttrTargetName; }
	FORCEINLINE const TArray<FAttributeModParams>& GetAttributeModParams() const { return Modifiers; }
	FORCEINLINE EEffectDuration GetDurationType() const { return EffectDurType; }
	FORCEINLINE EEffectRepCond GetRepCond() const { return EffectRepCond; }
	FORCEINLINE const TArray<TSubclassOf<class UAttributeEffect>>& GetInheritedEffects() const { return InheritedEffects; }

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

private:
	FTimerHandle IntervalTimerHandle;
	FTimerHandle LifespanTimerHandle;
};
















