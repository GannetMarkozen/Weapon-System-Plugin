// Fill out your copyright notice in the Description page of Project Settings.



// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimNode_TrueFPSRig.h"
#include "Animation/AnimInstanceProxy.h"
#include "AnimationCore/Public/TwoBoneIK.h"

FAnimNode_TrueFPSRig::FAnimNode_TrueFPSRig()
{
	RightHand = FBoneReference(FName("hand_r"));
	LeftHand = FBoneReference(FName("hand_l"));
	Head = FBoneReference(FName("head"));

	/*RightUpperArm = FBoneReference(FName("upperarm_r"));
	RightLowerArm = FBoneReference(FName("lowerarm_r"));

	LeftUpperArm = FBoneReference(FName("upperarm_l"));
	LeftLowerArm = FBoneReference(FName("lowerarm_l"));*/

	StableBone = FBoneReference(FName("pelvis"));

	constexpr float Weight = 1.f/5.f;
	SpineBoneParams = { FBoneParams(FBoneReference(FName("spine_01")), Weight), FBoneParams(FBoneReference(FName("spine_02")), Weight),
		FBoneParams(FBoneReference(FName("spine_03")), Weight), FBoneParams(FBoneReference(FName("neck_01")), Weight), FBoneParams(FBoneReference(FName("head")), Weight) };
}

void FAnimNode_TrueFPSRig::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	BasePose.Initialize(Context);
	ReferencePose.Initialize(Context);

	const FBoneContainer& RequiredBones = Context.AnimInstanceProxy->GetRequiredBones();
	RightHand.Initialize(RequiredBones);
	LeftHand.Initialize(RequiredBones);
	/*RightUpperArm.Initialize(RequiredBones);
	LeftUpperArm.Initialize(RequiredBones);
	RightLowerArm.Initialize(RequiredBones);
	LeftLowerArm.Initialize(RequiredBones);*/
	Head.Initialize(RequiredBones);
	StableBone.Initialize(RequiredBones);
	for(FBoneParams& Bone : SpineBoneParams)
		Bone.Bone.Initialize(RequiredBones);

	//if(RightUpperArm.IsValidToEvaluate()) CachedRightUpperArmParentBoneIndex = RequiredBones.GetReferenceSkeleton().GetParentIndex(RightUpperArm.BoneIndex);
	//if(LeftUpperArm.IsValidToEvaluate()) CachedLeftUpperArmParentBoneIndex = RequiredBones.GetReferenceSkeleton().GetParentIndex(LeftUpperArm.BoneIndex);

	const FReferenceSkeleton& RefSkel = RequiredBones.GetReferenceSkeleton();
	
	RightLowerArmIndex = RefSkel.GetParentIndex(RightHand.BoneIndex);
	if(RightLowerArmIndex != INDEX_NONE) RightUpperArmIndex = RefSkel.GetParentIndex(RightLowerArmIndex);

	LeftLowerArmIndex = RefSkel.GetParentIndex(LeftHand.BoneIndex);
	if(LeftLowerArmIndex != INDEX_NONE) LeftUpperArmIndex = RefSkel.GetParentIndex(LeftLowerArmIndex);

	if(RightUpperArmIndex != INDEX_NONE) CachedRightUpperArmParentBoneIndex = RefSkel.GetParentIndex(RightUpperArmIndex);
	if(LeftUpperArmIndex != INDEX_NONE) CachedLeftUpperArmParentBoneIndex = RefSkel.GetParentIndex(LeftUpperArmIndex);
}

void FAnimNode_TrueFPSRig::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	BasePose.CacheBones(Context);
	ReferencePose.CacheBones(Context);
}

void FAnimNode_TrueFPSRig::GatherDebugData(FNodeDebugData& DebugData)
{
	BasePose.GatherDebugData(DebugData);
	ReferencePose.GatherDebugData(DebugData);
}


void FAnimNode_TrueFPSRig::Update_AnyThread(const FAnimationUpdateContext& Context)
{
	BasePose.Update(Context);
	ReferencePose.Update(Context);
	GetEvaluateGraphExposedInputs().Execute(Context);
}


bool FAnimNode_TrueFPSRig::CanEvaluate() const
{
	if(FMath::IsNearlyZero(Alpha))
		return false;
	
	/*if(!RightHand.IsValidToEvaluate() || !RightLowerArm.IsValidToEvaluate() || !RightUpperArm.IsValidToEvaluate() ||
		!LeftHand.IsValidToEvaluate() || !LeftLowerArm.IsValidToEvaluate() || !LeftUpperArm.IsValidToEvaluate() ||
			!StableBone.IsValidToEvaluate())*/
	if(!RightHand.IsValidToEvaluate() || !LeftHand.IsValidToEvaluate() || RightLowerArmIndex == INDEX_NONE || LeftLowerArmIndex == INDEX_NONE ||
		RightUpperArmIndex == INDEX_NONE || LeftUpperArmIndex == INDEX_NONE)
	{
		UE_LOG(LogTemp, Error, TEXT("True FPS Rig: Not all arm bones are valid"));
		return false;
	}

	if(CachedRightUpperArmParentBoneIndex == INDEX_NONE)
	{
		UE_LOG(LogTemp, Error, TEXT("True FPS Rig: Right Upper Arm does not have valid parent bone"));
		return false;
	}

	if(CachedLeftUpperArmParentBoneIndex == INDEX_NONE)
	{
		UE_LOG(LogTemp, Error, TEXT("True FPS Righ: Left Upper Arm does not have valid parent bone"));
		return false;
	}

	for(const FBoneParams& BoneParam : SpineBoneParams)
		if(!BoneParam.Bone.IsValidToEvaluate())
		{
			UE_LOG(LogTemp, Error, TEXT("True FPS Rig: Spine parameter %s is not valid"), *BoneParam.Bone.BoneName.ToString());
			return false;
		}
			
	return true;		
}

#define CS_TRANSFORM(Index) FAnimationRuntime::GetComponentSpaceTransform(RefSkel, BSBoneTransforms, Index)

void FAnimNode_TrueFPSRig::Evaluate_AnyThread(FPoseContext& Output)
{
	BasePose.Evaluate(Output);
	if(!CanEvaluate()) return;
	
	CameraRelativeRotation.Normalize();

	if(FMath::IsNearlyZero(ArmsAlpha) && !SpineBoneParams.IsEmpty())
	{
		FQuat Temp;
		ProceduralAimOffset(Output, Temp);
		return;
	}
	
	//
	//	Cache initial transforms
	//

	const FBoneContainer& RequiredBones = Output.Pose.GetBoneContainer();
	const FReferenceSkeleton& RefSkel = RequiredBones.GetReferenceSkeleton();
	TArray<FTransform>& BSBoneTransforms = *(TArray<FTransform>*)&Output.Pose.GetBones();

	// Init arm transforms. Component-space.
	/*const FTransform CSInitRightHandTransform = CS_TRANSFORM(RightHand.BoneIndex);
	const FTransform CSInitLeftHandTransform = CS_TRANSFORM(LeftHand.BoneIndex);*/
	
	const FTransform CSInitRightJointTransform = CS_TRANSFORM(RightLowerArmIndex);
	const FTransform CSInitLeftJointTransform = CS_TRANSFORM(LeftLowerArmIndex);

	const FTransform CSInitRightHandTransform = BSBoneTransforms[RightHand.BoneIndex] * CSInitRightJointTransform;
	const FTransform CSInitLeftHandTransform = BSBoneTransforms[LeftHand.BoneIndex] * CSInitLeftJointTransform;
	
	const FTransform CSInitCameraTransform = FTransform(FRotator(0.f, MeshYawOffset, 0.f), (FTransform(CameraRelativeLocation) * CS_TRANSFORM(Head.BoneIndex)).GetLocation());
	FTransform CSInitWeaponTransform = OriginRelativeTransform * (bRightHanded ? CSInitRightHandTransform : CSInitLeftHandTransform);// Weapon relative transform is bone-space off of primary hand

	// Apply procedural aim offset
	FQuat AccumulativeOffsetInverse;
	if(!SpineBoneParams.IsEmpty())
	{
		ProceduralAimOffset(Output, AccumulativeOffsetInverse);
	}
	else
	{
		FPoseContext RefPose(Output.AnimInstanceProxy);
		ReferencePose.Evaluate(RefPose);
		AccumulativeOffsetInverse = FAnimNode_ProceduralAimOffset::GetAccumulativeOffsetInverse(StableBone.BoneIndex, RefSkel,
			BSBoneTransforms, *reinterpret_cast<const TArray<FTransform>*>(&RefPose.Pose.GetBones()));
	}

	//
	//	Post aim offset applied
	//

	// Initialize arm transform vars
	/*FTransform RightUpperArmTransform = CS_TRANSFORM(RightUpperArm.BoneIndex);
	FTransform RightLowerArmTransform = CS_TRANSFORM(RightLowerArm.BoneIndex);
	FTransform RightHandTransform = CS_TRANSFORM(RightHand.BoneIndex);

	FTransform LeftUpperArmTransform = CS_TRANSFORM(LeftUpperArm.BoneIndex);
	FTransform LeftLowerArmTransform = CS_TRANSFORM(LeftLowerArm.BoneIndex);
	FTransform LeftHandTransform = CS_TRANSFORM(LeftHand.BoneIndex);*/

	/*FTransform RightUpperArmTransform = CS_TRANSFORM(RightUpperArm.BoneIndex);
	FTransform RightLowerArmTransform = BSBoneTransforms[RightLowerArm.BoneIndex] * RightUpperArmTransform;
	FTransform RightHandTransform = BSBoneTransforms[RightHand.BoneIndex] * RightLowerArmTransform;

	FTransform LeftUpperArmTransform = CS_TRANSFORM(LeftUpperArm.BoneIndex);
	FTransform LeftLowerArmTransform = BSBoneTransforms[LeftLowerArm.BoneIndex] * LeftUpperArmTransform;
	FTransform LeftHandTransform = BSBoneTransforms[LeftHand.BoneIndex] * LeftLowerArmTransform;*/

	FTransform RightUpperArmTransform = CS_TRANSFORM(RightUpperArmIndex);
	FTransform RightLowerArmTransform = BSBoneTransforms[RightLowerArmIndex] * RightUpperArmTransform;
	FTransform RightHandTransform = BSBoneTransforms[RightHand.BoneIndex] * RightLowerArmTransform;

	FTransform LeftUpperArmTransform = CS_TRANSFORM(LeftUpperArmIndex);
	FTransform LeftLowerArmTransform = BSBoneTransforms[LeftLowerArmIndex] * LeftUpperArmTransform;
	FTransform LeftHandTransform = BSBoneTransforms[LeftHand.BoneIndex] * LeftLowerArmTransform;

	//
	//	Calculate weapon transform in component-space
	//
	
	// Current component-space camera transform.
	const FTransform& CSCameraTransform = FTransform(CameraRelativeRotation + FRotator(0.f, MeshYawOffset, 0.f), (FTransform(CameraRelativeLocation) * CS_TRANSFORM(Head.BoneIndex)).GetLocation());

	// Camera transform to weapon transform with root offset and accumulative spine offset applied.
	const FTransform& CameraToWeaponTransform = CSInitWeaponTransform.GetRelativeTransform(
		FTransform(BSBoneTransforms[0].GetRotation() * AccumulativeOffsetInverse.Inverse() * CSInitCameraTransform.GetRotation(), CSInitCameraTransform.GetLocation()));
	
	// Get current weapon transform by the camera offset
	FTransform CSWeaponTransform = CameraToWeaponTransform * CSCameraTransform;
	
	// Get aiming and non-aiming transforms
	const FTransform& AimingTransform = OriginRelativeTransform.GetRelativeTransform(SightsRelativeTransform) * CSCameraTransform;
	
	FTransform NonAimingTransform = CustomWeaponOffsetTransform * CSWeaponTransform;
	NonAimingTransform.SetRotation(FQuat::FastLerp(CSInitWeaponTransform.GetRotation(), NonAimingTransform.GetRotation(), WeaponRotationAlpha));
	NonAimingTransform.SetLocation(NonAimingTransform.GetLocation() * WeaponLocationAlpha + CSInitWeaponTransform.GetLocation() * (1.f - WeaponLocationAlpha));

	CSWeaponTransform = NonAimingTransform;
	CSWeaponTransform.NormalizeRotation();
	CSWeaponTransform.BlendWith(AimingTransform, AimingValue);
	CSWeaponTransform = OffsetTransform * CSWeaponTransform;

	// If arm pull-back is enabled...
	if(ArmPullbackConfig.Config == EArmPullbackConfig::Enabled || (ArmPullbackConfig.Config == EArmPullbackConfig::AimingValue && ArmPullbackConfig.ArmPullbackThreshold > AimingValue))
	{
		// Get the max reach and current reach amount on the non-dominant arm.
		// Then we will pull the weapon back by the reach over the threshold amount.
		float ReachDist;
		float MaxReach;
		if(bRightHanded)
		{// Calculate the projected hand transform
			ReachDist = (LeftUpperArmTransform.GetLocation() - (CSInitLeftHandTransform.GetRelativeTransform(CSInitWeaponTransform) * CSWeaponTransform).GetLocation()).Size();
			//MaxReach = BSBoneTransforms[LeftLowerArm.BoneIndex].GetLocation().Size() + BSBoneTransforms[LeftHand.BoneIndex].GetLocation().Size();
			MaxReach = BSBoneTransforms[LeftLowerArmIndex].GetLocation().Size() + BSBoneTransforms[LeftHand.BoneIndex].GetLocation().Size();
		}
		else
		{
			ReachDist = (RightUpperArmTransform.GetLocation() - (CSInitRightHandTransform.GetRelativeTransform(CSInitWeaponTransform) * CSWeaponTransform).GetLocation()).Size();
			//MaxReach = BSBoneTransforms[RightLowerArm.BoneIndex].GetLocation().Size() + BSBoneTransforms[RightHand.BoneIndex].GetLocation().Size();
			MaxReach = BSBoneTransforms[RightLowerArmIndex].GetLocation().Size() + BSBoneTransforms[RightHand.BoneIndex].GetLocation().Size();
		}

		// Calculate the distance to pull the weapon back
		const float PullbackDist = MaxReach * MaxExtension - ReachDist;
		if(PullbackDist < 0)// Pull back directly towards camera
		{
			const FTransform PullbackTransform((CSWeaponTransform.GetLocation() - CSCameraTransform.GetLocation()).GetSafeNormal() * PullbackDist);
			CSWeaponTransform *= PullbackTransform;
			if(!FMath::IsNearlyZero(AimingValue))// Offset non-aiming transform as well to calculate joint transform influence later.
				NonAimingTransform *= PullbackTransform;
		}
	}
	
	
	FTransform JointInfluenceWeaponTransform = CSWeaponTransform;
	if(!FMath::IsNearlyZero(AimingJointInfluence))// Blend joint influence transform by non-aiming transform by blend amount
		JointInfluenceWeaponTransform.BlendWith(NonAimingTransform, 1.f - AimingJointInfluence);

	//
	// Right Arm IK
	//

	// The new right hand transform in component-space
	const FTransform& RightEffectorTransform = CSInitRightHandTransform.GetRelativeTransform(CSInitWeaponTransform) * (RightHandAdditiveTransform * CSWeaponTransform);

	// Removing the custom weapon offset from the weapon transform to get the original joint location without an offset then applying whatever offset specified
	/*const FVector& RightJointLocation = (CSInitRightJointTransform.GetRelativeTransform(CSInitWeaponTransform) *
		FTransform(RightJointLocationOffset) * CustomWeaponOffsetTransform.Inverse() * (RightHandAdditiveTransform * JointInfluenceWeaponTransform)).GetLocation();*/

	FTransform RightJointAdditiveTransform;
	RightJointAdditiveTransform.BlendWith(RightHandAdditiveTransform, RightHandAdditiveJointInfluence);

	// The target transform for the right joint in component-space
	const FTransform RightJointTargetTransform = RightJointAdditiveTransform * CSInitRightJointTransform.GetRelativeTransform(CSInitWeaponTransform) *
		FTransform(RightJointLocationOffset) * CustomWeaponOffsetTransform.Inverse() * JointInfluenceWeaponTransform;

	// Right joint location in component-space
	FVector RightJointLocation;
	if(RightJointClamp.IsClamping() && !FMath::IsNearlyZero(ArmsJointAlpha))
	{
		// The joint transform without any additives applied
		const FTransform JointNoAdditiveTransform = RightJointAdditiveTransform * CSInitRightJointTransform.GetRelativeTransform(CSInitWeaponTransform) *
			FTransform(RightJointLocationOffset) * CameraToWeaponTransform * CSCameraTransform;// CameraToWeaponTransform * CSCameraTransform gets the weapon transform without additives

		FTransform Offset = RightJointTargetTransform.GetRelativeTransform(JointNoAdditiveTransform);
		const FQuat Orientation = CSInitRightJointTransform.GetRotation();
		FVector OrientationOffsetLocation = Orientation.UnrotateVector(Offset.GetLocation());

		// Clamp the orientation location offset between the ranges
		ClampRange(OrientationOffsetLocation.Y, RightJointClamp.HorizontalRange);
		ClampRange(OrientationOffsetLocation.Z, RightJointClamp.VerticalRange);
		Offset.SetLocation(Orientation.RotateVector(OrientationOffsetLocation));
		
		// Set joint location by the clamped joint location blended by the target joint location
		RightJointLocation = (Offset * JointNoAdditiveTransform).GetLocation() * ArmsJointAlpha + RightJointTargetTransform.GetLocation() * (1.f - ArmsJointAlpha);
	}
	else
	{// Set to target location if no clamping is needed
		RightJointLocation = RightJointTargetTransform.GetLocation();
	}
	
	AnimationCore::SolveTwoBoneIK(RightUpperArmTransform, RightLowerArmTransform, RightHandTransform,
		RightJointLocation, RightEffectorTransform.GetLocation(), false, 0.f, 0.f);

	RightHandTransform.SetRotation(RightEffectorTransform.GetRotation());

	//
	// Left Arm IK
	//

	// The new left hand transform in component-space
	const FTransform LeftEffectorTransform = LeftHandAdditiveTransform * (CSInitLeftHandTransform.GetRelativeTransform(CSInitWeaponTransform) * CSWeaponTransform);

	FTransform LeftJointAdditiveTransform;
	LeftJointAdditiveTransform.BlendWith(LeftHandAdditiveTransform, LeftHandAdditiveJointInfluence);

	// Target transform for the left joint in component-space
	const FTransform LeftJointTargetTransform = LeftJointAdditiveTransform * CSInitLeftJointTransform.GetRelativeTransform(CSInitWeaponTransform) *
			FTransform(LeftJointLocationOffset) * CustomWeaponOffsetTransform.Inverse() * JointInfluenceWeaponTransform;

	// Left joint location in component-space
	FVector LeftJointLocation;
	if(LeftJointClamp.IsClamping() && !FMath::IsNearlyZero(ArmsJointAlpha))
	{
		// The joint transform without any additives applied
		const FTransform JointNoAdditiveTransform = LeftJointAdditiveTransform * CSInitLeftJointTransform.GetRelativeTransform(CSInitWeaponTransform) *
			FTransform(LeftJointLocationOffset) * CameraToWeaponTransform * CSCameraTransform;// CameraToWeaponTransform * CSCameraTransform gets the weapon transform without additives

		FTransform Offset = LeftJointTargetTransform.GetRelativeTransform(JointNoAdditiveTransform);
		const FQuat Orientation = CSInitLeftJointTransform.GetRotation();
		FVector OrientationOffsetLocation = Orientation.UnrotateVector(Offset.GetLocation());

		// Clamp the orientation location offset between the ranges
		ClampRange(OrientationOffsetLocation.Y, LeftJointClamp.HorizontalRange);
		ClampRange(OrientationOffsetLocation.Z, LeftJointClamp.VerticalRange);
		Offset.SetLocation(Orientation.RotateVector(OrientationOffsetLocation));

		// Set joint location by the clamped joint location blended by the target joint location
		LeftJointLocation = (Offset * JointNoAdditiveTransform).GetLocation() * ArmsJointAlpha + LeftJointTargetTransform.GetLocation() * (1.f - ArmsJointAlpha);
	}
	else
	{// Set to target location if no clamping is needed
		LeftJointLocation = LeftJointTargetTransform.GetLocation();
	}
	
	
	AnimationCore::SolveTwoBoneIK(LeftUpperArmTransform, LeftLowerArmTransform, LeftHandTransform,
		LeftJointLocation, LeftEffectorTransform.GetLocation(), false, 0.f, 0.f);

	LeftHandTransform.SetRotation(LeftEffectorTransform.GetRotation());
	
	//
	// Apply IKs
	//

	const float TotalArmsAlpha = Alpha * ArmsAlpha;
	BSBoneTransforms[RightUpperArmIndex].BlendWith(RightUpperArmTransform.GetRelativeTransform(CS_TRANSFORM(CachedRightUpperArmParentBoneIndex)), TotalArmsAlpha);
	BSBoneTransforms[RightLowerArmIndex].BlendWith(RightLowerArmTransform.GetRelativeTransform(RightUpperArmTransform), TotalArmsAlpha);
	BSBoneTransforms[RightHand.BoneIndex].BlendWith(RightHandTransform.GetRelativeTransform(RightLowerArmTransform), TotalArmsAlpha);

	BSBoneTransforms[LeftUpperArmIndex].BlendWith(LeftUpperArmTransform.GetRelativeTransform(CS_TRANSFORM(CachedLeftUpperArmParentBoneIndex)), TotalArmsAlpha);
	BSBoneTransforms[LeftLowerArmIndex].BlendWith(LeftLowerArmTransform.GetRelativeTransform(LeftUpperArmTransform), TotalArmsAlpha);
	BSBoneTransforms[LeftHand.BoneIndex].BlendWith(LeftHandTransform.GetRelativeTransform(LeftLowerArmTransform), TotalArmsAlpha);
	
	/*BSBoneTransforms[RightUpperArm.BoneIndex].BlendWith(RightUpperArmTransform.GetRelativeTransform(CS_TRANSFORM(CachedRightUpperArmParentBoneIndex)), Alpha * ArmsAlpha);
	BSBoneTransforms[RightLowerArm.BoneIndex].BlendWith(RightLowerArmTransform.GetRelativeTransform(RightUpperArmTransform), Alpha * ArmsAlpha);
	BSBoneTransforms[RightHand.BoneIndex].BlendWith(RightHandTransform.GetRelativeTransform(RightLowerArmTransform), Alpha * ArmsAlpha);

	BSBoneTransforms[LeftUpperArm.BoneIndex].BlendWith(LeftUpperArmTransform.GetRelativeTransform(CS_TRANSFORM(CachedLeftUpperArmParentBoneIndex)), Alpha * ArmsAlpha);
	BSBoneTransforms[LeftLowerArm.BoneIndex].BlendWith(LeftLowerArmTransform.GetRelativeTransform(LeftUpperArmTransform), Alpha * ArmsAlpha);
	BSBoneTransforms[LeftHand.BoneIndex].BlendWith(LeftHandTransform.GetRelativeTransform(LeftLowerArmTransform), Alpha * ArmsAlpha);*/



	
	/*BSBoneTransforms[RightUpperArm.BoneIndex] = RightUpperArmTransform.GetRelativeTransform(CS_TRANSFORM(RefSkel.GetParentIndex(RightUpperArm.BoneIndex)));
	BSBoneTransforms[RightLowerArm.BoneIndex] = RightLowerArmTransform.GetRelativeTransform(RightUpperArmTransform);
	BSBoneTransforms[RightHand.BoneIndex] = RightHandTransform.GetRelativeTransform(RightLowerArmTransform);

	BSBoneTransforms[LeftUpperArm.BoneIndex] = LeftUpperArmTransform.GetRelativeTransform(CS_TRANSFORM(RefSkel.GetParentIndex(LeftUpperArm.BoneIndex)));
	BSBoneTransforms[LeftLowerArm.BoneIndex] = LeftLowerArmTransform.GetRelativeTransform(LeftUpperArmTransform);
	BSBoneTransforms[LeftHand.BoneIndex] = LeftHandTransform.GetRelativeTransform(LeftLowerArmTransform);*/
}


/*
 *
 *	Procedural Aim Offset
 *
 */




void FAnimNode_TrueFPSRig::ProceduralAimOffset(FPoseContext& Output, FQuat& AccumulativeOffsetInverse)
{
	/*FCompactPose OutRefPose(Output.Pose);
	FBlendedCurve OutRefCurve;
	FStackCustomAttributes OutRefAttr;
	FAnimationPoseData OutRefData(OutRefPose, OutRefCurve, OutRefAttr);

	// If ReferencePose is valid, set transforms, else set transforms to reference skeleton pose
	if(ReferencePose)
	{
		ReferencePose->GetAnimationPose(OutRefData, FAnimExtractContext(ReferenceFrameTime, false));
	}
	else
	{
		OutRefData.GetPose().ResetToRefPose();
	}*/
	if(FMath::IsNearlyZero(SpineAlpha)) return;

	FPoseContext RefPose(Output.AnimInstanceProxy);
	ReferencePose.Evaluate(RefPose);
	
	const FReferenceSkeleton& RefSkel = Output.AnimInstanceProxy->GetSkeleton()->GetReferenceSkeleton();
	//const TArray<FTransform>& RefBoneTransforms = (TArray<FTransform>&)OutRefData.GetPose().GetBones();
	const TArray<FTransform>& RefBoneTransforms = *reinterpret_cast<const TArray<FTransform>*>(&RefPose.Pose.GetBones());
	const TArray<FTransform>& CurrBoneTransforms = (TArray<FTransform>&)Output.Pose.GetBones();

	// Get the accumulative spine offset from the last index of the spine params
	//const int32 LastSpineIdx = SpineBoneParams[SpineBoneParams.Num() - 1].Bone.BoneIndex;
	///*FQuat*/ AccumulativeOffsetInverse = FAnimationRuntime::GetComponentSpaceTransform(RefSkel, RefBoneTransforms, LastSpineIdx).GetRotation() *
	//	FAnimationRuntime::GetComponentSpaceTransform(RefSkel, CurrBoneTransforms, LastSpineIdx).GetRotation().Inverse() * CurrBoneTransforms[0].GetRotation();

	/*AccumulativeOffsetInverse = FAnimationRuntime::GetComponentSpaceTransform(RefSkel, RefBoneTransforms, StableBone.BoneIndex).GetRotation() *
		FAnimationRuntime::GetComponentSpaceTransform(RefSkel, CurrBoneTransforms, StableBone.BoneIndex).GetRotation().Inverse() * CurrBoneTransforms[0].GetRotation();*/
	
	AccumulativeOffsetInverse = FAnimNode_ProceduralAimOffset::GetAccumulativeOffsetInverse(StableBone.BoneIndex, RefSkel, CurrBoneTransforms, RefBoneTransforms);

	// Reverse twisting if exceeds 180 degrees
	if(abs(AccumulativeOffsetInverse.GetAngle()) > PI)
		AccumulativeOffsetInverse *= FQuat(AccumulativeOffsetInverse.Vector(), -2 * PI);

	// Cache spine offset inverses to be applied later so that
	// the references to not get modified in the process of application
	TArray<FQuat> SpineOffsetInverses;
	for(const FBoneParams& BoneParams : SpineBoneParams)
	{
		const int32 i = BoneParams.Bone.BoneIndex;// Spine index as i
		const FQuat& OffsetInverse = CurrBoneTransforms[i].GetRotation() * (FAnimationRuntime::GetComponentSpaceTransform(RefSkel, CurrBoneTransforms, i).GetRotation().Inverse() * CurrBoneTransforms[0].GetRotation());
		SpineOffsetInverses.Add(OffsetInverse);
	}
	
	
	// Copy rotation as to not change variable value
	// and have weird stuff happen with static values
	FRotator TargetRot = CameraRelativeRotation;
	TargetRot += CurrBoneTransforms[0].Rotator().GetInverse();// Rotate by root offset
	TargetRot *= SpineAlpha;// Apply the spine-bending alpha to the camera rotation
	TargetRot.Normalize();// Normalize to prevent weird behaviour

	// Apply compounding camera axes in the order for the desired outcome
	FQuat OrientationCameraRot(FVector::ForwardVector, 0.f);
	OrientationCameraRot *= FQuat(-OrientationCameraRot.GetRightVector(), FMath::DegreesToRadians(TargetRot.Roll));// Apply Roll
	OrientationCameraRot *= FQuat(OrientationCameraRot.GetUpVector().RotateAngleAxis(TargetRot.Roll * 2.f, FVector::RightVector), FMath::DegreesToRadians(TargetRot.Yaw));// Apply Yaw
	OrientationCameraRot *= FQuat(OrientationCameraRot.GetForwardVector().RotateAngleAxis(TargetRot.Yaw, -FVector::UpVector).RotateAngleAxis(TargetRot.Roll * 2.f, FVector::RightVector), FMath::DegreesToRadians(TargetRot.Pitch));// Apply Pitch, rotated about target yaw
	OrientationCameraRot *= AccumulativeOffsetInverse;// Apply accumulative offset inverse to correct for any additives to the Reference Pose

	// For each bone
	for(int32 i = 0; i < SpineBoneParams.Num(); i++)
	{// Reference to current spine bone transform to modify
		FTransform& SpineTransform = Output.Pose.GetMutableBones()[SpineBoneParams[i].Bone.BoneIndex];
		
		// Convert the camera rotation to axis and angle to modify axis of rotation
		FVector Axis; float Angle;
		OrientationCameraRot.ToAxisAndAngle(Axis, Angle);

		// Apply blend-weight to the spine angle
		Angle *= SpineBoneParams[i].Weight;
		
		// Rotate axis by the inverse of the spine bone-space transform offset from the local rotation.
		Axis = SpineOffsetInverses[i].RotateVector(Axis);

		// Apply offset to spine, apply alpha as lerp between base and base + offset
		const FQuat& SpineRot = SpineTransform.GetRotation();
		const FQuat& TargetSpineRot = FQuat(Axis, Angle) * SpineRot;
		//SpineTransform.SetRotation(TargetSpineRot);
		SpineTransform.SetRotation(FQuat::FastLerp(SpineRot, TargetSpineRot, Alpha).GetNormalized());
	}
}




#undef CS_TRANSFORM











/*
void FAnimNode_TrueFPSRig::InitializeBoneReferences(const FBoneContainer& RequiredBones)
{
	RightHand.Initialize(RequiredBones);
	LeftHand.Initialize(RequiredBones);
	RightUpperArm.Initialize(RequiredBones);
	LeftUpperArm.Initialize(RequiredBones);
	RightLowerArm.Initialize(RequiredBones);
	LeftLowerArm.Initialize(RequiredBones);
	Head.Initialize(RequiredBones);
	for(FBoneParams& Bone : SpineBoneParams)
		Bone.Bone.Initialize(RequiredBones);
}

bool FAnimNode_TrueFPSRig::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
{
	//if(ReferencePose && !ReferencePose->GetSkeleton()->IsCompatible(Skeleton)) return false;
	if(RightHand.BoneIndex <= RightLowerArm.BoneIndex || RightLowerArm.BoneIndex <= RightUpperArm.BoneIndex) return false;
	if(LeftHand.BoneIndex <= LeftLowerArm.BoneIndex || LeftLowerArm.BoneIndex <= LeftUpperArm.BoneIndex) return false;
	
	for(const FBoneReference& Bone : {RightHand, RightUpperArm, RightLowerArm, LeftHand, LeftUpperArm, LeftLowerArm, Head})
		if(!Bone.IsValidToEvaluate(RequiredBones))
		{
			UE_LOG(LogTemp, Error, TEXT("%s arm bone name is invalid"), *Bone.BoneName.ToString());
			return false;
		}

	for(const FBoneParams& BoneParam : SpineBoneParams)
		if(!BoneParam.Bone.IsValidToEvaluate(RequiredBones))
		{
			UE_LOG(LogTemp, Error, TEXT("%s spine bone name is invalid"), *BoneParam.Bone.BoneName.ToString());
			return false;
		}

	return true;
}*/

/*
void FAnimNode_TrueFPSRig::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{
	ComponentPose.EvaluateComponentSpace(Output);

	const FBoneContainer& RequiredBones = Output.Pose.GetPose().GetBoneContainer();
	const FReferenceSkeleton& RefSkel = RequiredBones.GetReferenceSkeleton();

	// Initial references set before procedural aim offset is applied
	const FTransform InitialCameraTransform(FRotator(0.f, MeshYawOffset, 0.f), Output.Pose.GetComponentSpaceTransform(Head.CachedCompactPoseIndex).GetLocation());

	// Init hand transforms
	const FTransform InitialRightHandTransform = Output.Pose.GetComponentSpaceTransform(RightHand.CachedCompactPoseIndex);
	const FTransform InitialLeftHandTransform = Output.Pose.GetComponentSpaceTransform(LeftHand.CachedCompactPoseIndex);

	const FTransform InitialRightJointTransform = Output.Pose.GetComponentSpaceTransform(RightLowerArm.CachedCompactPoseIndex);
	const FTransform InitialLeftJointTransform = Output.Pose.GetComponentSpaceTransform(LeftLowerArm.CachedCompactPoseIndex);

	const FTransform& InitialWeaponTransform = WeaponRelativeTransform * InitialRightHandTransform;//(bRightHanded ? InitialRightHandTransform : InitialLeftHandTransform);
	const FTransform& InitialCameraToWeaponTransform = InitialWeaponTransform.GetRelativeTransform(InitialCameraTransform);//InitialCameraTransform.GetRelativeTransform(InitialWeaponTransform);

	// Rotate root and spine
	Output.Pose.SafeSetCSBoneTransforms({ FBoneTransform(FCompactPoseBoneIndex(0), FTransform(FRotator(0.f, RootYawOffset, 0.f))) });
	ProceduralAimOffset(Output, OutBoneTransforms);

	const FTransform& CameraTransform = FTransform(CameraRelativeRotation + FRotator(0.f, MeshYawOffset, 0.f), Output.Pose.GetComponentSpaceTransform(Head.CachedCompactPoseIndex).GetLocation());
	const FTransform& WeaponTransform = InitialCameraToWeaponTransform * CameraTransform;// Get current weapon transform by the camera offset
	

	FTransform RightUpperArmTransform = Output.Pose.GetComponentSpaceTransform(RightUpperArm.CachedCompactPoseIndex);
	FTransform RightLowerArmTransform = Output.Pose.GetComponentSpaceTransform(RightLowerArm.CachedCompactPoseIndex);
	FTransform RightHandTransform = Output.Pose.GetComponentSpaceTransform(RightHand.CachedCompactPoseIndex);

	const float RUpperArmLen = Output.Pose.GetPose().GetBones()[RightLowerArm.BoneIndex].GetLocation().Size();
	const float RLowerArmLen = Output.Pose.GetPose().GetBones()[RightHand.BoneIndex].GetLocation().Size();

	//const FTransform& CameraToWeaponTransform = InitialWeaponTransform.GetRelativeTransform(InitialCameraTransform);
	
	const FTransform& RightEffectorTransform =  InitialRightHandTransform.GetRelativeTransform(InitialWeaponTransform) * WeaponTransform;//InitialRightHandTransform.GetRelativeTransform(InitialCameraTransform) * CameraTransform;
	//const FVector& RightJointLocation = (InitialRightJointTransform.GetRelativeTransform(InitialCameraTransform) * CameraTransform).GetLocation();
	const FVector& RightJointLocation = (InitialRightJointTransform.GetRelativeTransform(InitialWeaponTransform) * WeaponTransform).GetLocation();
	
	AnimationCore::SolveTwoBoneIK(RightUpperArmTransform, RightLowerArmTransform, RightHandTransform,
		RightJointLocation, RightEffectorTransform.GetLocation(), false, 0.f, 0.f);

	RightHandTransform.SetRotation(RightEffectorTransform.GetRotation());


	
	FTransform LeftUpperArmTransform = Output.Pose.GetComponentSpaceTransform(LeftUpperArm.CachedCompactPoseIndex);
	FTransform LeftLowerArmTransform = Output.Pose.GetComponentSpaceTransform(LeftLowerArm.CachedCompactPoseIndex);
	FTransform LeftHandTransform = Output.Pose.GetComponentSpaceTransform(LeftHand.CachedCompactPoseIndex);

	const FTransform& LeftEffectorTransform = InitialLeftHandTransform.GetRelativeTransform(InitialWeaponTransform) * WeaponTransform;
	const FVector& LeftJointLocation = (InitialLeftJointTransform.GetRelativeTransform(InitialWeaponTransform) * WeaponTransform).GetLocation();
 
	AnimationCore::SolveTwoBoneIK(LeftUpperArmTransform, LeftLowerArmTransform, LeftHandTransform,
		LeftJointLocation, LeftEffectorTransform.GetLocation(), false, 0.f, 0.f);

	LeftHandTransform.SetRotation(LeftEffectorTransform.GetRotation());






	OutBoneTransforms.Add(FBoneTransform(LeftUpperArm.CachedCompactPoseIndex, LeftUpperArmTransform));
	OutBoneTransforms.Add(FBoneTransform(LeftLowerArm.CachedCompactPoseIndex, LeftLowerArmTransform));
	OutBoneTransforms.Add(FBoneTransform(LeftHand.CachedCompactPoseIndex, LeftHandTransform));
	
	OutBoneTransforms.Add(FBoneTransform(RightUpperArm.CachedCompactPoseIndex, RightUpperArmTransform));
	OutBoneTransforms.Add(FBoneTransform(RightLowerArm.CachedCompactPoseIndex, RightLowerArmTransform));
	OutBoneTransforms.Add(FBoneTransform(RightHand.CachedCompactPoseIndex, RightHandTransform));

	SortBones(OutBoneTransforms);
}*/



/*
void FAnimNode_TrueFPSRig::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{
	ComponentPose.EvaluateComponentSpace(Output);

	Output.Pose.SafeSetCSBoneTransforms({ FBoneTransform(FCompactPoseBoneIndex(0), FTransform(FRotator(0.f, RootYawOffset, 0.f))) });
	ProceduralAimOffset(Output, OutBoneTransforms);
	
	const FBoneContainer& RequiredBones = Output.Pose.GetPose().GetBoneContainer();
	const FReferenceSkeleton& RefSkel = RequiredBones.GetReferenceSkeleton();

	FCompactPose OutRefPose(Output.Pose.GetPose());
	FBlendedCurve OutRefCurve;
	FStackCustomAttributes OutRefAttr;
	FAnimationPoseData OutRefData(OutRefPose, OutRefCurve, OutRefAttr);
	if(ReferencePose)
	{
		ReferencePose->GetAnimationPose(OutRefData, FAnimExtractContext(ReferenceFrameTime, false));
	}
	else
	{
		OutRefData.GetPose().ResetToRefPose();
	}

	// Bone-Space bone transforms from the ReferencePose
	const TArray<FTransform>& BSRefPoseBoneTransforms = *(TArray<FTransform>*)&OutRefData.GetPose().GetBones();
	
	const FTransform& HeadTransform = Output.Pose.GetComponentSpaceTransform(Head.CachedCompactPoseIndex);
	const FTransform& RefPoseHeadTransform = FAnimationRuntime::GetComponentSpaceTransform(RefSkel, BSRefPoseBoneTransforms, Head.BoneIndex);
	
	//const FTransform RefPoseCameraTransform(FRotator(0.f, MeshYawOffset, 0.f), (FTransform(CameraRelativeLocation) * RefPoseHeadTransform).GetLocation());
	const FTransform CameraTransform(FRotator(0.f, MeshYawOffset, 0.f) + CameraRelativeRotation, (FTransform(CameraRelativeLocation) * HeadTransform).GetLocation());

	 //
	 //	Calculate the weapon transform relative to dominant hand
	 //

	// Get weapon transform from ReferencePose
	const FTransform& RefPoseCameraTransform = FTransform(FRotator(0.f, MeshYawOffset, 0.f), FAnimationRuntime::GetComponentSpaceTransform(RefSkel, BSRefPoseBoneTransforms, Head.BoneIndex).GetLocation());
	const FTransform& RefPoseWeaponTransform = WeaponRelativeTransform * FAnimationRuntime::GetComponentSpaceTransform(RefSkel, BSRefPoseBoneTransforms, bRightHanded ? RightHand.BoneIndex : LeftHand.BoneIndex);
	const FTransform& RefPoseCameraToWeaponTransform = RefPoseWeaponTransform.GetRelativeTransform(RefPoseCameraTransform);
	const FTransform& WeaponTransform = RefPoseCameraToWeaponTransform * CameraTransform;
	
	//
	// Calculate offset
	//
	

	// Aiming transform (aim offset + camera transform)
	const FTransform& AimingTransform(FTransform(FVector(AimOffset, 0.f, 0.f)) * CameraTransform);

	 // Non-Aiming transform
	const FTransform& NonAimingTransform = CustomWeaponOffsetTransform * WeaponTransform;

	// Blend between NonAiming and Aiming transforms by the AimingValue
	FTransform NewWeaponTransform;
	NewWeaponTransform.Blend(NonAimingTransform, AimingTransform, AimingValue);

	// Apply weapon offset
	NewWeaponTransform = OffsetTransform * NewWeaponTransform;

	//
	// Init arm vars
	//

	// Arm lengths
	const float RUpperArmLen = BSRefPoseBoneTransforms[RightLowerArm.BoneIndex].GetLocation().Size();
	const float RLowerArmLen = BSRefPoseBoneTransforms[RightHand.BoneIndex].GetLocation().Size();

	const float LUpperArmLen = BSRefPoseBoneTransforms[LeftLowerArm.BoneIndex].GetLocation().Size();
	const float LLowerArmLen = BSRefPoseBoneTransforms[LeftHand.BoneIndex].GetLocation().Size();

	// Init current right arm transforms
	FTransform RightUpperArmTransform = Output.Pose.GetComponentSpaceTransform(RightUpperArm.CachedCompactPoseIndex);
	FTransform RightLowerArmTransform = Output.Pose.GetComponentSpaceTransform(RightLowerArm.CachedCompactPoseIndex);
	FTransform RightHandTransform = Output.Pose.GetComponentSpaceTransform(RightHand.CachedCompactPoseIndex);

	// Init current left arm transforms
	FTransform LeftUpperArmTransform = Output.Pose.GetComponentSpaceTransform(LeftUpperArm.CachedCompactPoseIndex);
	FTransform LeftLowerArmTransform = Output.Pose.GetComponentSpaceTransform(LeftLowerArm.CachedCompactPoseIndex);
	FTransform LeftHandTransform = Output.Pose.GetComponentSpaceTransform(LeftHand.CachedCompactPoseIndex);

	//
	// Adjust NewWeaponTransform if non-dominant arm is extended too far
	//

	// Move NewWeaponTransform back if non-dominant arm is extended too far
	float NonDomArmDist = 0.f;// Current extension distance
	float NonDomArmLen = 0.f;// Arm overall max length
	if(bRightHanded)
	{
		NonDomArmLen = LUpperArmLen + LLowerArmLen;
		NonDomArmDist = (LeftUpperArmTransform.GetLocation() -
			(FAnimationRuntime::GetComponentSpaceTransform(RefSkel, BSRefPoseBoneTransforms, LeftHand.BoneIndex).GetRelativeTransform(RefPoseWeaponTransform) * NewWeaponTransform).GetLocation()).Size();
	}
	else
	{
		NonDomArmLen = RUpperArmLen + RLowerArmLen;
		NonDomArmDist = (RightUpperArmTransform.GetLocation() - RightHandTransform.GetLocation()).Size();
	}

	const float PullbackDist = NonDomArmLen * MaxExtension - NonDomArmDist;
	if(PullbackDist < 0)
		NewWeaponTransform = FTransform((FQuat(-NewWeaponTransform.GetRotation().GetUpVector(), MeshYawOffset) * NewWeaponTransform.GetRotation()).UnrotateVector(FVector(PullbackDist, 0.f, 0.f))) * NewWeaponTransform;

	//
	//	Calculate right arm
	//

	// Calculate right effector transform
	const FTransform& RefPoseWeaponToRightHandTransform = FAnimationRuntime::GetComponentSpaceTransform(RefSkel, BSRefPoseBoneTransforms, RightHand.BoneIndex).GetRelativeTransform(RefPoseWeaponTransform);
	const FTransform& RightEffectorTransform = RefPoseWeaponToRightHandTransform * NewWeaponTransform;

	// Calculate right joint location
	const FTransform& InitCameraToRightJointTransform = RightLowerArmTransform.GetRelativeTransform(CameraTransform);
	const FTransform& NewCameraToRightJointTransform = InitCameraToRightJointTransform *
		FTransform(RightEffectorTransform.GetRelativeTransform(CameraTransform).GetRotation() * RightHandTransform.GetRelativeTransform(CameraTransform).GetRotation().Inverse());
	const FVector& RightJointLocation = (NewCameraToRightJointTransform * CameraTransform).GetLocation();

	// Solve
	AnimationCore::SolveTwoBoneIK(RightUpperArmTransform, RightLowerArmTransform, RightHandTransform,
		RightJointLocation, RightEffectorTransform.GetLocation(), RUpperArmLen, RLowerArmLen, false, 0.f, 0.f);

	// Apply rotation from effector
	RightHandTransform.SetRotation(RightEffectorTransform.GetRotation());

	//
	//	Calculate left arm
	//

	// Calculate left effector transform
	const FTransform& RefPoseWeaponToLeftHandTransform = FAnimationRuntime::GetComponentSpaceTransform(RefSkel, BSRefPoseBoneTransforms, LeftHand.BoneIndex).GetRelativeTransform(RefPoseWeaponTransform);
	const FTransform& LeftEffectorTransform = RefPoseWeaponToLeftHandTransform * NewWeaponTransform;

	// Calculate left joint location
	const FTransform& InitCameraToLeftJointTransform = LeftLowerArmTransform.GetRelativeTransform(CameraTransform);
	const FTransform& NewCameraToLeftJointTransform = InitCameraToLeftJointTransform *
		FTransform(LeftEffectorTransform.GetRelativeTransform(CameraTransform).GetRotation() * LeftHandTransform.GetRelativeTransform(CameraTransform).GetRotation().Inverse());
	const FVector& LeftJointLocation = (NewCameraToLeftJointTransform * CameraTransform).GetLocation();

	// Solve
	AnimationCore::SolveTwoBoneIK(LeftUpperArmTransform, LeftLowerArmTransform, LeftHandTransform,
		LeftJointLocation, LeftEffectorTransform.GetLocation(), LUpperArmLen, LLowerArmLen, false, 0.f, 0.f);

	// Apply rotation from effector
	LeftHandTransform.SetRotation(LeftEffectorTransform.GetRotation());
	
	//
	//	APPLY TRANSFORMS
	//
	

	// Left arm is higher index thus it gets applied first
	OutBoneTransforms.Add(FBoneTransform(LeftUpperArm.CachedCompactPoseIndex, LeftUpperArmTransform));
	OutBoneTransforms.Add(FBoneTransform(LeftLowerArm.CachedCompactPoseIndex, LeftLowerArmTransform));
	OutBoneTransforms.Add(FBoneTransform(LeftHand.CachedCompactPoseIndex, LeftHandTransform));
	
	OutBoneTransforms.Add(FBoneTransform(RightUpperArm.CachedCompactPoseIndex, RightUpperArmTransform));
	OutBoneTransforms.Add(FBoneTransform(RightLowerArm.CachedCompactPoseIndex, RightLowerArmTransform));
	OutBoneTransforms.Add(FBoneTransform(RightHand.CachedCompactPoseIndex, RightHandTransform));

	//OutBoneTransforms.Append(OutSpineBoneTransforms);
	
	SortBones(OutBoneTransforms);
}*/

void FAnimNode_TrueFPSRig::SortBones(TArray<FBoneTransform>& OutBoneTransforms)
{
	int32 Start = 0;
	const int32 End = OutBoneTransforms.Num();
	int32 NumBones = End;
	while(NumBones--)
	{
		FBoneTransform* Min = nullptr;
		for(int32 i = Start; i < End; i++)
		{
			if(!Min || Min->BoneIndex > OutBoneTransforms[i].BoneIndex)
			{
				Min = &OutBoneTransforms[i];
			}
		}
		if(Min && Min != &OutBoneTransforms[Start])
			Swap(OutBoneTransforms[Start], *Min);
		Start++;
	}
}










