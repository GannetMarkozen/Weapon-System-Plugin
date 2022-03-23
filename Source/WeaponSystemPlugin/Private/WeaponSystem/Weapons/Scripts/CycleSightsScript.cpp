// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/Scripts/CycleSightsScript.h"

#include "Net/UnrealNetwork.h"
#include "WeaponSystem/Weapons/Attachments/SightsAttachment.h"

void UCycleSightsScriptBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, CurrentSights);
}

void UCycleSightsScriptBase::BeginPlay()
{
	Super::BeginPlay();

	if(!CycleCurve || !OwningWeapon) return;

	FOnTimelineFloatStatic TimelineFloat;
	TimelineFloat.BindUObject(this, &ThisClass::TimelineProgress);
	CycleTimeline.AddInterpFloat(CycleCurve, TimelineFloat);

	float MinTime, MaxTime;
	CycleCurve->GetTimeRange(MinTime, MaxTime);
	
	FOnTimelineEvent TimelineStart;
	TimelineStart.BindDynamic(this, &ThisClass::TimelineStart);
	CycleTimeline.AddEvent(MinTime, TimelineStart);

	FOnTimelineEvent TimelineEnd;
	TimelineEnd.BindDynamic(this, &ThisClass::TimelineEnd);
	CycleTimeline.AddEvent(MaxTime, TimelineEnd);

	CycleTimeline.SetPlayRate(PlayRate);
}


void UCycleSightsScriptBase::Tick(const float DeltaTime)
{
	CycleTimeline.TickTimeline(DeltaTime);
}

void UCycleSightsScriptBase::TimelineProgress_Implementation(const float Value)
{
	if(!IsValid(OwningWeapon)) return;
	FTransform BlendedTransform;
	BlendedTransform.Blend(OldRelativeTransform, TargetRelativeTransform, Value);
	OwningWeapon->SightsRelativeTransform = BlendedTransform;
}

void UCycleSightsScriptBase::CycleSights_Implementation()
{
	if(!HasAuthority())
	{
		Server_CycleSights();
		Server_CycleSights_Implementation();
	}
	else Server_CycleSights();
}

void UCycleSightsScriptBase::Server_CycleSights_Implementation()
{
	if(!IsValid(OwningWeapon)) return;
	
	TArray<ASightsAttachment*> AllSights;
	OwningWeapon->GetAttachments(AllSights);
	
	if(CurrentSights)
	{
		const int32 CurrentIndex = AllSights.Find(CurrentSights);
		CurrentSights = CurrentIndex != INDEX_NONE && AllSights.IsValidIndex(CurrentIndex + 1) ? AllSights[CurrentIndex + 1] : nullptr;
		OnRep_CurrentSights_Implementation();
	}
	else if(AllSights.IsValidIndex(0))
	{
		CurrentSights = AllSights[0];
		OnRep_CurrentSights_Implementation();
	}
}


void UCycleSightsScriptBase::OnRep_CurrentSights_Implementation()
{
	if(!IsValid(OwningWeapon)) return;

	OldRelativeTransform = OwningWeapon->SightsRelativeTransform;
	TargetRelativeTransform = CurrentSights ? CurrentSights->GetSightsWorldTransform().GetRelativeTransform(OwningWeapon->GetActorTransform()) : OwningWeapon->GetDefaultSightsRelativeTransform();
	CycleTimeline.PlayFromStart();
}
