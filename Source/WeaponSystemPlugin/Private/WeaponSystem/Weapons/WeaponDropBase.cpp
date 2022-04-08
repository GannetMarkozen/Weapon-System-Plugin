// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/WeaponDropBase.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "WeaponSystem/Inventories/CharacterInventoryComponent.h"
#include "WeaponSystem/Weapons/WeaponBase.h"

AWeaponDropBase::AWeaponDropBase()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	SetReplicateMovement(true);

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
	SphereCollision->SetUsingAbsoluteRotation(true);
	SphereCollision->SetNotifyRigidBodyCollision(true);
	SphereCollision->SetGenerateOverlapEvents(true);
	SphereCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SphereCollision->SetCollisionObjectType(ECC_WorldDynamic);
	SphereCollision->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereCollision->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	SphereCollision->SetCollisionResponseToChannel(ECC_Visibility, ECR_Overlap);
	SphereCollision->bHiddenInGame = false;
	RootComponent = SphereCollision;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));
}

void AWeaponDropBase::BeginPlay()
{
	Super::BeginPlay();
	if(HasAuthority())
	{
		if(IsValid(OwnedWeapon))
		{
			/*OwnedWeapon->RemoveFromInventory();
			OnRep_OwnedWeapon();*/
			OwnedWeapon->RemoveFromInventory();
			OnRep_OwnedWeapon();
		}
		else if(DefaultWeapon)
		{
			OwnedWeapon = GetWorld()->SpawnActor<AWeaponBase>(DefaultWeapon);
			OnRep_OwnedWeapon();
		}
		else
		{
			Destroy();
		}
	}
}

void AWeaponDropBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, OwnedWeapon);
}

void AWeaponDropBase::OnRep_OwnedWeapon()
{
	if(!OwnedWeapon) return;
	OwnedWeapon->SetVisibility(true);
	OwnedWeapon->GetMesh()->SetSimulatePhysics(false);
	OwnedWeapon->AttachToComponent(SphereCollision, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	BP_OnWeaponRemoved();
	/*if(!OwnedWeapon) return;
	if(OwnedWeapon->GetOwningInventory())
	{
		OwnedWeapon->UnobtainedDelegate.AddDynamic(this, &ThisClass::OnWeaponRemoved);
	}
	else OnWeaponRemoved(OwnedWeapon, nullptr);*/
}

void AWeaponDropBase::OnWeaponRemoved_Implementation(AWeaponBase* InWeapon, UInventoryComponent* InOldInventory)
{
	OwnedWeapon->SetVisibility(true);
	OwnedWeapon->GetMesh()->SetSimulatePhysics(false);
	OwnedWeapon->AttachToComponent(SphereCollision, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	BP_OnWeaponRemoved();
}

















template <typename T>
T* AWeaponDropBase::SpawnWeaponDrop(const TSubclassOf<AWeaponDropBase>& WeaponDropClass, const TSubclassOf<AWeaponBase>& WeaponClass, const FTransform& SpawnTransform, const FVector& Impulse)
{
	if(!WeaponDropClass || !WeaponClass || !GWorld) return nullptr;
	checkf(GWorld->GetNetMode() <= NM_ListenServer, TEXT("AWeaponDropBase::SpawnWeaponDrop can not call without authority"));
	T* NewWeaponDrop = GWorld->SpawnActorDeferred<T>(WeaponDropClass, SpawnTransform);
	AWeaponBase* NewWeapon = GWorld->SpawnActor<AWeaponBase>(WeaponClass, SpawnTransform);
	NewWeaponDrop->OwnedWeapon = NewWeapon;
	NewWeaponDrop->FinishSpawning(SpawnTransform);
	
	//NewWeaponDrop->OnRep_OwnedWeapon();
	NewWeaponDrop->ProjectileMovement->AddForce(Impulse);
	return NewWeaponDrop;
}

template <typename T>
T* AWeaponDropBase::SpawnWeaponDrop(const TSubclassOf<AWeaponDropBase>& WeaponDropClass, AWeaponBase* Weapon, const FTransform& SpawnTransform, const FVector& Impulse)
{
	if(!WeaponDropClass || !IsValid(Weapon)) return nullptr;
	checkf(Weapon->HasAuthority(), TEXT("AWeaponDropBase::SpawnWeaponDrop can not call without authority"));
	T* NewWeaponDrop = Weapon->GetWorld()->SpawnActorDeferred<T>(WeaponDropClass, SpawnTransform);
	if(!IsValid(NewWeaponDrop)) return nullptr;
	NewWeaponDrop->OwnedWeapon = Weapon;
	NewWeaponDrop->FinishSpawning(SpawnTransform);
	
	//NewWeaponDrop->OnRep_OwnedWeapon();
	NewWeaponDrop->ProjectileMovement->AddForce(Impulse);
	return NewWeaponDrop;
}


