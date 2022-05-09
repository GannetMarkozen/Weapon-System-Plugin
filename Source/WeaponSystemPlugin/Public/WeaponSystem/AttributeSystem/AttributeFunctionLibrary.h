// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Attribute.h"
#include "AttributesComponent.h"
#include "Polymorphic/PolymorphicStructFunctionLibrary.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "AttributeFunctionLibrary.generated.h"


UENUM(BlueprintType)
enum class EValidity : uint8
{
	Valid, Invalid
};

UCLASS()
class WEAPONSYSTEMPLUGIN_API UAttributeUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Convert Attribute to Attribute Handle"), Category = "Weapon System Function Library|Attributes")
	static FAttributeHandle Conv_AttributeToAttributeHandle(const FAttribute& Attribute) { return Attribute.GetHandle(); }

	// Warning: Copies attribute. Not direct reference
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Convert Attribute Handle to Attribute"), Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE FAttribute Conv_AttributeHandleToAttribute(const FAttributeHandle& AttributeHandle) { return AttributeHandle.IsValid() ? *AttributeHandle.Get() : FAttribute(); }

	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Convert Attribute to String"), Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE FString Conv_AttributeToString(const FAttribute& Attribute) { return Attribute.GetName(); }

	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Convert Attribute to Name"), Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE FName Conv_AttributeToName(const FAttribute& Attribute) { return Attribute.GetFName(); }

	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Convert Attribute Handle to String"), Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE FString Conv_AttributeHandleToString(const FAttributeHandle& Handle) { return Handle.GetUProperty() ? Handle.GetUProperty()->GetName() : FString(); }

	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Convert Attribute Handle to Name"), Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE FName Conv_AttributeHandleToName(const FAttributeHandle& Handle) { return Handle.GetUProperty() ? Handle.GetUProperty()->GetFName() : NAME_None; }

	

	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "=="), Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE bool AttributeHandleEquals(const FAttributeHandle& A, const FAttributeHandle& B) { return A == B; }

	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "!=", DisplayName = "Attribute Handle Equals NOT"), Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE bool AttributeHandleEqualsNOT(const FAttributeHandle& A, const FAttributeHandle& B) { return !(A == B); }
	

	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", DisplayName = "Get Attribute Handle From Attribute"), Category = "Weapon System Function Library|Attributes")
	static UPARAM(ref) FAttributeHandle& GetAttributeHandleFromAttribute(UPARAM(ref) FAttribute& Attribute) { return Attribute.GetHandle(); }

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

	

	// Will find an Attribute Component from the target. Will fail if there is none. Will first check if the target
	// inherits from the Attributes Interface then check if it is an Actor that has an Attributes Component
	static class UAttributesComponent* GetAttributesComponent(class UObject* Target);

	template<typename T>
	FORCEINLINE static class UAttributesComponent* GetAttributesComponent(class UObject* Target) { return Cast<T>(GetAttributesComponent(Target)); }

	static FAttributeHandle GetAttributeHandle(class UObject* Target, const FName& AttributeName);

	static FORCEINLINE bool TryApplyEffectToTarget(class UObject* Target, const class AActor* Instigator, const TSubclassOf<class UAttributeEffect> EffectClass, FPolyStructHandle& Context)
	{
		auto* AttrComp = GetAttributesComponent(Target);
		if(!AttrComp) return false;
		return AttrComp->TryApplyEffect(EffectClass, Instigator, Context);
	}

	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Get Attributes Component", ExpandEnumAsExecs = "OutPin"), Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE class UAttributesComponent* BP_GetAttributesComponent(class UObject* Target, EStructCastPin& OutPin)
	{
		auto* AttrComp = GetAttributesComponent(Target);
		OutPin = AttrComp ? EStructCastPin::Success : EStructCastPin::Fail;
		return AttrComp;
	}
	
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Get Attributes Component As", ExpandEnumAsExecs = "OutPin", DeterminesOutputType = "Class"), Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE class UAttributesComponent* BP_GetAttributeComponentAs(class UObject* Target, const TSubclassOf<UAttributesComponent> Class, EStructCastPin& OutPin)
	{
		OutPin = EStructCastPin::Fail;
		auto* AttrComp = GetAttributesComponent(Target);
		if(!AttrComp || !AttrComp->IsA(Class)) return nullptr;
		OutPin = EStructCastPin::Success;
		return AttrComp;
	}

	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Get Attribute Handle", ExpandEnumAsExecs = "OutPin", AutoCreateRefTerm = "AttributeName"), Category = "Weapon System Function Library|Attributes")
	static UPARAM(ref) FAttributeHandle BP_GetAttributeHandle(class UObject* Target, const FName& AttributeName, EStructCastPin& OutPin)
	{
		const FAttributeHandle Handle = GetAttributeHandle(Target, AttributeName);
		OutPin = Handle.IsValid() ? EStructCastPin::Success : EStructCastPin::Fail;
		return Handle;
	}

	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Try Apply Effect To Target", ExpandEnumAsExecs = "OutPin", AutoCreateRefTerm = "Context"), Category = "Weapon System Function Library|Attributes")
	static void BP_TryApplyEffectToTarget(const TSubclassOf<class UAttributeEffect> Effect, const class AActor* Instigator, class UObject* Target, UPARAM(ref) FPolyStructHandle& Context, EStructCastPin& OutPin)
	{
		OutPin = TryApplyEffectToTarget(Target, Instigator, Effect, Context) ? EStructCastPin::Success : EStructCastPin::Fail;
	}

	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Attributes")
	static FORCEINLINE bool HasAttributesComponent(const class UObject* Target) { return GetAttributesComponent((UObject*)Target) != nullptr; }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "AttributeName"), Category = "Weapon System Function Libarary|Attributes")
	static FORCEINLINE bool HasAttribute(const class UObject* Target, const FName& AttributeName) { return GetAttributeHandle((UObject*)Target, AttributeName).IsValid(); }

	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Unbind All Attribute Changed", DefaultToSelf = "Target"), Category = "Weapon System Function Library|Attributes")
	static void UnbindAllAttributeChanged(UObject* Target, UPARAM(ref) FAttribute& Attribute) { Attribute.OnAttributeChanged.RemoveAll(Target); }

	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Unbind All Attribute Changed (from handle)", DefualtToSelf = "Target"), Category = "Weapon System Function Library|Attributes")
	static void UnbindAllAttributeChangedFromHandle(UObject* Target, UPARAM(ref) FAttributeHandle& Handle) { if(Handle.IsValid()) Handle->OnAttributeChanged.RemoveAll(Target); }
}; 













