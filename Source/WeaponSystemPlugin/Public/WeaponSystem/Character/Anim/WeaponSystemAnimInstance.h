// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WeaponSystemAnimInstance.generated.h"





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
	virtual void NativePostEvaluateAnimation() override;
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
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Update Offset Transform"), Category = "Anim")
	void BP_UpdateOffsetTransform(const float DeltaTime, const FVector& InOffsetLocation, const FRotator& InOffsetRotation, FVector& OutOffsetLocation, FRotator& OutOffsetRotation);
	
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim|IK")
	FQuat TargetPelvisRotation;

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
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Anim|IK")
	FTransform OffsetTransform;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Anim|IK")
	float AimingValue = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "Anim|IK")
	float CurrentWeightScale = 1.f;

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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Anim|IK")
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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations")
	float AccumulativeRotationReturnInterpSpeed = 30.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations")
	float AccumulativeRotationInterpSpeed = 5.f;

	// The rotation interp speed on non-local players' viewports
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	float NonLocalCameraRotationInterpSpeed = 20.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations")
	float VelocityInterpSpeed = 10.f;
	
};
