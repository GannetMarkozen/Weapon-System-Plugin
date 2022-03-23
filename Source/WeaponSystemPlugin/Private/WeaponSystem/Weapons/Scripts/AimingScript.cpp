// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/Scripts/AimingScript.h"

void UAimingScript::BeginPlay()
{
	Super::BeginPlay();
	if(!AimingCurve) return;
	
	FOnTimelineFloatStatic Progress;
	Progress.BindUObject(this, &ThisClass::AimingTimelineProgress);

	FOnTimelineEvent Event;
	Event.BindDynamic(this, &ThisClass::AimingComplete);

	AimingTimeline.SetPlayRate(PlayRate);
	AimingTimeline.AddInterpFloat(AimingCurve, Progress);
	AimingTimeline.AddEvent(AimingTimeline.GetTimelineLength(), Event);
}


void UAimingScript::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);

	AimingTimeline.TickTimeline(DeltaTime);
}

void UAimingScript::AimingTimelineProgress(const float Value)
{
	GetOwningCharacter()->ADSValue = Value;
}

void UAimingScript::StartAiming()
{
	if(!CanAim()) return;
	if(!HasAuthority())
	{
		Multi_StartAiming_Implementation();
		Server_StartAiming();
	}
	else
	{
		Server_StartAiming_Implementation();
	}
}

void UAimingScript::StopAiming()
{
	if(!HasAuthority())
	{
		Multi_StopAiming_Implementation();
		Server_StopAiming();
	}
	else
	{
		Server_StopAiming_Implementation();
	}
}

void UAimingScript::Server_StartAiming_Implementation()
{
	if(!CanAim())
	{// If RPC'd aiming to server and fails server-side, reset aiming on client.
		if(!IsLocallyControlled())
			Client_StartAimingFailedPrediction();
		return;
	}
	
	Multi_StartAiming();
	Multi_StartAiming_Implementation();
}

void UAimingScript::Server_StopAiming_Implementation()
{
	Multi_StopAiming();
	Multi_StopAiming_Implementation();
}

void UAimingScript::Multi_StartAiming_Implementation()
{
	AimingTimeline.Play();
}

void UAimingScript::Multi_StopAiming_Implementation()
{
	AimingTimeline.Reverse();
}





