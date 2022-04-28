// Copyright 2022, Gannet Markozen, All rights reserved


#include "WeaponSystem/AttributeSystem/AttributesComponent.h"

#include "Net/UnrealNetwork.h"
#include "WeaponSystem/ReplicatedObject.h"
#include "WeaponSystem/AttributeSystem/AttributeEffect.h"



UAttributesComponent::UAttributesComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
	SetIsReplicated(true);
}


void UAttributesComponent::BeginPlay()
{
	Super::BeginPlay();

	for(TFieldIterator<FStructProperty> Itr(GetClass()); Itr; ++Itr)
	{
		if(!Itr->Struct->IsChildOf(FAttribute::StaticStruct())) continue;
		FAttribute& Attr = *Itr->ContainerPtrToValuePtr<FAttribute>(this);
		Attr.Handle.Set(this, *Itr);
	}
}

void UAttributesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ThisClass, ActiveEffects, COND_OwnerOnly);
}

void UAttributesComponent::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);

	for(UAttributeEffectBase* Effect : ActiveEffects) if(Effect) Effect->CallPreReplication();
}

void UAttributesComponent::ApplyEffect(TSubclassOf<UAttributeEffectBase> Effect, const FPolyStructHandle& Context)
{
	
}















