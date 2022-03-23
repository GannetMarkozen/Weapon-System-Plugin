// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WeaponSystem/Inventories/CharacterInventoryComponent.h"
#include "TrueFPSCharacterBase.generated.h"

UINTERFACE(MinimalAPI, Blueprintable, BlueprintType)
class UDamageInterface : public UInterface
{
	GENERATED_BODY()
};

class WEAPONSYSTEMPLUGIN_API IDamageInterface
{
	GENERATED_BODY()
protected:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Meta = (AllowPrivateAccess = "true", AutoCreateRefTerm = "Direction"), Category = "Damage Interface")
	void ApplyDamage(float Damage, const FVector& Direction = FVector::ZeroVector, float KnockbackMultiplier = 1.f);
	virtual FORCEINLINE void ApplyDamage_Implementation(float Damage, const FVector& Direction = FVector::ZeroVector, float KnockbackMultiplier = 1.f) {}
};

USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FRecoilParams
{
	GENERATED_BODY()

	FRecoilParams(){}
	FRecoilParams(class UCurveFloat* Curve, const FTransform& Offset, const float PlayRate = 1.f, const float Magnitude = 1.f)
		: Curve(Curve), Offset(Offset), PlayRate(PlayRate), Magnitude(Magnitude) {}

	FORCEINLINE bool IsValid() const { return Curve != nullptr; }

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UCurveFloat* Curve = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FTransform Offset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float PlayRate = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Magnitude = 1.f;
};

// Struct that determines the parameters around
// a recoil instance

struct WEAPONSYSTEMPLUGIN_API FRecoilInstance
{
	FRecoilInstance() = delete;
	FRecoilInstance(const FRecoilParams& RecoilParams)
		: Curve(RecoilParams.Curve), PlayRate(RecoilParams.PlayRate),
			Offset(RecoilParams.Offset.Rotator() * RecoilParams.Magnitude, RecoilParams.Offset.GetLocation() * RecoilParams.Magnitude)
	{
		if(!Curve) return;
		float MinTime;
		Curve->GetTimeRange(MinTime, Lifetime);
	}

	FORCEINLINE bool IsValid() const { return Curve != nullptr; }
	
	class UCurveFloat* Curve = nullptr;
	float PlayRate = 1.f;
	FTransform Offset;
	
	float CurrentTime = 0.f;
	float Lifetime = 0.f;
};



DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLandedMultiDelegate, class ATrueFPSCharacterBase*, Character, const FHitResult&, Hit);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCurrentWeaponChangedDelgate, class AWeapon*, CurrentWeapon, class AWeapon*, OldWeapon);

UCLASS()
class WEAPONSYSTEMPLUGIN_API ATrueFPSCharacterBase : public ACharacter
{
	GENERATED_BODY()
public:
	ATrueFPSCharacterBase();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) override;
	
public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Components")
	class UCameraComponent* Camera;

	// The third person mesh that you, as the client, can see
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USkeletalMeshComponent* ClientMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Components")
	class UCharacterInventoryComponent* Inventory;

protected:
	UFUNCTION(BlueprintNativeEvent, Category = "Character")
	void SetupMesh();
	virtual void SetupMesh_Implementation();
	
	virtual void CurrentWeaponChanged(class AWeapon* CurrentWeapon, class AWeapon* OldWeapon);

public:	
	UFUNCTION(BlueprintPure)
	FORCEINLINE class AWeaponBase* GetCurrentWeaponBase() const { return Inventory->GetCurrentWeapon(); }

	// Automatically casts it to UWeapon
	UFUNCTION(BlueprintPure)
	class AWeapon* GetCurrentWeapon() const;

	template<typename T>
	FORCEINLINE T* GetCurrentWeapon() const { return Cast<T>(GetCurrentWeaponBase()); }

	// By default returns the world-transform of hand_r
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Meta = (DisplayName = "Get Dominant-Hand World Transform"), Category = "Character|Anim")
	FTransform GetDomHandTransform() const;
	virtual FORCEINLINE FTransform GetDomHandTransform_Implementation() const {
		return GetMesh()->GetSocketTransform(FName("hand_r"));
	}

	// By default returns the world-transform of hand_l
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Meta = (DisplayName = "Get Off-Hand World Transform"), Category = "Character|Anim")
	FTransform GetOffHandTransform() const;
	virtual FORCEINLINE FTransform GetOffHandTransform_Implementation() const {
		return GetMesh()->GetSocketTransform(FName("hand_l"));
	}
	

	UPROPERTY(BlueprintReadWrite, Replicated, Category = "Character|Anim")
	float ADSValue = 0.f;
	
	UPROPERTY(BlueprintAssignable, Category = "Character|Delegates")
	FOnLandedMultiDelegate LandedMultiDelegate;

	UPROPERTY(BlueprintAssignable, Category = "Character|Delegates")
	FCurrentWeaponChangedDelgate CurrentWeaponChangedDelegate;
	
	//
	//	Recoil
	//
	
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "RecoilParams"), Category = "Weapon|Recoil")
	virtual FORCEINLINE void AddRecoilInstance(const FRecoilParams& RecoilParams)
	{
		if(!RecoilParams.IsValid()) return;
		RecoilInstances.Add(FRecoilInstance(RecoilParams));
	}

	UFUNCTION(BlueprintPure, Meta = (DisplayName = "Get Number of Recoil Instances"), Category = "Weapon|Recoil")
	FORCEINLINE int32 GetNumRecoilInstances() const { return RecoilInstances.Num(); }

	// The total offset from the accumulated recoil instances
	UPROPERTY(BlueprintReadOnly, Category = "Character|Recoil")
	FTransform RecoilOffset;

	//
	//	Anim Vars
	//
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
	float LeanAmount = 45.f;
	
	UPROPERTY(BlueprintReadWrite, Category = "Anim")
	float LeanValue = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "Anim")
	float CrouchValue = 0.f;

private:
	TArray<FRecoilInstance> RecoilInstances;

protected:

	float CrouchValueTarget = 0.f;
	float LeanValueTarget = 0.f;
	bool bCrouching = false;
	
	virtual void StartCrouching()
	{
		if(!bCrouching)
		{
			CrouchValueTarget = 1.f;
			Server_StartCrouching();
		}
		else
		{
			CrouchValueTarget = 0.f;
			Server_StopCrouching();
		}
		bCrouching = !bCrouching;
	}
	virtual void StopCrouching() { CrouchValueTarget = 0.f; Server_StopCrouching(); }
	virtual void LeanRight() { LeanValueTarget = LeanAmount; Server_LeanRight(); }
	virtual void LeanLeft() { LeanValueTarget = -LeanAmount; Server_LeanLeft(); }
	virtual void StopLeaning() { LeanValueTarget = 0.f; Server_StopLeaning(); }

	UFUNCTION(Server, Reliable)
	void Server_StartCrouching();
	virtual void Server_StartCrouching_Implementation() { CrouchValueTarget = 1.f; Multi_StartCrouching(); }

	UFUNCTION(NetMulticast, Unreliable)
	void Multi_StartCrouching();
	virtual void Multi_StartCrouching_Implementation() { CrouchValueTarget = 1.f; }

	UFUNCTION(Server, Reliable)
	void Server_StopCrouching();
	virtual void Server_StopCrouching_Implementation() { CrouchValueTarget = 0.f; Multi_StopCrouching(); }

	UFUNCTION(NetMulticast, Unreliable)
	void Multi_StopCrouching();
	virtual void Multi_StopCrouching_Implementation() { CrouchValueTarget = 0.f; }

	UFUNCTION(Server, Reliable)
	void Server_LeanRight();
	virtual void Server_LeanRight_Implementation() { LeanValueTarget = LeanAmount; Multi_LeanRight(); }

	UFUNCTION(NetMulticast, Unreliable)
	void Multi_LeanRight();
	virtual void Multi_LeanRight_Implementation() { LeanValueTarget = LeanAmount; }

	UFUNCTION(Server, Reliable)
	void Server_LeanLeft();
	virtual void Server_LeanLeft_Implementation() { LeanValueTarget = -LeanAmount; Multi_LeanLeft(); }

	UFUNCTION(NetMulticast, Unreliable)
	void Multi_LeanLeft();
	virtual void Multi_LeanLeft_Implementation() { LeanValueTarget = -LeanAmount; }

	UFUNCTION(Server, Reliable)
	void Server_StopLeaning();
	virtual void Server_StopLeaning_Implementation() { LeanValueTarget = 0.f; Multi_StopLeaning(); }

	UFUNCTION(NetMulticast, Unreliable)
	void Multi_StopLeaning();
	virtual void Multi_StopLeaning_Implementation() { LeanValueTarget = 0.f; }
	
	//
	//	Basic Locomotion
	//
	
	virtual FORCEINLINE void MoveForward(const float Value)
	{
		const FVector& Direction = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f).Vector();
		AddMovementInput(Direction, Value);
	}

	virtual FORCEINLINE void MoveRight(const float Value)
	{
		const FVector& Direction = FRotator(0.f, GetBaseAimRotation().Yaw + 90.f, 0.f).Vector();
		AddMovementInput(Direction, Value);
	}

	virtual FORCEINLINE void LookUp(const float Value)
	{
		AddControllerPitchInput(-Value);
		CurrentPitchInputValue = -Value;
	}

	virtual FORCEINLINE void LookRight(const float Value)
	{
		AddControllerYawInput(Value);
		CurrentYawInputValue = Value;
	}

public:
	float CurrentPitchInputValue = 0.f;
	float CurrentYawInputValue = 0.f;
	float CurrentRollInputValue = 0.f;


private:
	UFUNCTION()
	void Internal_CurrentWeaponChanged(class AWeaponBase* CurrentWeapon, class AWeaponBase* OldWeapon);
};
