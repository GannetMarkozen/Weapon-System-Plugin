// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Inventories/InventoryComponent.h"

#include "Engine/ActorChannel.h"
#include "Net/UnrealNetwork.h"
#include "WeaponSystem/Weapons/WeaponBase.h"


UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if(HasAuthority())
	{
		for(const TSubclassOf<AWeaponBase>& WeaponClass : DefaultWeapons)
		{
			if(!WeaponClass) continue;
			if(AWeaponBase* NewWeapon = GetWorld()->SpawnActor<AWeaponBase>(WeaponClass))
			{
				AddWeapon(NewWeapon);
			}
		}
	}
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, Weapons);
}


bool UInventoryComponent::ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	return Super::ReplicateSubobjects(Channel, Bunch, RepFlags);
}

void UInventoryComponent::AddWeapon_Implementation(AWeaponBase* NewWeapon)
{
	checkf(HasAuthority(), TEXT("Called %s without authority"), *FString(__FUNCTION__));
	Weapons.Add(NewWeapon);
	if(IsValid(NewWeapon) && NewWeapon->OwningInventory != this)
	{
		NewWeapon->SetOwner(GetOwner());
		const UInventoryComponent* OldInventory = NewWeapon->OwningInventory;
		NewWeapon->OwningInventory = this;
		NewWeapon->OnRep_OwningInventory(OldInventory);
	}
}

void UInventoryComponent::RemoveWeapon_Implementation(AWeaponBase* RemoveWeapon)
{
	checkf(HasAuthority(), TEXT("Called %s without authority"), *FString(__FUNCTION__));
	Weapons.Remove(RemoveWeapon);
	if(IsValid(RemoveWeapon) && RemoveWeapon->OwningInventory == this)
	{
		RemoveWeapon->SetOwner(nullptr);
		RemoveWeapon->OwningInventory = nullptr;
		RemoveWeapon->OnRep_OwningInventory(this);
	}
}


void UInventoryComponent::RemoveWeaponAt_Implementation(const int32 Index)
{
	checkf(HasAuthority(), TEXT("Called %s without authority"), *FString(__FUNCTION__));
	if(Weapons.IsValidIndex(Index))
	{
		AWeaponBase* RemoveWeapon = Weapons[Index];
		Weapons.RemoveAt(Index);
		if(IsValid(RemoveWeapon) && RemoveWeapon->OwningInventory == this)
		{
			RemoveWeapon->SetOwner(nullptr);
			RemoveWeapon->OwningInventory = nullptr;
			RemoveWeapon->OnRep_OwningInventory(this);
		}
	}
}

template<typename T>
T* UInventoryComponent::GetCurrentWeapon() const
{
	return Cast<T>(GetCurrentWeapon());
}




