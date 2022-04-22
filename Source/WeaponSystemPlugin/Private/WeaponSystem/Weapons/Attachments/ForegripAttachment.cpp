// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/Attachments/ForegripAttachment.h"

#include "PoseableHandComponent.h"
#include "Animation/AnimInstanceProxy.h"
#include "WeaponSystem/Character/ShooterCharacterBase.h"
#include "WeaponSystem/Weapons/Weapon.h"
#include "WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h"


// Sets default values
AForegripAttachment::AForegripAttachment()
{
	PrimaryActorTick.bCanEverTick = false;

	Foregrip = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Foregrip"));
	Foregrip->SetCastShadow(false);
	Foregrip->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
	Foregrip->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	RootComponent = Foregrip;

	HandAttachPoint = CreateDefaultSubobject<UPoseableHandComponent>(TEXT("Off-Hand Attachment Point"));
	HandAttachPoint->SetupAttachment(Foregrip);
}

void AForegripAttachment::SetHandPlacement() const
{
	// Set weapon off-hand offset transform to the hand attachment point transform
	// relative to the weapon's reference animation's off-hand world-transform
	// (not just the off-hand world-transform because it could already be offset when
	// calculating an offset and thus be incorrect. This operates under the assumption that
	// the dominant-hand to weapon transform remains constant).
	
	AWeapon* Weapon = Cast<AWeapon>(OwningWeapon);
	if(!Weapon) return;
	
	const ACharacter* Character = Weapon->GetOwningCharacter();
	if(!Character || !Character->GetMesh()->GetAnimInstance() || !Weapon->GetAnimProps().AnimPose) return;
	
	FCompactPose OutPose;
	FBlendedCurve OutCurve;
#if ENGINE_MAJOR_VERSION < 5
	FStackCustomAttributes OutAttr;
#else//ENGINE_MAJOR_VERSION
	UE::Anim::FStackAttributeContainer OutAttr;
#endif//ENGINE_MAJOR_VERSION
	OutPose.SetBoneContainer(&Character->GetMesh()->GetAnimInstance()->GetRequiredBones());
	FAnimationPoseData OutData(OutPose, OutCurve, OutAttr);

	if(Weapon->GetAnimProps().AnimPose)
	{
		Weapon->GetAnimProps().AnimPose->GetAnimationPose(OutData, FAnimExtractContext(0.f, false));
	}
	else
	{
		OutData.GetPose().ResetToRefPose();
	}

	const FReferenceSkeleton& RefSkel = Weapon->GetAnimProps().AnimPose->GetSkeleton()->GetReferenceSkeleton();
	const TArray<FTransform>& BSBoneTransforms = *reinterpret_cast<const TArray<FTransform>*>(&OutPose.GetBones());
		
	const int32 OffHandIndex = RefSkel.FindBoneIndex(OffHandName);
	const int32 DomHandIndex = RefSkel.FindBoneIndex(DomHandName);
	if(OffHandIndex == INDEX_NONE || DomHandIndex == INDEX_NONE) return;

	const FTransform& OffHandWorldTransform = FAnimationRuntime::GetComponentSpaceTransform(RefSkel, BSBoneTransforms, OffHandIndex);
	const FTransform& DomHandWorldTransform = FAnimationRuntime::GetComponentSpaceTransform(RefSkel, BSBoneTransforms, DomHandIndex);

	const FTransform& DomHandToOffHandTransform = OffHandWorldTransform.GetRelativeTransform(DomHandWorldTransform);
	const FTransform& OffHandRefWorldTransform = DomHandToOffHandTransform * Weapon->GetOwningCharacter()->GetMesh()->GetSocketTransform(DomHandName);
		
	//const FTransform& ForegripOffset = HandAttachPoint->GetComponentTransform().GetRelativeTransform(OffHandRefWorldTransform);
	//const FTransform& ForegripOffset = HandAttachPoint->GetComponentTransform().GetRelativeTransform(OffHandWorldTransform * Character->GetMesh()->GetComponentTransform());

	const FTransform& WeaponSocketParentOffsetTransform = WeaponSocketName.IsValid() ? Character->GetMesh()->GetSocketTransform(WeaponSocketName, RTS_ParentBoneSpace) : FTransform::Identity;
	const FTransform& RefWeaponTransform = FTransform(Weapon->GetRelativeRotationPlacement(), Weapon->GetRelativeLocationPlacement()) * WeaponSocketParentOffsetTransform * DomHandWorldTransform;
	const FTransform& ForegripOffset = (HandAttachPoint->GetComponentTransform().GetRelativeTransform(Weapon->GetActorTransform()) * RefWeaponTransform).GetRelativeTransform(OffHandWorldTransform);
		
	Weapon->OffHandAdditiveTransform = FTransform(ForegripOffset.GetRotation() * RotOffset.Quaternion(), ForegripOffset.GetLocation(), ForegripOffset.GetScale3D());
	
	if(bCachePose)
	{// Cache hand attachment pose for use in animation
		const FPoseSnapshot& CachedPoseSnapshot = HandAttachPoint->GetCachedPoseSnapshot();
		UWeaponSystemFunctionLibrary::CachePoseSnapshot(CachedPoseSnapshot, Character->GetMesh()->GetAnimInstance(), CachedPoseName);
	}
}


void AForegripAttachment::OnRemoved()
{
	AWeapon* Weapon = Cast<AWeapon>(OwningWeapon);
	if(!Weapon) return;

	// Remove hand offset transform and remove hand cached pose
	Weapon->OffHandAdditiveTransform = FTransform::Identity;
	if(bCachePose && bRemoveCache)
		if(const ACharacter* Character = Weapon->GetOwningCharacter())
			UWeaponSystemFunctionLibrary::RemoveCachedPoseSnapshot(Character->GetMesh()->GetAnimInstance(), CachedPoseName);
}


