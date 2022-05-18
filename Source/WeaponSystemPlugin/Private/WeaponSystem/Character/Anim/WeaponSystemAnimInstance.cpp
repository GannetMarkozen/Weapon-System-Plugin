// Copyright 2022, Gannet Markozen, All rights reserved


#include "WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h"

#include "KismetAnimationLibrary.h"
#include "Camera/CameraComponent.h"
#include "WeaponSystem/Character/ShooterCharacterBase.h"
#include "Curves/CurveVector.h"
#include "Engine/SkeletalMeshSocket.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "WeaponSystem/Weapons/Weapon.h"


UWeaponSystemAnimInstance::UWeaponSystemAnimInstance()
{
	
}

void UWeaponSystemAnimInstance::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
}


void UWeaponSystemAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	
}

void UWeaponSystemAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if(!Character)
	{
		Character = Cast<AShooterCharacterBase>(TryGetPawnOwner());
		if(Character)
		{
			OnCharacterInitialized();
			BP_OnCharacterInitialized();
		}
		else return;
	}
	
	UpdateVariables(DeltaTime);
	BP_UpdateVariables(DeltaTime);
	
	UpdateTurnInPlace(DeltaTime);
	
	// Calculate OutOffsetLocation and OutOffsetRotation variables
	FVector OutOffsetLocation = FVector::ZeroVector;
	FRotator OutOffsetRotation = FRotator::ZeroRotator;
	UpdateOffsetTransform(DeltaTime, OutOffsetLocation, OutOffsetRotation);
	BP_UpdateOffsetTransform(DeltaTime, OutOffsetLocation, OutOffsetRotation, OutOffsetLocation, OutOffsetRotation);

	// Update the OffsetTransform with the updated offset location and rotation
	OffsetTransform = Character->GetWeaponOffsetTransform() * FTransform(OutOffsetRotation, OutOffsetLocation);

	FVector OutPlacementLocation = FVector::ZeroVector;
	FRotator OutPlacementRotation = FRotator::ZeroRotator;
	UpdatePlacementTransform(DeltaTime, OutPlacementLocation, OutPlacementRotation);
	BP_UpdatePlacementTransform(DeltaTime, OutPlacementLocation, OutPlacementRotation, OutPlacementLocation, OutPlacementRotation);

	PlacementTransform = CurrentWeaponCustomOffsetTransform * FTransform(OutPlacementRotation, OutPlacementLocation);

	PostUpdateAnimation(DeltaTime);
	BP_PostUpdateAnimation(DeltaTime);
}

void UWeaponSystemAnimInstance::PostUpdateAnimation(const float DeltaTime)
{
	// Set old vars for next anim update
	LastCameraRotation = CameraRotation;
	LastVelocity = Character->GetCharacterMovement()->Velocity;
}

void UWeaponSystemAnimInstance::UpdateVariables(const float DeltaTime)
{
	if(Character->IsLocallyControlled())
	{
		const APlayerController* PlayerController = Character->GetController<APlayerController>();
		if(!PlayerController)
		{
			UE_LOG(LogTemp, Error, TEXT("Owning Pawn is not controlled by a valid Player Controller!"));
			return;
		}
		
#if ENGINE_MAJOR_VERSION < 5
		const FRotator AddRot(Character->CurrentPitchInputValue * PlayerController->InputPitchScale,
				Character->CurrentYawInputValue * PlayerController->InputYawScale, Character->CurrentRollInputValue * PlayerController->InputRollScale);
#else
		const FRotator AddRot(Character->CurrentPitchInputValue * PlayerController->InputPitchScale_DEPRECATED,
			Character->CurrentYawInputValue * PlayerController->InputYawScale_DEPRECATED, Character->CurrentRollInputValue * PlayerController->InputRollScale_DEPRECATED);
#endif
		
		const FRotator PreCalculatedCameraRot = Character->Camera->GetComponentRotation() + AddRot;

		constexpr float ClampAngle = 89.9f;
		CameraRotation = FRotator(FMath::ClampAngle(PreCalculatedCameraRot.Pitch, -ClampAngle, ClampAngle), PreCalculatedCameraRot.Yaw, PreCalculatedCameraRot.Roll);
	}
	else
	{
		// Clamp pitch to prevent weird yaw rotation glitch on simulated proxies
		constexpr float ClampAngle = 89.9f;
		FRotator ClampedBaseAimRotation = Character->GetBaseAimRotation();
		ClampedBaseAimRotation.Pitch = FMath::ClampAngle(ClampedBaseAimRotation.Pitch, -ClampAngle, ClampAngle);

		// Interp camera rotation to prevent a hitchy look on non-local viewports
		CameraRotation = UKismetMathLibrary::RInterpTo(CameraRotation, ClampedBaseAimRotation, DeltaTime, NonLocalCameraRotationInterpSpeed);
	}

	if(IsValid(CurrentWeapon))
	{
		const FTransform DomHandTransform = Character->GetDomHandTransform();
		OriginRelativeTransform = CurrentWeapon->GetOrientationWorldTransform(AimingValue).GetRelativeTransform(DomHandTransform);
		if(AimingValue > 0.f) SightsRelativeTransform = CurrentWeapon->GetSightsWorldTransform().GetRelativeTransform(DomHandTransform);
	}
	
	// Used for mesh calculations
	AimRotation = CameraRotation - Character->GetActorRotation();
	
	/*
	 *	LOCOMOTION VARS
	 */

	MovementDirection = UKismetAnimationLibrary::CalculateDirection(Character->GetCharacterMovement()->Velocity, FRotator(0.f, Character->GetBaseAimRotation().Yaw, 0.f));

	MovementSpeed = Character->GetCharacterMovement()->Velocity.Size();

	bIsFalling = Character->GetCharacterMovement()->IsFalling();

	MovementWeaponSwayProgressTime += DeltaTime * (MovementSpeedInterp / MaxMoveSpeed);

	/*
	 *	IK VARS
	 */
	
	AimingValue = Character->ADSValue;
	
	/*
	 *	ACCUMULATIVE OFFSET VARS
	 */

	constexpr float ANGLE_CLAMP = 4.5f * 60.f;
	const float AngleClampDelta = ANGLE_CLAMP * DeltaTime;
	
	const FRotator AddRotation = (CameraRotation - LastCameraRotation);
	FRotator AddRotationClamped = FRotator(FMath::ClampAngle(AddRotation.Pitch, -AngleClampDelta, AngleClampDelta) * 1.5f,
		FMath::ClampAngle(AddRotation.Yaw, -AngleClampDelta, AngleClampDelta),
			FMath::ClampAngle(AddRotation.Roll, -AngleClampDelta, AngleClampDelta));
	AddRotationClamped.Roll += AddRotationClamped.Yaw * 0.7f;

	// Multiplied by DeltaTime to remain frame-independent
	AddRotationClamped *= DeltaTime * 50.f;
	
	AccumulativeRotation += AddRotationClamped;
	AccumulativeRotation = UKismetMathLibrary::RInterpTo(AccumulativeRotation, FRotator::ZeroRotator, DeltaTime, AccumulativeRotationReturnInterpSpeed);
	AccumulativeRotationInterp = UKismetMathLibrary::RInterpTo(AccumulativeRotationInterp, AccumulativeRotation, DeltaTime, AccumulativeRotationInterpSpeed);

	MovementSpeedInterp = UKismetMathLibrary::FInterpTo(MovementSpeedInterp, bIsFalling ? 0.f : Character->GetCharacterMovement()->Velocity.Size(), DeltaTime, 3.f);

	const FVector Velocity = Character->GetCharacterMovement()->Velocity;
	const FVector Difference = (Velocity - LastVelocity) * DeltaTime;
	
	VelocityTarget = UKismetMathLibrary::VInterpTo(VelocityTarget, Character->GetCharacterMovement()->Velocity, DeltaTime, VelocityInterpSpeed);
	if(Difference.Z > 1.5f)// Jumping / landing impulse
		VelocityTarget.Z += Difference.Z * 400.f * LandingImpactBobMultiplier;

	// 25% when fully aiming
	VelocityInterp = UKismetMathLibrary::VInterpTo(VelocityInterp, VelocityTarget * (1.f - AimingValue * 0.75f), DeltaTime, 3.f);
}

void UWeaponSystemAnimInstance::UpdateOffsetTransform(const float DeltaTime, FVector& OutOffsetLocation, FRotator& OutOffsetRotation)
{
	// Get inverse to apply the opposite of the rotational influence to the weapon sway
	const FRotator AccumulativeRotationInterpInverse = AccumulativeRotationInterp.GetInverse();

	// Apply location offset from accumulative rotation inverse
	OutOffsetLocation += FVector(0.f, AccumulativeRotationInterpInverse.Yaw, AccumulativeRotationInterpInverse.Pitch) / 6.f;

	// Apply location offset from interp orientation velocity
	const FVector OrientationVelocityInterp = (FRotator(0.f, CameraRotation.Yaw, 0.f) - VelocityInterp.Rotation()).Vector() * VelocityInterp.Size() * FVector(1.f, -1.f, 1.f);
	const FVector MovementOffset = (OrientationVelocityInterp / MaxMoveSpeed) * FMath::Max<float>(1.f - AimingValue, 0.6f);
	OutOffsetLocation += MovementOffset;
        
	// Add accumulative rotation
	OutOffsetRotation += AccumulativeRotationInterpInverse;

	// Add movement offset to rotation
	OutOffsetRotation += FRotator(MovementOffset.Z * 5.f, MovementOffset.Y, MovementOffset.Y * 2.f);

	// Apply weight scale of weapon to offsets before weapon sway curves
	OutOffsetLocation *= CurrentWeightScale;
	OutOffsetRotation.Pitch *= CurrentWeightScale;
	OutOffsetRotation.Yaw *= CurrentWeightScale;
	OutOffsetRotation.Roll *= CurrentWeightScale;

	// Apply idle vector curve anim to offset location
	if(IdleWeaponSwayCurve)
	{
		const FVector SwayOffset = IdleWeaponSwayCurve->GetVectorValue(GetWorld()->GetTimeSeconds()) * 8.f * FMath::Max<float>(1.f - AimingValue, 0.1f);
		OutOffsetLocation += SwayOffset;
		OutOffsetRotation += FRotator(SwayOffset.Z * 0.3f, SwayOffset.Y * 0.5f, SwayOffset.Y * 1.2f);
	}
	
	// Apply movement offset to offset location
	if(MovementWeaponSwayCurve)
	{
		const FVector SwayOffset = MovementWeaponSwayCurve->GetVectorValue(MovementWeaponSwayProgressTime) * (MovementSpeedInterp / MaxMoveSpeed) * 5.f * FMath::Max<float>(1.f - AimingValue, 0.1f);
		OutOffsetLocation += SwayOffset * 0.7f;
		OutOffsetRotation += FRotator(SwayOffset.Z * 0.5f, SwayOffset.Y * 0.8f, SwayOffset.Y * 1.f);
	}

	// Hit reaction stuff
	HandleHitReaction(DeltaTime, OutOffsetLocation, OutOffsetRotation);
}

void UWeaponSystemAnimInstance::UpdatePlacementTransform(const float DeltaTime, FVector& OutPlacementLocation, FRotator& OutPlacementRotation)
{
	OutPlacementRotation.Pitch = CameraRotation.Pitch * WeaponPitchTiltMultiplier;
	OutPlacementLocation.Z = -CameraRotation.Pitch * (WeaponPitchTiltMultiplier / 3.f);
}


void UWeaponSystemAnimInstance::UpdateTurnInPlace(const float DeltaTime)
{
	if(!bIsTurningInPlace && abs(RootYawOffset) < 2.f && Character->GetCharacterMovement()->Velocity.Size() < StationaryVelocityThreshold)
	{
		bIsTurningInPlace = true;
	}

	if(bIsTurningInPlace)
	{
		RootYawOffset += FRotator::NormalizeAxis(LastCameraRotation.Yaw - CameraRotation.Yaw);

		// If exceeded rotation or velocity thresholds, set turn in place to false and set rot speed to desired speed
		if(Character->GetCharacterMovement()->Velocity.Size() >= StationaryVelocityThreshold)
		{
			bIsTurningInPlace = false;
			StationaryYawInterpSpeed = 8.f;
		}
		else if(abs(RootYawOffset) >= StationaryYawThreshold)
		{
			bIsTurningInPlace = false;
			StationaryYawInterpSpeed = 5.f;
		}

		// If no longer turning in place, set the rotation amount for turning animation usage
		if(!bIsTurningInPlace)
		{
			StationaryYawAmount = -RootYawOffset;
		}
	}

	if(!bIsTurningInPlace && RootYawOffset)
	{
		const float YawDifference = FRotator::NormalizeAxis(LastCameraRotation.Yaw - CameraRotation.Yaw);
		RootYawOffset += YawDifference;
		
		if(-YawDifference > 0.f == StationaryYawAmount > 0.f)
			StationaryYawAmount += -YawDifference;

		StationaryYawSpeedNormal = FMath::Clamp<float>(StationaryYawAmount / 180.f, 1.5f, 3.f);
            
		// Never allow the yaw offset to exceed the yaw threshold
		RootYawOffset = FMath::ClampAngle(RootYawOffset, -StationaryYawThreshold, StationaryYawThreshold);
            
		// Never allow yaw offset to exceed yaw threshold
		RootYawOffset = UKismetMathLibrary::FInterpTo(RootYawOffset, 0.f, DeltaTime, StationaryYawInterpSpeed);

		// Once matched rotation, clear vars
		if(abs(RootYawOffset) < 2.f)
		{
			StationaryYawInterpSpeed = 0.f;
			StationaryYawAmount = 0.f;
			RootYawOffset = 0.f;
		}
	}
}

void UWeaponSystemAnimInstance::OnCharacterInitialized()
{
	Mesh = Character->GetMesh();
	CameraRelativeLocation = Character->Camera->GetRelativeLocation();

	Character->CurrentWeaponChangedDelegate.AddDynamic(this, &ThisClass::Internal_CurrentWeaponChanged);
	Character->LandedMultiDelegate.AddDynamic(this, &ThisClass::OnCharacterLanded);

	const AShooterCharacterBase* DefObj = Character->GetClass()->GetDefaultObject<AShooterCharacterBase>();
	CameraRelativeLocation = DefObj->Camera->GetComponentLocation() - DefObj->GetMesh()->GetSocketLocation(FName("head"));
}

void UWeaponSystemAnimInstance::CurrentWeaponChanged(AWeapon* NewWeapon, AWeapon* OldWeapon)
{
	CurrentWeapon = NewWeapon;
	if(CurrentWeapon)
	{// Init current weapon vars
		bCurrentWeaponIsValid = true;
		AnimPose = CurrentWeapon->GetAnimProps().AnimPose;
		CurrentWeightScale = CurrentWeapon->GetAnimProps().WeightScale;
		CurrentWeaponCustomOffsetTransform = CurrentWeapon->GetAnimProps().CustomOffsetTransform;

		// Get the sight transform relative to right hand for control rig calculations
		//const FTransform& DomHandTransform = Mesh->GetSocketTransform(FName("hand_r"));
		const FTransform DomHandTransform = Character->GetDomHandTransform();
		SightsRelativeTransform = CurrentWeapon->GetSightsWorldTransform().GetRelativeTransform(DomHandTransform);//CurrentWeapon->GetSightsWorldTransform().GetRelativeTransform(Mesh->GetSocketTransform(FName("hand_r")));
		OriginRelativeTransform = CurrentWeapon->GetOrientationWorldTransform(AimingValue).GetRelativeTransform(DomHandTransform);
	}
	else
	{// Clear current weapon vars
		bCurrentWeaponIsValid = false;
		AnimPose = nullptr;
		CurrentWeightScale = 0.f;
		CurrentWeaponCustomOffsetTransform = FTransform::Identity;
		SightsRelativeTransform = FTransform::Identity;
		OriginRelativeTransform = FTransform::Identity;
	}
}

void UWeaponSystemAnimInstance::OnCharacterLanded(AShooterCharacterBase* InCharacter, const FHitResult& Hit)
{// Net multicast jump delegate binding
	BP_OnCharacterLanded(InCharacter, Hit);
}






void UWeaponSystemAnimInstance::ApplyHitReaction(UCurveFloat* Curve, const FVector& Direction, const float Magnitude, const float PlaySpeed)
{
	if(!Curve || Direction.Size() == 0 || Magnitude == 0) return;
	HitReactions.Add(FHitReaction(Curve, Direction, Magnitude, PlaySpeed));
}

void UWeaponSystemAnimInstance::HandleHitReaction(const float DeltaTime, FVector& OutOffsetLocation, FRotator& OutOffsetRotation)
{
	for(int32 i = 0; i < HitReactions.Num(); i++)
	{
		const FVector& Impulse = HitReactions[i].Impulse;
		const float Value = HitReactions[i].Curve->GetFloatValue(HitReactions[i].Position);

		const FRotator Rot = FRotator(Impulse.X + Impulse.Z, 0.f, -Impulse.Y) * Value;
		
		AimRotation += Rot;
		OutOffsetRotation += Rot.GetInverse();
		OutOffsetLocation += -Impulse * Value;
		
		float Lifespan,Temp;
		HitReactions[i].Curve->GetTimeRange(Temp, Lifespan);
		float& Position = HitReactions[i].Position;
		
		if(Position >= Lifespan)
		{
			HitReactions.RemoveAt(i--);
			continue;
		}
		Position = FMath::Min<float>(Lifespan, Position + DeltaTime * HitReactions[i].PlaySpeed);
	}
}





/*
TArray<FTransform> OutTransformsPerBoneIndex,

FAnimationRuntime::FillUpComponentSpaceTransformsRefPose(InSkeleton, OutTransformsPerBoneIndex);

int32 BoneIndex = InSkeleton->GetReferenceSkeleton().FindBoneIndex(BoneName); 
OutTransformsPerBoneIndex[BoneIndex]*/

/*
FCompactPose OutPose;
OutPose.ResetToRefPose(SkelMeshComp->GetAnimInstance()->GetRequiredBones());

FBlendedCurve OutCurve;
FStackCustomAttributes TempAttributes;
FAnimationPoseData OutAnimationPoseData(OutPose, OutCurve, TempAttributes);

const float Seconds = AnimSection->MapTimeToAnimation(CurrentTime.Time, CurrentTime.Rate);
FAnimExtractContext ExtractionContext(Seconds, false);

AnimSequence->GetAnimationPose(OutAnimationPoseData, ExtractionContext);*/




