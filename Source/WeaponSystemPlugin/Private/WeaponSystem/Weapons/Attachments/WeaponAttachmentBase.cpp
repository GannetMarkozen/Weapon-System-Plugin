// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h"

#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "WeaponSystem/Inventories/CharacterInventoryComponent.h"
#include "WeaponSystem/Weapons/WeaponBase.h"
#include "WeaponSystem/Weapons/WeaponScriptBase.h"
#include "WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h"


AWeaponAttachmentBase::AWeaponAttachmentBase()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
}

AWeaponAttachmentBase* AWeaponAttachmentBase::SpawnAttachment(const TSubclassOf<AWeaponAttachmentBase>& AttachmentClass, UWeaponAttachmentPoint* AttachmentPoint)
{
	if(!AttachmentClass || !AttachmentPoint) return nullptr;
	
	FActorSpawnParameters Params;
	Params.Owner = AttachmentPoint->GetOwner();
	AWeaponAttachmentBase* NewAttachment = AttachmentPoint->GetWorld()->SpawnActor<AWeaponAttachmentBase>(AttachmentClass, Params);
	AttachmentPoint->SetAttachment(NewAttachment);

	return NewAttachment;
}

AWeaponAttachmentBase* AWeaponAttachmentBase::SpawnAttachmentUnattached(const UObject* WorldContextObject, const TSubclassOf<AWeaponAttachmentBase>& AttachmentClass, const FTransform& WorldTransform)
{
	if(WorldContextObject && AttachmentClass)
		if(UWorld* World = WorldContextObject->GetWorld())
			return World->SpawnActor<AWeaponAttachmentBase>(AttachmentClass, WorldTransform);
	return nullptr;
}



void AWeaponAttachmentBase::Destroyed()
{
	Internal_OnRemoved();
	Super::Destroyed();
}


void AWeaponAttachmentBase::OnAttached()
{
	if(!OwningWeapon || !OwningWeapon->IsVisible())
		SetVisibility(false);

	if(OwningWeapon)
	{
		// Bind functions from owning weapon delegates
		OwningWeapon->ObtainedDelegate.AddDynamic(this, &ThisClass::Internal_OnObtained);
		OwningWeapon->UnobtainedDelegate.AddDynamic(this, &ThisClass::Internal_OnUnobtained);
		OwningWeapon->EquippedDelegate.AddDynamic(this, &ThisClass::Internal_OnEquipped);
		OwningWeapon->EquippedDelegate.AddDynamic(this, &ThisClass::Internal_OnUnequipped);

		// Call obtained if owning weapon is currently obtained on attached.
		if(IsValid(OwningWeapon->GetOwningInventory()))
			OnObtained(OwningWeapon->GetOwningInventory());

		// Call equipped if owning weapon is currently being equipped by character inventory.
		/*if(const UInventoryComponent* OwningInventory = OwningWeapon->GetOwningInventory())
			if(OwningInventory->GetCurrentWeapon() == OwningWeapon)
				OnEquipped();*/
		if(OwningWeapon->IsEquipped())
			OnEquipped(GetOwningInventory<UCharacterInventoryComponent>());
	}
}

void AWeaponAttachmentBase::OnRemoved()
{
	if(OwningWeapon)
	{
		OwningWeapon->ObtainedDelegate.RemoveAll(this);
		OwningWeapon->UnobtainedDelegate.RemoveAll(this);
	}
}


void AWeaponAttachmentBase::SetVisibility(const bool bVisible)
{// Set all owning prim comps to bVisible
	TArray<UPrimitiveComponent*> Prims;
	GetComponents<UPrimitiveComponent>(Prims);
	for(UPrimitiveComponent* Prim : Prims)
		Prim->SetVisibility(bVisible);
}
