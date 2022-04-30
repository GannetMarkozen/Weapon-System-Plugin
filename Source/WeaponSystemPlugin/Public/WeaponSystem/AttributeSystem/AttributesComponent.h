// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Attribute.h"
#include "Components/ActorComponent.h"
#include "Polymorphic/PolymorphicStruct.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "AttributeEffectParams.h"
#include "AttributesComponent.generated.h"


UINTERFACE(MinimalAPI)
class UAttributesInterface : public UInterface
{
	GENERATED_BODY()
};

class WEAPONSYSTEMPLUGIN_API IAttributesInterface
{
	GENERATED_BODY()
protected:
	// Specify what Attributes Component to return
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Meta = (AllowPrivateAccess = "true"), Category = "Attributes Interface")
	class UAttributesComponent* GetAttributesComponent() const;
	virtual class UAttributesComponent* GetAttributesComponent_Implementation() const { return nullptr; }
};


USTRUCT()
struct WEAPONSYSTEMPLUGIN_API FEffectNetPredKey
{
	GENERATED_BODY()

	FEffectNetPredKey() = default;
	FEffectNetPredKey(uint32 Key) : Key(Key) {}
	FEffectNetPredKey(const FEffectNetPredKey& Other) : Key(Other.Key) {}

	FORCEINLINE FEffectNetPredKey& operator=(const FEffectNetPredKey& Other) { Key = Other.Key; return *this; }
	FORCEINLINE FEffectNetPredKey& operator=(const uint32 OtherKey) { Key = OtherKey; return *this; }
	FORCEINLINE FEffectNetPredKey operator++(int) { const FEffectNetPredKey OldKey = Key; Key++; return OldKey; }
	FORCEINLINE bool operator==(const FEffectNetPredKey& Other) const { return Key == Other.Key; }

	friend FORCEINLINE uint32 GetTypeHash(const FEffectNetPredKey& Other) { return Other.Key; }

	UPROPERTY()
	uint32 Key = 0;
};


UCLASS(BlueprintType, Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WEAPONSYSTEMPLUGIN_API UAttributesComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UAttributesComponent();

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) override;

	// All active latent-effects. Only has any on the server or on the client for Local-Only / Local-Predicted effects
	UPROPERTY(BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Attributes")
	TArray<class UAttributeEffect*> ActiveEffects;

	// Effects being locally predicted. Mapped to a net prediction ID
	TMap<FEffectNetPredKey, TWeakObjectPtr<class UAttributeEffect>> LocalPredictedEffects;

	mutable FEffectNetPredKey CurrentKey = 0;
	FORCEINLINE FEffectNetPredKey MakePredictionKey() const { return CurrentKey++; }
	FORCEINLINE void ClearCurrentPredictionKey() const { CurrentKey = 0; }

public:
	FORCEINLINE const TArray<class UAttributeEffect*>& GetActiveEffects() const { return ActiveEffects; }

	// The context may be altered so it's being passed by reference
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Context"), Category = "Effect")
	virtual bool ApplyEffect(const TSubclassOf<class UAttributeEffect> Effect, UPARAM(ref) FPolyStructHandle& Context);

	// Returns number of effects removed
	UFUNCTION(BlueprintCallable, Category = "Effect")
	virtual int32 RemoveEffectsByClass(const TSubclassOf<class UAttributeEffect> EffectClass);

	// Finds the attribute with this name. Returns an empty handle if invalid
	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Name"), Category = "Attributes")
	UPARAM(ref) FAttributeHandle FindAttributeByName(const FName& Name) { return FAttributeHandle(this, Name); }

protected:
	// Attempts to call Internal_ApplyEffect for the server / client / local predicted
	virtual void CallApplyEffect(const TSubclassOf<class UAttributeEffect> EffectClass, const class UAttributeEffect* EffectDefObj, const FAttributeHandle& ModAttribute, FPolyStructHandle& Context);

	// Handles the actual application of the effect. Calls the default object's implementations for Instant effects and instances the object for non-instant effects
	virtual class UAttributeEffect* Internal_ApplyEffect(const TSubclassOf<class UAttributeEffect> EffectClass, const class UAttributeEffect* EffectDefObj, const FAttributeHandle& ModAttribute, FPolyStructHandle& Context);

	// Fills params for ModifyAttribute
	void CallModifyAttribute(const class UAttributeEffect* Effect, FPolyStructHandle& Context);

	// Calls the passed-in effect's Modify Attribute implementation
	virtual void ModifyAttribute(const TSubclassOf<class UAttributeEffect> EffectClass, const class UAttributeEffect* Effect, const FAttributeHandle& ModAttribute, FPolyStructHandle& Context);

	// Called right before modifying an attribute. Override to clamp or apply resistances, etc.
	// NOTE: the out value is the pending new value for the attribute
	virtual void PreModifyAttribute(const FAttributeHandle& Attribute, const class UAttributeEffect* Effect, const FPolyStructHandle& Context, float& Value) const {}

	// Called right before modifying an attribute. Override to clamp or apply resistances, etc.
	// NOTE: the out value is the pending new value for the attribute
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Pre-Modify Attribute"), Category = "Effect")
	void BP_PreModifyAttribute(const FAttributeHandle& Attribute, const class UAttributeEffect* Effect, const FPolyStructHandle& Context, const float InValue, float& OutValue);

	// Calls the C++ and BP implementation of PreModifyAttribute
	FORCEINLINE void CallPreModifyAttribute(const FAttributeHandle& Attribute, const class UAttributeEffect* Effect, const FPolyStructHandle& Context, float& Value)
	{
		PreModifyAttribute(Attribute, Effect, Context, Value);
		BP_PreModifyAttribute(Attribute, Effect, Context, Value, Value);
	}
	
	/*UFUNCTION(BlueprintNativeEvent, Category = "Effect")
	void OnEffectApplied(const class UAttributeEffect* Effect, const FPolyStructHandle& Context) const;
	virtual void OnEffectApplied_Implementation(const class UAttributeEffect* Effect, const FPolyStructHandle& Context) const {}*/

	void CallOnEffectApplied(const class UAttributeEffect* Effect, const FAttributeHandle& Attribute, FPolyStructHandle& Context) const;
	virtual void OnEffectApplied(const class UAttributeEffect* Effect, FPolyStructHandle& Context) const {}

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Effect Applied"), Category = "Effect")
	void BP_OnEffectApplied(const class UAttributeEffect* Effect, UPARAM(ref) FPolyStructHandle& Context) const;

	
	virtual void OnActiveEffectInterval(const class UAttributeEffect* ActiveEffect, const FAttributeHandle& Attribute, FPolyStructHandle& Context);
	virtual void OnActiveEffectRemoved(class UAttributeEffect* ActiveEffect, const FAttributeHandle& Attribute, const FPolyStructHandle& Context, const EEffectRemovalReason Reason);

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "On Active Effect Removed"), Category = "Effect")
	void BP_OnActiveEffectRemoved(class UAttributeEffect* ActiveEffect, const FAttributeHandle& Attribute, const FPolyStructHandle& Context, const EEffectRemovalReason Reason);

	
	FORCEINLINE void CallOnActiveEffectInterval(const class UAttributeEffect* ActiveEffect, const FAttributeHandle& Attribute, const FPolyStructHandle& Context)
	{
		OnActiveEffectInterval(ActiveEffect, Attribute, (FPolyStructHandle&)Context);
	}

	FORCEINLINE void CallOnActiveEffectRemoved(class UAttributeEffect* ActiveEffect, const FAttributeHandle& Attribute, const FPolyStructHandle& Context, const EEffectRemovalReason Reason)
	{
		OnActiveEffectRemoved(ActiveEffect, Attribute, Context, Reason);
		BP_OnActiveEffectRemoved(ActiveEffect, Attribute, Context, Reason);
	}



	// Applies effect server-side
	UFUNCTION(Server, Reliable)
	void Server_Internal_ApplyEffect(UClass* EffectClass, const FAttributeHandle& ModAttribute, const FPolyStructHandle& Context);
	FORCEINLINE void Server_Internal_ApplyEffect_Implementation(UClass* EffectClass, const FAttributeHandle& ModAttribute, const FPolyStructHandle& Context)
	{
		Internal_ApplyEffect(EffectClass, EffectClass->GetDefaultObject<UAttributeEffect>(), ModAttribute, (FPolyStructHandle&)Context);
	}
	
	// Applies effect client side and then server-side and waits for a net prediction response from the server
	virtual void Internal_ApplyEffect_NetPrediction(const TSubclassOf<class UAttributeEffect> EffectClass, const FAttributeHandle& ModAttribute, FPolyStructHandle& Context);

	UFUNCTION(Server, Reliable)
	void Server_Internal_ApplyEffect_NetPrediction(UClass* EffectClass, const FAttributeHandle& ModAttribute, const FPolyStructHandle& Context, const FEffectNetPredKey Key);
	virtual void Server_Internal_ApplyEffect_NetPrediction_Implementation(UClass* EffectClass, const FAttributeHandle& ModAttribute, const FPolyStructHandle& Context, const FEffectNetPredKey Key);

	UFUNCTION(Client, Reliable)
	void Client_Internal_ApplyEffect_Success(const FEffectNetPredKey Key);
	virtual void Client_Internal_ApplyEffect_Success_Implementation(const FEffectNetPredKey Key);

	UFUNCTION(Client, Reliable)
	void Client_Internal_ApplyEffect_Fail(const FAttributeHandle& Attribute, const float CorrectValue, const FEffectNetPredKey Key);
	virtual void Client_Internal_ApplyEffect_Fail_Implementation(const FAttributeHandle& Attribute, const float CorrectValue, const FEffectNetPredKey);
	
public:
	UFUNCTION(BlueprintPure)
	FORCEINLINE bool HasAuthority() const { return GetOwner() && GetOwner()->HasAuthority(); }
};





















