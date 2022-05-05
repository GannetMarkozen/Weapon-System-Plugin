// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/WeaponSystemFunctionLibrary.h"


const FPoseSnapshot UWeaponSystemFunctionLibrary::EmptyPose;

/*
void UWeaponSystemFunctionLibrary::ProcessRemoteFunctionForChannel(AActor* NetOwner, UObject* TargetObj, UFunction* Function, const bool bIsServer, void* Params, FOutParmRec* OutParams)
{
	if(!NetOwner || !TargetObj || !Function)
	{
		UE_LOG(LogTemp, Error, TEXT("%s: Invalid params"), *FString(__FUNCTION__));
		return;
	}
	
	UNetDriver* NetDriver = NetOwner->GetWorld()->GetNetDriver();
	checkf(NetDriver, TEXT("Net Driver is invalid"));
	
	UNetConnection* NetConnection = NetOwner->GetNetConnection();
	checkf(NetConnection, TEXT("Net Connection is invalid"));

	UActorChannel** ChannelPtr = NetConnection->FindActorChannel(NetOwner);
	checkf(ChannelPtr && *ChannelPtr, TEXT("Actor Channel is invalid"));

	const FClassNetCache* ClassCache = NetDriver->NetCache->GetClassNetCache(TargetObj->GetClass());
	const FFieldNetCache* FieldCache = ClassCache->GetFromField(Function);
	checkf(ClassCache, TEXT("Class Cache is invalid"));
	checkf(FieldCache, TEXT("Field Cache is invalid"));

	FFrame Stack(TargetObj, Function, Params);

	NetDriver->ProcessRemoteFunctionForChannel(*ChannelPtr, ClassCache, FieldCache, TargetObj, NetConnection, Function, Params, OutParams, &Stack, bIsServer);
}
*/

















