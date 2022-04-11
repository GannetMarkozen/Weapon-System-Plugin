// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/WeaponScriptBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponScriptBase() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponScriptBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponScriptBase();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UScriptBase();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UCharacterInventoryComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
// End Cross Module References
	DEFINE_FUNCTION(UWeaponScriptBase::execGetInputComponentFromInventory)
	{
		P_GET_OBJECT(UInventoryComponent,Z_Param_Inventory);
		P_GET_UBOOL(Z_Param_bHasPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInputComponent**)Z_Param__Result=P_THIS->GetInputComponentFromInventory_Implementation(Z_Param_Inventory,Z_Param_bHasPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponScriptBase::execGetInputComponent)
	{
		P_GET_UBOOL(Z_Param_bHasPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInputComponent**)Z_Param__Result=P_THIS->GetInputComponent(Z_Param_bHasPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponScriptBase::execRemoveAllUObjectFromInputComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_UserObject);
		P_GET_OBJECT(UInputComponent,Z_Param_InputComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWeaponScriptBase::RemoveAllUObjectFromInputComponent(Z_Param_UserObject,Z_Param_InputComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponScriptBase::execRemoveAllUObject)
	{
		P_GET_OBJECT(UObject,Z_Param_UserObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllUObject(Z_Param_UserObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponScriptBase::execRemoveBinding)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InputName);
		P_GET_PROPERTY(FByteProperty,Z_Param_InputEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBinding(Z_Param_Out_InputName,EInputEvent(Z_Param_InputEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponScriptBase::execSetupBinding)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InputName);
		P_GET_PROPERTY(FByteProperty,Z_Param_InputEvent);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupBinding(Z_Param_Out_InputName,EInputEvent(Z_Param_InputEvent),Z_Param_Out_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponScriptBase::execIsEquipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEquipped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponScriptBase::execIsEquippedBy)
	{
		P_GET_OBJECT(UInventoryComponent,Z_Param_Inventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEquippedBy(Z_Param_Inventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponScriptBase::execIsLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponScriptBase::execGetOwningInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInventoryComponent**)Z_Param__Result=P_THIS->GetOwningInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponScriptBase::execOwningWeaponUnequipped)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_Weapon);
		P_GET_OBJECT(UCharacterInventoryComponent,Z_Param_Inventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OwningWeaponUnequipped(Z_Param_Weapon,Z_Param_Inventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponScriptBase::execOwningWeaponEquipped)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_Weapon);
		P_GET_OBJECT(UCharacterInventoryComponent,Z_Param_Inventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OwningWeaponEquipped(Z_Param_Weapon,Z_Param_Inventory);
		P_NATIVE_END;
	}
	static FName NAME_UWeaponScriptBase_BP_OwningWeaponEquipped = FName(TEXT("BP_OwningWeaponEquipped"));
	void UWeaponScriptBase::BP_OwningWeaponEquipped(UCharacterInventoryComponent* Inventory)
	{
		WeaponScriptBase_eventBP_OwningWeaponEquipped_Parms Parms;
		Parms.Inventory=Inventory;
		ProcessEvent(FindFunctionChecked(NAME_UWeaponScriptBase_BP_OwningWeaponEquipped),&Parms);
	}
	static FName NAME_UWeaponScriptBase_BP_OwningWeaponUnequipped = FName(TEXT("BP_OwningWeaponUnequipped"));
	void UWeaponScriptBase::BP_OwningWeaponUnequipped(UCharacterInventoryComponent* Inventory)
	{
		WeaponScriptBase_eventBP_OwningWeaponUnequipped_Parms Parms;
		Parms.Inventory=Inventory;
		ProcessEvent(FindFunctionChecked(NAME_UWeaponScriptBase_BP_OwningWeaponUnequipped),&Parms);
	}
	static FName NAME_UWeaponScriptBase_BP_RemoveInput = FName(TEXT("BP_RemoveInput"));
	void UWeaponScriptBase::BP_RemoveInput(UInputComponent* InputComponent)
	{
		WeaponScriptBase_eventBP_RemoveInput_Parms Parms;
		Parms.InputComponent=InputComponent;
		ProcessEvent(FindFunctionChecked(NAME_UWeaponScriptBase_BP_RemoveInput),&Parms);
	}
	static FName NAME_UWeaponScriptBase_BP_SetupInput = FName(TEXT("BP_SetupInput"));
	void UWeaponScriptBase::BP_SetupInput(UInputComponent* InputComponent)
	{
		WeaponScriptBase_eventBP_SetupInput_Parms Parms;
		Parms.InputComponent=InputComponent;
		ProcessEvent(FindFunctionChecked(NAME_UWeaponScriptBase_BP_SetupInput),&Parms);
	}
	static FName NAME_UWeaponScriptBase_GetInputComponentFromInventory = FName(TEXT("GetInputComponentFromInventory"));
	UInputComponent* UWeaponScriptBase::GetInputComponentFromInventory(const UInventoryComponent* Inventory, bool bHasPriority) const
	{
		WeaponScriptBase_eventGetInputComponentFromInventory_Parms Parms;
		Parms.Inventory=Inventory;
		Parms.bHasPriority=bHasPriority ? true : false;
		const_cast<UWeaponScriptBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UWeaponScriptBase_GetInputComponentFromInventory),&Parms);
		return Parms.ReturnValue;
	}
	void UWeaponScriptBase::StaticRegisterNativesUWeaponScriptBase()
	{
		UClass* Class = UWeaponScriptBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputComponent", &UWeaponScriptBase::execGetInputComponent },
			{ "GetInputComponentFromInventory", &UWeaponScriptBase::execGetInputComponentFromInventory },
			{ "GetOwningInventory", &UWeaponScriptBase::execGetOwningInventory },
			{ "IsEquipped", &UWeaponScriptBase::execIsEquipped },
			{ "IsEquippedBy", &UWeaponScriptBase::execIsEquippedBy },
			{ "IsLocallyControlled", &UWeaponScriptBase::execIsLocallyControlled },
			{ "OwningWeaponEquipped", &UWeaponScriptBase::execOwningWeaponEquipped },
			{ "OwningWeaponUnequipped", &UWeaponScriptBase::execOwningWeaponUnequipped },
			{ "RemoveAllUObject", &UWeaponScriptBase::execRemoveAllUObject },
			{ "RemoveAllUObjectFromInputComponent", &UWeaponScriptBase::execRemoveAllUObjectFromInputComponent },
			{ "RemoveBinding", &UWeaponScriptBase::execRemoveBinding },
			{ "SetupBinding", &UWeaponScriptBase::execSetupBinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventBP_OwningWeaponEquipped_Parms, Inventory), Z_Construct_UClass_UCharacterInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::NewProp_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "DisplayName", "Owning Weapon Equippped" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "BP_OwningWeaponEquipped", nullptr, nullptr, sizeof(WeaponScriptBase_eventBP_OwningWeaponEquipped_Parms), Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventBP_OwningWeaponUnequipped_Parms, Inventory), Z_Construct_UClass_UCharacterInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::NewProp_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "DisplayName", "Owning Weapon Unequipped" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "BP_OwningWeaponUnequipped", nullptr, nullptr, sizeof(WeaponScriptBase_eventBP_OwningWeaponUnequipped_Parms), Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventBP_RemoveInput_Parms, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::NewProp_InputComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::NewProp_InputComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Input Binding" },
		{ "Comment", "// Called if owned by a pawn and is local on unequipped.\n// By default removes all input from this object when called\n" },
		{ "DisplayName", "Remove Input" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
		{ "ToolTip", "Called if owned by a pawn and is local on unequipped.\nBy default removes all input from this object when called" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "BP_RemoveInput", nullptr, nullptr, sizeof(WeaponScriptBase_eventBP_RemoveInput_Parms), Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventBP_SetupInput_Parms, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::NewProp_InputComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::NewProp_InputComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Input Binding" },
		{ "Comment", "// Called if owned by a Pawn and is local on equipped.\n" },
		{ "DisplayName", "Setup Input" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
		{ "ToolTip", "Called if owned by a Pawn and is local on equipped." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "BP_SetupInput", nullptr, nullptr, sizeof(WeaponScriptBase_eventBP_SetupInput_Parms), Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics
	{
		struct WeaponScriptBase_eventGetInputComponent_Parms
		{
			bool bHasPriority;
			UInputComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPriority_MetaData[];
#endif
		static void NewProp_bHasPriority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::NewProp_bHasPriority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::NewProp_bHasPriority_SetBit(void* Obj)
	{
		((WeaponScriptBase_eventGetInputComponent_Parms*)Obj)->bHasPriority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::NewProp_bHasPriority = { "bHasPriority", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponScriptBase_eventGetInputComponent_Parms), &Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::NewProp_bHasPriority_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::NewProp_bHasPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::NewProp_bHasPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventGetInputComponent_Parms, ReturnValue), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::NewProp_bHasPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Input Binding" },
		{ "Comment", "/*UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category = \"Script|Input Binding\")\n\x09""class UInputComponent* GetInputComponent(const bool bHasPriority = true) const;\n\x09virtual FORCEINLINE class UInputComponent* GetInputComponent_Implementation(const bool bHasPriority = true) const \n\x09{\n\x09\x09if(OwningWeaponBase && GetOwningInventory())\n\x09\x09\x09if(const APawn* OwningPawn = GetOwningInventory()->GetOwner<APawn>()) {\n\x09\x09\x09\x09if(!bHasPriority) return OwningPawn->InputComponent;\n\x09\x09\x09\x09if(const AController* Controller = OwningPawn->Controller.Get())\n\x09\x09\x09\x09\x09return Controller->InputComponent.Get();\n\x09\x09\x09}\n\x09\x09return nullptr;\n\x09}*/" },
		{ "CPP_Default_bHasPriority", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
		{ "ToolTip", "UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category = \"Script|Input Binding\")\n       class UInputComponent* GetInputComponent(const bool bHasPriority = true) const;\n       virtual FORCEINLINE class UInputComponent* GetInputComponent_Implementation(const bool bHasPriority = true) const\n       {\n               if(OwningWeaponBase && GetOwningInventory())\n                       if(const APawn* OwningPawn = GetOwningInventory()->GetOwner<APawn>()) {\n                               if(!bHasPriority) return OwningPawn->InputComponent;\n                               if(const AController* Controller = OwningPawn->Controller.Get())\n                                       return Controller->InputComponent.Get();\n                       }\n               return nullptr;\n       }" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "GetInputComponent", nullptr, nullptr, sizeof(WeaponScriptBase_eventGetInputComponent_Parms), Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPriority_MetaData[];
#endif
		static void NewProp_bHasPriority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventGetInputComponentFromInventory_Parms, Inventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_bHasPriority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_bHasPriority_SetBit(void* Obj)
	{
		((WeaponScriptBase_eventGetInputComponentFromInventory_Parms*)Obj)->bHasPriority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_bHasPriority = { "bHasPriority", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponScriptBase_eventGetInputComponentFromInventory_Parms), &Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_bHasPriority_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_bHasPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_bHasPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventGetInputComponentFromInventory_Parms, ReturnValue), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_bHasPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Input Binding" },
		{ "CPP_Default_bHasPriority", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "GetInputComponentFromInventory", nullptr, nullptr, sizeof(WeaponScriptBase_eventGetInputComponentFromInventory_Parms), Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics
	{
		struct WeaponScriptBase_eventGetOwningInventory_Parms
		{
			UInventoryComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventGetOwningInventory_Parms, ReturnValue), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*UFUNCTION(BlueprintPure)\n\x09""FORCEINLINE class UInventoryComponent* GetOwningInventory() const { return OwningWeaponBase->OwningInventory; }*/" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
		{ "ToolTip", "UFUNCTION(BlueprintPure)\n       FORCEINLINE class UInventoryComponent* GetOwningInventory() const { return OwningWeaponBase->OwningInventory; }" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "GetOwningInventory", nullptr, nullptr, sizeof(WeaponScriptBase_eventGetOwningInventory_Parms), Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_IsEquipped_Statics
	{
		struct WeaponScriptBase_eventIsEquipped_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeaponScriptBase_IsEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponScriptBase_eventIsEquipped_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponScriptBase_IsEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponScriptBase_eventIsEquipped_Parms), &Z_Construct_UFunction_UWeaponScriptBase_IsEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_IsEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_IsEquipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_IsEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_IsEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "IsEquipped", nullptr, nullptr, sizeof(WeaponScriptBase_eventIsEquipped_Parms), Z_Construct_UFunction_UWeaponScriptBase_IsEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_IsEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_IsEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_IsEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_IsEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_IsEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics
	{
		struct WeaponScriptBase_eventIsEquippedBy_Parms
		{
			const UInventoryComponent* Inventory;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventIsEquippedBy_Parms, Inventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::NewProp_Inventory_MetaData)) };
	void Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponScriptBase_eventIsEquippedBy_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponScriptBase_eventIsEquippedBy_Parms), &Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "IsEquippedBy", nullptr, nullptr, sizeof(WeaponScriptBase_eventIsEquippedBy_Parms), Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled_Statics
	{
		struct WeaponScriptBase_eventIsLocallyControlled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponScriptBase_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponScriptBase_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*UFUNCTION(BlueprintPure)\n\x09""FORCEINLINE bool IsLocallyControlled() const { return OwningWeaponBase ? OwningWeaponBase->IsLocallyControlled() : false; }\n\n\x09UFUNCTION(BlueprintPure, Category = \"Script\")\n\x09""FORCEINLINE bool IsEquipped() const { return OwningWeaponBase && OwningWeaponBase->IsEquipped(); }\n\n\x09UFUNCTION(BlueprintPure, Category = \"Script\")\n\x09""FORCEINLINE bool IsEquippedBy(const class UInventoryComponent* Inventory) const { return OwningWeaponBase && OwningWeaponBase->IsEquippedBy(Inventory); }*/" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
		{ "ToolTip", "UFUNCTION(BlueprintPure)\n       FORCEINLINE bool IsLocallyControlled() const { return OwningWeaponBase ? OwningWeaponBase->IsLocallyControlled() : false; }\n\n       UFUNCTION(BlueprintPure, Category = \"Script\")\n       FORCEINLINE bool IsEquipped() const { return OwningWeaponBase && OwningWeaponBase->IsEquipped(); }\n\n       UFUNCTION(BlueprintPure, Category = \"Script\")\n       FORCEINLINE bool IsEquippedBy(const class UInventoryComponent* Inventory) const { return OwningWeaponBase && OwningWeaponBase->IsEquippedBy(Inventory); }" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "IsLocallyControlled", nullptr, nullptr, sizeof(WeaponScriptBase_eventIsLocallyControlled_Parms), Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics
	{
		struct WeaponScriptBase_eventOwningWeaponEquipped_Parms
		{
			AWeaponBase* Weapon;
			UCharacterInventoryComponent* Inventory;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventOwningWeaponEquipped_Parms, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventOwningWeaponEquipped_Parms, Inventory), Z_Construct_UClass_UCharacterInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::NewProp_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "OwningWeaponEquipped", nullptr, nullptr, sizeof(WeaponScriptBase_eventOwningWeaponEquipped_Parms), Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics
	{
		struct WeaponScriptBase_eventOwningWeaponUnequipped_Parms
		{
			AWeaponBase* Weapon;
			UCharacterInventoryComponent* Inventory;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventOwningWeaponUnequipped_Parms, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventOwningWeaponUnequipped_Parms, Inventory), Z_Construct_UClass_UCharacterInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::NewProp_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "OwningWeaponUnequipped", nullptr, nullptr, sizeof(WeaponScriptBase_eventOwningWeaponUnequipped_Parms), Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject_Statics
	{
		struct WeaponScriptBase_eventRemoveAllUObject_Parms
		{
			UObject* UserObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject_Statics::NewProp_UserObject = { "UserObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventRemoveAllUObject_Parms, UserObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject_Statics::NewProp_UserObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Input Binding" },
		{ "Comment", "// Removes all input bindings from our owning pawn from the passed in Object reference\n" },
		{ "DefaultToSelf", "UserObject" },
		{ "DisplayName", "Remove All Bindings" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
		{ "ToolTip", "Removes all input bindings from our owning pawn from the passed in Object reference" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "RemoveAllUObject", nullptr, nullptr, sizeof(WeaponScriptBase_eventRemoveAllUObject_Parms), Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics
	{
		struct WeaponScriptBase_eventRemoveAllUObjectFromInputComponent_Parms
		{
			UObject* UserObject;
			UInputComponent* InputComponent;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::NewProp_UserObject = { "UserObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventRemoveAllUObjectFromInputComponent_Parms, UserObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventRemoveAllUObjectFromInputComponent_Parms, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::NewProp_InputComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::NewProp_UserObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::NewProp_InputComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Input Binding" },
		{ "DefaultToSelf", "UserObject" },
		{ "DisplayName", "Remove All Bindings From Input Component" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "RemoveAllUObjectFromInputComponent", nullptr, nullptr, sizeof(WeaponScriptBase_eventRemoveAllUObjectFromInputComponent_Parms), Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics
	{
		struct WeaponScriptBase_eventRemoveBinding_Parms
		{
			FName InputName;
			TEnumAsByte<EInputEvent> InputEvent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputEvent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventRemoveBinding_Parms, InputName), METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::NewProp_InputEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventRemoveBinding_Parms, InputEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::NewProp_InputEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::NewProp_InputEvent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::NewProp_InputEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InputName" },
		{ "Category", "Script|Input Binding" },
		{ "Comment", "// Removes a specific action binding from our pawn owner\n" },
		{ "CPP_Default_InputEvent", "IE_Pressed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
		{ "ToolTip", "Removes a specific action binding from our pawn owner" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "RemoveBinding", nullptr, nullptr, sizeof(WeaponScriptBase_eventRemoveBinding_Parms), Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics
	{
		struct WeaponScriptBase_eventSetupBinding_Parms
		{
			FName InputName;
			TEnumAsByte<EInputEvent> InputEvent;
			FName FunctionName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputEvent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventSetupBinding_Parms, InputName), METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_InputEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventSetupBinding_Parms, InputEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_InputEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_InputEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventSetupBinding_Parms, FunctionName), METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_FunctionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_InputEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::NewProp_FunctionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InputName, FunctionName" },
		{ "Category", "Script|Input Binding" },
		{ "Comment", "// Adds a binding to our pawn owner\n" },
		{ "CPP_Default_FunctionName", "None" },
		{ "CPP_Default_InputEvent", "IE_Pressed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
		{ "ToolTip", "Adds a binding to our pawn owner" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "SetupBinding", nullptr, nullptr, sizeof(WeaponScriptBase_eventSetupBinding_Parms), Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_SetupBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_SetupBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponScriptBase_NoRegister()
	{
		return UWeaponScriptBase::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponScriptBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningWeaponBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningWeaponBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponScriptBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponScriptBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped, "BP_OwningWeaponEquipped" }, // 2237810237
		{ &Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped, "BP_OwningWeaponUnequipped" }, // 1121103337
		{ &Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput, "BP_RemoveInput" }, // 1743830998
		{ &Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput, "BP_SetupInput" }, // 669406385
		{ &Z_Construct_UFunction_UWeaponScriptBase_GetInputComponent, "GetInputComponent" }, // 1587707802
		{ &Z_Construct_UFunction_UWeaponScriptBase_GetInputComponentFromInventory, "GetInputComponentFromInventory" }, // 32801509
		{ &Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory, "GetOwningInventory" }, // 1280151050
		{ &Z_Construct_UFunction_UWeaponScriptBase_IsEquipped, "IsEquipped" }, // 3572224081
		{ &Z_Construct_UFunction_UWeaponScriptBase_IsEquippedBy, "IsEquippedBy" }, // 2644768139
		{ &Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled, "IsLocallyControlled" }, // 4246911772
		{ &Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped, "OwningWeaponEquipped" }, // 3812656403
		{ &Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped, "OwningWeaponUnequipped" }, // 1760956635
		{ &Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject, "RemoveAllUObject" }, // 2843880643
		{ &Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObjectFromInputComponent, "RemoveAllUObjectFromInputComponent" }, // 369439429
		{ &Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding, "RemoveBinding" }, // 3260399493
		{ &Z_Construct_UFunction_UWeaponScriptBase_SetupBinding, "SetupBinding" }, // 3290325148
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponScriptBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Weapon Scripts are instanced objects that reside on a Weapon. These scripts carry out\n *\x09""chunks of logic that are easily modifiable through inline variable editing in the owning\n *\x09Weapon's BP. Weapon scripts support replication as long as the owning Weapon is tethered\n *\x09to an inventory.\n */" },
		{ "IncludePath", "WeaponSystem/Weapons/WeaponScriptBase.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
		{ "ToolTip", "Weapon Scripts are instanced objects that reside on a Weapon. These scripts carry out\n   chunks of logic that are easily modifiable through inline variable editing in the owning\n   Weapon's BP. Weapon scripts support replication as long as the owning Weapon is tethered\n   to an inventory." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponScriptBase_Statics::NewProp_OwningWeaponBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Script" },
		{ "Comment", "// This is the weapon that owns this script\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
		{ "ToolTip", "This is the weapon that owns this script" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponScriptBase_Statics::NewProp_OwningWeaponBase = { "OwningWeaponBase", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponScriptBase, OwningWeaponBase), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponScriptBase_Statics::NewProp_OwningWeaponBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponScriptBase_Statics::NewProp_OwningWeaponBase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponScriptBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponScriptBase_Statics::NewProp_OwningWeaponBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponScriptBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponScriptBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponScriptBase_Statics::ClassParams = {
		&UWeaponScriptBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponScriptBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponScriptBase_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponScriptBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponScriptBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponScriptBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponScriptBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponScriptBase, 3906007003);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UWeaponScriptBase>()
	{
		return UWeaponScriptBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponScriptBase(Z_Construct_UClass_UWeaponScriptBase, &UWeaponScriptBase::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UWeaponScriptBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponScriptBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
