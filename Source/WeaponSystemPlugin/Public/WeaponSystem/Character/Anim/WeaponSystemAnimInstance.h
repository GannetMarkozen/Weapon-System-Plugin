// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WeaponSystemAnimInstance.generated.h"


struct FHitReaction
{
	FHitReaction() = delete;
	FHitReaction(UCurveFloat* Curve, const FVector& Direction, const float Magnitude, const float PlaySpeed = 1.f)
		: Curve(Curve), Impulse(Direction * Magnitude), PlaySpeed(PlaySpeed)
	{
		check(Curve);
		float Temp;
		Curve->GetTimeRange(Position, Temp);
	}

	UCurveFloat* Curve;
	FVector Impulse;
	float PlaySpeed = 1.f;
	float Position;
};


/**
 * 
 */
UCLASS()
class WEAPONSYSTEMPLUGIN_API UWeaponSystemAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UWeaponSystemAnimInstance();

protected:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	// Called after all the logic this update has been ran
	virtual void PostUpdateAnimation(const float DeltaTime);

	// Called after all the logic this update has been ran
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Post Update Animation"), Category = "Anim")
	void BP_PostUpdateAnimation(const float DeltaTime);

	// Called when the Character reference is set
	virtual void OnCharacterInitialized();

	// Called when the Character reference is set
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Character Initialized"), Category = "Anim")
	void BP_OnCharacterInitialized();

	UFUNCTION()
	FORCEINLINE void Internal_CurrentWeaponChanged(class AWeapon* NewWeapon, class AWeapon* OldWeapon)
	{
		CurrentWeaponChanged(NewWeapon, OldWeapon);
		BP_CurrentWeaponChanged(NewWeapon, OldWeapon);
	}

	// Called whenever the Current Weapon reference changes (may be invalid)
	virtual void CurrentWeaponChanged(class AWeapon* NewWeapon, class AWeapon* OldWeapon);

	// Called whenever the Current Weapon reference changes (may be invalid)
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Current Weapon Changed"), Category = "Anim")
	void BP_CurrentWeaponChanged(class AWeapon* NewWeapon, class AWeapon* OldWeapon);
	
	virtual void UpdateVariables(const float DeltaTime);

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Update Variables"), Category = "Anim")
	void BP_UpdateVariables(const float DeltaTime);

	virtual void UpdateOffsetTransform(const float DeltaTime, FVector& OutOffsetLocation, FRotator& OutOffsetRotation);

	// Override to apply your own weapon offsets
	UFUNCTION(BlueprintImplementableEvent, DisplayName = "Update Offset Transform", Category = "Anim")
	void BP_UpdateOffsetTransform(const float DeltaTime, const FVector& InOffsetLocation, const FRotator& InOffsetRotation, FVector& OutOffsetLocation, FRotator& OutOffsetRotation);

	virtual void UpdatePlacementTransform(const float DeltaTime, FVector& OutPlacementLocation, FRotator& OutPlacementRotation);

	UFUNCTION(BlueprintImplementableEvent, DisplayName = "Update Placement Transform", Category = "Anim")
	void BP_UpdatePlacementTransform(const float DeltaTime, const FVector& InPlacementLocation, const FRotator& InPlacementRotation, FVector& OutPlacementLocation, FRotator& OutPlacementRotation);
	
	virtual void UpdateTurnInPlace(const float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Anim")
	virtual void OnCharacterLanded(class AShooterCharacterBase* InCharacter, const FHitResult& Hit);

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Character Landed"), Category = "Anim")
	void BP_OnCharacterLanded(class AShooterCharacterBase* InCharacter, const FHitResult& Hit);

public:
	/*
	 *	REFERENCES
	 */

	// The Shooter Character that owns this Anim Instance
	UPROPERTY(BlueprintReadWrite, Category = "Anim")
	class AShooterCharacterBase* Character;

	// The Mesh that owns this Anim Instance
	UPROPERTY(BlueprintReadWrite, Category = "Anim")
	class USkeletalMeshComponent* Mesh;

	// The weapon currently equipped. May be invalid
	UPROPERTY(BlueprintReadWrite, Category = "Anim")
	class AWeapon* CurrentWeapon;
	
	UPROPERTY(BlueprintReadWrite, Category = "Anim")
	bool bCurrentWeaponIsValid = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim|IK")
	class UAnimSequence* AnimPose;

	/*
	 *	STATIONARY ANIM 
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Anim|Stationary")
	float RootYawOffset = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim|Stationary")
	bool bIsTurningInPlace = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim|Stationary")
	float StationaryYawThreshold = 45.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim|Stationary")
	float StationaryVelocityThreshold = 10.f;

	// The stationary rotation speed and direction (negative == left positive == right) ranging from -8 to 8
	float StationaryYawInterpSpeed = 0.f;

	// The current yaw rotation speed of this frame. Multiply play rate based on this value
	UPROPERTY(BlueprintReadOnly, Category = "Anim|Stationary")
	float StationaryYawSpeedNormal = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Anim|Stationary")
	float StationaryYawAmount = 0.f;

	/*
	 *	IK
	 */

	// The current weapon sights transform relative to the Dominant-Hand. Used for
	// aiming calculations.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Anim|IK")
	FTransform SightsRelativeTransform;

	// The current weapon origin transform relative to the Dominant-Hand.
	// Used for determining the pivot-point / orientation of this weapon.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Anim|IK")
	FTransform OriginRelativeTransform;

	// Applies an offset to the weapon transform
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Anim|IK")
	FTransform OffsetTransform;

	// Applies an offset to the weapon that doesn't affect aiming
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category= "Anim|IK")
	FTransform PlacementTransform;

	// A value between 0 and 1 that determines the amount we are aiming
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Meta = (ClampMin = "0", ClampMax = "1"), Category = "Anim|IK")
	float AimingValue = 0.f;

	// The multiplier for certain offsets. Larger scale means more exaggerated movements,
	// thus a heavier appearance
	UPROPERTY(BlueprintReadWrite, Category = "Anim|IK")
	float CurrentWeightScale = 1.f;

	// The current weapon's custom placement transform
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Anim|IK")
	FTransform CurrentWeaponCustomOffsetTransform;

	/*
	 *	BASIC LOCOMOTION
	 */
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Anim|Locomotion")
	float MovementDirection = 0.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Anim|Locomotion")
	float MovementSpeed = 0.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Anim|Locomotion")
	bool bIsFalling = false;

	UPROPERTY(BlueprintReadWrite, Category = "Anim|Locomotion")
	float MovementWeaponSwayProgress = 0.f;

	/*
	 *	ACCUMULATIVE OFFSETS
	 */

	UPROPERTY(BlueprintReadWrite, Category = "Anim|IK")
	FRotator AccumulativeRotation;

	UPROPERTY(BlueprintReadWrite, Category = "Anim|IK")
	FRotator AccumulativeRotationInterp;

	UPROPERTY(BlueprintReadWrite, Category = "Anim|IK")
	FVector VelocityTarget;

	UPROPERTY(BlueprintReadWrite, Category = "Anim|IK")
	FVector VelocityInterp;

	UPROPERTY(BlueprintReadWrite, Category = "Anim|IK")
	float MovementSpeedInterp = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "Anim|IK")
	float MovementWeaponSwayProgressTime = 0.f;

	/*
	 *	OTHER VARS
	 */

	// This value should be pre-calculated
	UPROPERTY(BlueprintReadOnly, Category = "Anim|IK")
	FRotator CameraRotation = FRotator(0.f, 90.f, 0.f);

	// Relative to the root
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim|IK")
	FRotator AimRotation;

	// Camera's transform relative to the head
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Anim|IK")
	FVector CameraRelativeLocation;

	UPROPERTY(BlueprintReadOnly, Category = "Anim|IK")
	FVector LastVelocity;

	UPROPERTY(BlueprintReadOnly, Category = "Anim|IK")
	FRotator LastCameraRotation;
	
	/*
	*	CONFIGURATIONS
	*/

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations")
	float MaxMoveSpeed = 600.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations")
	class UCurveVector* IdleWeaponSwayCurve;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations")
	class UCurveVector* MovementWeaponSwayCurve;

	// The amount the weapon pitches towards the camera's pitch value. Should be a very small value or zero
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations")
	float WeaponPitchTiltMultiplier = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations")
	float AccumulativeRotationReturnInterpSpeed = 30.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations")
	float AccumulativeRotationInterpSpeed = 5.f;

	// The rotation interp speed on non-local players' viewports
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	float NonLocalCameraRotationInterpSpeed = 20.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations")
	float VelocityInterpSpeed = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	float LandingImpactBobMultiplier = 1.f;






	// Hit Reactions
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Direction"), Category = "Anim")
	void ApplyHitReaction(UCurveFloat* Curve, const FVector& Direction, const float Magnitude = 1.f, const float PlaySpeed = 1.f);

	TArray<FHitReaction> HitReactions;
private:
	void HandleHitReaction(const float DeltaTime, FVector& OutOffsetLocation, FRotator& OutOffsetRotation);
};






























