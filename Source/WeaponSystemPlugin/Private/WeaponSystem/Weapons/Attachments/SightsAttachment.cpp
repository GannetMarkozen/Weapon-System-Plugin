// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/Attachments/SightsAttachment.h"

#include "WeaponSystem/Weapons/Weapon.h"
#include "WeaponSystem/Weapons/Attachments/VisualizationSceneComponent.h"


ASightsAttachment::ASightsAttachment()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;

	Sights = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sights"));
	Sights->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	Sights->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
	Sights->SetCastShadow(false);
	RootComponent = Sights;

	SightsPoint = CreateDefaultSubobject<UVisualizationSceneComponent>(TEXT("Sights Point"));
#if WITH_EDITORONLY_DATA

	static const ConstructorHelpers::FObjectFinder<UStaticMesh> DefMesh(TEXT("/Niagara/DefaultAssets/S_Gnomon.S_Gnomon"));
	SightsPoint->SetDefaultStaticMesh(DefMesh.Object);
	
#endif// WITH_EDITORONLY_DATA
	SightsPoint->SetupAttachment(Sights);
}

/*
 *
 */


#if WITH_EDITORONLY_DATA

void USightsAttachmentPoint::OnRegister()
{
	STATIC_MESH_VISUALIZER_COMPONENT_IMPLEMENTATION(AimOffset,
		if(DefaultAttachment)
			if(const auto* DefObj = Cast<ASightsAttachment>(DefaultAttachment->GetDefaultObject()))
				AimOffsetComp->SetRelativeTransform(FTransform(FVector(-AimOffset, 0.f, 0.f)) * DefObj->GetSightsPoint()->GetRelativeTransform());
	);
	
	Super::OnRegister();
}

void USightsAttachmentPoint::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	if(AimOffsetComp)
	{
		AimOffsetComp->DestroyComponent();
		AimOffsetComp = nullptr;
	}
	
	Super::OnComponentDestroyed(bDestroyingHierarchy);
}



#endif// WITH_EDITORONLY_DATA
