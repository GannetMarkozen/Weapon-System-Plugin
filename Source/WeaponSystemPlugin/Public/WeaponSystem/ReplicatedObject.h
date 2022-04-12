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

	virtual FORCEINLINE bool IsSupportedForNetworking() const override { return true; }
	
	// Replicate blueprint variables
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override
	{
		if(const UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(GetClass()))
			BPClass->GetLifetimeBlueprintReplicationList(OutLifetimeProps);
	}

	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
	{
		PRAGMA_DISABLE_DEPRECATION_WARNINGS
		if(const UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(GetClass()))
			BPClass->InstancePreReplication(this, ChangedPropertyTracker);
		PRAGMA_ENABLE_DEPRECATION_WARNINGS
	}

	FORCEINLINE void CallPreReplication() { UWeaponSystemFunctionLibrary::CallPreReplication(this); }
	
	template<typename T>
	static void CallPreReplicationList(const TArray<T*>& Scripts) { for(T* Script : Scripts) if(IsValid(Script)) CallPreReplication(Script); }
	
	virtual int32 GetFunctionCallspace(UFunction* Function, FFrame* Stack) override
	{
		check(GetOuter() != nullptr);
		return GetOuter()->GetFunctionCallspace(Function, Stack);
	}

	virtual bool CallRemoteFunction(UFunction* Function, void* Params, FOutParmRec* OutParams, FFrame* Stack) override
	{
		check(!HasAnyFlags(RF_ClassDefaultObject));
		AActor* Owner = GetOwner();
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
	virtual FORCEINLINE AActor* GetOwner() const
	{
		return GetTypedOuter<AActor>();
	}

	template<typename T>
	FORCEINLINE T* GetOwner() const
	{
		return Cast<T>(GetOwner());
	}

	// Calls GetOwningActor() to check actor's authority. If outer is not AActor
	// override GetOwningActor
	UFUNCTION(BlueprintPure)
	bool HasAuthority() const
	{
		AActor* Owner = GetOwner();
		return Owner ? Owner->HasAuthority() : false;
	}

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Destroy()
	{
#if ENGINE_MAJOR_VERSION < 5
		if(!IsPendingKill())
		{
			checkf(GetOwner()->HasAuthority(), TEXT("Object does not have authority to destroy itself!"));
			OnDestroyed();
			BP_OnDestroyed();
			MarkPendingKill();
		}
#else// ENGINE_MAJOR_VERSION < 5
		if(!IsValid(this))
		{
			checkf(GetOwner()->HasAuthority(), TEXT("Object does not have authority to destroy itself!"));
			OnDestroyed();
			BP_OnDestroyed();
			MarkAsGarbage();
		}
#endif// ENGINE_MAJOR_VERSION < 5
	}

protected:
	virtual FORCEINLINE void OnDestroyed() {}
	
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Destroyed"))
	void BP_OnDestroyed();
};
