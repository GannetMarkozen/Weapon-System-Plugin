

#pragma once
#include "CoreMinimal.h"
#include "BonePose.h"

// Weapon System Animation Utilities namespace
namespace WSAnimUtils
{
	// Get component space transform from Compact Pose Bone parents
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

	// Convert Skeleton Pose Bone Index to Compact Pose Bone Index (Skeleton Pose Bone Index by default from bone caches)
	static FCompactPoseBoneIndex SkeletonIndexToCompactPoseIndex(const FBoneContainer& BoneContainer, const FSkeletonPoseBoneIndex SkeletonBoneIndex)
	{
		return BoneContainer.GetCompactPoseIndexFromSkeletonPoseIndex(SkeletonBoneIndex);
	}
}
