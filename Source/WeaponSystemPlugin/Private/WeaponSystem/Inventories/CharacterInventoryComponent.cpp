
// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Inventories/CharacterInventoryComponent.h"

#include "Net/UnrealNetwork.h"
#include "WeaponSystem/Weapons//WeaponBase.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "WeaponSystem/Weapons/WeaponDropBase.h"


UCharacterInventoryComponent::UCharacterInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}



void UCharacterInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if(HasAuthority() && Weapons.IsValidIndex(CurrentIndex) && IsValid(Weapons[CurrentIndex]))
		EquipAt(CurrentIndex);
}

void UCharacterInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, CurrentWeapon);
	//DOREPLIFETIME_CONDITION(ThisClass, CurrentIndex, COND_OwnerOnly);
}


void UCharacterInventoryComponent::CurrentWeaponChanged(AWeaponBase* OldWeapon)
{
	// Find new CurrentIndex from the CurrentWeapon index in the Weapons array
	const int32 NewIndex = CurrentWeapon ? Weapons.Find(CurrentWeapon) : 0;
	CurrentIndex = NewIndex != INDEX_NONE ? NewIndex : 0;
	
	if(IsValid(CurrentWeapon))
	{
		CurrentWeapon->OnEquipped(this);
	}

	if(IsValid(OldWeapon))
	{
		OldWeapon->OnUnequipped(this);
	}
	
	BP_CurrentWeaponChanged(CurrentWeapon, OldWeapon);
	CurrentWeaponChangedDelegate.Broadcast(CurrentWeapon, OldWeapon/*IsValid(OldWeapon) ? (AWeaponBase*)OldWeapon : nullptr*/);
}

void UCharacterInventoryComponent::EquipAt(const int32 Index, const bool bLocalPredicted)
{
	if(!Weapons.IsValidIndex(Index) || !CanEquip(Weapons[Index])) return;

	CurrentIndex = Index;
	 
	if(!HasAuthority())
	{
		Server_EquipAt(Index);
		if(!bLocalPredicted)
			return;
	}
	
	Equip(Weapons[Index]);
}

void UCharacterInventoryComponent::Equip(AWeaponBase* Weapon)
{
	// Set CurrentWeapon and replicate
	if(!CanEquip(Weapon)) return;
	AWeaponBase* const OldWeapon = CurrentWeapon;
	CurrentWeapon = Weapon;

	// Replicate CurrentIndex to owner
	const int32 Index = Weapons.Find(Weapon);
	if(Index != INDEX_NONE) CurrentIndex = Index;
	
	CurrentWeaponChanged(OldWeapon);
}

/*
 *	UInventoryComponent overrides
 */

void UCharacterInventoryComponent::AddWeapon_Implementation(AWeaponBase* NewWeapon)
{
	Super::AddWeapon_Implementation(NewWeapon);
	
	if(!CurrentWeapon && Weapons.IsValidIndex(0) && Weapons[0] == NewWeapon)
		Equip(NewWeapon);
}

void UCharacterInventoryComponent::RemoveWeapon_Implementation(AWeaponBase* RemoveWeapon)
{
	//checkf(HasAuthority(), TEXT("Called %s without authority."), *FString(__FUNCTION__));
	const int32 Index = Weapons.Find(RemoveWeapon);
	if(Index == INDEX_NONE) return;
	RemoveWeaponAt(Index);
}

void UCharacterInventoryComponent::RemoveWeaponAt_Implementation(const int32 Index)
{
	if(Weapons.IsEmpty()) return;
	
	if(Weapons.Num() == 1)
	{// If removed all weapons, equip nothing
		Equip(nullptr);
		CurrentIndex = 0;
	}
	else if(Index == CurrentIndex)
	{// If removed current weapon, try equipping surrounding weapon
		if(Weapons.IsValidIndex(CurrentIndex - 1))
		{
			EquipAt(CurrentIndex - 1);
		}
		else if(Weapons.IsValidIndex(CurrentIndex + 1))
		{
			EquipAt(CurrentIndex + 1);
		}
	}

	Super::RemoveWeaponAt_Implementation(Index);

	// Find new CurrentIndex from the CurrentWeapon index in the Weapons array
	const int32 NewIndex = CurrentWeapon ? Weapons.Find(CurrentWeapon) : 0;
	CurrentIndex = NewIndex != INDEX_NONE ? NewIndex : 0;
}



