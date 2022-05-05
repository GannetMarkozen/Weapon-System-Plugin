// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponSystem/Weapons/Scripts/HitscanScriptBase.h"

#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h"

void UHitscanScriptBase::Hitscan()
{
	if(!CanHitscan()) return;

	const FTransform& CameraTransform = GetOwningCharacter()->Camera->GetComponentTransform();
	const FVector& Start = CameraTransform.GetLocation();
	const FRotator& Rotation = CameraTransform.Rotator();
	const float SpreadMagnitude = CalculateSpreadMagnitude();
	
	TArray<FHitResult> Hits;
	for(int32 i = 0; i < NumShots; i++)
	{
		const float AbsX = abs(Spread.X);
		const float AbsY = abs(Spread.Y);
		const FRotator RandRot = Rotation + FRotator(FMath::FRandRange(-AbsY, AbsY) * SpreadMagnitude, FMath::RandRange(-AbsX, AbsX) * SpreadMagnitude, 0.f);
		const FVector End = Start + RandRot.Vector() * Range;
		FCollisionQueryParams Params;
		Params.AddIgnoredActors(TArray<AActor*>({ OwningWeapon, GetOwningCharacter() }));
		
		FHitResult Hit;
		GetWorld()->LineTraceSingleByChannel(Hit, Start, End, CollisionChannel, Params);
		
		if(!Hit.IsValidBlockingHit())
		{
			Hit.Distance = Range;
			Hit.Location = End;
		}
#if WITH_EDITORONLY_DATA
		if(bShowFiringDebugLines)
			DrawDebugLine(GetWorld(), Start, Hit.Location, Hit.IsValidBlockingHit() ? FColor::Green : FColor::Red, false, 3.f);
#endif
		Hits.Add(Hit);
	}

	if(!HasAuthority())
	{
		Server_Hitscan(Hits);
		PlayFiringEffect();
		PlayImpactEffect(Hits);
	}
	else
	{
		Server_Hitscan_Implementation(Hits);
	}
}

void UHitscanScriptBase::Server_Hitscan_Implementation(const TArray<FHitResult>& Hits)
{
	if(!CanHitscan()) return;

	/*TMap<AActor*, float> AccumulativeDamage;
	for(const FHitResult& Hit : Hits)
	{
		//if(!Hit.GetActor() || !Hit.GetActor()->Implements<UDamageInterface>()) continue;
		//PRINT(TEXT("%s: Hit %s"), *FString(HasAuthority() ? "SERVER" : "CLIENT"), *FString(Hit.GetActor() ? Hit.GetActor()->GetName() : "NULL"));
		if(!Hit.GetActor() || !UAttributeUtils::HasAttribute(Hit.GetActor(), HealthAttribute)) continue;
		
		constexpr float TempDamageValue = 10.f;
		if(float* DamageValue = AccumulativeDamage.Find(Hit.GetActor()))
		{
			*DamageValue += TempDamageValue;// Temp damage value
		}
		else
		{
			AccumulativeDamage.Add(Hit.GetActor(), TempDamageValue);
		}
	}

	TArray<AActor*> DamageableActors;
	AccumulativeDamage.GetKeys(DamageableActors);
	for(AActor* DamageableActor : DamageableActors)
	{
		float* DamageValue = AccumulativeDamage.Find(DamageableActor);
		if(!DamageValue) continue;
		
		//IDamageInterface::Execute_ApplyDamage(DamageableActor, *DamageValue, (DamageableActor->GetActorLocation() - GetOwningCharacter()->Camera->GetComponentLocation()).GetSafeNormal(), 1.f);
		TryApplyDamage(DamageableActor);
	}*/
	for(const FHitResult& Hit : Hits)
	{
		if(!UAttributeUtils::HasAttributesComponent(Hit.GetActor())) continue;
		TryApplyDamage(Hit);
	}

	Multi_Hitscan(Hits);
	PlayFiringEffect();
	PlayImpactEffect(Hits);
}


void UHitscanScriptBase::Multi_Hitscan_Implementation(const TArray<FHitResult>& Hits)
{
	if(IsLocallyControlled()) return;
	PlayFiringEffect();
	PlayImpactEffect(Hits);
}

void UHitscanScriptBase::PlayFiringEffect_Implementation()
{
	const FTransform& MuzzleTransform = OwningWeapon->GetMuzzleWorldTransform();
	
	if(FiringSound)
		UGameplayStatics::SpawnSoundAttached(FiringSound, OwningWeapon->GetMesh(), FName("Muzzle"), MuzzleTransform.GetLocation(), MuzzleTransform.Rotator(), EAttachLocation::KeepWorldPosition);

	if(MuzzleFlash)
		UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, OwningWeapon->GetMesh(), FName("Muzzle"), MuzzleTransform.GetLocation(), MuzzleTransform.Rotator(), FVector(1.f), EAttachLocation::KeepWorldPosition);

	FRecoilParams CustomMagnitudeRecoilParams = RecoilParams;
	CustomMagnitudeRecoilParams.Magnitude = CalculateRecoilMagnitude();
	GetOwningCharacter()->AddRecoilInstance(CustomMagnitudeRecoilParams);
}

void UHitscanScriptBase::PlayImpactEffect_Implementation(const TArray<FHitResult>& Hits)
{
	
}

