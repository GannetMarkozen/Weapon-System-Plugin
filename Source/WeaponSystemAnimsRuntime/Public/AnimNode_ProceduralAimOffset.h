// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"

#include "AnimNode_ProceduralAimOffset.generated.h"


USTRUCT(BlueprintType)
struct WEAPONSYSTEMANIMSRUNTIME_API FBoneParams
{
	GENERATED_BODY()
	FBoneParams(){}
	FBoneParams(const FBoneReference& Bone, const float Weight)
		: Bone(Bone), Weight(Weight) {}

	UPROPERTY(EditAnywhere)
	FBoneReference Bone;

	UPROPERTY(EditAnywhere)
	float Weight = 1.f;
};

/**
 * 
 */
USTRUCT(BlueprintInternalUseOnly)
struct WEAPONSYSTEMANIMSRUNTIME_API FAnimNode_ProceduralAimOffset : public FAnimNode_Base
{
	GENERATED_BODY()

	FAnimNode_ProceduralAimOffset();

	// This is the pose with all the montages and other animations you want
	// applied on-top of the aim offset.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Links")
	FPoseLink BasePose;

	// This is the pose that the target pose will be referencing when determining
	// how the accumulative offset is calculated to maintain a forward-facing orientation.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Links")
	FPoseLink ReferencePose;
	

	// The base animation sequence. Will derive the pose from the first frame of the sequence.
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinShownByDefault, DisallowedClasses = "AnimMontage"), Category = Configurations)
	//class UAnimSequenceBase* ReferencePose;

	// The aim rotation. The Zero-Rotator being forward
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinShownByDefault, DisplayName = "Aim Rotation"), Category = Configurations)
	FRotator CameraRelativeRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinShownByDefault), Category = Configurations)
	float Alpha = 1.f;

	// All of the spine / neck / head bone names. The top-most bone should be the
	// last bone-name because that will determine the target rotation
	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Spine To Head Bone Names"), Category = Configurations)
	TArray<FBoneParams> SpineBoneParams;

	// The time in the Reference Pose we snapshot as our base. Should usually be 0
	UPROPERTY(EditAnywhere, Category = Configurations)
	float ReferenceFrameTime = 0.f;
	
	// Only true if all bone names are valid, if not this node will not do anything
	bool bIsValidBoneNames = false;

	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)  override;
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	// End of FAnimNode_Base interface

	// Helper func
	static FQuat GetAccumulativeOffsetInverse(const int32 BoneIndex, const FCompactPose& BasePose, const FCompactPose& StablePose);
};