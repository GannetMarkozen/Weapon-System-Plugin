// Copyright 2022, Gannet Markozen, All rights reserved


#include "WeaponSystem/Gamemode/WeaponSystemGameInstance.h"

#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "WeaponSystem/AttributeSystem/AttributesComponent.h"


void UWeaponSystemGameInstance::HandleGameNetControlMessage(UNetConnection* Connection, uint8 MessageByte, const FString& MessageStr)
{
	PRINT(TEXT("%s: Received message"), *FString(GetWorld()->GetNetMode() <= NM_ListenServer ? "SERVER" : "CLIENT"));
	if(MessageByte == NetMessage::Server_LocalPredictedEffect && HasAuthority())
	{
		//UPackageMap* Map = ->PackageMap.Get();
		FNetBitWriter Ar(nullptr, 10000);
		
		ThisClass* TempThis;
		UClass* TempEffect;
		AActor* TempInstigator;
		FPolyStructHandle Context;
		
		Ar << TempThis << TempEffect << TempInstigator;
		Ar.PackageMap = TempInstigator ? TempInstigator->GetNetConnection()->PackageMap.Get() : nullptr;
		bool Temp;
		Context.NetSerialize(Ar, Ar.PackageMap, Temp);
	}
}
