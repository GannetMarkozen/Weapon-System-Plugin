#pragma once

#include "CoreMinimal.h"
#include "AttributeEffectParams.generated.h"



UENUM(BlueprintType, Meta = (DisplayName = "Effect Duration"))
enum class EEffectDuration : uint8
{
	Instant				UMETA(DisplayName="Instant",Tooltip="This effect will be instantaneous and have no duration"),
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
	None				UMETA(DisplayName="None",Tooltip="Does nothing. The attribute will remain unchanged regardless of the value"),
	Overriding			UMETA(DisplayName="Overriding",Tooltip="Overrides current attribute value with the new one"),
	Additive			UMETA(DisplayName="Additive",Tooltip="Adds to the current attribute value"),
	Multiplicative		UMETA(DisplayName="Multiplicative",Tooltip="Multiplies the current attribute value")
};

UENUM(BlueprintType, Meta = (DisplayName = "Effect Removal Reason"))
enum class EEffectRemovalReason : uint8
{
	LifespanEnd			UMETA(DisplayName="Lifespan-End",Tooltip="The effect's lifespan duration was exceeded and was automatically removed"),
	ManualRemoval		UMETA(DisplayName="Manually-Removal",Tooltip="The effect was manually removed"),
	NetPredSuccess		UMETA(DisplayName="Network-Prediction Success",Tooltip="The network-predicted effect was applied client-side and succeeded server-side so it was removed client-side"),
	NetPredFail			UMETA(DisplayName="Network-Prediction Failed",Tooltip="The network-predicted effect was applied client-side but failed server-side so it was removed client-side"),
};
