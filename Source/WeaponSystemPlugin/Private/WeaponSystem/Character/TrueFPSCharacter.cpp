// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Character/TrueFPSCharacter.h"
#include "Camera/CameraComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"

ATrueFPSCharacter::ATrueFPSCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	Camera->SetupAttachment(GetMesh(), FName("head"));

	GetMesh()->SetTickGroup(ETickingGroup::TG_PrePhysics);
	GetMesh()->bVisibleInReflectionCaptures = true;
	GetMesh()->SetCastHiddenShadow(true);
	
	ClientMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Client Mesh"));
	ClientMesh->bVisibleInReflectionCaptures = false;
	ClientMesh->SetCastShadow(false);
	ClientMesh->SetupAttachment(GetMesh());

	PhysicalAnimation = CreateDefaultSubobject<UPhysicalAnimationComponent>(TEXT("Physical Animation"));
}

void ATrueFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if(IsLocallyControlled())
	{
		GetMesh()->SetVisibility(false);
		ClientMesh->SetSkeletalMesh(GetMesh()->SkeletalMesh);
		ClientMesh->HideBoneByName(HeadBoneName, PBO_None);
	}
	else
	{
		ClientMesh->DestroyComponent();
		ClientMesh = nullptr;
	}
}



















