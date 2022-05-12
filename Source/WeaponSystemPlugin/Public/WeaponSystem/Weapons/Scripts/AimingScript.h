// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "WeaponSystem/Weapons/WeaponScript.h"
#include "AimingScript.generated.h"

/**
 * 
 */
UCLASS()
class WEAPONSYSTEMPLUGIN_API UAimingScript : public UWeaponScript
{
	GENERATED_BODY()
public:
	UAimingScript(){}

protected:
	virtual void BeginPlay() override;
	virtual void Tick(const float DeltaTime) override;
	virtual bool CanTick_Implementation() const override { return true; }

	// The input will bind to the Start Aiming and Stop Aiming events
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Input"), Category = "Script|Aiming")
	FORCEINLINE void SetupActionBinding(const FName& Input)
	{
		SetupBindingByInputName(this, &ThisClass::StartAiming, Input, IE_Pressed);
		SetupBindingByInputName(this, &ThisClass::StopAiming, Input, IE_Released);
	}
	
	
	virtual void OwningWeaponUnequipped(AWeaponBase* Weapon, UCharacterInventoryComponent* Inventory) override
	{// If unequipped, stop aiming
		Super::OwningWeaponUnequipped(Weapon, Inventory);
		
		AimingTimeline.Stop();
		AimingTimeline.SetPlaybackPosition(0.f, false, true);
	}

	UFUNCTION(BlueprintCallable, Category = "Script|Aiming")
	virtual void StartAiming();

	UFUNCTION(BlueprintCallable, Category = "Script|Aiming")
	virtual void StopAiming();

	UFUNCTION(BlueprintNativeEvent, Category = "Script|Aiming")
	bool CanAim() const;
	virtual bool CanAim_Implementation() const { return true; }

	UFUNCTION(BlueprintNativeEvent, Category = "Script|Aiming")
	void AimingComplete();
	virtual void AimingComplete_Implementation() {}

	virtual void AimingTimelineProgress(const float Value);

	UPROPERTY(EditAnywhere, Category = "Configurations")
	class UCurveFloat* AimingCurve;

	UPROPERTY(EditAnywhere, Category = "Configurations")
	float PlayRate = 1.f;

	UFUNCTION(Server, Reliable)
	void Server_StartAiming();
	virtual void Server_StartAiming_Implementation();

	UFUNCTION(NetMulticast, Unreliable)
	void Multi_StartAiming();
	virtual void Multi_StartAiming_Implementation();

	UFUNCTION(Client, Reliable)
	void Client_StartAimingFailedPrediction();
	virtual void Client_StartAimingFailedPrediction_Implementation()
	{
		AimingTimeline.Stop();
		AimingTimeline.SetPlaybackPosition(0.f, false, true);
	}

	UFUNCTION(Server, Reliable)
	void Server_StopAiming();
	virtual void Server_StopAiming_Implementation();

	UFUNCTION(NetMulticast, Unreliable)
	void Multi_StopAiming();
	virtual void Multi_StopAiming_Implementation();

private:
	FTimeline AimingTimeline;
};
