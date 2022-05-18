// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShooterCharacterBase.h"
#include "TrueFPSCharacter.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class WEAPONSYSTEMPLUGIN_API ATrueFPSCharacter : public AShooterCharacterBase
{
	GENERATED_BODY()
public:
	ATrueFPSCharacter();

protected:
	virtual void BeginPlay() override;
	
	// The third person mesh that you, as the client, can see
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* ClientMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UPhysicalAnimationComponent* PhysicalAnimation;

	// Bones above this bone name will be invisible locally. Meaning that this should either be the neck or head bone name
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true", DisplayAfter = "WeaponSocket"), Category = "Character")
	FName HeadBoneName = "neck_01";
};





















