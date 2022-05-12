
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "Components/WidgetComponent.h"
#include "WeaponSystem/Weapons/WeaponScript.h"
#include "SetupAttachmentsScriptBase.generated.h"

/**
 * 
 */ 
UCLASS(Abstract)
class WEAPONSYSTEMPLUGIN_API USetupAttachmentsScriptBase : public UWeaponScript
{
	GENERATED_BODY()
protected:
	virtual FORCEINLINE bool CanTick_Implementation() const override { return true; }
	virtual void BeginPlay() override;
	virtual FORCEINLINE void Tick(const float DeltaTime) override { PoseTimeline.TickTimeline(DeltaTime); }
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) override;

	// Binds input to Setup Attachments
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "InputName"), Category = "Script|Setup Attachments")
	FORCEINLINE void SetupActivationBinding(const FName& InputName, const TEnumAsByte<EInputEvent> InputEvent = IE_Pressed)
	{
		if(!OwningWeapon || !GetOwningCharacter()) return;
		FInputActionBinding Binding(InputName, InputEvent);
		Binding.ActionDelegate.GetDelegateForManualSet().BindUObject(this, &ThisClass::SetupAttachments);
		Binding.bConsumeInput = false;
		if(UInputComponent* InputComponent = GetOwningCharacter()->Controller->InputComponent.Get())
			InputComponent->AddActionBinding(Binding);
	}

	UFUNCTION()
	void TimelineProgress(const float Value);

	
	virtual void TimelineBeginning();
	virtual void TimelineEnd();
	virtual void TimelinePlay();
	virtual void TimelineReverse();
	
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Timeline Beginning"), Category = "Script|Setup Attachments")
	void BP_TimelineBeginning();

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Timeline End"), Category = "Script|Setup Attachments")
	void BP_TimelineEnd();

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Timeline Play"), Category = "Script|Setup Attachments")
	void BP_TimelinePlay();

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Timeline Reverse"), Category = "Script|Setup Attachments")
	void BP_TimelineReverse();

	UFUNCTION(BlueprintCallable, Category = "Script|Setup Attachments")
	virtual void SetupAttachments();

	UFUNCTION(Server, Reliable)
	void Server_SetupAttachments();

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_IsAttaching, Category = "Script|Setup Attachments")
	bool bIsAttaching = false;

	bool bIsTimelineAtBeginning = true;
	float MaxValue = 0.f;
	float MinValue = 0.f;

	UFUNCTION()
	virtual void OnRep_IsAttaching();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	TSubclassOf<class UUserWidget> WidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	FTransform TargetPoseTransform;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations")
	class UCurveFloat* Curve;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configurations")
	float PlayRate = 1.f;

	FTimeline PoseTimeline;


public:
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Class", DeterminesOutputType = "Class"), Category = "Script|Setup Attachments")
	TArray<class UWidgetComponent*> SpawnAttachmentWidgets(const TSubclassOf<class UUserWidget>& Class) const;

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Class"), Category = "Script|Setup Attachments")
	void DestroyAttachmentWidgetsByClass(const TSubclassOf<class UUserWidget>& Class) const;
};
