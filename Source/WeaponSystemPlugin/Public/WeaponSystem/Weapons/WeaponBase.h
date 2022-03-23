// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "Components/ArrowComponent.h"
#include "WeaponSystem/Inventories/InventoryComponent.h"
#include "WeaponSystem/ReplicatedObject.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "WeaponBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponEquippedDelegate, class AWeaponBase*, Weapon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponUnequippedDelegate, class AWeaponBase*, Weapon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponObtainedDelegate, class AWeaponBase*, Weapon, class UInventoryComponent*, CurrentInventory);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponUnobtainedDelegate, class AWeaponBase*, Weapon, class UInventoryComponent*, OldInventory);

/**
 *	The base class for creating your own weapon class. The weapon class is designed to be fully replicated
 *	and extremely modular. Most of your logic should not be on the weapon itself but on weapon scripts. Weapon
 *	scripts are instanced objects that can be applied to any weapon with in the Scripts array and are editable inline
 *	allowing for a lot of flexibility. They have functions for binding input for the duration the weapon is equipped
 *	and are fully replicated. Any RPC, replicated variable, NetMulticast are replicated properly on the Weapon and 
 *	it's WeaponScripts. The Weapon should be tethered to an Inventory at all times to allow for replication.
 *	The CharacterInventoryComponent comes with built-in weapon swapping and equipping logic for your own generic
 *	Pawn class.
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class WEAPONSYSTEMPLUGIN_API AWeaponBase : public AActor
{
	GENERATED_BODY()
public:
	AWeaponBase();
	
	friend class UInventoryComponent;
	friend class UCharacterInventoryComponent;
	friend class UWeaponScriptBase;

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Components")
	class USkeletalMeshComponent* WeaponMesh;
	
	// Instanced objects that act as scripts for the weapon for built in logic attached to input or events.
	// Can change variables inline on the weapon itself. Replication is supported on these Objects.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced, Meta = (AllowPrivateAccess = "true"), Category = "Configurations")
	TArray<class UWeaponScriptBase*> Scripts;
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_OwningInventory, Meta = (AllowPrivateAccess = "true"), Category = "State")
	class UInventoryComponent* OwningInventory;
	
public:
	FORCEINLINE class USkeletalMeshComponent* GetMesh() const { return WeaponMesh; }
	const FORCEINLINE TArray<class UWeaponScriptBase*>& GetScripts() const { return Scripts; }
	FORCEINLINE class UInventoryComponent* GetOwningInventory() const { return OwningInventory; }

protected:
	// Equivalent to "On Obtained"
	UFUNCTION()
	virtual void OnRep_OwningInventory(const class UInventoryComponent* OldInventory);
	virtual void OnEquipped();
	virtual void OnUnequipped();
	virtual void OnObtained(class UInventoryComponent* CurrentInventory);
	virtual void OnUnobtained(class UInventoryComponent* OldInventory);
	
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "OnRep_Owning Inventory"), Category = "Weapon")
	void BP_OnRep_OwningInventory(class UInventoryComponent* OldInventory);

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Equipped"), Category = "Weapon")
	void BP_OnEquipped();

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Unequipped"), Category = "Weapon")
	void BP_OnUnequipped();

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Obtained"), Category = "Weapon")
	void BP_OnObtained(class UInventoryComponent* CurrentInventory);

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Unobtained"), Category = "Weapon")
	void BP_OnUnobtained(class UInventoryComponent* OldInventory);
	
public:
	// Called when this weapon is equipped by a UCharacterInventoryComponent
	UPROPERTY(BlueprintAssignable, Category = "Weapon|Delegates")
	FWeaponEquippedDelegate EquippedDelegate;

	// Called when this weapon is unequipped by a UCharacterInventoryComponent
	UPROPERTY(BlueprintAssignable, Category = "Weapon|Delegates")
	FWeaponUnequippedDelegate UnequippedDelegate;

	// Called whenever the owning inventory becomes valid, thus obtained by an inventory.
	UPROPERTY(BlueprintAssignable, Category = "Weapon|Delegates")
	FWeaponObtainedDelegate ObtainedDelegate;

	// Called whenever the owning inventory becomes invalid, meaning this weapon has been dropped essentially.
	UPROPERTY(BlueprintAssignable, Category = "Weapon|Delegates")
	FWeaponUnobtainedDelegate UnobtainedDelegate;
	
	
	UFUNCTION(BlueprintPure)
	FORCEINLINE bool IsLocallyControlled() const { return OwningInventory && OwningInventory->IsLocallyControlled(); }

	// Sets this weapon's visibility and all of it's attachments.
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual void SetVisibility(const bool bVisibility = false);

	// Whether or not this weapon's components are visible
	UFUNCTION(BlueprintPure, Category = "Weapon")
	FORCEINLINE bool IsVisible() const { return WeaponMesh->IsVisible(); }


	
	// Helper functions
	UFUNCTION(BlueprintPure, Category = "Weapon")
	void GetAttachments(TArray<class AWeaponAttachmentBase*>& OutAttachments) const;

	template<typename T>
	void GetAttachments(TArray<T*>& OutAttachments) const;

	UFUNCTION(BlueprintPure, Meta = (DeterminesOutputType = "Class", AutoCreateRefTerm = "Class"), Category = "Weapon")
	void GetAttachmentsOfClass(TArray<class AWeaponAttachmentBase*>& OutAttachments, const TSubclassOf<class AWeaponAttachmentBase>& Class) const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
	void GetAttachmentPoints(TArray<class UWeaponAttachmentPoint*>& OutAttachmentPoints) const;

	UFUNCTION(BlueprintPure, Meta = (DeterminesOutput = "Class", AutoCreateRefTerm = "Class"), Category = "Weapon")
	void GetScriptsOfClass(TArray<class UWeaponScriptBase*>& OutScripts, const TSubclassOf<class UWeaponScriptBase>& Class) const;

	template<typename T>
	void GetScripts(TArray<T*>& OutScripts) const;
}; 
