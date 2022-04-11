// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/WeaponBase.h"

#include "Net/UnrealNetwork.h"
#include "Engine/ActorChannel.h"

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
	DOREPLIFETIME(ThisClass, Scripts);
	DOREPLIFETIME(ThisClass, OwningInventory);
}


bool AWeaponBase::ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool bWroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);
	bWroteSomething |= Channel->ReplicateSubobjectList(Scripts, *Bunch, *RepFlags);
	return bWroteSomething;
}

void AWeaponBase::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);

	// Call PreReplication on weapon scripts
	UWeaponSystemFunctionLibrary::CallPreReplicationList(Scripts);
	
	DOREPLIFETIME_ACTIVE_OVERRIDE(ThisClass, Scripts, !DelayScriptsReplicationTimerHandle.IsValid());
}



void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();

	// Initialize default scripts
	for(int32 i = 0; i < Scripts.Num(); i++)
	{
		if(!Scripts[i])
		{
			Scripts.RemoveAt(i--);
			continue;
		}
		Internal_OnAddedScript(Scripts[i]);
	}

	// Delay scripts replication after begin play
	// to avoid created scripts being initialized
	// before default scripts
	if(HasAuthority())
	{
		const auto& Invalidate = [&]()->void { if(IsValid(this)) DelayScriptsReplicationTimerHandle.Invalidate(); };
		GetWorldTimerManager().SetTimer(DelayScriptsReplicationTimerHandle, Invalidate, 0.5f, false);
	}
}

void AWeaponBase::OnRep_Scripts(const TArray<UWeaponScriptBase*>& OldScripts)
{
	// Check added scripts
	for(UWeaponScriptBase* Script : Scripts)
		if(IsValid(Script) && Script->OwningWeaponBase != this)
			Internal_OnAddedScript(Script);

	// Check removed scripts
	for(UWeaponScriptBase* OldScript : OldScripts)
		if(OldScript && Scripts.Find(OldScript) == INDEX_NONE)
			Internal_OnRemovedScript(OldScript);
}

void AWeaponBase::Internal_OnAddedScript(UWeaponScriptBase* NewScript)
{
	OnAddedScript(NewScript);
	BP_OnAddedScript(NewScript);
	NewScript->OwningWeaponBase = this;
	NewScript->BeginPlay();
}

void AWeaponBase::Internal_OnRemovedScript(UWeaponScriptBase* RemovedScript)
{
	OnRemovedScript(RemovedScript);
	BP_OnRemovedScript(RemovedScript);
	RemovedScript->EndPlay();
}






void AWeaponBase::OnRep_OwningInventory(const UInventoryComponent* OldInventory)
{
	BP_OnRep_OwningInventory((UInventoryComponent*)OldInventory);
	//ObtainedDelegate.Broadcast(this, OwningInventory, (UInventoryComponent*)OldInventory);
	if(OldInventory) OnUnobtained((UInventoryComponent*)OldInventory);
	if(OwningInventory) OnObtained(OwningInventory);
}


template<typename T>
T* AWeaponBase::CreateScript(const TSubclassOf<UWeaponScriptBase>& Class, const bool bCheckForExistingScriptOfClass)
{
	checkf(HasAuthority(), TEXT("AWeaponBase::SpawnScript can not spawn script without authority"));
	if(!Class || (bCheckForExistingScriptOfClass && HasScript(Class))) return nullptr;
	T* NewScript = NewObject<T>(this, Class);
	AddScript(NewScript);
	return NewScript;
}


void AWeaponBase::AddScript(UWeaponScriptBase* Script)
{
	checkf(HasAuthority(), TEXT("AWeaponBase::AddScript can not add script without authority"));
	if(!IsValid(Script)) return;
	Scripts.Add(Script);
	Internal_OnAddedScript(Script);
}

void AWeaponBase::RemoveScript(UWeaponScriptBase* Script)
{
	checkf(HasAuthority(), TEXT("AWeaponBase::RemoveScript can not remove script without authority"));
	if(!Script) return;
	Internal_OnRemovedScript(Script);
	Script->Destroy();
	Scripts.Remove(Script);
}


bool AWeaponBase::RemoveScriptsByClass(const TSubclassOf<UWeaponScriptBase>& Class)
{
	checkf(HasAuthority(), TEXT("AWeaponBase::RemoveScriptsByClass can not remove script without authority"));
	if(!Class) return false;
	bool bRemovedAny = false;
	for(int32 i = 0; i < Scripts.Num(); i++) {
		if(IsValid(Scripts[i]) && Scripts[i]->IsA(Class)) {
			Internal_OnRemovedScript(Scripts[i]);
			Scripts[i]->Destroy();
			Scripts.RemoveAt(i--);
			bRemovedAny = true;
		}
	}
	return bRemovedAny;
}

bool AWeaponBase::RemoveScriptByClass(const TSubclassOf<UWeaponScriptBase>& Class)
{
	checkf(HasAuthority(), TEXT("AWeaponBase::RemoveScriptByClass can not remove script without authority"));
	if(!Class) return false;
	for(int32 i = 0; i < Scripts.Num(); i++) {
		if(IsValid(Scripts[i]) && Scripts[i]->IsA(Class)) {
			Internal_OnRemovedScript(Scripts[i]);
			Scripts[i]->Destroy();
			Scripts.RemoveAt(i);
			return true;
		}
	}
	return false;
}



void AWeaponBase::OnEquipped(UCharacterInventoryComponent* Inventory)
{
	BP_OnEquipped(Inventory);
	EquippedDelegate.Broadcast(this, Inventory);
}

void AWeaponBase::OnUnequipped(UCharacterInventoryComponent* Inventory)
{
	BP_OnUnequipped(Inventory);
	UnequippedDelegate.Broadcast(this, Inventory);
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

TArray<UWeaponScriptBase*> AWeaponBase::GetScriptsOfClass(const TSubclassOf<UWeaponScriptBase>& Class) const
{
	TArray<UWeaponScriptBase*> OutScripts;
	for(UWeaponScriptBase* Script : Scripts)
		if(IsValid(Script) && Script->GetClass()->IsChildOf(Class))
			OutScripts.Add(Script);
	return OutScripts;
}

bool AWeaponBase::HasScript(const TSubclassOf<UWeaponScriptBase>& Class) const
{
	if(!Class) return false;
	for(const UWeaponScriptBase* Script : Scripts)
		if(Script && Script->IsA(Class))
			return true;
	return false;
}

UWeaponScriptBase* AWeaponBase::GetScriptOfClass(const TSubclassOf<UWeaponScriptBase>& Class) const
{
	if(!Class) return nullptr;
	for(UWeaponScriptBase* Script : Scripts)
		if(IsValid(Script) && Script->IsA(Class))
			return Script;
	return nullptr;
}

template <typename T>
void AWeaponBase::GetScriptsOfClass(TArray<T*>& OutScripts) const
{
	for(UWeaponScriptBase* Script : Scripts)
		if(T* TScript = Cast<T>(Script))
			OutScripts.Add(TScript);
}

template<typename T>
T* AWeaponBase::GetScriptOfClass() const
{
	for(UWeaponScriptBase* Script : Scripts)
		if(T* TScript = Cast<T>(Script))
			return TScript;
	return nullptr;
}

void AWeaponBase::GetAttachedWidgets(TArray<UUserWidget*>& OutWidgets) const
{
	TArray<UWidgetComponent*> WidgetComps;
	GetComponents(WidgetComps);
	for(const UWidgetComponent* WidgetComp : WidgetComps)
		if(UUserWidget* Widget = WidgetComp->GetWidget())
			OutWidgets.Add(Widget);
}






