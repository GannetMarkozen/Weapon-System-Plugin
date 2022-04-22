// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Character/ShooterCharacterBase.h"
#include "WeaponSystem/Weapons/Weapon.h"

#include "Camera/CameraComponent.h"
#include "Net/UnrealNetwork.h"
#include "WeaponSystem/Inventories/CharacterInventoryComponent.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "WeaponSystem/Weapons/WeaponBase.h"
#include "WeaponSystem/Weapons/WeaponDropBase.h"

AShooterCharacterBase::AShooterCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->bUsePawnControlRotation = true;
	//Camera->SetupAttachment(GetMesh(), FName("head"));

	/*GetMesh()->SetTickGroup(ETickingGroup::TG_PrePhysics);
	GetMesh()->bVisibleInReflectionCaptures = true;
	GetMesh()->SetCastHiddenShadow(true);*/
	
	Inventory = CreateDefaultSubobject<UCharacterInventoryComponent>(TEXT("Inventory"));
}

void AShooterCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	

	// Setup the TrueFPS mesh
	//SetupMesh();
	
	// Setup equip delegate. If weapon is already valid at this point call equip.
	if(IsValid(GetCurrentWeapon())) CurrentWeaponChanged(GetCurrentWeapon(), nullptr);
	Inventory->CurrentWeaponChangedDelegate.AddDynamic(this, &ThisClass::Internal_CurrentWeaponChanged);
}

void AShooterCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	const float OldLeanValue = LeanValue;
	LeanValue = UKismetMathLibrary::FInterpTo(LeanValue, LeanValueTarget, DeltaTime, 8.f);
	CurrentRollInputValue = LeanValue - OldLeanValue;
	AddControllerRollInput(CurrentRollInputValue * 0.2f);

	CrouchValue = UKismetMathLibrary::FInterpTo(CrouchValue, CrouchValueTarget, DeltaTime, 8.f);

	for(int32 i = 0; i < RecoilInstances.Num(); i++)
	{
		FRecoilInstance& RecoilInstance = RecoilInstances[i];
		
		const float LastTime = RecoilInstance.CurrentTime;
		const float CurrentTime = RecoilInstance.CurrentTime += DeltaTime * RecoilInstance.PlayRate;
		//const FTransform Offset(RecoilInstance.Offset.GetRotation() * RecoilInstance.Magnitude, RecoilInstance.Offset.GetLocation() * RecoilInstance.Magnitude);
		
		FTransform LastValue;
		FTransform CurrentValue;
		LastValue.BlendWith(RecoilInstance.Offset, RecoilInstance.Curve->GetFloatValue(LastTime));
		CurrentValue.BlendWith(RecoilInstance.Offset, RecoilInstance.Curve->GetFloatValue(CurrentTime));

		// Accumulate the difference of this time's transform to last time's
		const FTransform& Difference = CurrentValue.GetRelativeTransform(LastValue);
		RecoilOffset *= Difference;
		//DynamicWeaponOffset.Accumulate(Difference);
		
		if(CurrentTime >= RecoilInstance.Lifetime)
		{// If we have surpassed the duration of the recoil curve...
			RecoilInstances.RemoveAt(i--);
			if(RecoilInstances.IsEmpty())
			{
				RecoilOffset = FTransform::Identity;
			}
		}
	}

	
}


void AShooterCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	/*PlayerInputComponent->BindAxis(FName("MoveForward"), this, &ThisClass::MoveForward);
	PlayerInputComponent->BindAxis(FName("MoveRight"), this, &ThisClass::MoveRight);
	PlayerInputComponent->BindAxis(FName("LookUp"), this, &ThisClass::LookUp);
	PlayerInputComponent->BindAxis(FName("LookRight"), this, &ThisClass::LookRight);

	PlayerInputComponent->BindAction(FName("Crouch"), IE_Pressed, this, &ThisClass::StartCrouching);
	PlayerInputComponent->BindAction(FName("Crouch"), IE_Released, this, &ThisClass::StopCrouching);

	PlayerInputComponent->BindAction(FName("LeanRight"), IE_Pressed, this, &ThisClass::LeanRight);
	PlayerInputComponent->BindAction(FName("LeanRight"), IE_Released, this, &ThisClass::StopLeaning);
	
	PlayerInputComponent->BindAction(FName("LeanLeft"), IE_Pressed, this, &ThisClass::LeanLeft);
	PlayerInputComponent->BindAction(FName("LeanLeft"), IE_Released, this, &ThisClass::StopLeaning);
	

	PlayerInputComponent->BindAction(FName("EquipNext"), IE_Pressed, Inventory, &UCharacterInventoryComponent::EquipNext);
	PlayerInputComponent->BindAction(FName("EquipLast"), IE_Pressed, Inventory, &UCharacterInventoryComponent::EquipLast);*/
}

void AShooterCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ThisClass, ADSValue);
}

void AShooterCharacterBase::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);
	
	DOREPLIFETIME_ACTIVE_OVERRIDE(ThisClass, ADSValue, ADSValue <= 0.f || ADSValue >= 1.f);
}

/*void AShooterCharacterBase::SetupMesh_Implementation()
{
	if(IsLocallyControlled())
	{
		GetMesh()->SetVisibility(false);
		ClientMesh->SetSkeletalMesh(GetMesh()->SkeletalMesh);
		ClientMesh->HideBoneByName(FName("neck_01"), PBO_None);
	}
	else
	{
		ClientMesh->DestroyComponent();
		ClientMesh = nullptr;
	}
}*/


void AShooterCharacterBase::Internal_CurrentWeaponChanged(AWeaponBase* CurrentWeapon, AWeaponBase* OldWeapon)
{
	CurrentWeaponChanged(Cast<AWeapon>(CurrentWeapon), Cast<AWeapon>(OldWeapon));
}


void AShooterCharacterBase::CurrentWeaponChanged(AWeapon* CurrentWeapon, AWeapon* OldWeapon)
{
	if(CurrentWeapon)
	{
		CurrentWeapon->SetVisibility(true);
		CurrentWeapon->GetMesh()->SetSimulatePhysics(false);
		CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponSocket);
		CurrentWeapon->SetActorRelativeTransform(FTransform(CurrentWeapon->GetRelativeRotationPlacement(), CurrentWeapon->GetRelativeLocationPlacement()));
	}
	
	if(OldWeapon && Inventory->HasWeapon(OldWeapon))
	{
		OldWeapon->SetVisibility(false);
		OldWeapon->SetActorEnableCollision(false);
		OldWeapon->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	}

	CurrentWeaponChangedDelegate.Broadcast(CurrentWeapon, OldWeapon);
}

void AShooterCharacterBase::DropWeaponAt(const int32 Index)
{
	const TArray<AWeaponBase*>& Weapons = Inventory->GetWeapons();
	if(!Weapons.IsValidIndex(Index) || !IsValid(Weapons[Index])) return;
	if(HasAuthority())
	{
		AWeaponBase* const DropWeapon = Weapons[Index];
		//Inventory->RemoveWeaponAt(Index);
		SpawnWeaponDrop(DropWeapon);
	}
	else Server_DropWeaponAt(Index);
}

void AShooterCharacterBase::SpawnWeaponDrop_Implementation(AWeaponBase* Weapon)
{
	if(!HasAuthority()) return;
	const FTransform SpawnTransform(Camera->GetComponentLocation() + GetBaseAimRotation().Vector() * 120.f);
	const FVector Velocity(GetBaseAimRotation().Vector() * 500.f);
	AWeaponDropBase::SpawnWeaponDrop<AWeaponDropBase>(AWeaponDropBase::StaticClass(), Weapon, SpawnTransform, Velocity);
}

