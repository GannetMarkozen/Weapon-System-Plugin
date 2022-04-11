// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "WeaponSystem/ReplicatedObject.h"
#include "WeaponSystem/ScriptBase.h"
//#include "WeaponBase.h"
#include "WeaponScriptBase.generated.h"



/** Weapon Scripts are instanced objects that reside on a Weapon. These scripts carry out
 *	chunks of logic that are easily modifiable through inline variable editing in the owning
 *	Weapon's BP. Weapon scripts support replication as long as the owning Weapon is tethered
 *	to an inventory.
 */

UCLASS(Abstract)
class WEAPONSYSTEMPLUGIN_API UWeaponScriptBase : public UScriptBase
{
	GENERATED_BODY()
public:
	UWeaponScriptBase() = default;
	friend class AWeaponBase;
	
	virtual void BeginPlay() override;
	virtual void EndPlay() override;
	
	virtual class AActor* GetOwner() const override;// { return OwningWeaponBase ? OwningWeaponBase : Super::GetOwner(); }

protected:
	// This is the weapon that owns this script
	UPROPERTY(BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"), Category = "Script")
	class AWeaponBase* OwningWeaponBase;
	
	UFUNCTION()
	virtual void OwningWeaponEquipped(class AWeaponBase* Weapon, class UCharacterInventoryComponent* Inventory);

	UFUNCTION()
	virtual void OwningWeaponUnequipped(class AWeaponBase* Weapon, class UCharacterInventoryComponent* Inventory);

	// Called if owned by a Pawn and is local on equipped
	virtual FORCEINLINE void SetupInput(class UInputComponent* InputComponent) {}

	// Called if owned by a pawn and is local on unequipped.
	// By default removes all input from this object when called
	virtual void RemoveInput(class UInputComponent* InputComponent);
	
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Owning Weapon Equippped"), Category = "Script")
	void BP_OwningWeaponEquipped(class UCharacterInventoryComponent* Inventory);

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Owning Weapon Unequipped"), Category = "Script")
	void BP_OwningWeaponUnequipped(class UCharacterInventoryComponent* Inventory);

	// Called if owned by a Pawn and is local on equipped.
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Setup Input"), Category = "Script|Input Binding")
	void BP_SetupInput(class UInputComponent* InputComponent);

	// Called if owned by a pawn and is local on unequipped.
	// By default removes all input from this object when called
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Remove Input"), Category = "Script|Input Binding")
	void BP_RemoveInput(class UInputComponent* InputComponent);

public:
	/*UFUNCTION(BlueprintPure)
	FORCEINLINE class UInventoryComponent* GetOwningInventory() const { return OwningWeaponBase->OwningInventory; }*/

	UFUNCTION(BlueprintPure)
	class UInventoryComponent* GetOwningInventory() const;

	template<typename T>
	FORCEINLINE T* GetOwningInventory() const { return Cast<T>(GetOwningInventory()); }
 
	/*UFUNCTION(BlueprintPure)
	FORCEINLINE bool IsLocallyControlled() const { return OwningWeaponBase ? OwningWeaponBase->IsLocallyControlled() : false; }

	UFUNCTION(BlueprintPure, Category = "Script")
	FORCEINLINE bool IsEquipped() const { return OwningWeaponBase && OwningWeaponBase->IsEquipped(); }

	UFUNCTION(BlueprintPure, Category = "Script")
	FORCEINLINE bool IsEquippedBy(const class UInventoryComponent* Inventory) const { return OwningWeaponBase && OwningWeaponBase->IsEquippedBy(Inventory); }*/

	UFUNCTION(BlueprintPure)
	bool IsLocallyControlled() const;

	UFUNCTION(BlueprintPure, Category = "Script")
	bool IsEquippedBy(const class UInventoryComponent* Inventory) const;

	UFUNCTION(BlueprintPure, Category = "Script")
	FORCEINLINE bool IsEquipped() const { return IsEquippedBy(GetOwningInventory()); }
	
protected:
	// Adds a binding to our pawn owner given the passed in Object reference
	template<typename UserClass, typename EnumType, typename... VarTypes>
	FORCEINLINE void SetupBinding(UserClass* UserObj, typename TMemFunPtrType<false, UserClass, void(VarTypes...)>::Type MemFunc, const EnumType Input, const TEnumAsByte<EInputEvent> Event = IE_Pressed)
	{
		static_assert(TIsEnum<EnumType>::Value, TEXT("EnumType is not a UENUM"));
		if(UInputComponent* InputComponent = GetInputComponent()) {
			const FName& InputName = FName(StaticEnum<EnumType>()->GetNameStringByIndex((int32)Input));
			FInputActionBinding Binding(InputName, Event);
			Binding.ActionDelegate.GetDelegateForManualSet().BindUObject(UserObj, MemFunc);
			Binding.bConsumeInput = false;
			InputComponent->AddActionBinding(Binding);
		}
	}

	template<typename UserClass, typename... VarTypes>
	FORCEINLINE void SetupBindingByInputName(UserClass* UserObj, typename TMemFunPtrType<false, UserClass, void(VarTypes...)>::Type MemFunc, const FName& Input, const TEnumAsByte<EInputEvent> Event = IE_Pressed)
	{
		if(UInputComponent* InputComponent = GetInputComponent()) {
			FInputActionBinding Binding(Input, Event);
			Binding.ActionDelegate.GetDelegateForManualSet().BindUObject(UserObj, MemFunc);
			Binding.bConsumeInput = false;
			InputComponent->AddActionBinding(Binding);
		}
	}

	// Adds a binding to our pawn owner
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "InputName, FunctionName"), Category = "Script|Input Binding")
	FORCEINLINE void SetupBinding(const FName& InputName, const TEnumAsByte<EInputEvent> InputEvent = IE_Pressed, const FName& FunctionName = NAME_None)
	{
		if(UInputComponent* InputComponent = GetInputComponent()) {
			FInputActionBinding Binding(InputName, InputEvent);
			Binding.ActionDelegate.BindDelegate(this, FunctionName);
			Binding.bConsumeInput = false;
			InputComponent->AddActionBinding(Binding);
		}
	}

	// Removes a specific action binding from our pawn owner
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "InputName"), Category = "Script|Input Binding")
	FORCEINLINE void RemoveBinding(const FName& InputName, const TEnumAsByte<EInputEvent> InputEvent = IE_Pressed) const
	{
		if(UInputComponent* InputComponent = GetInputComponent())
			for(int32 i = 0; i < InputComponent->GetNumActionBindings(); i++) {
				const FInputActionBinding& Binding = InputComponent->GetActionBinding(i);
				if(Binding.ActionDelegate.GetUObject() == this && Binding.GetActionName() == InputName && Binding.KeyEvent == InputEvent)
				{
					InputComponent->RemoveActionBinding(i);
					return;
				}
			}
	}

	// Removes a specific action binding from our pawn owner
	template<typename EnumType>
	FORCEINLINE void RemoveUObject(class UObject* UserObj, const EnumType Input, const TEnumAsByte<EInputEvent> Event = IE_Pressed) const
	{
		if(UInputComponent* InputComponent = GetInputComponent())
			for(int32 i = 0; i < InputComponent->GetNumActionBindings(); i++) {
				const FInputActionBinding& Binding = InputComponent->GetActionBinding(i);
				if(Binding.ActionDelegate.GetUObject() == UserObj && Binding.GetActionName() == FName(StaticEnum<EnumType>()->GetNameStringByIndex((int32)Input)) && Binding.KeyEvent == Event)
				{
					InputComponent->RemoveActionBinding(i);
					return;
				}
			}
	}

	// Removes all input bindings from our owning pawn from the passed in Object reference
	UFUNCTION(BlueprintCallable, Meta = (DefaultToSelf = "UserObject", DisplayName = "Remove All Bindings"), Category = "Script|Input Binding")
	FORCEINLINE void RemoveAllUObject(class UObject* UserObject)
	{
		if(!UserObject) return;
		if(UInputComponent* InputComponent = GetInputComponent())
			for(int32 i = 0; i < InputComponent->GetNumActionBindings(); i++)
				if(InputComponent->GetActionBinding(i).ActionDelegate.GetUObject() == UserObject)
					InputComponent->RemoveActionBinding(i--);// Decrement index on removal to adjust for the array shrinking to ensure we scan every item in the array
	}

	UFUNCTION(BlueprintCallable, Meta = (DefaultToSelf = "UserObject", DisplayName = "Remove All Bindings From Input Component"), Category = "Script|Input Binding")
	static void RemoveAllUObjectFromInputComponent(class UObject* UserObject, class UInputComponent* InputComponent)
	{
		if(!InputComponent || !UserObject) return;
		for(int32 i = 0; i < InputComponent->GetNumActionBindings(); i++)
			if(InputComponent->GetActionBinding(i).ActionDelegate.GetUObject() == UserObject)
				InputComponent->RemoveActionBinding(i--);// Decrement index on removal to adjust for the array shrinking to ensure we scan every item in the array
	}

	static FORCEINLINE void RemoveAllUObject(class UObject* UserObject, class UInputComponent* InputComponent) { RemoveAllUObjectFromInputComponent(UserObject, InputComponent); }

	/*UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category = "Script|Input Binding")
	class UInputComponent* GetInputComponent(const bool bHasPriority = true) const;
	virtual FORCEINLINE class UInputComponent* GetInputComponent_Implementation(const bool bHasPriority = true) const 
	{
		if(OwningWeaponBase && GetOwningInventory())
			if(const APawn* OwningPawn = GetOwningInventory()->GetOwner<APawn>()) {
				if(!bHasPriority) return OwningPawn->InputComponent;
				if(const AController* Controller = OwningPawn->Controller.Get())
					return Controller->InputComponent.Get();
			}
		return nullptr;
	}*/

	UFUNCTION(BlueprintPure, Category = "Script|Input Binding")
	FORCEINLINE class UInputComponent* GetInputComponent(const bool bHasPriority = true) const { return GetInputComponentFromInventory(GetOwningInventory(), bHasPriority); }

	UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category = "Script|Input Binding")
	class UInputComponent* GetInputComponentFromInventory(const class UInventoryComponent* Inventory, const bool bHasPriority = true) const;
	virtual class UInputComponent* GetInputComponentFromInventory_Implementation(const class UInventoryComponent* Inventory, const bool bHasPriority = true) const;
	/*{
		if(!Inventory) return nullptr;
		if(const APawn* OwningPawn = Inventory->GetOwner<APawn>())
		{
			if(!bHasPriority)
				return OwningPawn->InputComponent.Get();
			
			if(const AController* Controller = OwningPawn->Controller.Get())
				return Controller->InputComponent.Get();
		}
		return nullptr;
	}*/
	
	// Must input a custom enum value into the input value
	/*UFUNCTION(BlueprintCallable, CustomThunk, meta = (CustomStructureParam = "InputValue", AllowPrivateAccess = "true", AutoCreateRefTerm = "InputValue, FunctionName"), Category = "Script|Input Binding")
	static void BindInput(const int32 InputValue, const TEnumAsByte<EInputEvent> InputEvent = IE_Pressed, const FName& FunctionName = NAME_None);
	static void execBindInput(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		// Get template enum InputValue
		FByteProperty::TCppType InputValue = (FByteProperty::TCppType)0;
		Stack.StepCompiledIn<FByteProperty>(&InputValue);
		const auto* InputValueProp = CastField<FByteProperty>(Stack.MostRecentProperty);

		
		// Get input event
		EInputEvent InputEvent = (EInputEvent)0;
		Stack.StepCompiledIn<FEnumProperty>(&InputEvent);

		// Get FunctionName
		FNameProperty::TCppType FunctionName = FNameProperty::GetDefaultPropertyValue();
		Stack.StepCompiledIn<FNameProperty>(&FunctionName);

		P_FINISH;
		
		if(!InputValueProp || !InputValueProp->Enum)
		{
			Stack.bArrayContextFailed = true;

			if(InputValueProp)
				PRINT(TEXT("Failed, Prop class == %s"), *InputValueProp->GetNameCPP());
			
			return;
		}
		else PRINT(TEXT("Prop class == %s"), *InputValueProp->GetNameCPP());
		
		P_NATIVE_BEGIN;

		//PRINT(TEXT("Input value == %s"), *InputValueProp->Enum->GetDisplayNameTextByIndex(*(uint8*)InputValuePtr).ToString());
		PRINT(TEXT("InputValueName == %s"), *InputValueProp->Enum->GetDisplayNameTextByIndex(InputValue).ToString());
		PRINT(TEXT("Context == %s"), *Context->GetName());
		
		// Define return val
		P_NATIVE_END;
	}*/
};