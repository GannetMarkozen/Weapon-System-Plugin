// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakFieldPtr.h"
#include "PolyStruct/Public/Polymorphic/PolymorphicStruct.h"
#include "Attribute.generated.h"

struct FAttribute;
class UAttributeEffect;


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


USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FEffectModContext
{
	GENERATED_BODY()

	FEffectModContext() = default;
	FEffectModContext(const FEffectModContext& Other)
		: EffectClass(Other.EffectClass), Instigator(Other.Instigator), Context(Other.Context) {}
	FEffectModContext(const TSubclassOf<UAttributeEffect> EffectClass, AActor* Instigator, const FPolyStructHandle& Context)
		: EffectClass(EffectClass), Instigator(Instigator), Context(Context) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UAttributeEffect> EffectClass = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Instigator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPolyStructHandle Context;	

	bool HasData() const;
	FORCEINLINE bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
	{
		Ar << EffectClass << Instigator;
		return Context.NetSerialize(Ar, Map, bOutSuccess);
	}
};



/*
 *	A handle that carries around an Attribute by weak pointer
 *	so it can be referenced elsewhere. Primarily for Blueprint
 *	use.
 */
USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FAttributeHandle
{
	GENERATED_BODY()

	friend struct FAttribute;

	FAttributeHandle() = default;
	FAttributeHandle(class UAttributesComponent* AttributesComponent, FProperty* AttributeProperty) { Set(AttributesComponent, AttributeProperty); }
	FAttributeHandle(class UAttributesComponent* AttributesComponent, const FName& AttributeName) { Set(AttributesComponent, AttributeName); }

	FORCEINLINE operator bool() const { return IsValid(); }
	FORCEINLINE FAttribute* operator->() { return Get(); }
	FORCEINLINE const FAttribute* operator->() const { return Get(); }
	FORCEINLINE FAttribute& operator*() { return *Get(); }
	FORCEINLINE const FAttribute& operator*() const { return *Get(); }

	FORCEINLINE FAttributeHandle& operator=(const FAttributeHandle& Other) { Owner = Other.Owner; AttributeProp = Other.AttributeProp; return *this; }
	FORCEINLINE bool operator==(const FAttributeHandle& Other) const { return Owner == Other.Owner && AttributeProp == Other.AttributeProp; }
	bool operator==(const FAttribute& Attribute) const;
	
	void Set(class UAttributesComponent* AttributesComponent, FProperty* AttributeProperty);
	void Set(class UAttributesComponent* AttributesComponent, const FName& AttributeName);

	FORCEINLINE FAttribute* Get() { return IsValid() ? AttributeProp->ContainerPtrToValuePtr<FAttribute>(Owner.Get()) : nullptr; }
	FORCEINLINE const FAttribute* Get() const { return IsValid() ? AttributeProp->ContainerPtrToValuePtr<FAttribute>(Owner.Get()) : nullptr; }
	
	FORCEINLINE bool IsValid() const { return Owner.IsValid() && AttributeProp != nullptr; }

	FORCEINLINE UAttributesComponent* GetOwner() const { return Owner.Get(); }
	FORCEINLINE FProperty* GetUProperty() const { return AttributeProp; }

	FORCEINLINE FName GetFName() const { return AttributeProp ? AttributeProp->GetFName() : NAME_None; }
	FORCEINLINE FString GetName() const { return AttributeProp ? AttributeProp->GetName() : FString(); }

	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);
	FORCEINLINE friend FArchive& operator<<(FArchive& Ar, FAttributeHandle& Handle) { bool bTemp; Handle.NetSerialize(Ar, nullptr, bTemp); return Ar; }
	FORCEINLINE friend uint32 GetTypeHash(const FAttributeHandle& Handle) { return GetTypeHash(Handle.AttributeProp ? Handle.AttributeProp->GetFName() : NAME_None); }

protected:
	UPROPERTY(BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"))
	TWeakObjectPtr<UAttributesComponent> Owner = nullptr;
	
	FProperty* AttributeProp = nullptr;
};

template<>
struct TStructOpsTypeTraits<FAttributeHandle> : TStructOpsTypeTraitsBase2<FAttributeHandle>
{
	enum
	{
		WithCopy = true,
		WithNetSerializer = true,
		WithIdenticalViaEquality = true,
	};
};


/**
 * 
*/

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttributeValueChangedDelegate, float, NewValue, float, OldValue, UPARAM(ref) FAttributeHandle&, AttributeHandle);
//DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAttributeValueChangedUniDelegate, float, NewValue, float, OldValue, UPARAM(ref) FAttributeHandle&, AttributeHandle);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAttributeValueChangedDelegate, float, NewValue, float, OldValue, UPARAM(ref) FAttributeHandle&, AttributeHandle, const FEffectModContext&, ModificationContext);
DECLARE_DYNAMIC_DELEGATE_FourParams(FAttributeValueChangedUniDelegate, float, NewValue, float, OldValue, UPARAM(ref) FAttributeHandle&, AttributeHandle, const FEffectModContext&, ModificationContext);

USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FAttribute
{
	GENERATED_BODY()
	
	friend class UAttributesComponent;
protected:
	// The current value of this attribute
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Attribute")
	float Value = 0.f;

	// A handle that is a reference to this attribute
	UPROPERTY(BlueprintReadOnly, NotReplicated, Meta = (AllowPrivateAccess = "true"), Category = "Attributes")
	FAttributeHandle Handle;

	// Manually broadcast the current state of the Attribute
	FORCEINLINE void Broadcast(const float OldValue, const FEffectModContext& ModContext) { OnAttributeChanged.Broadcast(Value, OldValue, Handle, ModContext); }
	
public:
	// Called whenever the attribute changes
	FAttributeValueChangedDelegate OnAttributeChanged;
	
	FORCEINLINE FAttribute& operator=(const FAttribute& Other) { SetValue(Other.Value, FEffectModContext()); Handle = Other.Handle; return *this; }
	FORCEINLINE FAttribute& operator=(const float NewValue) { SetValue(NewValue, FEffectModContext()); return *this; }
	FORCEINLINE bool operator==(const FAttribute& Other) const { return Handle == Other.Handle && Value == Other.Value; }
	FORCEINLINE bool operator==(const FAttributeHandle& OtherHandle) const { return Handle == OtherHandle; }

	FORCEINLINE operator FAttributeHandle&() { return Handle; }
	FORCEINLINE operator const FAttributeHandle&() const { return Handle; }

	FORCEINLINE FAttributeHandle& GetHandle() { return Handle; }
	FORCEINLINE const FAttributeHandle& GetHandle() const { return Handle; }
	FORCEINLINE FName GetFName() const { return Handle.GetFName(); }
	FORCEINLINE FString GetName() const { return Handle.GetName(); }
	FORCEINLINE UAttributesComponent* GetOwner() const { return Handle.IsValid() ? Handle.GetOwner() : nullptr; }
	FORCEINLINE FProperty* GetUProperty() const { return Handle.IsValid() ? Handle.GetUProperty() : nullptr; }
	
	FORCEINLINE float GetValue() const { return Value; }
	FORCEINLINE void SetValue(const float NewValue, const FEffectModContext& ModContext = FEffectModContext())
	{
		if(NewValue == Value) return;
		const float OldValue = Value;
		Value = NewValue;
		Broadcast(OldValue, ModContext);
	}

	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);
	FORCEINLINE friend FArchive& operator<<(FArchive& Ar, FAttribute& Attr) { bool bTemp; Attr.NetSerialize(Ar, nullptr, bTemp); return Ar; }
	FORCEINLINE friend uint32 GetTypeHash(const FAttribute& Attribute) { return GetTypeHash(Attribute.Handle); }
	
private:
	// Count the number of times net serialized to then remove the
	// context element when the required number of replications is met
	uint8 NumContextReplications = 0;
};

template<>
struct TStructOpsTypeTraits<FAttribute> : TStructOpsTypeTraitsBase2<FAttribute>
{
	enum
	{
		WithCopy = true,
		WithNetSerializer = true,
		WithIdenticalViaEquality = true,
	};
};


















