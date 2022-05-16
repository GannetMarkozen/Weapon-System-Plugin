

#pragma once
#include "CoreMinimal.h"
#include "BonePose.h"


namespace WSAnimUtils
{
	static FTransform GetCSTransform(const FCompactPose& Pose, FCompactPoseBoneIndex BoneIndex)
	{
		FTransform CSTransform;
		while(Pose.IsValidIndex(BoneIndex))
		{
			CSTransform *= Pose[BoneIndex];
			BoneIndex = Pose.GetBoneContainer().GetCompactPoseParentBoneArray()[BoneIndex.GetInt()];
		}
		return CSTransform;
	}

	static FCompactPoseBoneIndex SkeletonIndexToCompactPoseIndex(const FBoneContainer& BoneContainer, const FSkeletonPoseBoneIndex SkeletonBoneIndex)
	{
		return BoneContainer.GetCompactPoseIndexFromSkeletonPoseIndex(SkeletonBoneIndex);
	}
}
