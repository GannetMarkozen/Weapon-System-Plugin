// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "WeaponSystem/Weapons/WeaponScript.h"
#include "WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h"
#include "CycleSightsScript.generated.h"

/**
 * 
 */
UCLASS(Abstract, Meta = (DisplayName = "Cycle-Sights Script Base"))
class WEAPONSYSTEMPLUGIN_API UCycleSightsScriptBase : public UWeaponScript
{
	GENERATED_BODY()
public:
	UCycleSightsScriptBase() = default;

protected:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	virtual void Tick(const float DeltaTime) override;
	virtual FORCEINLINE bool CanTick_Implementation() const override { return CycleCurve != nullptr; }

	// Binds input to the CycleSights function. Should be called on event Setup Input
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "CycleInput"), Category = "Script|Cycle Sights")
	FORCEINLINE void SetupActivationBinding(const FName& CycleInput, const TEnumAsByte<EInputEvent> InputEvent = IE_Pressed) {
		SetupBindingByInputName(this, &ThisClass::CycleSights, CycleInput, InputEvent);
	}

	UFUNCTION(BlueprintNativeEvent, Category = "Script|Cycle Sights")
	void TimelineProgress(const float Value);
	virtual FORCEINLINE void TimelineProgress_Implementation(const float Value);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Script|Cycle Sights")
	void CycleSights();
	virtual void CycleSights_Implementation();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_CycleSights();
	virtual void Server_CycleSights_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = "Script|Cycle Sights")
	void OnRep_CurrentSights();
	virtual void OnRep_CurrentSights_Implementation();

	UFUNCTION(BlueprintImplementableEvent, Category = "Script|Cycle Sights")
	void TimelineStart();

	UFUNCTION(BlueprintImplementableEvent, Category = "Script|Cycle Sights")
	void TimelineEnd();

	UPROPERTY(BlueprintReadWrite, Category = "Script|Cycle Sights")
	FTransform TargetRelativeTransform;

	UPROPERTY(BlueprintReadWrite, Category = "Script|Cycle Sights")
	FTransform OldRelativeTransform;

	
	// Configurations

	UPROPERTY(BlueprintReadWrite, ReplicatedUsing = "OnRep_CurrentSights", Category = "Script|Cycle Sights")
	class ASightsAttachment* CurrentSights;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	class UCurveFloat* CycleCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	float PlayRate = 1.f;

	FTimeline CycleTimeline;
};

