// Fill out your copyright notice in the Description page of Project Settings.



// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimNode_TrueFPSArmsIK.h"

#include "Animation/AnimInstanceProxy.h"
#include "AnimationCore/Public/TwoBoneIK.h"

FAnimNode_TrueFPSArmsIK::FAnimNode_TrueFPSArmsIK()
{
	RightHand = FBoneReference(FName("hand_r"));
	LeftHand = FBoneReference(FName("hand_l"));
	Head = FBoneReference(FName("head"));

	RightUpperArm = FBoneReference(FName("upperarm_r"));
	RightLowerArm = FBoneReference(FName("lowerarm_r"));

	LeftUpperArm = FBoneReference(FName("upperarm_l"));
	LeftLowerArm = FBoneReference(FName("lowerarm_l"));

	StableBone = FBoneReference(FName("head"));
}

void FAnimNode_TrueFPSArmsIK::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	BasePose.Initialize(Context);
	ReferencePose.Initialize(Context);

	const FBoneContainer& RequiredBones = Context.AnimInstanceProxy->GetRequiredBones();
	RightHand.Initialize(RequiredBones);
	LeftHand.Initialize(RequiredBones);
	RightUpperArm.Initialize(RequiredBones);
	LeftUpperArm.Initialize(RequiredBones);
	RightLowerArm.Initialize(RequiredBones);
	LeftLowerArm.Initialize(RequiredBones);
	Head.Initialize(RequiredBones);
	StableBone.Initialize(RequiredBones);

	if(RightUpperArm.IsValidToEvaluate()) CachedRightUpperArmParentBoneIndex = RequiredBones.GetReferenceSkeleton().GetParentIndex(RightUpperArm.BoneIndex);
	if(LeftUpperArm.IsValidToEvaluate()) CachedLeftUpperArmParentBoneIndex = RequiredBones.GetReferenceSkeleton().GetParentIndex(LeftUpperArm.BoneIndex);
}

void FAnimNode_TrueFPSArmsIK::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	BasePose.CacheBones(Context);
	ReferencePose.CacheBones(Context);
}

void FAnimNode_TrueFPSArmsIK::GatherDebugData(FNodeDebugData& DebugData)
{
	BasePose.GatherDebugData(DebugData);
	ReferencePose.GatherDebugData(DebugData);
}


void FAnimNode_TrueFPSArmsIK::Update_AnyThread(const FAnimationUpdateContext& Context)
{
	BasePose.Update(Context);
	ReferencePose.Update(Context);
	GetEvaluateGraphExposedInputs().Execute(Context);
}


bool FAnimNode_TrueFPSArmsIK::CanEvaluate() const
{
	if(FMath::IsNearlyZero(Alpha))
		return false;

	if(!CachedLeftUpperArmParentBoneIndex || !CachedRightUpperArmParentBoneIndex)
		return false;
	
	if(!RightHand.IsValidToEvaluate() || !RightLowerArm.IsValidToEvaluate() || !RightUpperArm.IsValidToEvaluate() ||
		!LeftHand.IsValidToEvaluate() || !LeftLowerArm.IsValidToEvaluate() || !LeftUpperArm.IsValidToEvaluate())
			return false;
			
	return true;		
}

#define CS_TRANSFORM(Index) FAnimationRuntime::GetComponentSpaceTransform(RefSkel, BSBoneTransforms, Index)
#define CS_REF_TRANSFORM(Index) FAnimationRuntime::GetComponentSpaceTransform(RefSkel, BSRefBoneTransforms, Index)

void FAnimNode_TrueFPSArmsIK::Evaluate_AnyThread(FPoseContext& Output)
{
	BasePose.Evaluate(Output);
	if(!CanEvaluate()) return;
	
	CameraRelativeRotation.Normalize();

	// Init reference pose
	FPoseContext RefOutput(Output.AnimInstanceProxy);
	ReferencePose.Evaluate(RefOutput);
	
	//
	//	Cache initial transforms
	//

	const FBoneContainer& RequiredBones = Output.Pose.GetBoneContainer();
	const FReferenceSkeleton& RefSkel = RequiredBones.GetReferenceSkeleton();
	TArray<FTransform>& BSBoneTransforms = *(TArray<FTransform>*)&Output.Pose.GetBones();
	const TArray<FTransform>& BSRefBoneTransforms = *reinterpret_cast<const TArray<FTransform>*>(&RefOutput.Pose.GetBones());

	// Init arm transforms. Component-space.
	const FTransform& CSInitRightHandTransform = CS_TRANSFORM(RightHand.BoneIndex);
	const FTransform& CSInitLeftHandTransform = CS_TRANSFORM(LeftHand.BoneIndex);

	const FTransform& CSInitRightJointTransform = CS_TRANSFORM(RightLowerArm.BoneIndex);
	const FTransform& CSInitLeftJointTransform = CS_TRANSFORM(LeftLowerArm.BoneIndex);
	
	const FTransform& CSInitCameraTransform = FTransform(FRotator(0.f, MeshYawOffset, 0.f), (FTransform(CameraRelativeLocation) * CS_TRANSFORM(Head.BoneIndex)).GetLocation());
	FTransform CSInitWeaponTransform = WeaponRelativeTransform * (bRightHanded ? CSInitRightHandTransform : CSInitLeftHandTransform);// Weapon relative transform is bone-space off of primary hand
	//const FTransform& CSInitCameraToWeaponTransform = CSInitWeaponTransform.GetRelativeTransform(CSInitCameraTransform);

	const FQuat& AccumulativeOffsetInverse = FAnimNode_ProceduralAimOffset::GetAccumulativeOffsetInverse(Head.BoneIndex, RefSkel, BSBoneTransforms, BSRefBoneTransforms);
	
	// Initialize arm transform vars
	FTransform RightUpperArmTransform = CS_TRANSFORM(RightUpperArm.BoneIndex);
	FTransform RightLowerArmTransform = CS_TRANSFORM(RightLowerArm.BoneIndex);
	FTransform RightHandTransform = CS_TRANSFORM(RightHand.BoneIndex);

	FTransform LeftUpperArmTransform = CS_TRANSFORM(LeftUpperArm.BoneIndex);
	FTransform LeftLowerArmTransform = CS_TRANSFORM(LeftLowerArm.BoneIndex);
	FTransform LeftHandTransform = CS_TRANSFORM(LeftHand.BoneIndex);

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
	const FTransform& AimingTransform = FTransform(FVector(AimOffset, 0.f, 0.f)) * CSCameraTransform;
	
	FTransform NonAimingTransform = CustomWeaponOffsetTransform * CSWeaponTransform;
	NonAimingTransform.SetRotation(FQuat::FastLerp(CSInitWeaponTransform.GetRotation(), NonAimingTransform.GetRotation(), RotationAlpha));
	NonAimingTransform.SetLocation(NonAimingTransform.GetLocation() * LocationAlpha + CSInitWeaponTransform.GetLocation() * (1.f - LocationAlpha));

	CSWeaponTransform = NonAimingTransform;
	CSWeaponTransform.BlendWith(AimingTransform, AimingValue);
	CSWeaponTransform = OffsetTransform * CSWeaponTransform;

	// Get the max reach and current reach amount on the non-dominant arm.
	// Then we will pull the weapon back by the reach over the threshold amount.
	float ReachDist;
	float MaxReach;
	if(bRightHanded)
	{// Calculate the projected hand transform
		ReachDist = (LeftUpperArmTransform.GetLocation() - (CSInitLeftHandTransform.GetRelativeTransform(CSInitWeaponTransform) * CSWeaponTransform).GetLocation()).Size();
		MaxReach = BSBoneTransforms[LeftLowerArm.BoneIndex].GetLocation().Size() + BSBoneTransforms[LeftHand.BoneIndex].GetLocation().Size();
	}
	else
	{
		ReachDist = (RightUpperArmTransform.GetLocation() - (CSInitRightHandTransform.GetRelativeTransform(CSInitWeaponTransform) * CSWeaponTransform).GetLocation()).Size();
		MaxReach = BSBoneTransforms[RightLowerArm.BoneIndex].GetLocation().Size() + BSBoneTransforms[RightHand.BoneIndex].GetLocation().Size();
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

	
	
	// Blended non aiming transform and current weapon transform by the aiming joint influence value
	FTransform JointInfluenceWeaponTransform = CSWeaponTransform;
	if(!FMath::IsNearlyZero(AimingValue))
		JointInfluenceWeaponTransform.BlendWith(NonAimingTransform, 1.f - AimingJointInfluence);

	//
	// Right Arm IK
	//
	
	const FTransform& RightEffectorTransform = CSInitRightHandTransform.GetRelativeTransform(CSInitWeaponTransform) * (RightHandAdditiveTransform * CSWeaponTransform);

	// Removing the custom weapon offset from the weapon transform to get the original joint location without an offset then applying whatever offset specified
	const FVector& RightJointLocation = (CSInitRightJointTransform.GetRelativeTransform(CSInitWeaponTransform) *
		FTransform(RightJointLocationOffset) * CustomWeaponOffsetTransform.Inverse() * /*CSWeaponTransform*/ JointInfluenceWeaponTransform).GetLocation();
	
	AnimationCore::SolveTwoBoneIK(RightUpperArmTransform, RightLowerArmTransform, RightHandTransform,
		RightJointLocation, RightEffectorTransform.GetLocation(), false, 0.f, 0.f);

	RightHandTransform.SetRotation(RightEffectorTransform.GetRotation());

	//
	// Left Arm IK
	//

	const FTransform& LeftEffectorTransform = CSInitLeftHandTransform.GetRelativeTransform(CSInitWeaponTransform) * (LeftHandAdditiveTransform * CSWeaponTransform);
	
	// Removing the custom weapon offset from the weapon transform to get the original joint location without an offset then applying whatever offset specified
	const FVector& LeftJointLocation = (CSInitLeftJointTransform.GetRelativeTransform(CSInitWeaponTransform) *
		FTransform(LeftJointLocationOffset) * CustomWeaponOffsetTransform.Inverse() * /*CSWeaponTransform*/ JointInfluenceWeaponTransform).GetLocation();
	
	AnimationCore::SolveTwoBoneIK(LeftUpperArmTransform, LeftLowerArmTransform, LeftHandTransform,
		LeftJointLocation, LeftEffectorTransform.GetLocation(), false, 0.f, 0.f);

	LeftHandTransform.SetRotation(LeftEffectorTransform.GetRotation());
	
	//
	// Apply IKs
	//

	BSBoneTransforms[RightUpperArm.BoneIndex].BlendWith(RightUpperArmTransform.GetRelativeTransform(CS_TRANSFORM(CachedRightUpperArmParentBoneIndex)), Alpha);
	BSBoneTransforms[RightLowerArm.BoneIndex].BlendWith(RightLowerArmTransform.GetRelativeTransform(RightUpperArmTransform), Alpha);
	BSBoneTransforms[RightHand.BoneIndex].BlendWith(RightHandTransform.GetRelativeTransform(RightLowerArmTransform), Alpha);

	BSBoneTransforms[LeftUpperArm.BoneIndex].BlendWith(LeftUpperArmTransform.GetRelativeTransform(CS_TRANSFORM(CachedLeftUpperArmParentBoneIndex)), Alpha);
	BSBoneTransforms[LeftLowerArm.BoneIndex].BlendWith(LeftLowerArmTransform.GetRelativeTransform(LeftUpperArmTransform), Alpha);
	BSBoneTransforms[LeftHand.BoneIndex].BlendWith(LeftHandTransform.GetRelativeTransform(LeftLowerArmTransform), Alpha);
	
	/*BSBoneTransforms[RightUpperArm.BoneIndex] = RightUpperArmTransform.GetRelativeTransform(CS_TRANSFORM(RefSkel.GetParentIndex(RightUpperArm.BoneIndex)));
	BSBoneTransforms[RightLowerArm.BoneIndex] = RightLowerArmTransform.GetRelativeTransform(RightUpperArmTransform);
	BSBoneTransforms[RightHand.BoneIndex] = RightHandTransform.GetRelativeTransform(RightLowerArmTransform);

	BSBoneTransforms[LeftUpperArm.BoneIndex] = LeftUpperArmTransform.GetRelativeTransform(CS_TRANSFORM(RefSkel.GetParentIndex(LeftUpperArm.BoneIndex)));
	BSBoneTransforms[LeftLowerArm.BoneIndex] = LeftLowerArmTransform.GetRelativeTransform(LeftUpperArmTransform);
	BSBoneTransforms[LeftHand.BoneIndex] = LeftHandTransform.GetRelativeTransform(LeftLowerArmTransform);*/
}

#undef CS_TRANSFORM

/*
 *
 *	Procedural Aim Offset
 *
 */











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








