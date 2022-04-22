// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponSystem/Character/ShooterCharacterBase.h"
#include "WeaponSystem/Weapons/WeaponBase.h"
#include "VisualizationMacros.h"
#include "Weapon.generated.h"
	


USTRUCT(BlueprintType, Meta = (DisplayName = "Animation Properties"))
struct WEAPONSYSTEMPLUGIN_API FAnimProperties
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UAnimSequence* AnimPose;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float WeightScale = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FTransform CustomOffsetTransform;
};



UCLASS(Abstract)
class WEAPONSYSTEMPLUGIN_API AWeapon : public AWeaponBase
{
	GENERATED_BODY()
public:
	AWeapon();

protected:
	virtual void BeginPlay() override;
	virtual void OnRep_OwningInventory(const UInventoryComponent* OldInventory) override;
	
	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	class AShooterCharacterBase* OwningCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Configurations|Placement")
	FVector RelativeLocationPlacement;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Configurations|Placement")
	FRotator RelativeRotationPlacement;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true", DisplayName = "Animation Properties"), Category = "Configurations|Anim")
	FAnimProperties AnimProps;

	// The pivot point of the weapon in procedural animations
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (ALlowPrivateAccess = "true"), Category = "Configurations|Anim")
	FTransform OriginRelativeTransform;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Configurations|Anim")
	class UAnimMontage* EquipMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Configurations|Anim")
	class UAnimMontage* UnequipMontage;

#if WITH_EDITORONLY_DATA
	class UStaticMeshComponent* OriginWidgetComp = nullptr;

	// Whether or not to show the visual-representation of the Origin Transform
	UPROPERTY(EditDefaultsOnly, Meta = (DisplayAfter = "OriginRelativeTransform"), Category = "Configurations|Anim|Weapon Origin Visualizer")
	bool bShowOriginWidget = false;

	// Setting this will override the default origin widget mesh
	UPROPERTY(EditDefaultsOnly, Meta = (DisplayAfter = "bShowOriginWidget", EditCondition = "bShowOriginWidget"), Category = "Configurations|Anim|Weapon Origin Visualizer")
	class UStaticMesh* OriginVisualizationMesh;
	
	virtual void RegisterAllComponents() override;
	
#endif// WITH_EDITORONLY_DATA
	
public:
	// C++ getters
	const FORCEINLINE FAnimProperties& GetAnimProps() const { return AnimProps; }
	//const FORCEINLINE FTransform& GetOriginRelativeTransform() const { return OriginRelativeTransform; }
	const FORCEINLINE FVector& GetRelativeLocationPlacement() const { return RelativeLocationPlacement; }
	const FORCEINLINE FRotator& GetRelativeRotationPlacement() const { return RelativeRotationPlacement; }
	FORCEINLINE class UAnimMontage* GetEquipMontage() const { return EquipMontage; }
	FORCEINLINE class UAnimMontage* GetUnequipMontage() const { return UnequipMontage; }
	FORCEINLINE class AShooterCharacterBase* GetOwningCharacter() const { return OwningCharacter; }
	template<typename T>
	FORCEINLINE T* GetOwningCharacter() { return Cast<T>(OwningCharacter); }

	UFUNCTION(BlueprintPure, Meta = (DisplayName = "Get Animation Variables (On Equipped)"), Category = "Weapon|Anim")
	FORCEINLINE void GetAnimationVariablesOnEquipped(class UAnimSequence*& OutAnimPose, float& OutWeightScale, FTransform& OutCustomOffsetTransform) const {
		OutAnimPose = AnimProps.AnimPose;
		OutWeightScale = AnimProps.WeightScale;
		OutCustomOffsetTransform = AnimProps.CustomOffsetTransform;
	}

	UFUNCTION(BlueprintPure, Meta = (DisplayName = "Get Animation Variables (On Tick)"), Category = "Weapon|Anim")
	FORCEINLINE void GetAnimationVariablesOnTick(const class AShooterCharacterBase* Character, FTransform& OutOrientationRelativeTransform, FTransform& OutSightsRelativeTransform) const {
		if(!IsValid(Character)) return;
		const FTransform DomHandTransform = Character->GetDomHandTransform();
		OutOrientationRelativeTransform = GetOrientationWorldTransform(Character->ADSValue).GetRelativeTransform(DomHandTransform);
		OutSightsRelativeTransform = GetSightsWorldTransform().GetRelativeTransform(DomHandTransform);
	}



	
	// Gets the relative transform of the default sights on the weapon. Default sights
	// usually being a mesh socket but this can be overridden.
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Weapon")
	FTransform GetDefaultSightsRelativeTransform() const;
	virtual FORCEINLINE FTransform GetDefaultSightsRelativeTransform_Implementation() const {
		return FTransform(FVector(-AimOffset, 0.f, 0.f)) * WeaponMesh->GetSocketTransform(FName("Sights"), RTS_Actor);
	}
	
	UFUNCTION(BlueprintPure, Category = "Weapon")
	FORCEINLINE FTransform GetSightsWorldTransform() const {
		return SightsRelativeTransform * GetActorTransform();
	}

	// Overridable function that returns the muzzle transform in world-space
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Weapon")
	FTransform GetMuzzleWorldTransform() const;
	virtual FORCEINLINE FTransform GetMuzzleWorldTransform_Implementation() const {
		return WeaponMesh->GetSocketTransform(FName("Muzzle"));
	}

	// Gets the origin of this weapon relative to the weapon's mesh. This can be an empty transform.
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Weapon")
	FTransform GetOriginRelativeTransform() const;
	virtual FORCEINLINE FTransform GetOriginRelativeTransform_Implementation() const {
		const FQuat Rot(OriginRelativeTransform.GetRotation());
		return FTransform(Rot, Rot.RotateVector(OriginRelativeTransform.GetLocation()), OriginRelativeTransform.GetScale3D());
	}

	// The origin transform in world-space
	UFUNCTION(BlueprintPure, Category = "Weapon")
	FORCEINLINE FTransform GetOriginWorldTransform() const {
		return GetOriginRelativeTransform() * GetActorTransform();
	}

	// Returns the orientation of the weapon in actor-space based on the sights and origin transform blended
	// by the aiming value. Can be overriden to return whatever. This default implementation
	// lerps the pivot-point by the sights transform to allow dynamic sights changing without
	// changing the weapon offset relative to the viewport.
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Weapon")
	FTransform GetOrientationRelativeTransform(const float AimingValue = 0.f) const;
	virtual FTransform GetOrientationRelativeTransform_Implementation(const float AimingValue = 0.f) const;

	// Returns the orientation of the weapon in world-space based on the sights rotation
	// and the origin location. Can be overriden to return whatever by overriding Get Orientation Relative Transform.
	// This default implementation allows the pivot point to rotate by the aim rotation
	UFUNCTION(BlueprintPure, Category = "Weapon")
	FORCEINLINE FTransform GetOrientationWorldTransform(const float AimingValue = 0.f) const {
		return GetOrientationRelativeTransform(AimingValue) * GetActorTransform();
	}
	
	// The offset applied to the Off-Hand
	UPROPERTY(BlueprintReadWrite, Category = "Anim")
	FTransform OffHandAdditiveTransform;

	// The sights transform relative to the weapon actor transform
	UPROPERTY(BlueprintReadWrite, Category = "Anim")
	FTransform SightsRelativeTransform;

	// Defines the distance the sights origin is from the camera
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations|Anim|Aiming")
	float AimOffset = 40.f;

#if WITH_EDITORONLY_DATA
	class UStaticMeshComponent* AimOffsetComp = nullptr;

	UPROPERTY(EditDefaultsOnly, Meta = (DisplayName = "Show Aim Offset Visualization Mesh"), Category = "Configurations|Anim|Aiming|Visualization")
	bool bShowAimOffset = false;
	
	UPROPERTY(EditDefaultsOnly, Meta = (DisplayName = "Aim Offset Visualization Mesh", EditCondition = bShowAimOffset), Category = "Configurations|Anim|Aiming|Visualization")
	class UStaticMesh* AimOffsetMesh;
#endif// WITH_EDITORONLY_DATA
};
