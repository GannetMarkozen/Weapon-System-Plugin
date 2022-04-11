// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponSystem/Inventories/InventoryComponent.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "WeaponScriptBase.h"
#include "WeaponBase.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponEquippedDelegate, class AWeaponBase*, Weapon, class UCharacterInventoryComponent*, Inventory);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponUnequippedDelegate, class AWeaponBase*, Weapon, class UCharacterInventoryComponent*, Inventory);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponObtainedDelegate, class AWeaponBase*, Weapon, class UInventoryComponent*, CurrentInventory);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponUnobtainedDelegate, class AWeaponBase*, Weapon, class UInventoryComponent*, OldInventory);

/**
 *	The base class for creating your own weapon class. The weapon class is designed to be fully replicated
 *	and extremely modular. Weapons support attachments. Most of your logic should not be on the weapon itself but on weapon scripts. Weapon
 *	scripts are instanced objects that can be applied to any weapon with in the Scripts array and are editable inline
 *	allowing for a lot of flexibility. They have functions for binding input for the duration the weapon is equipped
 *	and are fully replicated. Any RPC, replicated variable, NetMulticast are replicated properly on the Weapon and 
 *	it's WeaponScripts. The CharacterInventoryComponent comes with built-in weapon swapping and equipping logic for your own generic
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
	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) override;
	virtual bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) override;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Components")
	class USkeletalMeshComponent* WeaponMesh;
	
	// Instanced objects that act as scripts for the weapon for built in logic attached to input or events.
	// Can change variables inline on the weapon itself. Replication is supported on these Objects. Scripts can
	// be added and removed during runtime so they can also act as abilities or support weapon attachments applying scripts.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced, ReplicatedUsing = OnRep_Scripts, Meta = (AllowPrivateAccess = "true"), Category = "Configurations")
	TArray<class UWeaponScriptBase*> Scripts;
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_OwningInventory, Meta = (AllowPrivateAccess = "true"), Category = "State")
	class UInventoryComponent* OwningInventory;
	
public:
	FORCEINLINE class USkeletalMeshComponent* GetMesh() const { return WeaponMesh; }
	const FORCEINLINE TArray<class UWeaponScriptBase*>& GetScripts() const { return Scripts; }
	FORCEINLINE class UInventoryComponent* GetOwningInventory() const { return OwningInventory; }
	FORCEINLINE class ACharacter* GetOwningCharacter() const { return OwningInventory ? OwningInventory->GetOwner<ACharacter>() : nullptr; }

	template<typename T>
	FORCEINLINE T* GetOwningInventory() const { return Cast<T>(OwningInventory); }
	template<typename T>
	FORCEINLINE T* GetOwningCharacter() const { return OwningInventory ? OwningInventory->GetOwner<T>() : nullptr; }
	

protected:
	// Equivalent to "On Obtained"
	UFUNCTION()
	virtual void OnRep_OwningInventory(const class UInventoryComponent* OldInventory);
	virtual void OnEquipped(class UCharacterInventoryComponent* Inventory);
	virtual void OnUnequipped(class UCharacterInventoryComponent* Inventory);
	virtual void OnObtained(class UInventoryComponent* CurrentInventory);
	virtual void OnUnobtained(class UInventoryComponent* OldInventory);
	
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "OnRep Owning Inventory"), Category = "Weapon")
	void BP_OnRep_OwningInventory(class UInventoryComponent* OldInventory);

	// Will only be called ever if OwningInventory is a Character Inventory Component. Inventory will always be valid
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Equipped"), Category = "Weapon")
	void BP_OnEquipped(class UCharacterInventoryComponent* Inventory);

	// Will only be called ever if OwningInventory is a Character Inventory Component. Inventory will always be valid
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Unequipped"), Category = "Weapon")
	void BP_OnUnequipped(class UCharacterInventoryComponent* Inventory);

	// Called whenever the OwningInventory changes to a valid Inventory
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Obtained"), Category = "Weapon")
	void BP_OnObtained(class UInventoryComponent* CurrentInventory);

	// Called whenever the OwningInventory changes to a valid Inventory
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Unobtained"), Category = "Weapon")
	void BP_OnUnobtained(class UInventoryComponent* OldInventory);


	
	UFUNCTION()
	virtual void OnRep_Scripts(const TArray<class UWeaponScriptBase*>& OldScripts);

private:
	void Internal_OnAddedScript(class UWeaponScriptBase* NewScript);
	void Internal_OnRemovedScript(class UWeaponScriptBase* RemovedScript);
	FTimerHandle DelayScriptsReplicationTimerHandle;
	
protected:
	// Called whenever a script is added
	virtual FORCEINLINE void OnAddedScript(class UWeaponScriptBase* NewScript) {}
	// Called whenever a script is removed at runtime
	virtual FORCEINLINE void OnRemovedScript(class UWeaponScriptBase* RemovedScript) {}
	
	// Called whenever a script is added
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Added Script"), Category = "Weapon")
	void BP_OnAddedScript(class UWeaponScriptBase* NewScript);
	// Called whenever a script is removed at runtime
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Removed Script"), Category = "Weapon")
	void BP_OnRemovedScript(class UWeaponScriptBase* RemovedScript);
	

	UPROPERTY(EditAnywhere, Category = "TEST")
	TSubclassOf<class UWeaponScriptBase> TestScriptClass;
	
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

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	FORCEINLINE bool RemoveFromInventory()
	{
		if(!IsValid(OwningInventory)) return false;
		OwningInventory->RemoveWeapon(this);
		return true;
	}
	
	UFUNCTION(BlueprintPure)
	FORCEINLINE bool IsLocallyControlled() const { return OwningInventory && OwningInventory->IsLocallyControlled(); }

	// Sets this weapon's visibility and all of it's attachments.
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual void SetVisibility(const bool bVisibility = false);

	// Whether or not this weapon's components are visible
	UFUNCTION(BlueprintPure, Category = "Weapon")
	FORCEINLINE bool IsVisible() const { return WeaponMesh->IsVisible(); }

	// Whether or not this weapon is currently equipped by it's owning inventory
	UFUNCTION(BlueprintPure, Category = "Weapon")
	FORCEINLINE bool IsEquipped() const { return IsEquippedBy(OwningInventory); }

	UFUNCTION(BlueprintPure, Category = "Weapon")
	FORCEINLINE bool IsEquippedBy(const class UInventoryComponent* Inventory) const { return Inventory && Inventory->GetCurrentWeapon() == this; }
	
	// Helper functions
	UFUNCTION(BlueprintPure, Category = "Weapon")
	void GetAttachments(TArray<class AWeaponAttachmentBase*>& OutAttachments) const;

	template<typename T>
	void GetAttachments(TArray<T*>& OutAttachments) const;

	UFUNCTION(BlueprintPure, Meta = (DeterminesOutputType = "Class", AutoCreateRefTerm = "Class"), Category = "Weapon")
	void GetAttachmentsOfClass(TArray<class AWeaponAttachmentBase*>& OutAttachments, const TSubclassOf<class AWeaponAttachmentBase>& Class) const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
	void GetAttachmentPoints(TArray<class UWeaponAttachmentPoint*>& OutAttachmentPoints) const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
	void GetAttachedWidgets(TArray<class UUserWidget*>& OutWidgets) const;

	//
	//	SCRIPTS
	//

	template<typename T>
	T* CreateScript(const TSubclassOf<class UWeaponScriptBase>& Class, const bool bCheckForExistingScriptOfClass = false);

	template<typename T>
	FORCEINLINE T* CreateScript(const bool bCheckForExistingScriptOfClass = false) {
		return CreateScript<T>(T::StaticClass(), bCheckForExistingScriptOfClass);
	}

	template<typename T>
	FORCEINLINE T* CreateScriptUninitialized(const TSubclassOf<class UWeaponScriptBase>& Class) {
		checkf(HasAuthority(), TEXT("AWeaponBase::CreateScriptUninitialized can not spawn script without authority"));
		return Class ? NewObject<T>(this, Class) : nullptr;
	}

	template<typename T>
	FORCEINLINE T* CreateScriptUninitialized() { return CreateScriptUninitialized<T>(T::StaticClass()); }
 
	// Spawns a weapon script at runtime. Initializes and adds the script to our scripts array. Replicates to all clients
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Meta = (DeterminesOutputType = "Class", AutoCreateRefTerm = "Class", UnsafeDuringActorConstruction), Category = "Weapon")
	FORCEINLINE class UWeaponScriptBase* CreateScript(const TSubclassOf<class UWeaponScriptBase>& Class, const bool bCheckForExistingScriptOfClass = false) {
		return CreateScript<UWeaponScriptBase>(Class, bCheckForExistingScriptOfClass);
	}

	// Spawns weapon script at runtime but does not initialize or add to scripts array. Use this to setup your script then call Add Script at the end.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Meta = (DeterminesOutputType = "Class", AutoCreateRefTerm = "Class", UnsafeDuringActorConstruction), Category = "Weapon")
	FORCEINLINE class UWeaponScriptBase* CreateScriptUninitialized(const TSubclassOf<class UWeaponScriptBase>& Class) {
		return CreateScriptUninitialized<UWeaponScriptBase>(Class);
	}

	// Adds script to the Scripts array and initializes it.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Weapon")
	void AddScript(class UWeaponScriptBase* Script);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Weapon")
	void RemoveScript(class UWeaponScriptBase* Script);

	// Removes all scripts of class.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Meta = (AutoCreateRefTerm = "Class"), Category = "Weapon")
	bool RemoveScriptsByClass(const TSubclassOf<class UWeaponScriptBase>& Class);

	template<typename T>
	FORCEINLINE bool RemoveScriptsByClass() { return RemoveScriptsByClass(T::StaticClass()); }

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Meta = (AutoCreateRefTerm = "Class"), Category = "Weapon")
	bool RemoveScriptByClass(const TSubclassOf<class UWeaponScriptBase>& Class);

	template<typename T>
	FORCEINLINE bool RemoveScriptByClass() { return RemoveScriptByClass(T::StaticClass()); }

	UFUNCTION(BlueprintPure, Meta = (DeterminesOutputType = "Class", AutoCreateRefTerm = "Class"), Category = "Weapon")
	TArray<UWeaponScriptBase*> GetScriptsOfClass(const TSubclassOf<class UWeaponScriptBase>& Class) const;

	UFUNCTION(BlueprintPure, Meta = (DeterminesOutputType = "Class", AutoCreateRefTerm = "Class"), Category = "Weapon")
	class UWeaponScriptBase* GetScriptOfClass(const TSubclassOf<class UWeaponScriptBase>& Class) const;

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Class"), Category = "Weapon")
	bool HasScript(const TSubclassOf<class UWeaponScriptBase>& Class) const;

	template<typename T>
	FORCEINLINE bool HasScript() const { return HasScript(T::StaticClass()); }

	template<typename T>
	void GetScriptsOfClass(TArray<T*>& OutScripts) const;

	template<typename T>
	T* GetScriptOfClass() const;

	template<typename T>
	FORCEINLINE T* GetScriptOfClass(const TSubclassOf<class UWeaponScriptBase>& Class) const { return Cast<T>(GetScriptOfClass(Class)); }
}; 
