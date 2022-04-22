// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/Weapon.h"

AWeapon::AWeapon()
{
	PrimaryActorTick.bCanEverTick = false;
}


void AWeapon::BeginPlay()
{
#if WITH_EDITORONLY_DATA
	if(OriginWidgetComp)
	{
		OriginWidgetComp->DestroyComponent();
		OriginWidgetComp = nullptr;
	}
	if(AimOffsetComp)
	{
		AimOffsetComp->DestroyComponent();
		AimOffsetComp = nullptr;
	}
#endif// WITH_EDITORONLY_DATA

	Super::BeginPlay();

	// By default, the sights relative transform should equal whatever
	// the GetDefaultSightsRelativeTransform implementation returns.
	SightsRelativeTransform = GetDefaultSightsRelativeTransform();
}

void AWeapon::OnRep_OwningInventory(const UInventoryComponent* OldInventory)
{
	if(IsValid(OwningInventory)) OwningCharacter = OwningInventory->GetOwner<AShooterCharacterBase>();
	Super::OnRep_OwningInventory(OldInventory);
}

FTransform AWeapon::GetOrientationRelativeTransform_Implementation(const float AimingValue) const
{
	if(AimingValue <= 0.f)
		return GetOriginRelativeTransform();

	// Get the OriginRelativeTransform value with it's origin-space
	// Y location being equal to the sights origin-space Y location.
	FTransform OriginCenteredTransform = GetOriginRelativeTransform();
	OriginCenteredTransform.SetLocation(OriginCenteredTransform.GetLocation() +
		OriginCenteredTransform.GetRotation().RotateVector(FVector(0.f, OriginRelativeTransform.GetRotation().UnrotateVector(SightsRelativeTransform.GetLocation()).Y, 0.f)));

	// Get the centered origin position rotated about the sights transform
	const FTransform SightsOrigin(SightsRelativeTransform.GetRotation(),
		(OriginCenteredTransform.GetRelativeTransform(SightsRelativeTransform) * SightsRelativeTransform.GetRotation() * OriginRelativeTransform.GetRotation().Inverse() * SightsRelativeTransform).GetLocation());

	// Blend between the standard origin transform and the
	// sights origin by the aiming value.
	FTransform BlendedTransform;
	BlendedTransform.Blend(GetOriginRelativeTransform(), SightsOrigin, AimingValue);
	return BlendedTransform;
}




#if WITH_EDITORONLY_DATA

void AWeapon::RegisterAllComponents()
{
	Super::RegisterAllComponents();
	
	if(!OriginWidgetComp)
	{
		if(bShowOriginWidget)
		{
			OriginWidgetComp = NewObject<UStaticMeshComponent>(this, NAME_None, RF_Transactional | RF_TextExportTransient);
			if(OriginWidgetComp)
			{
				UStaticMesh* const WidgetMesh(OriginVisualizationMesh ? OriginVisualizationMesh : LoadObject<UStaticMesh>(nullptr, TEXT("/Niagara/DefaultAssets/S_Gnomon.S_Gnomon")));
				
				OriginWidgetComp->SetupAttachment(RootComponent);
				OriginWidgetComp->SetStaticMesh(WidgetMesh);
				OriginWidgetComp->SetUsingAbsoluteScale(true);
				OriginWidgetComp->SetIsVisualizationComponent(true);
				OriginWidgetComp->SetCastShadow(false);
				OriginWidgetComp->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
				OriginWidgetComp->CreationMethod = EComponentCreationMethod::Instance;
				OriginWidgetComp->SetComponentTickEnabled(false);
				OriginWidgetComp->SetHiddenInGame(true);
				OriginWidgetComp->SetRelativeTransform(FTransform(OriginRelativeTransform.GetRotation(),
					OriginRelativeTransform.GetRotation().RotateVector(OriginRelativeTransform.GetLocation()), OriginRelativeTransform.GetScale3D()));
				OriginWidgetComp->RegisterComponentWithWorld(GetWorld());
			}
		}
	}
	else if(!bShowOriginWidget)
	{
		OriginWidgetComp->DestroyComponent();
		OriginWidgetComp = nullptr;
	}

	STATIC_MESH_VISUALIZER_ACTOR_IMPLEMENTATION(AimOffset,
		AimOffsetComp->SetRelativeTransform(GetDefaultSightsRelativeTransform());
	);
}

#endif// WITH_EDITORONLY_DATA

