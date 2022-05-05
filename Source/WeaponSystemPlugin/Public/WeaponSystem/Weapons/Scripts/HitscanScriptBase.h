// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponSystem/Weapons/WeaponScript.h"
#include "HitscanScriptBase.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class WEAPONSYSTEMPLUGIN_API UHitscanScriptBase : public UWeaponScript
{
	GENERATED_BODY()
public:
	UHitscanScriptBase(){}
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Script|Hitscan")
	bool CanHitscan() const;
	virtual FORCEINLINE bool CanHitscan_Implementation() const { return IsValid(GetOwningCharacter()); }
	
	UFUNCTION(BlueprintCallable, Category = "Script|Hitscan")
	virtual void Hitscan();

	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "Script|Hitscan")
	void Server_Hitscan(const TArray<FHitResult>& Hits);
	virtual void Server_Hitscan_Implementation(const TArray<FHitResult>& Hits);

	// Skips local
	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, Category = "Script|Hitscan")
	void Multi_Hitscan(const TArray<FHitResult>& Hits);
	virtual void Multi_Hitscan_Implementation(const TArray<FHitResult>& Hits);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Script|Hitscan")
	void PlayFiringEffect();
	virtual void PlayFiringEffect_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Script|Hitscan")
	void PlayImpactEffect(const TArray<FHitResult>& Hits);
	virtual void PlayImpactEffect_Implementation(const TArray<FHitResult>& Hits);

	// Add your own custom calculation for the magnitude of the randomized spread
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Script|Hitscan")
	float CalculateSpreadMagnitude() const;
	virtual FORCEINLINE float CalculateSpreadMagnitude_Implementation() const { return 1.f; }

	// Add your own custom calculation for the magnitude of the recoil
	UFUNCTION(BlueprintNativeEvent, Category = "Script|Hitscan")
	float CalculateRecoilMagnitude() const;
	virtual float CalculateRecoilMagnitude_Implementation() const { return 1.f; }

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Script|Hitscan")
	void TryApplyDamage(const FHitResult& Hit);
	virtual void TryApplyDamage_Implementation(const FHitResult& Hit) {}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations|Firing")
	float RateOfFire = 0.25f;

	// The range the hitscan projectiles travel
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations|Firing")
	float Range = 50000.f;

	// Determines the number of shots per hitscan input
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (DisplayName = "Number of Shots"), Category = "Configurations|Firing")
	int32 NumShots = 1;

	// Determines the randomized spread in-between these values
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations|Firing")
	FVector2D Spread;

	UPROPERTY(EditAnywhere, Category = "Configurations|Firing")
	TEnumAsByte<ECollisionChannel> CollisionChannel = ECC_Visibility;

#if WITH_EDITORONLY_DATA
	// Show firing debug lines. Only applies to editor-builds
	UPROPERTY(EditAnywhere, Category = "Configurations|Firing")
	bool bShowFiringDebugLines = false;
#endif

	UPROPERTY(EditAnywhere, Category = "Configurations|Cosmetic")
	class USoundBase* FiringSound;

	UPROPERTY(EditAnywhere, Category = "Configurations|Cosmetic")
	class UParticleSystem* MuzzleFlash;
	
	UPROPERTY(EditAnywhere, Category = "Configurations|Cosmetic")
	class UParticleSystem* BulletTracer;

	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Recoil Parameters"), Category = "Configurations|Cosmetic")
	FRecoilParams RecoilParams;
};

/*
 *
 */

UCLASS(Abstract, Meta = (DisplayName = "Semi-Auto Hitscan Script Base"))
class WEAPONSYSTEMPLUGIN_API USemiAutoHitscanScriptBase : public UHitscanScriptBase
{
	GENERATED_BODY()
public:
	USemiAutoHitscanScriptBase() = default;

protected:
	// Binds the input to fire
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "FiringInput"), Category = "Script|Hitscan")
	FORCEINLINE void SetupActivationBinding(const FName& FiringInput, const EInputEvent InputEvent = IE_Pressed) {
		SetupBindingByInputName(this, &ThisClass::Fire, FiringInput, InputEvent);
	}
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Script|Hitscan")
	bool CanFire() const;
	virtual FORCEINLINE bool CanFire_Implementation() const { return bCanFire; }

	UFUNCTION(BlueprintCallable, Category = "Script|Hitscan")
	virtual FORCEINLINE void Fire()
	{
		if(!CanFire()) return;
		Hitscan();
		bCanFire = false;
		GetWorld()->GetTimerManager().SetTimer(FiringTimerHandle, this, &ThisClass::ResetCanFire, RateOfFire, false);
	}
	
private:
	FTimerHandle FiringTimerHandle;
	bool bCanFire = true;
	void FORCEINLINE ResetCanFire() { bCanFire = true; }
};

/*
 *
 */

UCLASS(Abstract, Meta = (DisplayName = "Burst-Fire Hitscan Script Base"))
class WEAPONSYSTEMPLUGIN_API UBurstFireHitscanScriptBase : public UHitscanScriptBase
{
	GENERATED_BODY()
public:
	UBurstFireHitscanScriptBase() = default;

protected:
	virtual FORCEINLINE void OwningWeaponUnequipped(AWeaponBase* Weapon, UCharacterInventoryComponent* Inventory) override
	{
		GetWorld()->GetTimerManager().ClearTimer(FiringTimerHandle);
		ResetCanFire();
		Super::OwningWeaponUnequipped(Weapon, Inventory);
	}
	
	// Binds the input to fire
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "FiringInput"), Category = "Script|Hitscan")
	FORCEINLINE void SetupActivationBinding(const FName& FiringInput, const EInputEvent InputEvent = IE_Pressed)
	{
		SetupBindingByInputName(this, &ThisClass::Fire, FiringInput, InputEvent);
	}
	
	// Duration between shots per burst
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (DisplayAfter = "RateOfFire"), Category = "Configurations|Firing")
	float BurstRateOfFire = 0.1f;

	// Amount of shots per burst
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (DisplayAfter = "BurstRateOfFire"), Category = "Configurations|Firing")
	int32 NumShotsPerBurst = 3;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Script|Hitscan")
	bool CanFire() const;
	virtual bool CanFire_Implementation() const { return bCanFire; }

	UFUNCTION(BlueprintCallable, Category = "Script|Hitscan")
	virtual FORCEINLINE void Fire()
	{
		if(!CanFire()) return;
		bCanFire = false;
		BurstFire();
	}

	void BurstFire()
	{
		Hitscan();
		if(++NumBurstShotsFired < NumShotsPerBurst)
		{// If num burst shots fired is less than num shots allowed per burst, fire again after the BurstRateOfFire duration.
			GetWorld()->GetTimerManager().SetTimer(FiringTimerHandle, this, &ThisClass::BurstFire, BurstRateOfFire);
		}
		else
		{// Else reset bCanFire after RateOfFire duration to allow another burst
			GetWorld()->GetTimerManager().SetTimer(FiringTimerHandle, this, &ThisClass::ResetCanFire, RateOfFire);
		}
	}

private:
	FTimerHandle FiringTimerHandle;
	bool bCanFire = true;
	void FORCEINLINE ResetCanFire() {
		bCanFire = true;
		NumBurstShotsFired = 0;
	}
	int32 NumBurstShotsFired = 0;
};
