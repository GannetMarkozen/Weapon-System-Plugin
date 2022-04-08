// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/WeaponScriptBase.h"

#include "WeaponSystem/Inventories/CharacterInventoryComponent.h"
#include "WeaponSystem/Weapons/WeaponBase.h"


void UWeaponScriptBase::BeginPlay()
{
	// Bind equip events
	if(CanTick())
	{
		FTickerDelegate TickDelegate;
		TickDelegate.BindUObject(this, &ThisClass::Internal_Tick);
		TickHandle = FTicker::GetCoreTicker().AddTicker(TickDelegate);
	}
	
	OwningWeaponBase->EquippedDelegate.AddDynamic(this, &ThisClass::OwningWeaponEquipped);
	OwningWeaponBase->UnequippedDelegate.AddDynamic(this, &ThisClass::OwningWeaponUnequipped);

	BP_BeginPlay();

	// If owning weapon's already equipped. Call on equipped.
	if(IsEquipped())
		OwningWeaponEquipped(OwningWeaponBase, GetOwningInventory<UCharacterInventoryComponent>());
}

void UWeaponScriptBase::EndPlay()
{
	// Unbind events
	if(TickHandle.IsValid())
		FTicker::GetCoreTicker().RemoveTicker(TickHandle);
	
	if(IsValid(OwningWeaponBase))
	{
		OwningWeaponBase->EquippedDelegate.RemoveAll(this);
		OwningWeaponBase->UnequippedDelegate.RemoveAll(this);
	}
	
	BP_EndPlay();
}

void UWeaponScriptBase::RemoveInput(UInputComponent* InputComponent)
{
	RemoveAllUObject(this, InputComponent);
}


void UWeaponScriptBase::OnDestroyed()
{
	if(TickHandle.IsValid())
		FTicker::GetCoreTicker().RemoveTicker(TickHandle);
	Super::OnDestroyed();
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
	
	if(OwningWeaponBase->IsLocallyControlled())
	{
		if(UInputComponent* const InputComponent = GetInputComponentFromInventory(Inventory))
		{
			RemoveInput(InputComponent);
			BP_RemoveInput(InputComponent);
		}
	}
}