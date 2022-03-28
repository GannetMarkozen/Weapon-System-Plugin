// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponSystemFunctionLibrary.h"
#include "UObject/Object.h"
#include "ReplicatedObject.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class WEAPONSYSTEMPLUGIN_API UReplicatedObject : public UObject
{
	GENERATED_BODY()
public:
	UReplicatedObject(){}
	
	// Replicate blueprint variables
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override
	{
		if(const UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(GetClass()))
			BPClass->GetLifetimeBlueprintReplicationList(OutLifetimeProps);
	}

	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
	{
		if(const UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(GetClass()))
			BPClass->InstancePreReplication(this, ChangedPropertyTracker);
	}

	FORCEINLINE void CallPreReplication() { UWeaponSystemFunctionLibrary::CallPreReplication(this); }

	//TSharedPtr<class FMyRepChangedPropertyTracker> FindOrCreatePropertyTracker(class UNetDriver* NetDriver);
	//void InitChangedTracker(class UNetDriver* NetDriver, class FMyRepChangedPropertyTracker* ChangedTracker) const;

	//void CallPreReplication(class UNetDriver* NetDriver);

	virtual FORCEINLINE bool IsSupportedForNetworking() const override { return true; }
	
	virtual int32 GetFunctionCallspace(UFunction* Function, FFrame* Stack) override
	{
		check(GetOuter() != nullptr);
		return GetOuter()->GetFunctionCallspace(Function, Stack);
	}

	virtual bool CallRemoteFunction(UFunction* Function, void* Params, FOutParmRec* OutParams, FFrame* Stack) override
	{
		check(!HasAnyFlags(RF_ClassDefaultObject));
		AActor* Owner = GetOwningActor();
		if(UNetDriver* NetDriver = Owner->GetNetDriver())
		{
			NetDriver->ProcessRemoteFunction(Owner, Function, Params, OutParams, Stack, this);
			return true;
		}
		return false;
	}

	/*
	 *	HELPERS
	 */
	
	UFUNCTION(BlueprintPure)
	virtual FORCEINLINE UWorld* GetWorld() const override
	{
		if(const UObject* Outer = GetOuter())
			return Outer->GetWorld();
		return nullptr;
	}

	// Override if the outer of this object is not an AActor
	UFUNCTION(BlueprintPure)
	virtual FORCEINLINE AActor* GetOwningActor() const
	{
		return GetTypedOuter<AActor>();
	}

	// Calls GetOwningActor() to check actor's authority. If outer is not AActor
	// override GetOwningActor
	UFUNCTION(BlueprintPure)
	bool HasAuthority() const
	{
		AActor* Owner = GetOwningActor();
		return Owner ? Owner->HasAuthority() : false;
	}

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Destroy()
	{
		if(!IsPendingKill())
		{
			checkf(GetOwningActor()->HasAuthority(), TEXT("UReplicatedObject::Destroy Object does not have authority to destroy itself!"));
			OnDestroyed();
			BP_OnDestroyed();
			MarkPendingKill();
		}
	}

protected:
	virtual FORCEINLINE void OnDestroyed() {}
	
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Destroyed"))
	void BP_OnDestroyed();
};
