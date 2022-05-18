// Copyright 2022, Gannet Markozen, All rights reserved


#include "WeaponSystem/AttributeSystem/Attribute.h"

#include "Engine/ActorChannel.h"
#include "Net/UnrealNetwork.h"
#include "WeaponSystem/AttributeSystem/AttributesComponent.h"


bool FEffectModContext::HasData() const
{
	return EffectClass.Get() != nullptr && !Context.IsEmpty();
}


bool FAttributeHandle::operator==(const FAttribute& Attribute) const
{
	return *this == Attribute.GetHandle();
}

bool FAttributeHandle::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	FName PropName;
	if(Ar.IsSaving())
		PropName = GetFName();

	// Replicate the property via FName because replication
	// via ptr doesn't work for UProperties
	Ar << Owner << PropName;

	if(Ar.IsLoading())
	{
		if(PropName == NAME_None || !Owner.IsValid())
		{
			AttributeProp = nullptr;
		}
		else
		{
			AttributeProp = Owner->GetClass()->FindPropertyByName(PropName);
		}
	}
	
	return bOutSuccess = true;
}

/*
 *
 */


bool FAttribute::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	if(Ar.IsSaving())
	{
		Ar << Value;

		FEffectModContext* ModContext = GetOwner() ? GetOwner()->LatestAttributeModContext.Find(Handle) : nullptr;
		
		uint8 HasModContext = ModContext != nullptr;
		Ar << HasModContext;
		
		if(ModContext)
		{
			ModContext->NetSerialize(Ar, Map, bOutSuccess);

#if 1
			// @TODO doesn't cover every single case :/
			uint8 MaxReplications;
			const ELifetimeCondition RepCond = GetUProperty()->GetBlueprintReplicationCondition();
			if(RepCond == COND_None || RepCond == COND_InitialOnly)
			{
				MaxReplications = GetOwner()->GetWorld()->GetNetDriver()->ClientConnections.Num();
			}
			else if(RepCond == COND_AutonomousOnly || RepCond == COND_SkipOwner)
			{
				MaxReplications = GetOwner()->GetWorld()->GetNetDriver()->ClientConnections.Num() - 1;
			}
			else if(RepCond == COND_OwnerOnly)
			{
				MaxReplications = 1;
			}
			else
			{
				MaxReplications = GetOwner()->GetWorld()->GetNetDriver()->ClientConnections.Num();
			}

			if(++NumContextReplications >= MaxReplications)
			{
				GetOwner()->LatestAttributeModContext.Remove(Handle);
				NumContextReplications = 0;
			}
#endif
		}
	}
	else if(Ar.IsLoading())
	{
		float NewValue; uint8 HasModContext;
		Ar << NewValue << HasModContext;

		FEffectModContext ModContext;
		if(HasModContext)// Whether or not there is a valid mod context
			ModContext.NetSerialize(Ar, Map, bOutSuccess);

		SetValue(NewValue, ModContext);
	}
	
	return bOutSuccess = true;
}





void FAttributeHandle::Set(UAttributesComponent* AttributesComponent, FProperty* AttributeProperty)
{
	if(!AttributesComponent || !AttributeProperty || !AttributesComponent->GetClass()->HasProperty(AttributeProperty)) return;
	const auto* AttrStructProp = CastField<FStructProperty>(AttributeProperty);
	if(!AttrStructProp || !AttrStructProp->Struct->IsChildOf(FAttribute::StaticStruct())) return;
	AttributeProp = AttributeProperty;
	Owner = AttributesComponent;
}

void FAttributeHandle::Set(UAttributesComponent* AttributesComponent, const FName& AttributeName)
{
	if(!AttributesComponent) return;
	Set(AttributesComponent, AttributesComponent->GetClass()->FindPropertyByName(AttributeName));
}

