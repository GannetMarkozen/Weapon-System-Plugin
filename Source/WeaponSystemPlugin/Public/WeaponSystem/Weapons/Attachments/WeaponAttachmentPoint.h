// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponSystem/Weapons/Interfaces.h"
#include "VisualizationSceneComponent.h"
#include "Components/WidgetComponent.h"
#include "WeaponAttachmentPoint.generated.h"






/**
 * 
 */
UCLASS(BlueprintType, Blueprintable, ClassGroup = (Custom), Meta = (BlueprintSpawnableComponent))
class WEAPONSYSTEMPLUGIN_API UWeaponAttachmentPoint : public UVisualizationSceneComponent, public IItemInterface
{
	GENERATED_BODY()
public:
	UWeaponAttachmentPoint();

protected:	
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;

	// IItemInterface
	virtual FORCEINLINE FText GetDisplayName_Implementation() const override { return DisplayName; }
	virtual FORCEINLINE FText GetDescription_Implementation() const override { return Description; }

#if WITH_EDITORONLY_DATA
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Configurations")
	TSubclassOf<class AWeaponAttachmentBase> DefaultAttachment;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Configurations")
	TArray<TSubclassOf<class AWeaponAttachmentBase>> AllowedAttachments;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Configurations|Item Interface")
	FText DisplayName = FText::FromString(FString("Weapon Attachment"));

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Configurations|Item Interface")
	FText Description = FText::FromString(FString("A generic weapon attachment slot"));

	UPROPERTY(BlueprintReadWrite, ReplicatedUsing = "OnRep_Attachment", Meta = (AllowPrivateAccess = "true"), Category = "Attachment")
	class AWeaponAttachmentBase* Attachment;

	UFUNCTION()
	virtual void OnRep_Attachment();

	UFUNCTION(BlueprintImplementableEvent, Category = "Attachment")
	void AttachmentChanged();
	
public:
	const FORCEINLINE TSubclassOf<class AWeaponAttachmentBase>& GetDefaultAttachment() const { return DefaultAttachment; }
	const FORCEINLINE TArray<TSubclassOf<class AWeaponAttachmentBase>>& GetAllowedAttachments() const { return AllowedAttachments; }
	FORCEINLINE class AWeaponAttachmentBase* GetAttachment() const { return Attachment; }
	template<typename T>
	FORCEINLINE T* GetAttachment() const { return Cast<T>(Attachment); }

	UFUNCTION(BlueprintPure)
	FORCEINLINE bool HasAuthority() const { return GetOwner()->HasAuthority(); }

	// Spawns and sets attachment reference. Returns null if attachment is already set or if parameters are invalid.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Meta = (AutoCreateRefTerm = "AttachmentClass", DeterminesOutputType = "AttachmentClass"), Category = "Attachment")
	class AWeaponAttachmentBase* SpawnAttachment(const TSubclassOf<class AWeaponAttachmentBase>& AttachmentClass);

	// Destroys the current attachment at this attachment point.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Attachment")
	void DestroyAttachment();

	// Sets the new attachment on the Server and calls it's OnRep function. New Attachment may be invalid.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Attachment")
	FORCEINLINE void SetAttachment(class AWeaponAttachmentBase* NewAttachment)
	{
		checkf(HasAuthority(), TEXT("Called %s without authority."), *FString(__FUNCTION__));
		Attachment = NewAttachment;
		OnRep_Attachment();
	}

	// May be invalid
	UFUNCTION(BlueprintPure, Category = "Attachment")
	FORCEINLINE class UUserWidget* GetAttachedWidget() const
	{
		for(const USceneComponent* Child : GetAttachChildren())
			if(const UWidgetComponent* Widget = Cast<UWidgetComponent>(Child))
				return Widget->GetWidget();
		return nullptr;
	}

private:
	FTimerHandle DefaultAttachmentDelay;
};
