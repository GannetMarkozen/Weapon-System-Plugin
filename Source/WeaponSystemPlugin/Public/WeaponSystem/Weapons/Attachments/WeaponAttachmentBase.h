// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "WeaponSystem/Weapons/WeaponBase.h"
#include "WeaponSystem/Weapons/Interfaces.h"
#include "WeaponAttachmentBase.generated.h"



UCLASS(Abstract)
class WEAPONSYSTEMPLUGIN_API AWeaponAttachmentBase : public AActor, public IItemInterface
{
	GENERATED_BODY()
public:
	AWeaponAttachmentBase();
	friend class UWeaponAttachmentPoint;

protected:
	virtual void Destroyed() override;

	// The weapon that owns this attachment
	UPROPERTY(BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Attachment")
	class AWeaponBase* OwningWeapon;

	// Item Interface
	virtual FORCEINLINE FText GetDisplayName_Implementation() const override { return FText::FromString(FString("Weapon Attachment")); }
	virtual FORCEINLINE FText GetDescription_Implementation() const override { return FText::FromString(FString("A generic weapon attachment")); }

	// Spawns weapon attachment and attaches it to the attachment point. Only call on server. If set attachment point that will be where the weapon is spawned
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Meta = (AutoCreateRefTerm = "AttachmentClass", DeterminesOutputType = "AttachmentClass", DefaultToSelf = "AttachmentPoint"), Category = "Attachment")
	static class AWeaponAttachmentBase* SpawnAttachment(const TSubclassOf<class AWeaponAttachmentBase>& AttachmentClass, class UWeaponAttachmentPoint* AttachmentPoint);

	// Does nothing but spawn the weapon attachment
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Meta = (AutoCreateRefTerm = "AttachmentClass, WorldTransform", DeterminesOutputType = "AttachmentClass", WorldContextObject = "WorldContextObject", HidePin = "WorldContextObject"), Category = "Attachment")
	static class AWeaponAttachmentBase* SpawnAttachmentUnattached(const class UObject* WorldContextObject, const TSubclassOf<class AWeaponAttachmentBase>& AttachmentClass, const FTransform& WorldTransform);

	template<typename T>
	static FORCEINLINE T* SpawnAttachment(const TSubclassOf<class AWeaponAttachmentBase>& AttachmentClass, class UWeaponAttachmentPoint* AttachmentPoint) {
		return Cast<T>(SpawnAttachment(AttachmentClass, AttachmentPoint));
	}

	template<typename T>
	static FORCEINLINE T* SpawnAttachment(const class UObject* WorldContextObject, const TSubclassOf<class AWeaponAttachmentBase>& AttachmentClass, const FTransform& WorldTransform = FTransform::Identity) {
		return Cast<T>(SpawnAttachmentUnattached(WorldContextObject, AttachmentClass, WorldTransform));
	}
	
	// Equivalent to BeginPlay but is called after replication when the OwningWeapon is valid.
	// OwningWeapon should always be valid unless the Weapon Attachment Point was placed on an
	// actor that does not eventually have it's owner derive from WeaponBase (which you should never do).
	virtual void OnAttached();
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Attached"), Category = "Attachment")
	void BP_OnAttached();

	// Equivalent to OnDestroy but is called right beforehand
	virtual void OnRemoved();
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Removed"), Category = "Attachment")
	void BP_OnRemoved();
	
	virtual FORCEINLINE void OnEquipped(class UCharacterInventoryComponent* Inventory) {}
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Equipped"), Category = "Attachment")
	void BP_OnEquipped(class UCharacterInventoryComponent* Inventory);
	
	virtual FORCEINLINE void OnUnequipped(class UCharacterInventoryComponent* Inventory) {}
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Unequipped"), Category = "Attachment")
	void BP_OnUnequipped(class UCharacterInventoryComponent* Inventory);

	// Called whenever the owning inventory of the owning weapon changes to a valid inventory
	virtual FORCEINLINE void OnObtained(class UInventoryComponent* OwningInventory) {}
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Obtained"), Category = "Attachment")
	void BP_OnObtained(class UInventoryComponent* OwningInventory);

	// Called whenever the owning inventory of the owning weapon becomes invalid. Also called on destroyed
	virtual FORCEINLINE void OnUnobtained(class UInventoryComponent* OldInventory) {}
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Unobtained"), Category = "Attachment")
	void BP_OnUnobtained(class UInventoryComponent* OldInventory);

public:
	UFUNCTION(BlueprintCallable, Category = "Attachment")
	void SetVisibility(const bool bVisible = false);

	template<typename T>
	FORCEINLINE T* GetOwningWeapon() const { return Cast<T>(OwningWeapon); }

	// Get the Inventory that owns our owning weapon
	UFUNCTION(BlueprintPure, Category = "Attachment")
	FORCEINLINE class UInventoryComponent* GetOwningInventory() const { return OwningWeapon ? OwningWeapon->GetOwningInventory() : nullptr; }

	template<typename T>
	FORCEINLINE T* GetOwningInventory() const { return Cast<T>(GetOwningInventory()); }

private:
	static FORCEINLINE class UWorld* StaticGetWorld()
	{
		if(GEngine && !GEngine->GetWorldContexts().IsEmpty())
			return GEngine->GetWorldContexts()[0].World();
		return nullptr;
	}
	
	// Sets OwningWeapon reference then calls OnAttached()
	FORCEINLINE void Internal_OnAttached(class AWeaponBase* InOwningWeapon)
	{
		OwningWeapon = InOwningWeapon;
		OnAttached();
		BP_OnAttached();
	}
	
	FORCEINLINE void Internal_OnRemoved()
	{
		OnRemoved();
		BP_OnRemoved();
		OwningWeapon = nullptr;
	}

	UFUNCTION() FORCEINLINE void Internal_OnObtained(class AWeaponBase* W, class UInventoryComponent* InOwningInventory) { OnObtained(InOwningInventory); BP_OnObtained(InOwningInventory); }
	UFUNCTION() FORCEINLINE void Internal_OnUnobtained(class AWeaponBase* W, class UInventoryComponent* InOldInventory) { OnUnobtained(InOldInventory); BP_OnUnobtained(InOldInventory); }
	UFUNCTION() FORCEINLINE void Internal_OnEquipped(class AWeaponBase* W, class UCharacterInventoryComponent* InInventory) { OnEquipped(InInventory); BP_OnEquipped(InInventory); }
	UFUNCTION() FORCEINLINE void Internal_OnUnequipped(class AWeaponBase* W, class UCharacterInventoryComponent* InInventory) { OnUnequipped(InInventory); BP_OnUnequipped(InInventory); }
};