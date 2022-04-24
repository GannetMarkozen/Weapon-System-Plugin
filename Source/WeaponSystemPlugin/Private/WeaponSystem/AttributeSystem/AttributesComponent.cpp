// Copyright 2022, Gannet Markozen, All rights reserved


#include "WeaponSystem/AttributeSystem/AttributesComponent.h"

#include "Net/UnrealNetwork.h"


UAttributesComponent::UAttributesComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
	SetIsReplicated(true);
}


void UAttributesComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UAttributesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, ActiveEffects);
}



