// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimNode_ProceduralAimOffset.h"
#include "Animation/AnimNodeBase.h"
#include "AnimGlobals.h"
#include "AnimNode_TrueFPSRig.generated.h"

/**
 * 
 */
USTRUCT(BlueprintInternalUseOnly)
struct WEAPONSYSTEMANIMSRUNTIME_API FAnimNode_TrueFPSRig : public FAnimNode_Base
{
	GENERATED_BODY()

	FAnimNode_TrueFPSRig();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	FPoseLink BasePose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	FPoseLink ReferencePose;

	//
	// Bone references
	//

	UPROPERTY(EditAnywhere, Category = "Bone References")
	FBoneReference RightHand;

	UPROPERTY(EditAnywhere, Category = "Bone References")
	FBoneReference LeftHand;

	UPROPERTY(EditAnywhere, Category = "Bone References")
	FBoneReference Head;

	// The bone that will remain rotationally-stable (usually pelvis / top spine bone / head)
	UPROPERTY(EditAnywhere, Category = "Bone References")
	FBoneReference StableBone;

	// Cached arm bones
	int32 RightLowerArmIndex = INDEX_NONE;
	int32 RightUpperArmIndex = INDEX_NONE;
	
	int32 LeftLowerArmIndex = INDEX_NONE;
	int32 LeftUpperArmIndex = INDEX_NONE;

	int32 CachedRightUpperArmParentBoneIndex = INDEX_NONE;
	int32 CachedLeftUpperArmParentBoneIndex = INDEX_NONE;

	//
	// Configurations
	//

	// The aim rotation. The Zero-Rotator being forward
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinShownByDefault, DisplayName = "Aim Rotation"), Category = "Configurations")
	FRotator CameraRelativeRotation = FRotator::ZeroRotator;

	//
	//	Arms IK
	//

	// The weapon's origin relative to the dominant-hand. This will set the weapon's pivot / translational point.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinShownByDefault, DisplayName = "Weapon Origin Relative to Dominant Hand"), Category = "Arms IK")
	FTransform OriginRelativeTransform;

	// The weapon's sights transform relative to the weapon origin transform. Set this if planning on aiming.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, DisplayName = "Weapon Sights Relative to Weapon Origin"), Category = "Arms IK")
	FTransform SightsRelativeTransform;

	// The offset applied to the arms relative to the weapon. Does affect aiming and does affect joint position.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinShownByDefault), Category = "Arms IK")
	FTransform OffsetTransform;

	// Custom weapon offset from the base pose. Does not affect aiming or joint position (if you want this to affect joint
	// position apply the same value to the RightJointLocationOffset and LeftJointLocationOffset pins).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Arms IK")
	FTransform CustomWeaponOffsetTransform;
	
	// Right joint location offset clamping in joint-space (inward horizontal displacement is affected by Min-Value
	// and outward horizontal displacement is affected by Max-Value). Specifying "Open" on a range-boundary means that
	// range will not be clamped. "Inclusive" and "Exclusive" range-boundary specifiers have no difference.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, DisplayName = "Right Joint Offset Clamp"), Category = "Arms IK")
	FJointClampConfig RightJointClamp;

	// Left joint location offset clamping in joint-space (inward horizontal displacement is affected by Min-Value
	// and outward horizontal displacement is affected by Max-Value). Specifying "Open" on a range-boundary means that
	// range will not be clamped. "Inclusive" and "Exclusive" range-boundary specifiers have no difference.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, DisplayName = "Left Joint Offset Clamp"), Category = "Arms IK")
	FJointClampConfig LeftJointClamp;

	// Applies an offset onto the right joint (elbow) in weapon space.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Arms IK")
	FVector RightJointLocationOffset;

	// Applies an offset onto the left joint (elbow) in weapon space.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Arms IK")
	FVector LeftJointLocationOffset;

	//
	// Custom Hand Placement
	//

	// The additive offset to apply to the right hand on-top of the passed-in animation-pose. Useful
	// for things like fore-grips and re-adjusting the grip. In hand-space.
	// WARNING: Additive still applied during montages. Must reset variable if that is not a desired side-effect.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Custom Hand Placement")
	FTransform RightHandAdditiveTransform;

	// The additive offset to apply to the left hand on-top of the passed-in animation-pose. Useful
	// for things like fore-grips and re-adjusting the grip. In hand-space.
	// WARNING: Additive still applied during montages. Must reset variable if that is not a desired side-effect.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault), Category = "Custom Hand Placement")
	FTransform LeftHandAdditiveTransform;

	// The amount the hand additive transform affects the joint position.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, ClampMin = "0", ClampMax = "1"), Category = "Custom Hand Placement")
	float RightHandAdditiveJointInfluence = 0.2f;

	// The amount the hand additive transform affects the joint position.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, ClampMin = "0", ClampMax = "1"), Category = "Custom Hand Placement")
	float LeftHandAdditiveJointInfluence = 0.2f;

	//
	// Aiming
	//

	// The aiming weight used to interpolate between aiming and not aiming. 0 when not aiming, 1 when aiming.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, ClampMin = "0"), Category = "Aiming")
	float AimingValue = 0.f;

	// The amount aiming offsets the joint positions. 1 making the joint moving one-to-one with the
	// weapon when aiming and 0 making the joints as stationary as possible when aiming.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, ClampMin = "0", ClampMax = "1"), Category = "Aiming")
	float AimingJointInfluence = 0.5f;

	//
	// Alpha
	//

	// Weapon location blend weight. Does not affect aiming. Usually should not be modified.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, DisplayName = "Weapon Location Alpha"), Category = "Alpha")
	float WeaponLocationAlpha = 1.f;

	// Weapon rotation blend weight. Does not affect aiming. Usually should not be modified.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, DisplayName = "Weapon Rotation Alpha"), Category = "Alpha")
	float WeaponRotationAlpha = 1.f;

	// The arms blend-weight.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, DisplayName = "Arms IK Alpha", ClampMin = "0", ClampMax = "1"), Category = "Alpha")
	float ArmsAlpha = 1.f;

	// The joint clamping blend-weight. Can lower this to make the clamping less abrupt.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, DisplayName = "Arms Joint Clamping Alpha", ClampMin = "0", ClampMax = "1"), Category = "Alpha")
	float ArmsJointAlpha = 1.f;

	// The procedural aim offset spine-bending blend weight. This does not modify the accumulative offset correction and you will still be oriented
	// by the reference pose regardless of this value.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinHiddenByDefault, DisplayName = "Spine Bend Alpha", ClampMin = "0", ClampMax = "1"), Category = "Alpha")
	float SpineAlpha = 1.f;

	// This node's blend weight.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinShownByDefault, ClampMin = "0", ClampMax = "1"), Category = "Alpha")
	float Alpha = 1.f;

	//
	// Configurations
	//

	// All of the spine / neck / head bone names. The top-most bone should be the
	// last bone-name because that will determine the target rotation
	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Spine To Head Bone Names"), Category = "Configurations")
	TArray<FBoneParams> SpineBoneParams;

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

	UPROPERTY(EditAnywhere, Meta = (EditCondition = "MaxExtension < 1", DisplayName = "Arm Pull-Back Configuration"), Category = "Configurations")
	FArmPullbackConfig ArmPullbackConfig;
	

	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	// End of FAnimNode_Base interface

	bool CanEvaluate() const;
	void ProceduralAimOffset(FPoseContext& Output, FQuat& AccumulativeOffsetInverse);

	//static void SortBones(TArray<FBoneTransform>& OutBoneTransforms);

private:
	template<typename T>
	static void ClampRange(T& InOutValue, const FFloatRange& Range)
	{
		InOutValue = FMath::Clamp<T>(InOutValue, Range.GetLowerBound().IsClosed() ? Range.GetLowerBoundValue() : -INFINITY,
			Range.GetUpperBound().IsClosed() ? Range.GetUpperBoundValue() : INFINITY);
	}

	static FTransform GetCSTransform(const FCompactPose& Pose, int32 BoneIndex)
	{
		FTransform BoneCSTransform = FTransform::Identity;
		while(Pose.GetBones().IsValidIndex(BoneIndex))
		{
			BoneCSTransform *= Pose[FCompactPoseBoneIndex(BoneIndex)];
			BoneIndex = Pose.GetBoneContainer().GetCompactPoseParentBoneArray()[BoneIndex].GetInt();
		}
		return BoneCSTransform;
	}
};
















