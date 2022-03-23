// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/Attachments/VisualizationSceneComponent.h"

#include "WeaponSystem/WeaponSystemFunctionLibrary.h"


#if WITH_EDITORONLY_DATA

void UVisualizationSceneComponent::BeginPlay()
{
	if(StaticMeshComp) StaticMeshComp->DestroyComponent();
	if(SkeletalMeshComp) SkeletalMeshComp->DestroyComponent();
	StaticMeshComp = nullptr;
	SkeletalMeshComp = nullptr;
	
	Super::BeginPlay();
}


void UVisualizationSceneComponent::OnRegister()
{
	if(!bShowVisualizationMesh)
	{
		if(StaticMeshComp) StaticMeshComp->DestroyComponent();
		if(SkeletalMeshComp) SkeletalMeshComp->DestroyComponent();
		StaticMeshComp = nullptr;
		SkeletalMeshComp = nullptr;
		goto DO_NOT_SPAWN_VISUALIZERS;
	}
	
	AActor* Owner = GetOwner();
	if(!Owner || IsRunningCommandlet() || GetWorld()->bBegunPlay) goto DO_NOT_SPAWN_VISUALIZERS;

	// Spawn visualization static mesh component if there is not already one present.
	// If there is one present but it's associated mesh is not valid, destroy the visualization component.
	if(!StaticMeshComp)
	{
		if(VisualizationStaticMesh)
		{
			StaticMeshComp = NewObject<UStaticMeshComponent>(Owner, NAME_None, RF_Transactional | RF_TextExportTransient);
			if(StaticMeshComp)
			{
				StaticMeshComp->SetupAttachment(this);
				StaticMeshComp->SetIsVisualizationComponent(true);
				StaticMeshComp->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName, false);
				StaticMeshComp->CastShadow = false;
				StaticMeshComp->CreationMethod = EComponentCreationMethod::Instance;
				StaticMeshComp->SetComponentTickEnabled(false);
				StaticMeshComp->SetHiddenInGame(true);
				StaticMeshComp->RegisterComponentWithWorld(GetWorld());
			
				StaticMeshComp->SetStaticMesh(VisualizationStaticMesh);
				StaticMeshComp->SetRelativeTransform(VisualizationTransform);
			}
		}
	}// If mesh component exists but mesh is invalid
	else if(!VisualizationStaticMesh)
	{
		StaticMeshComp->DestroyComponent();
		StaticMeshComp = nullptr;
	}

	// Spawn visualization skeletal mesh component if there is not already one present.
	// If there is one present but it's associated mesh is not valid, destroy the visualization component.
	if(!SkeletalMeshComp)
	{
		if(VisualizationSkeletalMesh)
		{
			SkeletalMeshComp = NewObject<USkeletalMeshComponent>(Owner, NAME_None, RF_Transactional | RF_TextExportTransient);
			if(SkeletalMeshComp)
			{
				SkeletalMeshComp->SetupAttachment(this);
				SkeletalMeshComp->SetIsVisualizationComponent(true);
				SkeletalMeshComp->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName, false);
				SkeletalMeshComp->CastShadow = false;
				SkeletalMeshComp->CreationMethod = EComponentCreationMethod::Instance;
				SkeletalMeshComp->SetComponentTickEnabled(false);
				SkeletalMeshComp->SetHiddenInGame(true);
				SkeletalMeshComp->RegisterComponentWithWorld(GetWorld());
            			
				SkeletalMeshComp->SetSkeletalMesh(VisualizationSkeletalMesh);
				SkeletalMeshComp->SetRelativeTransform(VisualizationTransform);
			}
		}
	}// If mesh component exists but mesh is invalid
	else if(!VisualizationSkeletalMesh)
	{
		SkeletalMeshComp->DestroyComponent();
		SkeletalMeshComp = nullptr;
	}

	DO_NOT_SPAWN_VISUALIZERS:
	
	Super::OnRegister();
}

void UVisualizationSceneComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	const FProperty* Prop = PropertyChangedEvent.Property;
	if(!Prop) return;
	if(Prop->GetFName() == GET_MEMBER_NAME_CHECKED(ThisClass, VisualizationStaticMesh))
	{
		if(StaticMeshComp) StaticMeshComp->SetStaticMesh(VisualizationStaticMesh);
	}
	else if(Prop->GetFName() == GET_MEMBER_NAME_CHECKED(ThisClass, VisualizationSkeletalMesh))
	{
		if(SkeletalMeshComp) SkeletalMeshComp->SetSkeletalMesh(VisualizationSkeletalMesh);
	}
	else if(Prop->GetFName() == GET_MEMBER_NAME_CHECKED(ThisClass, VisualizationTransform))
	{
		if(StaticMeshComp) StaticMeshComp->SetRelativeTransform(VisualizationTransform);
		if(SkeletalMeshComp) SkeletalMeshComp->SetRelativeTransform(VisualizationTransform);
	}
	else if(Prop->GetFName() == GET_MEMBER_NAME_CHECKED(ThisClass, bShowVisualizationMesh))
	{
		if(bShowVisualizationMesh)
		{
			if(StaticMeshComp) StaticMeshComp->SetStaticMesh(VisualizationStaticMesh);
			if(SkeletalMeshComp) SkeletalMeshComp->SetSkeletalMesh(VisualizationSkeletalMesh);
		}
		else
		{
			if(StaticMeshComp) StaticMeshComp->SetStaticMesh(nullptr);
			if(SkeletalMeshComp) SkeletalMeshComp->SetSkeletalMesh(nullptr);
		}
	}
}

void UVisualizationSceneComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);

	if(StaticMeshComp) StaticMeshComp->DestroyComponent();
	if(SkeletalMeshComp) SkeletalMeshComp->DestroyComponent();
	StaticMeshComp = nullptr;
	SkeletalMeshComp = nullptr;
}

#endif// WITH_EDITORONLY_DATA