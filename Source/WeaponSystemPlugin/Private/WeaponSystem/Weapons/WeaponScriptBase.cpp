// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/WeaponScriptBase.h"
#include "WeaponSystem/Inventories/CharacterInventoryComponent.h"
#include "WeaponSystem/Weapons/WeaponBase.h"


void UWeaponScriptBase::BeginPlay()
{
	// Bind equip events
	OwningWeaponBase->EquippedDelegate.AddDynamic(this, &ThisClass::OwningWeaponEquipped);
	OwningWeaponBase->UnequippedDelegate.AddDynamic(this, &ThisClass::OwningWeaponUnequipped);

	Super::BeginPlay();

	if(IsEquipped())
		OwningWeaponEquipped(OwningWeaponBase, GetOwningInventory<UCharacterInventoryComponent>());
}

void UWeaponScriptBase::EndPlay()
{
	// Unbind events
	if(IsValid(OwningWeaponBase))
	{
		OwningWeaponBase->EquippedDelegate.RemoveAll(this);
		OwningWeaponBase->UnequippedDelegate.RemoveAll(this);
	}

	Super::EndPlay();
}

AActor* UWeaponScriptBase::GetOwner() const
{
	return OwningWeaponBase ? OwningWeaponBase : Super::GetOwner();
}

void UWeaponScriptBase::RemoveInput(UInputComponent* InputComponent)
{
	RemoveAllUObject(this, InputComponent);
}

UInventoryComponent* UWeaponScriptBase::GetOwningInventory() const
{
	return OwningWeaponBase ? OwningWeaponBase->GetOwningInventory() : nullptr;
}

bool UWeaponScriptBase::IsLocallyControlled() const
{
	return OwningWeaponBase && OwningWeaponBase->IsLocallyControlled();
}

bool UWeaponScriptBase::IsEquippedBy(const UInventoryComponent* Inventory) const
{
	return OwningWeaponBase && OwningWeaponBase->IsEquippedBy(Inventory);
}

void UWeaponScriptBase::OwningWeaponEquipped(AWeaponBase* Weapon, UCharacterInventoryComponent* Inventory)
{
	BP_OwningWeaponEquipped(Inventory);
	
	if(OwningWeaponBase->IsLocallyControlled())
	{
		if(UInputComponent* const InputComponent = GetInputComponentFromInventory(Inventory))
		{
			SetupInput(InputComponent);
			BP_SetupInput(InputComponent);
		}
	}
}

void UWeaponScriptBase::OwningWeaponUnequipped(AWeaponBase* Weapon, UCharacterInventoryComponent* Inventory)
{
	BP_OwningWeaponUnequipped(Inventory);
	
	//if(OwningWeaponBase->IsLocallyControlled())
	if(Inventory->IsLocallyControlled())
	{
		if(UInputComponent* const InputComponent = GetInputComponentFromInventory(Inventory))
		{
			RemoveInput(InputComponent);
			BP_RemoveInput(InputComponent);
		}
	}
}

UInputComponent* UWeaponScriptBase::GetInputComponentFromInventory_Implementation(const UInventoryComponent* Inventory, const bool bHasPriority) const
{
	if(!Inventory) return nullptr;
	if(const APawn* OwningPawn = Inventory->GetOwner<APawn>())
	{
		if(!bHasPriority)
			return OwningPawn->InputComponent.Get();
			
		if(const AController* Controller = OwningPawn->Controller.Get())
			return Controller->InputComponent.Get();
	}
	return nullptr;
}


