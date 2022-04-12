// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h"

#include "Camera/CameraComponent.h"
#include "WeaponSystem/Character/TrueFPSCharacterBase.h"
#include "Curves/CurveVector.h"
#include "Engine/SkeletalMeshSocket.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/InputSettings.h"
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
		Character = Cast<ATrueFPSCharacterBase>(TryGetPawnOwner());
		if(Character)
		{
			Init();
			BP_Init();
		}
		else
		{
			return;
		}
	}
	
	SetVars(DeltaTime);
	CalculateMeshOffset(DeltaTime);
	CalculateWeaponSway(DeltaTime);

	// Set old vars for next anim update
	LastCameraRotation = CameraRotation;
	LastVelocity = Character->GetCharacterMovement()->Velocity;
}

void UWeaponSystemAnimInstance::NativePostEvaluateAnimation()
{
	Super::NativePostEvaluateAnimation();
}



void UWeaponSystemAnimInstance::SetVars_Implementation(const float DeltaTime)
{
	if(Character->IsLocallyControlled())
	{
		const APlayerController* PlayerController = Character->GetController<APlayerController>();
		if(!PlayerController) return;
		
#if ENGINE_MAJOR_VERSION < 5
		const FRotator AddRot(Character->CurrentPitchInputValue * PlayerController->InputPitchScale,
				Character->CurrentYawInputValue * PlayerController->InputYawScale, Character->CurrentRollInputValue * PlayerController->InputRollScale);
#else
		const FRotator AddRot(Character->CurrentPitchInputValue * PlayerController->InputPitchScale_DEPRECATED,
			Character->CurrentYawInputValue * PlayerController->InputYawScale_DEPRECATED, Character->CurrentRollInputValue * PlayerController->InputRollScale_DEPRECATED);
#endif
		
		const FRotator& PreCalculatedCameraRot = Character->Camera->GetComponentRotation() + AddRot;
			/*FRotator(Character->CurrentPitchInputValue * PlayerController->InputPitchScale,
				Character->CurrentYawInputValue * PlayerController->InputYawScale, Character->CurrentRollInputValue * PlayerController->InputRollScale);*/

		constexpr float ClampAngle = 89.9f;
		CameraRotation = FRotator(FMath::ClampAngle(PreCalculatedCameraRot.Pitch, -ClampAngle, ClampAngle), PreCalculatedCameraRot.Yaw, PreCalculatedCameraRot.Roll);
		//RelativeCameraRotation = FTransform(CameraRotation).GetRelativeTransform(Mesh->GetSocketTransform(FName("root"), RTS_Component).Inverse() * Mesh->GetSocketTransform(FName("root"))).Rotator();
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

	if(CurrentWeapon)
	{
		const FTransform DomHandTransform = Character->GetDomHandTransform();
		OriginRelativeTransform = CurrentWeapon->GetOrientationWorldTransform(ADSMagnitude).GetRelativeTransform(DomHandTransform);
		if(ADSMagnitude > 0.f) SightsRelativeTransform = CurrentWeapon->GetSightsWorldTransform().GetRelativeTransform(DomHandTransform);
	}
	
	// Used for mesh calculations
	CameraRelativeRotation = CameraRotation - Character->GetActorRotation();
	//CameraRelativeRotation = CameraRotation - (Mesh->GetSocketTransform(FName("root"), RTS_Component).GetRotation().Inverse() * Mesh->GetSocketQuaternion(FName("root"))).Rotator();
	
	/*
	 *	LOCOMOTION VARS
	 */

	MovementDirection = CalculateDirection(Character->GetCharacterMovement()->Velocity, FRotator(0.f, Character->GetBaseAimRotation().Yaw, 0.f));

	MovementVelocity = Character->GetCharacterMovement()->Velocity.Size();

	bIsFalling = Character->GetCharacterMovement()->IsFalling();

	MovementWeaponSwayProgressTime += DeltaTime * (MovementSpeedInterp / MaxMoveSpeed);

	/*
	 *	IK VARS
	 */
	
	ADSMagnitude = Character->ADSValue;
	
	//const FTransform& RootOffset = Mesh->GetSocketTransform(FName("root"), RTS_Component).Inverse() * Mesh->GetSocketTransform(FName("ik_hand_root"));
	//RelativeCameraTransform = CameraTransform.GetRelativeTransform(RootOffset);
	

	/*
	 *	ACCUMULATIVE OFFSET VARS
	 */

	constexpr float AngleClamp = 4.5f * 60.f;
	const float AngleClampDelta = AngleClamp * DeltaTime;
	const FRotator& AddRotation = CameraRotation - LastCameraRotation;
	FRotator AddRotationClamped = FRotator(FMath::ClampAngle(AddRotation.Pitch, -AngleClampDelta, AngleClampDelta) * 1.5f,
		FMath::ClampAngle(AddRotation.Yaw, -AngleClampDelta, AngleClampDelta),
			FMath::ClampAngle(AddRotation.Roll, -AngleClampDelta, AngleClampDelta));
	AddRotationClamped.Roll += AddRotationClamped.Yaw * 0.7f;

	AccumulativeRotation += AddRotationClamped;
	AccumulativeRotation = UKismetMathLibrary::RInterpTo(AccumulativeRotation, FRotator::ZeroRotator, DeltaTime, AccumulativeRotationReturnInterpSpeed);
	AccumulativeRotationInterp = UKismetMathLibrary::RInterpTo(AccumulativeRotationInterp, AccumulativeRotation, DeltaTime, AccumulativeRotationInterpSpeed);

	MovementSpeedInterp = UKismetMathLibrary::FInterpTo(MovementSpeedInterp, bIsFalling ? 0.f : Character->GetCharacterMovement()->Velocity.Size(), DeltaTime, 3.f);

	const FVector& Velocity = Character->GetCharacterMovement()->Velocity;
	const FVector& Difference = Velocity - LastVelocity;
	
	VelocityTarget = UKismetMathLibrary::VInterpTo(VelocityTarget, Character->GetCharacterMovement()->Velocity, DeltaTime, VelocityInterpSpeed);
	if(Difference.Size() * DeltaTime > 400.f / 60.f)
	{
		const FVector& OrientationDifference = UKismetMathLibrary::RotateAngleAxis(Velocity - LastVelocity * 10.f, Character->GetControlRotation().Yaw, FVector::UpVector);//UKismetMathLibrary::Quat_RotateVector(FRotator(0.f, Character->GetControlRotation().Yaw, 0.f).Quaternion(), Velocity - LastVelocity * 10.f);
		const FVector& ClampedDifference =  UKismetMathLibrary::ClampVectorSize(OrientationDifference, 0.f, 30000.f);
		VelocityTarget += FVector(ClampedDifference.X / 3.f, ClampedDifference.Y / 3.f, ClampedDifference.Z);
	}
	
	VelocityInterp = UKismetMathLibrary::VInterpTo(VelocityInterp, VelocityTarget, DeltaTime, 3.f);
}

void UWeaponSystemAnimInstance::CalculateWeaponSway(const float DeltaTime)
{
	// Add onto offsets and then apply onto offset transform for IK
	FVector OffsetLocation = FVector::ZeroVector;
	FRotator OffsetRotation = FRotator::ZeroRotator;

	// Get inverse to apply the opposite of the rotational influence to the weapon sway
	const FRotator& AccumulativeRotationInterpInverse = AccumulativeRotationInterp.GetInverse();

	// Apply location offset from accumulative rotation inverse
	OffsetLocation += FVector(0.f, AccumulativeRotationInterpInverse.Yaw, AccumulativeRotationInterpInverse.Pitch) / 6.f;

	// Apply location offset from interp orientation velocity
	const FVector& OrientationVelocityInterp = (FRotator(0.f, CameraRotation.Yaw, 0.f) - VelocityInterp.Rotation()).Vector() * VelocityInterp.Size() * FVector(1.f, -1.f, 1.f);
	const FVector& MovementOffset = (OrientationVelocityInterp / MaxMoveSpeed) * FMath::Max<float>(1.f - ADSMagnitude, 0.6f);
	OffsetLocation += MovementOffset;
        
	// Add accumulative rotation
	OffsetRotation += AccumulativeRotationInterpInverse;

	// Add movement offset to rotation
	OffsetRotation += FRotator(MovementOffset.Z * 5.f, MovementOffset.Y, MovementOffset.Y * 2.f);

	// Apply weight scale of weapon to offsets before weapon sway curves
	OffsetLocation *= CurrentWeightScale;
	OffsetRotation.Pitch *= CurrentWeightScale;
	OffsetRotation.Yaw *= CurrentWeightScale;
	OffsetRotation.Roll *= CurrentWeightScale;

	// Apply idle vector curve anim to offset location
	if(IdleWeaponSwayCurve)
	{
		const FVector& SwayOffset = IdleWeaponSwayCurve->GetVectorValue(GetWorld()->GetTimeSeconds()) * 8.f * FMath::Max<float>(1.f - ADSMagnitude, 0.1f);
		OffsetLocation += SwayOffset;
		OffsetRotation += FRotator(SwayOffset.Z * 0.3f, SwayOffset.Y * 0.5f, SwayOffset.Y * 1.2f);
	}
	
	// Apply movement offset to offset location
	if(MovementWeaponSwayCurve)
	{
		const FVector& SwayOffset = MovementWeaponSwayCurve->GetVectorValue(MovementWeaponSwayProgressTime) * (MovementSpeedInterp / MaxMoveSpeed) * 5.f * FMath::Max<float>(1.f - ADSMagnitude, 0.1f);
		OffsetLocation += SwayOffset * 0.7f;
		OffsetRotation += FRotator(SwayOffset.Z * 0.5f, SwayOffset.Y * 0.8f, SwayOffset.Y * 1.f);
	}
	
	OffsetTransform = Character->GetWeaponOffsetTransform() * FTransform(OffsetRotation, OffsetLocation, FVector(1.f));
	//UE_LOG(LogTemp, Warning, TEXT("OffsetTransform == %s"), *FTransform(OffsetRotation, OffsetLocation, FVector(1.f)).ToString());
}


void UWeaponSystemAnimInstance::CalculateMeshOffset(const float DeltaTime)
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

void UWeaponSystemAnimInstance::Init()
{
	Mesh = Character->GetMesh();
	CameraRelativeLocation = Character->Camera->GetRelativeLocation();

	Character->CurrentWeaponChangedDelegate.AddDynamic(this, &ThisClass::CurrentWeaponChanged);
	Character->LandedMultiDelegate.AddDynamic(this, &ThisClass::OnCharacterLanded);

	const ATrueFPSCharacterBase* DefObj = Character->GetClass()->GetDefaultObject<ATrueFPSCharacterBase>();
	CameraRelativeLocation = DefObj->Camera->GetComponentLocation() - DefObj->GetMesh()->GetSocketLocation(FName("head"));
}

void UWeaponSystemAnimInstance::CurrentWeaponChanged_Implementation(AWeapon* NewWeapon, AWeapon* OldWeapon)
{
	CurrentWeapon = NewWeapon;
	if(CurrentWeapon)
	{// Init current weapon vars
		bCurrentWeaponIsValid = true;
		AnimPose = CurrentWeapon->GetAnimProps().AnimPose;
		CurrentWeightScale = CurrentWeapon->GetAnimProps().WeightScale;
		CurrentWeaponCustomOffsetTransform = CurrentWeapon->GetAnimProps().CustomOffsetTransform;

		// Get the sight transform relative to right hand for control rig calculations
		const FTransform& DomHandTransform = Mesh->GetSocketTransform(FName("hand_r"));
		SightsRelativeTransform = CurrentWeapon->GetSightsWorldTransform().GetRelativeTransform(DomHandTransform);//CurrentWeapon->GetSightsWorldTransform().GetRelativeTransform(Mesh->GetSocketTransform(FName("hand_r")));
		OriginRelativeTransform = CurrentWeapon->GetOrientationWorldTransform(ADSMagnitude).GetRelativeTransform(DomHandTransform);
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

void UWeaponSystemAnimInstance::OnCharacterLanded(ATrueFPSCharacterBase* InCharacter, const FHitResult& Hit)
{// Net multicast jump delegate binding
	BP_OnCharacterLanded(InCharacter, Hit);
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




