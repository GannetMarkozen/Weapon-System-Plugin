// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "CharacterInventoryComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCurrentWeaponChangedDelegate, class AWeaponBase*, CurrentWeapon, class AWeaponBase*, OldWeapon);

/* Derived from UInventoryComponent. Comes with built-in weapon swapping and equipping logic / notifies.
 * Owning Character should implement the ICharacterInventoryInterface if it wants to receive events.
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WEAPONSYSTEMPLUGIN_API UCharacterInventoryComponent : public UInventoryComponent
{
	GENERATED_BODY()

public:
	UCharacterInventoryComponent();

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	virtual FORCEINLINE class AWeaponBase* GetCurrentWeapon_Implementation() const override { return CurrentWeapon; }

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = "OnRep_CurrentWeapon", Meta = (AllowPrivateAccess = "true"), Category = "Inventory")
	class AWeaponBase* CurrentWeapon;

	// Can change in editor to determine what the current weapon index we want to start out with (must be a valid index)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Inventory")
	int32 CurrentIndex = 0;

private:
	UFUNCTION()
	FORCEINLINE void OnRep_CurrentWeapon(const class AWeaponBase* OldWeapon) { CurrentWeaponChanged((AWeaponBase*)OldWeapon); }
	
protected:
	// Called on all instances whenever the current weapon has been changed. Equivalent to OnRep_CurrentWeapon
	virtual void CurrentWeaponChanged(class AWeaponBase* OldWeapon);

	// Called on all instances whenever the current weapon has been changed. Equivalent to OnRep_CurrentWeapon
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Current Weapon Changed"), Category = "Inventory")
	void BP_CurrentWeaponChanged(class AWeaponBase* NewWeapon, class AWeaponBase* OldWeapon);
	
public:
	// Call this locally to instantiate CurrentIndex. Will RPC to server.
	// Local prediction determines whether to call on client immediately.
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	virtual void EquipAt(const int32 Index = 0, const bool bLocalPredicted = false);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Inventory")
	FORCEINLINE void Equip(class AWeaponBase* Weapon);

	
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	virtual FORCEINLINE void EquipNext()
	{
		if(Weapons.Num() <= 1) return;
		EquipAt(Weapons.IsValidIndex(CurrentIndex + 1) ? CurrentIndex + 1 : 0);
	}

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	virtual FORCEINLINE void EquipLast()
	{
		if(Weapons.Num() <= 1) return;
		EquipAt(Weapons.IsValidIndex(CurrentIndex - 1) ? CurrentIndex - 1 : Weapons.Num() - 1);
	}

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	virtual FORCEINLINE void EquipNone()
	{
		Equip(nullptr);
		CurrentIndex = 0;
	}

protected:
	/*
	 *	UInventoryComponent overrides
	 */
	virtual void AddWeapon_Implementation(AWeaponBase* NewWeapon) override;
	virtual void RemoveWeapon_Implementation(AWeaponBase* RemoveWeapon) override;
	virtual void RemoveWeaponAt_Implementation(const int32 Index) override;
	

	
	// Override to add parameters on whether to equip or not. Called on both client and server.
	// If failed prediction, calls Client_EquipPredictionFailed.
	UFUNCTION(BlueprintNativeEvent, Category = "Inventory")
	bool CanEquip(const class AWeaponBase* QueryWeapon) const;
	virtual FORCEINLINE bool CanEquip_Implementation(const class AWeaponBase* QueryWeapon) const { return QueryWeapon != CurrentWeapon; }
	
	UFUNCTION(Server, Reliable)
	void Server_EquipAt(const int32 Index);
	FORCEINLINE void Server_EquipAt_Implementation(const int32 Index)
	{
		if(Weapons.IsValidIndex(Index))
			Equip(Weapons[Index]);
	}

public:	
	FORCEINLINE int32 GetCurrentIndex() const { return CurrentIndex; }

	UPROPERTY(BlueprintAssignable, Category = "Inventory|Delegates")
	FCurrentWeaponChangedDelegate CurrentWeaponChangedDelegate;
};
