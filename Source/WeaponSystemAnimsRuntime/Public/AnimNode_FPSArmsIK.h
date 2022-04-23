// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_FPSArmsIK.generated.h"

/**
 * 
 */
USTRUCT(BlueprintInternalUseOnly)
struct WEAPONSYSTEMANIMSRUNTIME_API FAnimNode_FPSArmsIK : public FAnimNode_Base
{
	GENERATED_BODY()

	FAnimNode_FPSArmsIK();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	FPoseLink BasePose;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	FPoseLink ReferencePose;

	// The aim rotation. The Zero-Rotator being forward
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinShownByDefault, DisplayName = "Aim Rotation"), Category = "Configurations")
	FRotator CameraRelativeRotation = FRotator::ZeroRotator;

	// The weapon's origin / sights relative to the dominant-hand.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinShownByDefault, DisplayName = "Weapon Origin Relative to Dominant Hand"), Category = "Arms IK")
	FTransform WeaponRelativeTransform;

	// The offset applied to the arms relative to the weapon. Does affect aiming and does affect joint position.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinShownByDefault), Category = "Arms IK")
	FTransform OffsetTransform;

	// Custom weapon offset from the base pose. Does not affect aiming or joint position (if you want this to affect joint
	// position apply the same value to the RightJointLocationOffset and LeftJointLocationOffset pins).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Arms IK")
	FTransform CustomWeaponOffsetTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Arms IK")
	FTransform RightHandAdditiveTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Arms IK")
	FTransform LeftHandAdditiveTransform;

	// Applies an offset onto the right joint (elbow) relative to weapon.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Arms IK")
	FVector RightJointLocationOffset;

	// Applies an offset onto the left joint (elbow) relative to weapon.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Arms IK")
	FVector LeftJointLocationOffset;

	// The aiming weight used to interpolate between aiming and not aiming. 0 when not aiming, 1 when aiming.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, ClampMin = "0", ClampMax = "1"), Category = "Arms IK")
	float AimingValue = 0.f;

	// The distance between the sights and the camera when aiming.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Arms IK")
	float AimOffset = 18.f;

	// The amount aiming offsets the joint positions. 1 making the joint moving one-to-one with the
	// weapon when aiming and 0 making the joints as stationary as possible when aiming.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Arms IK")
	float AimingJointInfluence = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, DisplayName = "Arms IK Enabled"), Category = "Alpha")
	bool bIKEnabled = true;

	// Whether or not this node does anything
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinShownByDefault), Category = "Alpha")
	float Alpha = 1.f;

	// IK arms location blend weight. Does not affect aiming.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Alpha")
	float LocationAlpha = 1.f;

	// IK arms rotation blend weight. Does not affect aiming.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Alpha")
	float RotationAlpha = 1.f;
	
	// The camera's relative location to it's attachment onto the head
	UPROPERTY(EditAnywhere, Category = "Configurations")
	FVector CameraRelativeLocation;

	// The yaw offset from the forward direction of this mesh. In the case of the Mannequin this is 90 degrees off
	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Mesh Forward Yaw Offset", ClampMin = "-180", ClampMax = "180"), Category = "Configurations")
	float MeshYawOffset = 90.f;

	// Whether or not the weapon is held in the right hand
	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Is Right Hand Dominant"), Category = "Configurations")
	bool bRightHanded = true;

	// When the dominant arm reaches this extension limit, the weapon will be pulled back so that the arm does not detach from the weapon through over-extension.
	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Non-Dominant Arm Extension Threshold", ClampMin = "0", ClampMax = "1"), Category = "Configurations")
	float MaxExtension = 0.95f;

	UPROPERTY(EditAnywhere, Category = "Head")
	FBoneReference Head;
	
	UPROPERTY(EditAnywhere, Category = "Right Arm")
	FBoneReference RightHand;

	UPROPERTY(EditAnywhere, Category = "Right Arm")
	FBoneReference RightLowerArm;

	UPROPERTY(EditAnywhere, Category = "Right Arm")
	FBoneReference RightUpperArm;
	
	UPROPERTY(EditAnywhere, Category = "Left Arm")
	FBoneReference LeftHand;
	
	UPROPERTY(EditAnywhere, Category = "Left Arm")
	FBoneReference LeftLowerArm;
	
	UPROPERTY(EditAnywhere, Category = "Left Arm")
	FBoneReference LeftUpperArm;
	
	UPROPERTY(EditAnywhere, Category = "Stable Bone")
	FBoneReference StableBone;

	int32 CachedRightUpperArmParentBoneIndex;
	int32 CachedLeftUpperArmParentBoneIndex;
	
 
	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	// End of FAnimNode_Base interface

	bool CanEvaluate() const;
};


