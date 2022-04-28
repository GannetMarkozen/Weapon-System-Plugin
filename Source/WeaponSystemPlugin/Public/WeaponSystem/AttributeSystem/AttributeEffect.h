// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Attribute.h"
#include "Polymorphic/PolymorphicStruct.h"
#include "WeaponSystem/ScriptBase.h"
#include "AttributeEffect.generated.h"


UENUM(BlueprintType, Meta = (DisplayName = "Effect Duration"))
enum class EEffectDuration : uint8
{
	Instant				UMETA(DisplayName="Instant",Tooltip="This effect will be instantaneous and have no duration. Will not be instanced"),
	ForDuration			UMETA(DisplayName="For-Duration",Tooltip="This effect will run for it's duration unless manully ended"),
	Infinite			UMETA(DisplayName="Infinite",Tooltip="This effect will run forever until manually ended"),
};

UENUM(BlueprintType, Meta = (DisplayName = "Effect Replication Condition"))
enum class EEffectRepCond : uint8
{
	ServerOnly			UMETA(DisplayName="Server-Only",Tooltip="This effect will run only on the server"),
	LocalOnly			UMETA(DisplayName="Local-Only",Tooltip="This effect will run only locally where it's being called"),
	LocalPredicted		UMETA(DisplayName="Local-Predicted",Tooltip="This effect will run locally and server-side and attempt to stay in sync (to minimize latency)"),
};

UENUM(BlueprintType, Meta = (DisplayName = "Effect Modifier Type"))
enum class EEffectModType : uint8
{
	Overriding			UMETA(DisplayName="Overriding",Tooltip="Overrides current attribute value with the new one"),
	Additive			UMETA(DisplayName="Additive",Tooltip="Adds to the current attribute value"),
	Multiplicative		UMETA(DisplayName="Multiplicative",Tooltip="Multiplies the current attribute value")
};





/**
 * 
 */
UCLASS(Abstract)
class WEAPONSYSTEMPLUGIN_API UAttributeEffectBase : public UScriptBase
{
	GENERATED_BODY()
public:
	UAttributeEffectBase() = default;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true", DisplayName = "Effect Replication Condition"), Category = "Effect")
	EEffectRepCond EffectRepCond = EEffectRepCond::ServerOnly;

	// Called everytime an attribute is to be modified.
	UFUNCTION(BlueprintNativeEvent, Category = "Effect")
	float ModifyAttribute(const FAttributeHandle& Attribute, const class UAttributesComponent* AttributesComponent, UPARAM(ref) FPolyStructHandle& Context);
	virtual float ModifyAttribute_Implementation(const FAttributeHandle& Attribute, const class UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) { return 0.f; }
};

















