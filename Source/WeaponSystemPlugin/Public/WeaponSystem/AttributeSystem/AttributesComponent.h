// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Attribute.h"
#include "Components/ActorComponent.h"
#include "Polymorphic/PolymorphicStruct.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "AttributeEffectParams.h"
#include "WeaponSystem/AttributeSystem/AttributeEffect.h"
#include "AttributesComponent.generated.h"


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
		: Effect(Other.Effect), Context(Other.Context) { checkf(Effect, TEXT("Effect is invalid")); }
	FActiveEffect(const TSubclassOf<class UAttributeEffect> Effect, const FPolyStructHandle& Context)
		: Effect(Effect), Context(Context) { checkf(Effect, TEXT("Effect is invalid")); }

	FORCEINLINE TSubclassOf<class UAttributeEffect> GetEffect() const { return Effect; }
	FORCEINLINE const FPolyStructHandle& GetContext() const { return Context; }

	
protected:
	TSubclassOf<class UAttributeEffect> Effect;
	FPolyStructHandle Context;
	
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
		for(TPair<FAttributeHandle, float>& AttributeValue : AttributeValues)
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


/*
 *
 */
UCLASS(BlueprintType, Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WEAPONSYSTEMPLUGIN_API UAttributesComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UAttributesComponent();
	
protected:
	virtual void BeginPlay() override;
	
	mutable FEffectNetPredKey CurrentKey = 0;
	FORCEINLINE FEffectNetPredKey MakePredictionKey() const { return CurrentKey++; }
	FORCEINLINE void ClearCurrentPredictionKey() const { CurrentKey = 0; }

	TArray<TSharedPtr<FActiveEffect>> ActiveEffects;
	TMap<FEffectNetPredKey, TWeakPtr<FActiveEffect>> LocalPredictedEffects;

public:
	UFUNCTION(BlueprintPure)
	FORCEINLINE bool HasAuthority() const { return GetOwner() && GetOwner()->HasAuthority(); }

	// Finds the attribute by name. If none exists this will return an invalid handle
	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Name"), Category = "Attributes")
	UPARAM(ref) FAttributeHandle FindAttributeByName(const FName& Name) { return FAttributeHandle(this, Name); }

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void BindAllAttributesChanged(const FAttributeValueChangedUniDelegate& Delegate);


	
	
	// Attempts to apply the effect with optional context for custom calculations
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Context"), Category = "Effect")
	bool ApplyEffect(const TSubclassOf<class UAttributeEffect> Effect, const class AActor* Instigator, UPARAM(ref) FPolyStructHandle& Context);

protected:
	virtual void Internal_ApplyEffect(const TSubclassOf<class UAttributeEffect> Effect, const class AActor* Instigator, FPolyStructHandle& Context);
	virtual void Internal_RemoveActiveEffect(const int32 Index, const EEffectRemovalReason Reason = EEffectRemovalReason::LifespanEnd);

	UFUNCTION(Server, Reliable)
	void Server_ApplyEffect(UClass* Effect, const class AActor* Instigator, const FPolyStructHandle& Context);
	virtual void Server_ApplyEffect_Implementation(UClass* Effect, const class AActor* Instigator, const FPolyStructHandle& Context) { Internal_ApplyEffect(Effect, Instigator, (FPolyStructHandle&)Context); }

	virtual void LocalPredicted_ApplyEffect(const TSubclassOf<class UAttributeEffect> Effect, const class AActor* Instigator, FPolyStructHandle& Context);

	UFUNCTION(Server, Reliable)
	void Server_ApplyEffect_LocalPredicted(UClass* Effect, const class AActor* Instigator, const FPolyStructHandle& Context, const FEffectNetPredKey PredictionKey);

	UFUNCTION(Client, Reliable)
	void Client_ApplyEffect_LocalPredicted_Success(UClass* Effect, const class AActor* Instigator, const FEffectNetPredKey PredictionKey);
	virtual void Client_ApplyEffect_LocalPredicted_Success_Implementation(UClass* Effect, const class AActor* Instigator, const FEffectNetPredKey PredictionKey);

	UFUNCTION(Client, Reliable)
	void Client_ApplyEffect_LocalPredicted_Fail(UClass* Effect, const class AActor* Instigator, const FEffectNetPredKey PredictionKey);
	virtual void Client_ApplyEffect_LocalPredicted_Fail_Implementation(UClass* Effect, const class AActor* Instigator, const FEffectNetPredKey PredictionKey);

public:
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	FORCEINLINE void SyncAttribute(const FAttributeHandle& Attribute) { SyncAttributes({Attribute}); }

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	FORCEINLINE void SyncAttributes(const TArray<FAttributeHandle>& Attributes) { Server_SyncAttributes(Attributes); }

protected:
	UFUNCTION(Server, Reliable)
	void Server_SyncAttributes(const TArray<FAttributeHandle>& Attributes);

	UFUNCTION(Client, Reliable)
	void Client_SyncAttributes(const FAttributeValuePairs& AttributeValues);
};















