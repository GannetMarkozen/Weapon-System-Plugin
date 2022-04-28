// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/PropertyAccessUtil.h"
#include "UObject/WeakFieldPtr.h"
#include "Attribute.generated.h"


struct FAttribute;

/*
 *	A handle that carries around an Attribute by weak pointer
 *	so it can be referenced elsewhere. Primarily for Blueprint
 *	use.
 */
USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FAttributeHandle
{
	GENERATED_BODY()

	FAttributeHandle() = default;
	FAttributeHandle(class UAttributesComponent* AttributesComponent, FProperty* AttributeProperty) { Set(AttributesComponent, AttributeProperty); }
	FAttributeHandle(class UAttributesComponent* AttributesComponent, const FName& AttributeName) { Set(AttributesComponent, AttributeName); }

	FORCEINLINE operator bool() const { return IsValid(); }
	FORCEINLINE FAttribute* operator->() { return Get(); }
	FORCEINLINE const FAttribute* operator->() const { return Get(); }
	
	void Set(class UAttributesComponent* AttributesComponent, FProperty* AttributeProperty);
	void Set(class UAttributesComponent* AttributesComponent, const FName& AttributeName);

	FORCEINLINE FAttribute* Get() { return IsValid() ? AttributeProp->ContainerPtrToValuePtr<FAttribute>(Owner.Get()) : nullptr; }
	FORCEINLINE const FAttribute* Get() const { return IsValid() ? AttributeProp->ContainerPtrToValuePtr<FAttribute>(Owner.Get()) : nullptr; }
	
	FORCEINLINE bool IsValid() const { return Owner.IsValid() && AttributeProp != nullptr; }

	FORCEINLINE UAttributesComponent* GetOwner() const { return Owner.Get(); }
	FORCEINLINE FProperty* GetUProperty() const { return AttributeProp; }

protected:
	UPROPERTY(BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"))
	TWeakObjectPtr<UAttributesComponent> Owner = nullptr;
	
	FProperty* AttributeProp = nullptr;
};

/**
 * 
*/

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttributeValueChangedDelegate, float, NewValue, float, OldValue, UPARAM(ref) FAttributeHandle&, AttributeHandle);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAttributeValueChangedUniDelegate, float, NewValue, float, OldValue, UPARAM(ref) FAttributeHandle&, AttributeHandle);

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
	UPROPERTY(BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Attributes")
	FAttributeHandle Handle;

	// OnAttributeChanged.Broadcast(Value, OldValue, Handle);
	FORCEINLINE void Broadcast(const float OldValue) { OnAttributeChanged.Broadcast(Value, OldValue, Handle); }
	
public:
	// Called whenever the attribute changes
	FAttributeValueChangedDelegate OnAttributeChanged;
	
	FORCEINLINE FAttribute& operator=(const FAttribute& Other) { Value = Other.Value; return *this; }
	FORCEINLINE bool operator==(const FAttribute& Other) const { return Value == Other.Value; }

	FORCEINLINE operator FAttributeHandle&() { return Handle; }
	FORCEINLINE operator const FAttributeHandle&() const { return Handle; }

	FORCEINLINE FAttributeHandle& GetHandle() { return Handle; }
	FORCEINLINE const FAttributeHandle& GetHandle() const { return Handle; }
	FORCEINLINE FName GetName() const { return Handle.IsValid() ? Handle->GetName() : NAME_None; }
	FORCEINLINE UAttributesComponent* GetOwner() const { return Handle.IsValid() ? Handle->GetOwner() : nullptr; }
	FORCEINLINE FProperty* GetUProperty() const { return Handle.IsValid() ? Handle->GetUProperty() : nullptr; }
	
	FORCEINLINE float GetValue() const { return Value; }
	FORCEINLINE void SetValue(const float NewValue)
	{
		if(NewValue == Value) return;
		const float OldValue = Value;
		Value = NewValue;
		Broadcast(OldValue);
	}

	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);
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


















