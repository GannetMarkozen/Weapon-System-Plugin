// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponAttachmentBase.h"
#include "ForegripAttachment.generated.h"

UCLASS(Abstract, Meta = (DisplayName = "Foregrip Attachment"))
class WEAPONSYSTEMPLUGIN_API AForegripAttachment : public AWeaponAttachmentBase
{
	GENERATED_BODY()

public:
	AForegripAttachment();

protected:
	virtual void OnRemoved() override;

	virtual FORCEINLINE void OnEquipped(class UCharacterInventoryComponent* Inventory) override
	{// On equipped, set hand placement transform after a tick so that the AnimPose is being played during the update.
		Super::OnEquipped(Inventory);
		SetHandPlacement();
	}

	// Sets the owning weapon's hand placement offset transform
	// and caches the hand-pose if CacheHandPose == true
	UFUNCTION(BlueprintCallable, Category = "Foregrip")
	void SetHandPlacement() const;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* Foregrip;

	// Effectively USceneComponent but has a spawns a visualization component in the properties-editor.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Meta = (DisplayName = "Hand Attachment Point"), Category = "Components")
	class UPoseableHandComponent* HandAttachPoint;

	// Additive offset applied to the hand. 
	UPROPERTY(EditDefaultsOnly, Meta = (DisplayName = "Additive Rotation Offset"), Category = "Configurations")
	FRotator RotOffset;

	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Dominant-Hand Bone Name"), Category = "Configurations")
	FName DomHandName = FName("hand_r");

	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Off-Hand Bone Name"), Category = "Configurations")
	FName OffHandName = FName("hand_l");

	// Leave as None if the weapon is directly attached to the Dominant-Hand
	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Weapon-Socket Name"), Category = "Configurations")
	FName WeaponSocketName;

	// Whether or not to cache the pose from the Hand Attachment Point in the Anim Instance for use in animation later.
	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Cache Hand Pose on Attached"), Category = "Configurations|Animation")
	bool bCachePose = true;

	// Whether or not to remove the cached pose when this attachment is removed.
	UPROPERTY(EditAnywhere, Meta = (EditCondition = "bCachePose", DisplayName = "Remove Cached Pose on Removed"), Category = "Configurations|Animation")
	bool bRemoveCache = true;

	// The name of the cached pose snapshot. Use this to access this pose later
	UPROPERTY(EditAnywhere, Meta = (EditCondition = "bCachePose", DisplayName = "Cached Pose Snapshot Name"), Category = "Configurations|Animation")
	FName CachedPoseName = "OffHand";
};
