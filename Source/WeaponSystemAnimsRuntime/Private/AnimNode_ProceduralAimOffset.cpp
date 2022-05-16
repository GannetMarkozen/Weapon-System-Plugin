// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNode_ProceduralAimOffset.h"

#include "WeaponSystemAnimUtils.h"
#include "Animation/AnimInstanceProxy.h"
#include "BoneControllers/AnimNode_Fabrik.h"


FAnimNode_ProceduralAimOffset::FAnimNode_ProceduralAimOffset()
{
	SpineBoneParams = { FBoneParams(FBoneReference(FName("spine_01")), 1.f/3.f), FBoneParams(FBoneReference(FName("spine_02")), 1.f/3.f),
		FBoneParams(FBoneReference(FName("spine_03")), 1.f/3.f) };
}


void FAnimNode_ProceduralAimOffset::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	BasePose.Initialize(Context);
	ReferencePose.Initialize(Context);
	
	bIsValidBoneNames = false;
	for(FBoneParams& BoneParams : SpineBoneParams)
	{
		BoneParams.Bone.Initialize(Context.AnimInstanceProxy->GetRequiredBones());
		if(!BoneParams.Bone.IsValidToEvaluate())
		{
			UE_LOG(LogTemp, Error, TEXT("%s is an invalid bone name on Procedural Aim Offset node."), *BoneParams.Bone.BoneName.ToString());
			return;
		}
	}
	
	bIsValidBoneNames = true;
}


void FAnimNode_ProceduralAimOffset::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	BasePose.CacheBones(Context);
	ReferencePose.CacheBones(Context);
}

void FAnimNode_ProceduralAimOffset::GatherDebugData(FNodeDebugData& DebugData)
{
	BasePose.GatherDebugData(DebugData);
	ReferencePose.GatherDebugData(DebugData);
}

void FAnimNode_ProceduralAimOffset::Update_AnyThread(const FAnimationUpdateContext& Context)
{
	// Set vars
	GetEvaluateGraphExposedInputs().Execute(Context);
	BasePose.Update(Context);
	ReferencePose.Update(Context);
}

FQuat FAnimNode_ProceduralAimOffset::GetAccumulativeOffsetInverse(const int32 BoneIndex, const FCompactPose& BasePose, const FCompactPose& StablePose)
{
	//FQuat AccumulativeOffsetInverse = FAnimationRuntime::GetComponentSpaceTransform(ReferenceSkeleton, ReferenceBoneTransforms, BoneIndex).GetRotation() *
	//	FAnimationRuntime::GetComponentSpaceTransform(ReferenceSkeleton, CurrentBoneTransforms, BoneIndex).GetRotation().Inverse() * CurrentBoneTransforms[0].GetRotation();
	const FCompactPoseBoneIndex CompactBoneIndex = WSAnimUtils::SkeletonIndexToCompactPoseIndex(BasePose.GetBoneContainer(), FSkeletonPoseBoneIndex(BoneIndex));
	FQuat AccumulativeOffsetInverse = WSAnimUtils::GetCSTransform(StablePose, CompactBoneIndex).GetRotation() *
		WSAnimUtils::GetCSTransform(BasePose, CompactBoneIndex).GetRotation().Inverse() * BasePose.GetBones()[0].GetRotation();
	
	// Reverse twisting if exceeds 180 degrees
	if(abs(AccumulativeOffsetInverse.GetAngle()) > PI)
		AccumulativeOffsetInverse *= FQuat(AccumulativeOffsetInverse.Vector(), -2 * PI);

	return AccumulativeOffsetInverse;
}


void FAnimNode_ProceduralAimOffset::Evaluate_AnyThread(FPoseContext& Output)
{
	BasePose.Evaluate(Output);
	if(FMath::IsNearlyZero(Alpha) || !bIsValidBoneNames) return;
	
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

	FPoseContext StablePoseContext(Output.AnimInstanceProxy);
	ReferencePose.Evaluate(StablePoseContext);
	const TArray<FTransform>& RefBoneTransforms = reinterpret_cast<const TArray<FTransform>&>(StablePoseContext.Pose.GetBones());
	
	const FReferenceSkeleton& RefSkel = Output.AnimInstanceProxy->GetSkeleton()->GetReferenceSkeleton();
	//const TArray<FTransform>& RefBoneTransforms = (TArray<FTransform>&)OutRefData.GetPose().GetBones();
	const TArray<FTransform>& CurrBoneTransforms = (TArray<FTransform>&)Output.Pose.GetBones();

	// Get the accumulative spine offset from the last index of the spine params
	/*const int32 LastSpineIdx = SpineBoneParams[SpineBoneParams.Num() - 1].Bone.BoneIndex;
	FQuat AccumulativeOffsetInverse = FAnimationRuntime::GetComponentSpaceTransform(RefSkel, RefBoneTransforms, LastSpineIdx).GetRotation() *
		FAnimationRuntime::GetComponentSpaceTransform(RefSkel, CurrBoneTransforms, LastSpineIdx).GetRotation().Inverse() * CurrBoneTransforms[0].GetRotation();

	// Reverse twisting if exceeds 180 degrees
	if(abs(AccumulativeOffsetInverse.GetAngle()) > PI)
		AccumulativeOffsetInverse *= FQuat(AccumulativeOffsetInverse.Vector(), -2 * PI);*/

	const FQuat& AccumulativeOffsetInverse = GetAccumulativeOffsetInverse(SpineBoneParams[SpineBoneParams.Num() - 1].Bone.BoneIndex, Output.Pose, StablePoseContext.Pose);

	// Cache spine offset inverses to be applied later so that
	// the references to not get modified in the process of application
	TArray<FQuat> SpineOffsetInverses;
	for(const FBoneParams& BoneParams : SpineBoneParams)
	{
		//const FQuat& Offset = FAnimationRuntime::GetComponentSpaceTransform(RefSkel, RefPoseBoneTransforms, i).GetRotation() * RefPoseBoneTransforms[i].GetRotation().Inverse();
		//const FQuat& Offset = RefBoneTransforms[i].GetRotation() * FAnimationRuntime::GetComponentSpaceTransform(RefSkel, RefBoneTransforms, i).GetRotation().Inverse();
		
		const int32 i = BoneParams.Bone.BoneIndex;// Spine index as i
		const FQuat& OffsetInverse = CurrBoneTransforms[i].GetRotation() * (FAnimationRuntime::GetComponentSpaceTransform(RefSkel, CurrBoneTransforms, i).GetRotation().Inverse() * CurrBoneTransforms[0].GetRotation());
		SpineOffsetInverses.Add(OffsetInverse);
	}
	
	
	// Copy rotation as to not change variable value
	// and have weird stuff happen with static values
	FRotator TargetRot = CameraRelativeRotation;
	TargetRot += CurrBoneTransforms[0].Rotator().GetInverse();// Rotate by root offset
	TargetRot.Normalize();// Normalize to prevent weird behaviour

	// For each bone
	for(int32 i = 0; i < SpineBoneParams.Num(); i++)
	{
		FTransform& SpineTransform = Output.Pose.GetMutableBones()[SpineBoneParams[i].Bone.BoneIndex];
		
		// Apply compounding camera axes in the order for the desired outcome
		FQuat OrientationCameraRot(FVector::ForwardVector, 0.f);
		OrientationCameraRot *= FQuat(-OrientationCameraRot.GetRightVector(), FMath::DegreesToRadians(TargetRot.Roll));// Apply Roll
		OrientationCameraRot *= FQuat(OrientationCameraRot.GetUpVector().RotateAngleAxis(TargetRot.Roll * 2.f, FVector::RightVector), FMath::DegreesToRadians(TargetRot.Yaw));// Apply Yaw
		OrientationCameraRot *= FQuat(OrientationCameraRot.GetForwardVector().RotateAngleAxis(TargetRot.Yaw, -FVector::UpVector).RotateAngleAxis(TargetRot.Roll * 2.f, FVector::RightVector), FMath::DegreesToRadians(TargetRot.Pitch));// Apply Pitch, rotated about target yaw
		OrientationCameraRot *= AccumulativeOffsetInverse;// Apply pelvis offset inverse to correct ofr any additives to the Reference Pose

		// Old implementation before correcting for roll
		/*FQuat OrientationCameraRot(FVector::ForwardVector, 0.f);
		OrientationCameraRot *= FQuat(OrientationCameraRot.GetUpVector(), FMath::DegreesToRadians(TargetRot.Yaw));// Apply Yaw
		OrientationCameraRot *= FQuat(OrientationCameraRot.GetForwardVector().RotateAngleAxis(TargetRot.Yaw, -FVector::UpVector), FMath::DegreesToRadians(TargetRot.Pitch));// Apply Pitch, rotated about yaw val
		OrientationCameraRot *= FQuat(OrientationCameraRot.GetRightVector(), FMath::DegreesToRadians(TargetRot.Roll));// Apply Roll
		OrientationCameraRot *= AccumulativeOffsetInverse;// Apply pelvis offset inverse to correct for any additives to the Reference Pose*/
		
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
		SpineTransform.SetRotation(FQuat::FastLerp(SpineRot, TargetSpineRot, Alpha));
	}
	// Scale the camera rotation by the number of spine bones to all add up to 1 in the end
	//FQuat ScaledCameraRot(FVector::ForwardVector, FMath::DegreesToRadians(CameraRelativeRotation.Pitch/* / SpineBoneParams.Num()*/));
	//ScaledCameraRot *= FQuat(ScaledCameraRot.GetUpVector(), FMath::DegreesToRadians(CameraRelativeRotation.Yaw/* / SpineBoneParams.Num()*/));
}
