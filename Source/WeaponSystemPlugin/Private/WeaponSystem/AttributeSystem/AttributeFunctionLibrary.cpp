// Copyright 2022, Gannet Markozen, All rights reserved


#include "WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h"



UAttributesComponent* UAttributeUtils::GetAttributesComponent(UObject* Target)
{
	if(!Target) return nullptr;
	// If inherits IAttributesInterface
	if(Target->Implements<UAttributesInterface>())
	{
		return IAttributesInterface::Execute_GetAttributesComponent(Target);
	}
	// If is an actor and has Attributes Component
	if(const auto* Actor = Cast<AActor>(Target))
	{
		for(UActorComponent* Comp : Actor->GetComponents())
		{
			if(!Comp->IsA<UAttributesComponent>()) continue;
			return (UAttributesComponent*)Comp;
		}
	}
	// If is an actor component, get owner and check all other comps
	else if(const auto* TargetComp = Cast<UActorComponent>(Target))
	{
		for(UActorComponent* Comp : TargetComp->GetOwner()->GetComponents())
		{
			if(!Comp->IsA<UAttributesComponent>()) continue;
			return (UAttributesComponent*)Comp;
		}
	}
	return nullptr;
}

FAttributeHandle UAttributeUtils::GetAttributeHandle(UObject* Target, const FName& AttributeName)
{
	auto* AttrComp = GetAttributesComponent(Target);
	if(!AttrComp) return FAttributeHandle();
	return AttrComp->FindAttributeByName(AttributeName);
}















