// Copyright 2022, Gannet Markozen, All rights reserved


#include "WeaponSystem/AttributeSystem/Attribute.h"

#include "WeaponSystem/AttributeSystem/AttributesComponent.h"


bool FAttribute::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	if(Ar.IsSaving())
	{
		Ar << Value;
	}
	else if(Ar.IsLoading())
	{
		const float OldValue = Value;
		Ar << Value;
		
		if(Value != OldValue)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s: Value == %f. OldValue == %f"), *FString(GWorld && GWorld->GetNetMode() <= NM_ListenServer ? "SERVER" : "CLIENT"), Value, OldValue);
			//OnAttributeChanged.Broadcast(Value, OldValue, Owner);
			Broadcast(OldValue);
		}
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

