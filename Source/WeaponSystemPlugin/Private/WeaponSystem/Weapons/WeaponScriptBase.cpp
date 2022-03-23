// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/WeaponScriptBase.h"
#include "WeaponSystem/Weapons/WeaponBase.h"


void UWeaponScriptBase::BeginPlay()
{// Bind equip events
	BP_BeginPlay();

	if(CanTick())
	{
		FTickerDelegate TickDelegate;
		TickDelegate.BindUObject(this, &ThisClass::Internal_Tick);
		TickHandle = FTicker::GetCoreTicker().AddTicker(TickDelegate);
	}
	
	OwningWeaponBase->EquippedDelegate.AddDynamic(this, &ThisClass::OwningWeaponEquipped);
	OwningWeaponBase->UnequippedDelegate.AddDynamic(this, &ThisClass::OwningWeaponUnequipped);
}

void UWeaponScriptBase::OnDestroyed()
{
	Super::OnDestroyed();
	if(TickHandle.IsValid())
		FTicker::GetCoreTicker().RemoveTicker(TickHandle);
}


void UWeaponScriptBase::OwningWeaponEquipped(AWeaponBase* Weapon)
{
	BP_OwningWeaponEquipped();
	
	if(OwningWeaponBase->IsLocallyControlled())
		SetupInput();
}

void UWeaponScriptBase::OwningWeaponUnequipped(AWeaponBase* Weapon)
{
	BP_OwningWeaponUnequipped();
	
	if(OwningWeaponBase->IsLocallyControlled())
		RemoveInput();
}

void UWeaponScriptBase::SetupInput()
{
	BP_SetupInput();
}

void UWeaponScriptBase::RemoveInput()
{
	RemoveAllUObject(this);
	BP_RemoveInput();
	
}
