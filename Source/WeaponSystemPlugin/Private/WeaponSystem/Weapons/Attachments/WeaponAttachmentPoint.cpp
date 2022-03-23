// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h"

#include "GameFramework/Character.h"
#include "Net/UnrealNetwork.h"
#include "WeaponSystem/Weapons/WeaponBase.h"
#include "WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h"


//
//
//
//


UWeaponAttachmentPoint::UWeaponAttachmentPoint()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
}


void UWeaponAttachmentPoint::BeginPlay()
{
	Super::BeginPlay();

	if(HasAuthority() && DefaultAttachment)
	{
		const auto& SpawnDefaultAttachment = [this]()->void
		{
			/*FActorSpawnParameters Params;
			Params.Owner = GetOwner();
			Attachment = GetWorld()->SpawnActor<AWeaponAttachmentBase>(DefaultAttachment, Params);
			if(Attachment) OnRep_Attachment();*/
			AWeaponAttachmentBase::SpawnAttachment(DefaultAttachment, this);
		};

		// Add a small delay to spawning the attachment so the OwningWeapon is valid
		GetWorld()->GetTimerManager().SetTimer(DefaultAttachmentDelay, SpawnDefaultAttachment, 0.1f, false);
	}
}

void UWeaponAttachmentPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, Attachment);
}

#if WITH_EDITORONLY_DATA
void UWeaponAttachmentPoint::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if(PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(ThisClass, DefaultAttachment))
	{
		if(DefaultAttachment)
		{
			const auto* DefObj = DefaultAttachment->GetDefaultObject<AWeaponAttachmentBase>();
			if(const auto* StaticMeshRoot = Cast<UStaticMeshComponent>(DefObj->GetRootComponent()))
			{
				if(!VisualizationSkeletalMesh)
					SetDefaultStaticMesh(StaticMeshRoot->GetStaticMesh());
			}
			else if(const auto* SkelMeshRoot = Cast<USkeletalMeshComponent>(DefObj->GetRootComponent()))
			{
				if(!VisualizationStaticMesh)
					SetDefaultSkeletalMesh(SkelMeshRoot->SkeletalMesh);
			}
		}
		else
		{
			SetDefaultStaticMesh(nullptr);
			SetDefaultSkeletalMesh(nullptr);
		}
	}
	
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif// WITH_EDITORONLY_DATA


void UWeaponAttachmentPoint::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);
	if(Attachment) Attachment->Destroy();
}


void UWeaponAttachmentPoint::OnRep_Attachment()
{
	if(Attachment)
	{
		Attachment->AttachToComponent(this, FAttachmentTransformRules::SnapToTargetIncludingScale, NAME_None);

		// Search through the linked-list of owners
		// to find the owning weapon base actor
		AActor* Owner = GetOwner();
		while(Owner)
		{
			if(AWeaponBase* OwningWeapon = Cast<AWeaponBase>(Owner))
			{
				Attachment->Internal_OnAttached(OwningWeapon);
				break;
			}

			Owner = Owner->GetOwner();
		}

		if(!Owner) Attachment->Internal_OnAttached(nullptr);
	}

	// Call blueprint event
	AttachmentChanged();
}

AWeaponAttachmentBase* UWeaponAttachmentPoint::SpawnAttachment(const TSubclassOf<AWeaponAttachmentBase>& AttachmentClass)
{
	if(!HasAuthority() || !AttachmentClass || IsValid(Attachment)) return nullptr;
	FActorSpawnParameters Params;
	Params.Owner = GetOwner();
	Attachment = GetWorld()->SpawnActor<AWeaponAttachmentBase>(AttachmentClass, Params);
	OnRep_Attachment();
	return Attachment;
}


void UWeaponAttachmentPoint::DestroyAttachment()
{
	if(!HasAuthority() || !Attachment) return;
	Attachment->Destroy();
	Attachment = nullptr;
	OnRep_Attachment();
}



