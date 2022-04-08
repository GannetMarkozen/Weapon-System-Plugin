// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponDropBase.generated.h"

/**
 * 
 */
UCLASS()
class WEAPONSYSTEMPLUGIN_API AWeaponDropBase : public AActor
{
	GENERATED_BODY()
public:
	AWeaponDropBase();

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess = "true"), Category = "Components")
	class USphereComponent* SphereCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess = "true"), Category = "Components")
	class UProjectileMovementComponent* ProjectileMovement;

	// The weapon spawned in during BeginPlay 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Configurations")
	TSubclassOf<class AWeaponBase> DefaultWeapon;

	// The weapon currently being held
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = "OnRep_OwnedWeapon", Meta = (AllowPrivateAccess = "true", ExposeOnSpawn = "true"), Category = "Weapon Drop")
	class AWeaponBase* OwnedWeapon;

	UFUNCTION()
	virtual void OnRep_OwnedWeapon();

	UFUNCTION(BlueprintNativeEvent, Category = "Weapon Drop")
	void OnWeaponRemoved(class AWeaponBase* InWeapon, class UInventoryComponent* InOldInventory);
	virtual void OnWeaponRemoved_Implementation(class AWeaponBase* InWeapon, class UInventoryComponent* InOldInventory);

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Weapon Removed"), Category = "Weapon Drop")
	void BP_OnWeaponRemoved();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Meta = (AllowPrivateAccess = "true", DeterminesOutputType = "WeaponDropClass", AutoCreateRefTerm = "WeaponDropClass,WeaponClass,SpawnTransform,Impulse"), Category = "Weapon Drop")
	static FORCEINLINE class AWeaponDropBase* SpawnWeaponDropFromClass(const TSubclassOf<class AWeaponDropBase>& WeaponDropClass, const TSubclassOf<class AWeaponBase> WeaponClass, const FTransform& SpawnTransform, const FVector& Impulse)
	{
		return SpawnWeaponDrop<class AWeaponDropBase>(WeaponDropClass, WeaponClass, SpawnTransform, Impulse);
	}

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Meta = (AllowPrivateAccess = "true", DeterminesOutputType = "WeaponDropClass", AutoCreateRefTerm = "WeaponDropClass"), Category = "Weapon Drop")
	static FORCEINLINE class AWeaponDropBase* SpawnWeaponDrop(const TSubclassOf<class AWeaponDropBase>& WeaponDropClass, class AWeaponBase* Weapon, const FTransform& SpawnTransform, const FVector& Impulse)
	{
		return SpawnWeaponDrop<class AWeaponDropBase>(WeaponDropClass, Weapon, SpawnTransform, Impulse);
	}

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Weapon Drop")
	FORCEINLINE class AWeaponBase* GetOwnedWeaponAndDestroy()
	{
		Destroy();
		return OwnedWeapon;
	}

	
	const FORCEINLINE TSubclassOf<class AWeaponBase>& GetDefaultWeapon() const { return DefaultWeapon; }
	FORCEINLINE class AWeaponBase* GetOwningWeapon() const { return OwnedWeapon; }
	template<typename T>
	FORCEINLINE T* GetOwningWeapon() const { return Cast<T>(OwnedWeapon); }
	
	template<typename T>
	static T* SpawnWeaponDrop(const TSubclassOf<class AWeaponDropBase>& WeaponDropClass, const TSubclassOf<class AWeaponBase>& WeaponClass, const FTransform& SpawnTransform, const FVector& Impulse = FVector::ZeroVector);

	template<typename T>
	static T* SpawnWeaponDrop(const TSubclassOf<class AWeaponDropBase>& WeaponDropClass, class AWeaponBase* Weapon, const FTransform& SpawnTransform, const FVector& Impulse = FVector::ZeroVector);

	template<typename T>
	static FORCEINLINE T* SpawnWeaponDrop(const TSubclassOf<class AWeaponBase>& WeaponClass, const FTransform& SpawnTransform, const FVector& Impulse = FVector::ZeroVector)
	{
		return SpawnWeaponDrop<T>(T::StaticClass(), WeaponClass, SpawnTransform, Impulse);
	}

	template<typename T>
	static FORCEINLINE T* SpawnWeaponDrop(class AWeaponBase* Weapon, const FTransform& SpawnTransform, const FVector& Impulse = FVector::ZeroVector)
	{
		return SpawnWeaponDrop<T>(T::StaticClass(), Weapon, SpawnTransform, Impulse);
	}
};
