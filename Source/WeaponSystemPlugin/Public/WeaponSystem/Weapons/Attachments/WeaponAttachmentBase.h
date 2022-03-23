// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "WeaponSystem/Weapons/WeaponBase.h"
#include "WeaponAttachmentBase.generated.h"


UCLASS(Abstract)
class WEAPONSYSTEMPLUGIN_API AWeaponAttachmentBase : public AActor
{
	GENERATED_BODY()
public:
	AWeaponAttachmentBase();
	friend class UWeaponAttachmentPoint;

protected:
	virtual void Destroyed() override;

	// Spawns weapon attachment and attaches it to the attachment point. Only call on server. If set attachment point that will be where the weapon is spawned
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Meta = (AutoCreateRefTerm = "AttachmentClass", DeterminesOutputType = "AttachmentClass", DefaultToSelf = "AttachmentPoint"), Category = "Attachment")
	static class AWeaponAttachmentBase* SpawnAttachment(const TSubclassOf<class AWeaponAttachmentBase>& AttachmentClass, class UWeaponAttachmentPoint* AttachmentPoint);

	// Does nothing but spawn the weapon attachment
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Meta = (AutoCreateRefTerm = "AttachmentClass, WorldTransform", DeterminesOutputType = "AttachmentClass", DefaultToSelf = "WorldContextObject", HidePin = "WorldContextObject"), Category = "Attachment")
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
	UFUNCTION(BlueprintNativeEvent, Category = "Attachment")
	void OnAttached();

	// The C++ parent implementation of On Attached
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Parent: On Attached"), Category = "Attachment")
	virtual void OnAttached_Implementation();

	// Equivalent to OnDestroy but is called right beforehand
	UFUNCTION(BlueprintNativeEvent, Category = "Attachment")
	void OnRemoved();
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Parent: On Removed"), Category = "Attachment")
	virtual FORCEINLINE void OnRemoved_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = "Attachment")
	void OnEquipped();
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Parent: On Equipped"), Category = "Attachment")
	virtual FORCEINLINE void OnEquipped_Implementation() {}

	UFUNCTION(BlueprintNativeEvent, Category = "Attachment")
	void OnUnequipped();
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Parent: On Unequipped"), Category = "Attachment")
	virtual FORCEINLINE void OnUnequipped_Implementation() {}

	// Called whenever the owning inventory of the owning weapon changes to a valid inventory
	UFUNCTION(BlueprintNativeEvent, Category = "Attachment")
	void OnObtained(class UInventoryComponent* OwningInventory);
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Parent: On Obtained"), Category = "Attachment")
	virtual FORCEINLINE void OnObtained_Implementation(class UInventoryComponent* OwningInventory) {}

	// Called whenever the owning inventory of the owning weapon becomes invalid. Also called on destroyed
	UFUNCTION(BlueprintNativeEvent, Category = "Attachment")
	void OnUnobtained(class UInventoryComponent* OldInventory);
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Parent: On Unobtained"), Category = "Attachment")
	virtual FORCEINLINE void OnUnobtained_Implementation(class UInventoryComponent* OldInventory) {}
	
	// The weapon that owns this attachment
	UPROPERTY(BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Attachment")
	class AWeaponBase* OwningWeapon;

public:
	UFUNCTION(BlueprintCallable, Category = "Attachment")
	void SetVisibility(const bool bVisible = false);

	template<typename T>
	FORCEINLINE T* GetOwningWeapon() const { return Cast<T>(OwningWeapon); }

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
	}
	
	FORCEINLINE void Internal_OnRemoved()
	{
		OnRemoved();
		OwningWeapon = nullptr;
	}

	UFUNCTION() FORCEINLINE void Internal_OnObtained(class AWeaponBase* W, class UInventoryComponent* InOwningInventory) { OnObtained(InOwningInventory); }
	UFUNCTION() FORCEINLINE void Internal_OnUnobtained(class AWeaponBase* W, class UInventoryComponent* InOldInventory) { OnUnobtained(InOldInventory); }
	UFUNCTION() FORCEINLINE void Internal_OnEquipped(class AWeaponBase* W) { OnEquipped(); }
	UFUNCTION() FORCEINLINE void Internal_OnUnequipped(class AWeaponBase* W) { OnUnequipped(); }
};