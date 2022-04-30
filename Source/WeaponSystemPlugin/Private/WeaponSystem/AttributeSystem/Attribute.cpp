// Copyright 2022, Gannet Markozen, All rights reserved


#include "WeaponSystem/AttributeSystem/Attribute.h"

#include "WeaponSystem/AttributeSystem/AttributesComponent.h"


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
	}
	else if(Ar.IsLoading())
	{
		float NewValue;
		Ar << NewValue;
		SetValue(NewValue);
	}

	bOutSuccess = true;
	return true;
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

