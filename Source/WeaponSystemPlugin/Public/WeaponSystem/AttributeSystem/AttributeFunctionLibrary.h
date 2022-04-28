// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Attribute.h"
#include "AttributesComponent.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "AttributeFunctionLibrary.generated.h"


UENUM(BlueprintType)
enum class EValidity : uint8
{
	Valid, Invalid
};

UCLASS()
class WEAPONSYSTEMPLUGIN_API UAttributeFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast), Category = "Weapon System Function Library|Attributes")
	static UPARAM(ref) FAttributeHandle Conv_AttributeToAttributeHandle(UPARAM(ref) FAttribute& Attribute) { return Attribute.GetHandle(); }
	
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast), Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE FAttribute Conv_AttributeHandleToAttribute(const FAttributeHandle& AttributeHandle) { return AttributeHandle.IsValid() ? *AttributeHandle.Get() : FAttribute(); }

	// Gets the value of the Attribute. 0 if invalid reference.
	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE float GetAttributeValue(const FAttributeHandle& AttributeHandle) { return AttributeHandle.IsValid() ? AttributeHandle.Get()->GetValue() : 0.f; }

	// Gets the name of the attribute being referenced. None if invalid
	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE FName GetAttributeName(const FAttributeHandle& AttributeHandle) { return AttributeHandle.IsValid() ? AttributeHandle.GetUProperty()->GetFName() : NAME_None; }

	// Gets a copy of the attribute (not sure why this would be useful)
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Get Attribute (a copy)", ExpandEnumAsExecs = "OutPin"), Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE void GetAttribute(const FAttributeHandle& AttributeHandle, FAttribute& OutAttribute, EValidity& OutPin)
	{
		std::tie(OutAttribute, OutPin) = AttributeHandle.IsValid() ? std::tuple(*AttributeHandle.Get(), EValidity::Valid) : std::tuple(FAttribute(), EValidity::Invalid);
	}

	// Binds an event for whenever the attribute's value changes
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Bind Attribute Changed"), Category = "Weapon System Function Library|Attributes")
	static void BindAttributeChangedFromAttribute(UPARAM(ref) FAttribute& Attribute, const FAttributeValueChangedUniDelegate& Delegate) { Attribute.OnAttributeChanged.Add(Delegate); }

	// Binds an event for whenever the attribute's value changes. From an attribute handle. Only binds if the handle is valid
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Bind Attribute Changed (from handle)"), Category = "Weapon System Function Library|Attributes")
	static void BindAttributeChangedFromHandle(UPARAM(ref) FAttributeHandle& Handle, const FAttributeValueChangedUniDelegate& Delegate) { if(Handle.IsValid()) Handle.Get()->OnAttributeChanged.Add(Delegate); }

	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Bind Attribute Changed By Name", AutoCreateRefTerm = "FunctionName", DefaultToSelf = "Target"), Category = "Weapon System Function Library|Attributes")
	static void BindAttributeChangedFromAttributeByName(UPARAM(ref) FAttribute& Attribute, UObject* Target, const FName& FunctionName)
	{
		if(!Target) return;
		FAttributeValueChangedUniDelegate Delegate;
		Delegate.BindUFunction(Target, FunctionName);
		Attribute.OnAttributeChanged.Add(Delegate);
	}

	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Bind Attribute Changed By Name (from handle)", AutoCreateRefTerm = "FunctionName", DefaultToSelf = "Target"), Category = "Weapon System Function Library|Attributes")
	static void BindAttributeChangedFromHandleByName(UPARAM(ref) FAttributeHandle& Handle, UObject* Target, const FName& FunctionName)
	{
		if(!Handle.IsValid() || !Target) return;
		FAttributeValueChangedUniDelegate Delegate;
		Delegate.BindUFunction(Target, FunctionName);
		Handle->OnAttributeChanged.Add(Delegate);
	}

	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Unbind All Attribute Changed", DefaultToSelf = "Target"), Category = "Weapon System Function Library|Attributes")
	static void UnbindAllAttributeChanged(UObject* Target, UPARAM(ref) FAttribute& Attribute) { Attribute.OnAttributeChanged.RemoveAll(Target); }

	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Unbind All Attribute Changed (from handle)", DefualtToSelf = "Target"), Category = "Weapon System Function Library|Attributes")
	static void UnbindAllAttributeChangedFromHandle(UObject* Target, UPARAM(ref) FAttributeHandle& Handle) { if(Handle.IsValid()) Handle->OnAttributeChanged.RemoveAll(Target); }
}; 













