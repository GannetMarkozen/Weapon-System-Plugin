// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/WeaponBase.h"


#include "Components/ArrowComponent.h"
#include "Engine/ActorChannel.h"
#include "Net/UnrealNetwork.h"
#include "WeaponSystem/Inventories/CharacterInventoryComponent.h"
#include "WeaponSystem/Inventories/InventoryComponent.h"
#include "WeaponSystem/Weapons/WeaponScriptBase.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h"
#include "WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h"

AWeaponBase::AWeaponBase()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon Mesh"));
	WeaponMesh->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
	WeaponMesh->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	RootComponent = WeaponMesh;
}


void AWeaponBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, OwningInventory);
}

bool AWeaponBase::ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool bWroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);
	bWroteSomething |= Channel->ReplicateSubobjectList(Scripts, *Bunch, *RepFlags);
	return bWroteSomething;
}

void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
	SetActorEnableCollision(false);
	
	for(UWeaponScriptBase* Script : Scripts)
	{
		if(!IsValid(Script)) continue;
		Script->OwningWeaponBase = this;
		Script->BeginPlay();
	}
}

void AWeaponBase::OnRep_OwningInventory(const UInventoryComponent* OldInventory)
{
	BP_OnRep_OwningInventory((UInventoryComponent*)OldInventory);
	//ObtainedDelegate.Broadcast(this, OwningInventory, (UInventoryComponent*)OldInventory);
	if(OldInventory) OnUnobtained((UInventoryComponent*)OldInventory);
	if(OwningInventory) OnObtained(OwningInventory);
}

void AWeaponBase::OnEquipped()
{
	BP_OnEquipped();
	EquippedDelegate.Broadcast(this);
}

void AWeaponBase::OnUnequipped()
{
	BP_OnUnequipped();
	UnequippedDelegate.Broadcast(this);
}

void AWeaponBase::OnObtained(UInventoryComponent* CurrentInventory)
{
	BP_OnObtained(CurrentInventory);
	ObtainedDelegate.Broadcast(this, CurrentInventory);
}

void AWeaponBase::OnUnobtained(UInventoryComponent* OldInventory)
{
	BP_OnUnobtained(OldInventory);
	UnobtainedDelegate.Broadcast(this, OldInventory);
}


void AWeaponBase::SetVisibility(const bool bVisibility)
{
	WeaponMesh->SetVisibility(bVisibility, true);
	
	TArray<AWeaponAttachmentBase*> Attachments;
	GetAttachments(Attachments);
	for(const AWeaponAttachmentBase* Attachment : Attachments)
	{
		TArray<UPrimitiveComponent*> Prims;
		Attachment->GetComponents<UPrimitiveComponent>(Prims);
		for(UPrimitiveComponent* Prim : Prims)
			Prim->SetVisibility(bVisibility);
	}
}

void AWeaponBase::GetAttachments(TArray<AWeaponAttachmentBase*>& OutAttachments) const
{
	TArray<UWeaponAttachmentPoint*> AttachmentPoints;
	GetAttachmentPoints(AttachmentPoints);
	for(const UWeaponAttachmentPoint* AttachmentPoint : AttachmentPoints)
		if(AWeaponAttachmentBase* Attachment = AttachmentPoint->GetAttachment())
			OutAttachments.Add(Attachment);
}

template<typename T>
void AWeaponBase::GetAttachments(TArray<T*>& OutAttachments) const
{
	static_assert(TIsClass<T>::Value, TEXT("AWeaponBase::GetAttachments template parameter is not a class type"));
	TArray<UWeaponAttachmentPoint*> AttachmentPoints;
	GetAttachmentPoints(AttachmentPoints);
	for(const UWeaponAttachmentPoint* AttachmentPoint : AttachmentPoints)
		if(T* Attachment = Cast<T>(AttachmentPoint->GetAttachment()))
			OutAttachments.Add(Attachment);
}


void AWeaponBase::GetAttachmentsOfClass(TArray<AWeaponAttachmentBase*>& OutAttachments, const TSubclassOf<AWeaponAttachmentBase>& Class) const
{
	if(!Class) return;
	TArray<UWeaponAttachmentPoint*> AttachmentPoints;
	GetAttachmentPoints(AttachmentPoints);
	for(const UWeaponAttachmentPoint* AttachmentPoint : AttachmentPoints)
		if(IsValid(AttachmentPoint->GetAttachment()) && AttachmentPoint->GetAttachment()->IsA(Class))
			OutAttachments.Add(AttachmentPoint->GetAttachment());
}


void AWeaponBase::GetAttachmentPoints(TArray<UWeaponAttachmentPoint*>& OutAttachmentPoints) const
{
	GetComponents<UWeaponAttachmentPoint>(OutAttachmentPoints);
}

void AWeaponBase::GetScriptsOfClass(TArray<UWeaponScriptBase*>& OutScripts, const TSubclassOf<UWeaponScriptBase>& Class) const
{
	for(UWeaponScriptBase* Script : Scripts)
		if(IsValid(Script) && Script->GetClass()->IsChildOf(Class))
			OutScripts.Add(Script);
}

template <typename T>
void AWeaponBase::GetScripts(TArray<T*>& OutScripts) const
{
	for(UWeaponScriptBase* Script : Scripts)
		if(T* TScript = Cast<T>(Script))
			OutScripts.Add(TScript);
}







