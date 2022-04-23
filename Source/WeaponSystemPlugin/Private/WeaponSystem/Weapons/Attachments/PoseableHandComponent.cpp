// Fill out your copyright notice in the Description page of Project Settings.


#include "PoseableHandComponent.h"

#include "Components/PoseableMeshComponent.h"

//
// Visualization Poseable Mesh
//

UPoseableHandComponent::UPoseableHandComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	SetUsingAbsoluteScale(true);

#if WITH_EDITORONLY_DATA
	// Init cached pose snapshot.
	ThisClass* const DefObj = CastChecked<ThisClass>(GetClass()->GetDefaultObject());
	if(DefObj->bCachePose)
	{
		if(!DefObj->CachedPoseSnapshot.IsValid())
			DefObj->CachedPoseSnapshot = MakeShared<FPoseSnapshot>();
		
		CachedPoseSnapshot = DefObj->CachedPoseSnapshot;
	}
	else DefObj->CachedPoseSnapshot.Reset();
#endif// WITH_EDITORONLY_DATA
}

#if WITH_EDITORONLY_DATA

void UPoseableHandComponent::BeginPlay()
{
	if(PoseableMeshComp) PoseableMeshComp->DestroyComponent();
	PoseableMeshComp = nullptr;
	
	Super::BeginPlay();
}

void UPoseableHandComponent::OnRegister()
{
	if(!bShowVisualizationMesh)
	{
		if(PoseableMeshComp) PoseableMeshComp->DestroyComponent();
		PoseableMeshComp = nullptr;
		goto DO_NOT_SPAWN_VISUALIZERS;
	}
	
	AActor* Owner = GetOwner();
	if(!Owner || IsRunningCommandlet() || GetWorld()->bBegunPlay) goto DO_NOT_SPAWN_VISUALIZERS;

	// Spawn visualization static mesh component if there is not already one present.
	// If there is one present but it's associated mesh is not valid, destroy the visualization component.
	if(!PoseableMeshComp)
	{
		if(VisualizationSkeletalMesh)
		{
			PoseableMeshComp = NewObject<UPoseableMeshComponent>(Owner, NAME_None, RF_Transactional | RF_TextExportTransient);
			if(PoseableMeshComp)
			{
				PoseableMeshComp->SetupAttachment(this);
				PoseableMeshComp->SetIsVisualizationComponent(true);
				PoseableMeshComp->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName, false);
				PoseableMeshComp->CastShadow = false;
				PoseableMeshComp->CreationMethod = EComponentCreationMethod::Instance;
				PoseableMeshComp->SetComponentTickEnabled(false);
				PoseableMeshComp->SetHiddenInGame(true);
				PoseableMeshComp->RegisterComponentWithWorld(GetWorld());
			
				PoseableMeshComp->SetSkeletalMesh(VisualizationSkeletalMesh);
				PoseableMeshComp->SetRelativeTransform(VisualizationTransform);
				SetMeshPose();
			}
		}
	}// If mesh component exists but mesh is invalid
	else if(!VisualizationSkeletalMesh)
	{
		PoseableMeshComp->DestroyComponent();
		PoseableMeshComp = nullptr;
	}

	DO_NOT_SPAWN_VISUALIZERS:
	
	Super::OnRegister();
}

void UPoseableHandComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	const FProperty* Prop = PropertyChangedEvent.Property;
	if(!Prop) return;
	if(Prop->GetFName() == GET_MEMBER_NAME_CHECKED(ThisClass, VisualizationSkeletalMesh))
	{
		if(PoseableMeshComp)
		{
			PoseableMeshComp->SetSkeletalMesh(VisualizationSkeletalMesh);
			if(VisualizationSkeletalMesh)
				SetMeshPose();
		}
	}
	else if(Prop->GetFName() == GET_MEMBER_NAME_CHECKED(ThisClass, VisualizationTransform))
	{
		if(PoseableMeshComp)
			PoseableMeshComp->SetRelativeTransform(VisualizationTransform);
	}
	else if(Prop->GetFName() == GET_MEMBER_NAME_CHECKED(ThisClass, bShowVisualizationMesh))
	{
		if(bShowVisualizationMesh)
		{
			if(PoseableMeshComp)
			{
				PoseableMeshComp->SetSkeletalMesh(VisualizationSkeletalMesh);
				if(MeshPose)
					SetMeshPose();
			}
		}
		else if(PoseableMeshComp)
		{
			PoseableMeshComp->SetSkeletalMesh(nullptr);
		}
	}
	else if(Prop->GetFName() == GET_MEMBER_NAME_CHECKED(ThisClass, MeshPose))
	{
		if(MeshPose && PoseableMeshComp)
			SetMeshPose();
	}
}

void UPoseableHandComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);
	
	if(PoseableMeshComp) PoseableMeshComp->DestroyComponent();
	PoseableMeshComp = nullptr;
}

void UPoseableHandComponent::SetMeshPose()
{
	if(CachedPoseSnapshot.IsValid())
	{
		CachedPoseSnapshot->bIsValid = false;
		CachedPoseSnapshot->BoneNames.Empty();
		CachedPoseSnapshot->LocalTransforms.Empty();
		CachedPoseSnapshot->SkeletalMeshName = NAME_None;
	}
	
	if(!MeshPose || !PoseableMeshComp || !PoseableMeshComp->SkeletalMesh.Get()) return;
	
	TArray<FName> PoseMeshBoneNames;
	PoseableMeshComp->GetBoneNames(PoseMeshBoneNames);
	if(PoseMeshBoneNames.IsEmpty()) return;

	for(int32 i = 0; i < PoseMeshBoneNames.Num(); i++)
	{
		// Set laterality bone names
		FName RightBoneName;
		FName LeftBoneName;
		const FString& PoseBoneString = PoseMeshBoneNames[i].ToString();
		if(PoseBoneString.RightChop(PoseBoneString.GetCharArray().Num() - RightHandSuffix.GetCharArray().Num()) == RightHandSuffix)
		{
			RightBoneName = PoseMeshBoneNames[i];
			LeftBoneName = FName(PoseBoneString.LeftChop(RightHandSuffix.GetCharArray().Num() - 1) + LeftHandSuffix);
		}
		else if(PoseBoneString.RightChop(PoseBoneString.GetCharArray().Num() - LeftHandSuffix.GetCharArray().Num()) == LeftHandSuffix)
		{
			LeftBoneName = PoseMeshBoneNames[i];
			RightBoneName = FName(PoseBoneString.LeftChop(LeftHandSuffix.GetCharArray().Num() - 1) + RightHandSuffix);
		}

		const int32 MeshPoseBoneIndex = MeshPose->GetSkeleton()->GetReferenceSkeleton().FindBoneIndex(ExtractPoseLaterality == ELaterality::Right ? RightBoneName : LeftBoneName);
		if(MeshPoseBoneIndex == INDEX_NONE) continue;

		FTransform OutBoneTransform;
		MeshPose->GetBoneTransform(OutBoneTransform, MeshPoseBoneIndex, Time, true);

		// Bone pose transform for opposing laterality
		FTransform& MeshBoneTransform = PoseableMeshComp->BoneSpaceTransforms[i];
		FTransform OpposingBoneTransform(MeshBoneTransform.GetLocation());
		OpposingBoneTransform.SetRotation(OutBoneTransform.GetRotation());
		OpposingBoneTransform.SetScale3D(OutBoneTransform.GetScale3D());
		
		if(i != 0 || bPoseAffectsRoot)
			MeshBoneTransform = ExtractPoseLaterality == VisualizerLaterality ? OutBoneTransform : OpposingBoneTransform;
		
		//DefObj->CachedPoseSnapshot.BoneNames.Add(HandToModify == ELaterality::Right ? RightBoneName : LeftBoneName);
		//DefObj->CachedPoseSnapshot.LocalTransforms.Add(HandToModify == ExtractPoseLaterality ? OutBoneTransform : OpposingBoneTransform);
		
		if(bCachePose && TargetSkeleton && CachedPoseSnapshot.IsValid())
		{	// Set bones to modify based-on the hand(s) to modify
			std::initializer_list<FName> ModifyBoneNames;
			switch(HandToModify)
			{
			case ELateralityMod::Both:
				ModifyBoneNames = { RightBoneName, LeftBoneName };
				break;
			case ELateralityMod::Right:
				ModifyBoneNames = { RightBoneName };
				break;
			case ELateralityMod::Left:
				ModifyBoneNames = { LeftBoneName };
			}

			for(const FName& ModifyBoneName : ModifyBoneNames)
			{
				const FReferenceSkeleton& TargetRefSkel = TargetSkeleton->GetReferenceSkeleton();
				const int32 TargetBoneIndex = TargetRefSkel.FindBoneIndex(ModifyBoneName);
				if(TargetBoneIndex == INDEX_NONE) continue;
				
				const FTransform MeshPoseRefTransform = MeshPose->GetSkeleton()->GetReferenceSkeleton().GetRefBonePose()[MeshPoseBoneIndex];
				const FTransform TargetPoseRefTransform = TargetRefSkel.GetRefBonePose()[TargetBoneIndex];

				// Negate the Mesh Pose's reference bone transform from the total and apply the offset onto our reference bone transform
				CachedPoseSnapshot->LocalTransforms.Add(OutBoneTransform.GetRelativeTransform(MeshPoseRefTransform) * TargetPoseRefTransform);
				CachedPoseSnapshot->BoneNames.Add(ModifyBoneName);
			}
		}
	}

	if(CachedPoseSnapshot.IsValid())
	{
		CachedPoseSnapshot->SkeletalMeshName = MeshPose->GetSkeleton()->GetFName();
		CachedPoseSnapshot->bIsValid = true;
	}
	
	if(CachedPoseSnapshot.IsValid())
		for(int32 i = 0; i < CachedPoseSnapshot->BoneNames.Num(); i++)
			UE_LOG(LogTemp, Warning, TEXT("CachedPoseSnapshot BoneName == %s. Rotation == %s"), *CachedPoseSnapshot->BoneNames[i].ToString(), *CachedPoseSnapshot->LocalTransforms[i].Rotator().ToString());
	// Skip root index
	/*for(int32 i = 0; i < PoseMeshBoneNames.Num(); i++)
	{
		FName PoseBoneName = PoseMeshBoneNames[i];
		if(!RightHandSuffix.IsEmpty())
		{
			const FString& PoseBoneString = PoseBoneName.ToString();
			if(PoseBoneString.RightChop(PoseBoneString.GetCharArray().Num() - RightHandSuffix.GetCharArray().Num()) == RightHandSuffix)
			{
				PoseBoneName = FName(PoseBoneString.LeftChop(RightHandSuffix.GetCharArray().Num() - 1) + LeftHandSuffix);
			}
		}
		
		const int32 PoseBoneIndex = MeshPose->GetSkeleton()->GetReferenceSkeleton().FindBoneIndex(bSwapBoneSuffixes ? PoseBoneName : PoseMeshBoneNames[i]);
		if(PoseBoneIndex == INDEX_NONE) continue;
		
		FTransform OutPoseTransform = FTransform::Identity;
		MeshPose->GetBoneTransform(OutPoseTransform, PoseBoneIndex, Time, true);

		// Set visualization pose
		if(i != 0 || bPoseAffectsRoot)
			PoseableMeshComp->BoneSpaceTransforms[i].SetRotation(OutPoseTransform.GetRotation());

		// Set cached pose snapshot
		DefObj->CachedPoseSnapshot.BoneNames.Add(bUseNewSuffixForBoneModification ? PoseBoneName : PoseMeshBoneNames[i]);
		DefObj->CachedPoseSnapshot.LocalTransforms.Add(bUseNewSuffixForBoneModification ? PoseableMeshComp->BoneSpaceTransforms[i] : OutPoseTransform);
	}
	
	DefObj->CachedPoseSnapshot.SkeletalMeshName = MeshPose->GetSkeleton()->GetFName();
	DefObj->CachedPoseSnapshot.bIsValid = true;*/
}


#endif// WITH_EDITORONLY_DATA