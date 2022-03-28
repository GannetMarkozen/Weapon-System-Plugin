// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/WeaponScriptBase.h"
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
	if(IsEquipped()) OwningWeaponEquipped(OwningWeaponBase);
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


void UWeaponScriptBase::OnDestroyed()
{
	if(TickHandle.IsValid())
		FTicker::GetCoreTicker().RemoveTicker(TickHandle);
	Super::OnDestroyed();
}


void UWeaponScriptBase::OwningWeaponEquipped(AWeaponBase* Weapon)
{
	BP_OwningWeaponEquipped();
	
	if(OwningWeaponBase->IsLocallyControlled())
	{
		SetupInput();
		BP_SetupInput();
	}
		
}

void UWeaponScriptBase::OwningWeaponUnequipped(AWeaponBase* Weapon)
{
	BP_OwningWeaponUnequipped();
	
	if(OwningWeaponBase->IsLocallyControlled())
	{
		RemoveInput();
		BP_RemoveInput();
	}
}
