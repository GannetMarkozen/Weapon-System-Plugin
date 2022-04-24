#pragma once


#include "CoreMinimal.h"
#include "AnimGlobals.generated.h"


UENUM(BlueprintType)
enum class EArmPullbackConfig : uint8
{
	Enabled			UMETA(DisplayName = "Enabled"),
	Disabled		UMETA(DisplayName = "Disabled"),
	AimingValue		UMETA(DisplayName = "Based on Aiming Value")
};

USTRUCT(BlueprintType, Meta = (DisplayName = "Arm Pull-Back Configuration"))
struct FArmPullbackConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Arm Pull-Back Configuration"))
	EArmPullbackConfig Config = EArmPullbackConfig::AimingValue;

	// The aiming value that, when exceeded, will disable arm pull-back.
	UPROPERTY(EditAnywhere, Meta = (EditCondition = "Config == EArmPullbackConfig::AimingValue", DisplayName = "Arm Pull-Back Disabled Threshold", ClampMin = "0", ClampMax = "1"))
	float ArmPullbackThreshold = 0.1f;
};

USTRUCT(BlueprintType, Meta = (DisplayName = "Arm Joint Clamping Configurations"))
struct FJointClampConfig
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (DisplayName = "Joint Horizontal Clamp Range"))
	FFloatRange HorizontalRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (DisplayName = "Joint Vertical Clamp Range"))
	FFloatRange VerticalRange;

	FORCEINLINE bool IsClamping() const
	{
		return HorizontalRange.GetLowerBound().IsClosed() || HorizontalRange.GetUpperBound().IsClosed() ||
			VerticalRange.GetLowerBound().IsClosed() || VerticalRange.GetUpperBound().IsClosed();
	}
};
