// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "AggregateTagContainer.h"
#include "Attribute.h"
#include "Components/ActorComponent.h"
#include "Polymorphic/PolymorphicStruct.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "AttributeEffectParams.h"
#include "GameplayTagAssetInterface.h"
#include "WeaponSystem/AttributeSystem/AttributeEffect.h"
#include "AttributesComponent.generated.h"


class UAttributeEffect;
class UAttributeEffectCalculation;

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
	FORCEINLINE operator uint32&() { return Key; }
	FORCEINLINE operator const uint32&() const { return Key; }

	friend FORCEINLINE uint32 GetTypeHash(const FEffectNetPredKey& Other) { return Other.Key; }

	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
	{
		Ar.SerializeBits(&Key, sizeof uint32);
		return bOutSuccess = true;
	}
	
	uint32 Key = 0;
};

template<>
struct TStructOpsTypeTraits<FEffectNetPredKey> : TStructOpsTypeTraitsBase2<FEffectNetPredKey>
{
	enum
	{
		WithNetSerializer = true,
	};
};

USTRUCT()
struct WEAPONSYSTEMPLUGIN_API FActiveEffect
{
	GENERATED_BODY()
	friend class UAttributesComponent;
	
	FActiveEffect() = default;
	FActiveEffect(const FActiveEffect& Other)
		: Magnitude(Other.Magnitude), ModContext(Other.ModContext) { checkf(ModContext.EffectClass.Get() != nullptr, TEXT("Effect is invalid")); }
	//FActiveEffect(const TSubclassOf<UAttributeEffect> Effect, const float Magnitude, const FPolyStructHandle& Context)
	//	: Effect(Effect), Magnitude(Magnitude), Context(Context) { checkf(Effect, TEXT("Effect is invalid")); }
	FActiveEffect(const float Magnitude, const FEffectModContext& ModContext)
		: Magnitude(Magnitude), ModContext(ModContext) {}

	FORCEINLINE TSubclassOf<UAttributeEffect> GetEffect() const { return ModContext.EffectClass; }
	FORCEINLINE const FEffectModContext& GetContext() const { return ModContext; }

protected:
	float Magnitude;
	FEffectModContext ModContext;

	
public:
	FTimerHandle IntervalTimerHandle;
	FTimerHandle LifespanTimerHandle;
};


USTRUCT()
struct WEAPONSYSTEMPLUGIN_API FAttributeValuePairs
{
	GENERATED_BODY()

	TArray<TPair<FAttributeHandle, float>> AttributeValues;
	FORCEINLINE FAttributeValuePairs& operator=(const FAttributeValuePairs& Other) { AttributeValues = Other.AttributeValues; return *this; }
	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
	{
		uint8 Num;
		if(Ar.IsSaving()) Num = AttributeValues.Num();
		Ar << Num;
		if(Ar.IsLoading()) AttributeValues.SetNum(Num);
		for(auto& AttributeValue : AttributeValues)
		{
			AttributeValue.Get<0>().NetSerialize(Ar, Map, bOutSuccess);
			Ar << AttributeValue.Get<1>();
		}
		return true;
	}
};

template<>
struct TStructOpsTypeTraits<FAttributeValuePairs> : TStructOpsTypeTraitsBase2<FAttributeValuePairs>
{
	enum
	{
		WithCopy = true,
		WithNetSerializer = true,
	};
};

USTRUCT()
struct WEAPONSYSTEMPLUGIN_API FServerLocalPredictedNetParams
{
	GENERATED_BODY()

	FServerLocalPredictedNetParams() = default;
	FServerLocalPredictedNetParams(const TSubclassOf<UAttributeEffect> Effect, const float Magnitude, AActor* Instigator, const FPolyStructHandle& Context, const FEffectNetPredKey PredictionKey)
		: Effect(Effect), Magnitude(Magnitude), Instigator(Instigator), Context(Context), PredictionKey(PredictionKey) {}
	
	UPROPERTY() TSubclassOf<UAttributeEffect> Effect;
	UPROPERTY() float Magnitude;
	UPROPERTY() AActor* Instigator;
	UPROPERTY() FPolyStructHandle Context;
	UPROPERTY() FEffectNetPredKey PredictionKey;
};

USTRUCT()
struct WEAPONSYSTEMPLUGIN_API FLocalPredictionResultNetParams
{
	GENERATED_BODY()

	FLocalPredictionResultNetParams() = default;
	FLocalPredictionResultNetParams(const TSubclassOf<UAttributeEffect> Effect, AActor* Instigator, const FEffectNetPredKey PredictionKey)
		: Effect(Effect), Instigator(Instigator), PredictionKey(PredictionKey) {}

	UPROPERTY() TSubclassOf<UAttributeEffect> Effect;
	UPROPERTY() AActor* Instigator;
	UPROPERTY() FEffectNetPredKey PredictionKey;
};

USTRUCT()
struct WEAPONSYSTEMPLUGIN_API FServerApplyEffectNetParams
{
	GENERATED_BODY()

	FServerApplyEffectNetParams() = default;
	FServerApplyEffectNetParams(const TSubclassOf<UAttributeEffect> Effect, const float Magnitude, AActor* Instigator, const FPolyStructHandle& Context)
		: Effect(Effect), Magnitude(Magnitude), Instigator(Instigator), Context(Context) {}

	UPROPERTY() TSubclassOf<UAttributeEffect> Effect;
	UPROPERTY() float Magnitude;
	UPROPERTY() AActor* Instigator;
	UPROPERTY() FPolyStructHandle Context;
};

USTRUCT()
struct WEAPONSYSTEMPLUGIN_API FInstantNumericEffectNetValue
{
	GENERATED_BODY()

	FInstantNumericEffectNetValue() = default;
	FInstantNumericEffectNetValue(const FAttributeHandle& Attribute, const float Value, const EEffectModType ModType, const AActor* Instigator, const FPolyStructHandle& Context)
		: Attribute(Attribute), Value(Value), ModType(ModType), Instigator((AActor*)Instigator), Context(Context) {}
	
	UPROPERTY() FAttributeHandle Attribute;
	UPROPERTY() float Value = 0.f;
	UPROPERTY() EEffectModType ModType;
	UPROPERTY() AActor* Instigator;
	UPROPERTY() FPolyStructHandle Context;
};


/*
 *
 */
UCLASS(BlueprintType, Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WEAPONSYSTEMPLUGIN_API UAttributesComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UAttributesComponent();
	friend class UAttributeEffect;
	friend struct FAttribute;
	
protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	mutable FEffectNetPredKey CurrentKey = 0;
	FORCEINLINE FEffectNetPredKey MakePredictionKey() const { return CurrentKey++; }
	FORCEINLINE void ClearCurrentPredictionKey() const { CurrentKey = 0; }

	TArray<TSharedPtr<FActiveEffect>> ActiveEffects;
	TMap<FEffectNetPredKey, TWeakPtr<FActiveEffect>> LocalPredictedEffects;
	TMap<FAttributeHandle, FEffectModContext> LatestAttributeModContext;// @TODO Element removal method in FAttribute doesn't cover every case :/

public:
	// Gameplay Tag Container used for state calculations. Attribute Effects can modify these tags.
	// Bind delegate to listen for specific tag count changes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Configurations")
	FAggregateGameplayTagContainer OwnedTags;
	
	UFUNCTION(BlueprintPure)
	FORCEINLINE bool HasAuthority() const { return GetOwner() && GetOwner()->HasAuthority(); }

	UFUNCTION(BlueprintPure, Category = "Effect")
	void GetAllActiveEffects(TArray<TSubclassOf<UAttributeEffect>>& OutEffects) const
	{
		for(const TSharedPtr<FActiveEffect>& ActiveEffectPtr : ActiveEffects)
			if(ActiveEffectPtr.IsValid() && ActiveEffectPtr->GetEffect().Get())
				OutEffects.Add(ActiveEffectPtr->GetEffect());
	}

	// Finds the attribute by name. If none exists this will return an invalid handle
	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Name"), Category = "Attributes")
	UPARAM(ref) FAttributeHandle FindAttributeByName(const FName& Name) { return FAttributeHandle(this, Name); }

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void BindAllAttributesChanged(const FAttributeValueChangedUniDelegate& Delegate);

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Tags")
	FORCEINLINE void BindTagCountChanged(const FGameplayTag& Tag, const FAggregateDynamicDelegate& Delegate) const { UAggregateGameplayTagContainerUtils::BindTagCountChanged(OwnedTags, Tag, Delegate); }

	UFUNCTION(BlueprintCallable, Meta = (DefaultToSelf = "Target"), Category = "Tags")
	FORCEINLINE void UnbindAllTagCountChanged(UObject* Target) const { UAggregateGameplayTagContainerUtils::UnbindAll(OwnedTags, Target); }

	UFUNCTION(BlueprintCallable, Meta = (DefaultToSelf = "Target", AutoCreateRefTerm = "Tag"), Category = "Tags")
	FORCEINLINE void UnbindTagCountChanged(UObject* Target, const FGameplayTag& Tag) const { UAggregateGameplayTagContainerUtils::Unbind(OwnedTags, Tag, Target); }
	
	
	// Attempts to apply the effect with optional context for custom calculations
	UFUNCTION(BlueprintCallable, Meta = (DefaultToSelf = "Instigator", AutoCreateRefTerm = "Context"), Category = "Effect")
	bool TryApplyEffect(const TSubclassOf<UAttributeEffect> Effect, const float Magnitude, const AActor* Instigator, UPARAM(ref) FPolyStructHandle& Context);

	// Apply a basic numeric value effect. Less flexibility but more convenient for simple non-latent Attribute modifications. Local-Prediction simply
	// applies the effect locally and server-side. Local-Predicted effect requires an Instigator. No checking so not recommended.
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "AttributeName,Context", DefaultToSelf = "Instigator"), Category = "Effect")
	void ApplyInstantNumericEffect(const FName& AttributeName, const float Magnitude, const EEffectModType ModificationType, const EEffectRepCond ReplicationCondition,
		UPARAM(meta=(DisplayName="Optional Instigator")) const AActor* Instigator, UPARAM(ref,meta=(DisplayName="Optional Context")) FPolyStructHandle& Context);

	// Remove all active effects from Class. Should take the Effect's Replication Condition into account when calling this
	UFUNCTION(BlueprintCallable, Category = "Effect")
	int32 RemoveActiveEffectsByClass(const TSubclassOf<UAttributeEffect> Class, const bool bIncludeChildren = true);

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Effect")
	int32 RemoveActiveEffectsByTag(const FGameplayTag& Tag, const bool bExact = false);

	UFUNCTION(BlueprintPure, Category = "Effect")
	int32 GetActiveEffectCountByClass(const TSubclassOf<UAttributeEffect> Class, const bool bIncludeChildren = true) const;

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tag"), Category = "Effect")
	int32 GetActiveEffectCountByTag(const FGameplayTag& Tag, const bool bExact = false) const;

protected:
	virtual void Internal_ApplyEffect(const TSubclassOf<UAttributeEffect> Effect, const float Magnitude, const AActor* Instigator, FPolyStructHandle& Context);
	virtual void Internal_RemoveActiveEffect(const int32 Index, const EEffectRemovalReason Reason = EEffectRemovalReason::LifespanEnd);

	UFUNCTION()
	virtual void Internal_ApplyInstantNumericEffect(const FAttributeHandle& Attribute, const float Magnitude, const EEffectModType ModType, const AActor* Instigator, FPolyStructHandle& Context);
	
	UFUNCTION(Server, Reliable)
	void Server_ApplyEffect(UClass* Effect, const float Magnitude, const AActor* Instigator, const FPolyStructHandle& Context);
	virtual void Server_ApplyEffect_Implementation(UClass* Effect, const float Magnitude, const AActor* Instigator, const FPolyStructHandle& Context) { Internal_ApplyEffect(Effect, Magnitude, Instigator, (FPolyStructHandle&)Context); }

	virtual void LocalPredicted_ApplyEffect(const TSubclassOf<UAttributeEffect> Effect, const float Magnitude, const AActor* Instigator, FPolyStructHandle& Context);
	
	UFUNCTION()
	void Server_ApplyEffect_LocalPredicted(UClass* Effect, const float Magnitude, const AActor* Instigator, const FPolyStructHandle& Context, const FEffectNetPredKey PredictionKey);

	UFUNCTION(Client, Reliable)
	void Client_ApplyEffect_LocalPredicted_Success(UClass* Effect, const AActor* Instigator, const FEffectNetPredKey PredictionKey);
	virtual void Client_ApplyEffect_LocalPredicted_Success_Implementation(UClass* Effect, const AActor* Instigator, const FEffectNetPredKey PredictionKey);

	UFUNCTION(Client, Reliable)
	void Client_ApplyEffect_LocalPredicted_Fail(UClass* Effect, const AActor* Instigator, const FEffectNetPredKey PredictionKey);
	virtual void Client_ApplyEffect_LocalPredicted_Fail_Implementation(UClass* Effect, const AActor* Instigator, const FEffectNetPredKey PredictionKey);

public:
	// Will update the client's value for the specified Attribute
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	FORCEINLINE void SyncAttribute(const FAttributeHandle& Attribute) { SyncAttributes({Attribute}); }

	// Will update the client's values for the specified Attributes
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	FORCEINLINE void SyncAttributes(const TArray<FAttributeHandle>& Attributes) { Server_SyncAttributes(Attributes); }

protected:
	UFUNCTION(Server, Reliable)
	void Server_SyncAttributes(const TArray<FAttributeHandle>& Attributes);

	UFUNCTION(Client, Reliable)
	void Client_SyncAttributes(const FAttributeValuePairs& AttributeValues);

	// Called before modifying an attribute with the given OutValue. This is where clamping should occur.
	// Effect may be invalid if called from Apply Instant Numeric Effect
	virtual void PreModifyAttribute(const FAttributeHandle& Attribute, const FEffectModContext& ModContext, float& InOutValue) const {}

	// Called before modifying an attribute with the given OutValue. This is where clamping should occur
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Pre Modify Attribute"), Category = "Attributes")
	void BP_PreModifyAttribute(const FAttributeHandle& Attribute, const FEffectModContext& ModContext, const float InValue, float& OutValue) const;

	// Calls both BP and C++ implementations of PreModifyAttribute
	FORCEINLINE void CallPreModifyAttribute(const FAttributeHandle& Attribute, const FEffectModContext& ModContext, float& InOutValue) const
	{
		PreModifyAttribute(Attribute, ModContext, InOutValue);
		BP_PreModifyAttribute(Attribute, ModContext, InOutValue, InOutValue);
	}

	void SetAttributeValue(FAttributeHandle& Attribute, const float NewValue, const FEffectModContext& ModContext);
public:
	// ActiveEffect, Index
	void ForEachActiveEffect(const TFunction<void(FActiveEffect&,int32)>& Functor) const;
};















