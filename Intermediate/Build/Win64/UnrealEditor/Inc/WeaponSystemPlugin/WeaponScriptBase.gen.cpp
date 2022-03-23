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
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UReplicatedObject();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
// End Cross Module References
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
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OwningWeaponUnequipped(Z_Param_Weapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponScriptBase::execOwningWeaponEquipped)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_Weapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OwningWeaponEquipped(Z_Param_Weapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponScriptBase::execCanTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanTick_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UWeaponScriptBase_BP_BeginPlay = FName(TEXT("BP_BeginPlay"));
	void UWeaponScriptBase::BP_BeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWeaponScriptBase_BP_BeginPlay),NULL);
	}
	static FName NAME_UWeaponScriptBase_BP_OwningWeaponEquipped = FName(TEXT("BP_OwningWeaponEquipped"));
	void UWeaponScriptBase::BP_OwningWeaponEquipped()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWeaponScriptBase_BP_OwningWeaponEquipped),NULL);
	}
	static FName NAME_UWeaponScriptBase_BP_OwningWeaponUnequipped = FName(TEXT("BP_OwningWeaponUnequipped"));
	void UWeaponScriptBase::BP_OwningWeaponUnequipped()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWeaponScriptBase_BP_OwningWeaponUnequipped),NULL);
	}
	static FName NAME_UWeaponScriptBase_BP_RemoveInput = FName(TEXT("BP_RemoveInput"));
	void UWeaponScriptBase::BP_RemoveInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWeaponScriptBase_BP_RemoveInput),NULL);
	}
	static FName NAME_UWeaponScriptBase_BP_SetupInput = FName(TEXT("BP_SetupInput"));
	void UWeaponScriptBase::BP_SetupInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWeaponScriptBase_BP_SetupInput),NULL);
	}
	static FName NAME_UWeaponScriptBase_BP_Tick = FName(TEXT("BP_Tick"));
	void UWeaponScriptBase::BP_Tick(const float DeltaTime)
	{
		WeaponScriptBase_eventBP_Tick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UWeaponScriptBase_BP_Tick),&Parms);
	}
	static FName NAME_UWeaponScriptBase_CanTick = FName(TEXT("CanTick"));
	bool UWeaponScriptBase::CanTick() const
	{
		WeaponScriptBase_eventCanTick_Parms Parms;
		const_cast<UWeaponScriptBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UWeaponScriptBase_CanTick),&Parms);
		return !!Parms.ReturnValue;
	}
	void UWeaponScriptBase::StaticRegisterNativesUWeaponScriptBase()
	{
		UClass* Class = UWeaponScriptBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanTick", &UWeaponScriptBase::execCanTick },
			{ "GetOwningInventory", &UWeaponScriptBase::execGetOwningInventory },
			{ "IsLocallyControlled", &UWeaponScriptBase::execIsLocallyControlled },
			{ "OwningWeaponEquipped", &UWeaponScriptBase::execOwningWeaponEquipped },
			{ "OwningWeaponUnequipped", &UWeaponScriptBase::execOwningWeaponUnequipped },
			{ "RemoveAllUObject", &UWeaponScriptBase::execRemoveAllUObject },
			{ "RemoveBinding", &UWeaponScriptBase::execRemoveBinding },
			{ "SetupBinding", &UWeaponScriptBase::execSetupBinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_BP_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_BP_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "DisplayName", "Begin Play" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_BP_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "BP_BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_BP_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_BP_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "DisplayName", "Owning Weapon Equippped" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "BP_OwningWeaponEquipped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped_Statics::Function_MetaDataParams)) };
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
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "DisplayName", "Owning Weapon Unequipped" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "BP_OwningWeaponUnequipped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped_Statics::Function_MetaDataParams)) };
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
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "BP_RemoveInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput_Statics::Function_MetaDataParams)) };
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
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "BP_SetupInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventBP_Tick_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics::NewProp_DeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "BP_Tick", nullptr, nullptr, sizeof(WeaponScriptBase_eventBP_Tick_Parms), Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_BP_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_BP_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponScriptBase_CanTick_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeaponScriptBase_CanTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponScriptBase_eventCanTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponScriptBase_CanTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponScriptBase_eventCanTick_Parms), &Z_Construct_UFunction_UWeaponScriptBase_CanTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_CanTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_CanTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScriptBase_CanTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "Comment", "// Override this to allow the script to tick\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
		{ "ToolTip", "Override this to allow the script to tick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScriptBase_CanTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScriptBase, nullptr, "CanTick", nullptr, nullptr, sizeof(WeaponScriptBase_eventCanTick_Parms), Z_Construct_UFunction_UWeaponScriptBase_CanTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_CanTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScriptBase_CanTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScriptBase_CanTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScriptBase_CanTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScriptBase_CanTick_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScriptBase.h" },
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
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventOwningWeaponEquipped_Parms, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped_Statics::NewProp_Weapon,
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
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScriptBase_eventOwningWeaponUnequipped_Parms, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped_Statics::NewProp_Weapon,
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
		(UObject* (*)())Z_Construct_UClass_UReplicatedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponScriptBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponScriptBase_BP_BeginPlay, "BP_BeginPlay" }, // 305887616
		{ &Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponEquipped, "BP_OwningWeaponEquipped" }, // 2430076901
		{ &Z_Construct_UFunction_UWeaponScriptBase_BP_OwningWeaponUnequipped, "BP_OwningWeaponUnequipped" }, // 3085020317
		{ &Z_Construct_UFunction_UWeaponScriptBase_BP_RemoveInput, "BP_RemoveInput" }, // 2680145660
		{ &Z_Construct_UFunction_UWeaponScriptBase_BP_SetupInput, "BP_SetupInput" }, // 1588154430
		{ &Z_Construct_UFunction_UWeaponScriptBase_BP_Tick, "BP_Tick" }, // 3998931727
		{ &Z_Construct_UFunction_UWeaponScriptBase_CanTick, "CanTick" }, // 2380500681
		{ &Z_Construct_UFunction_UWeaponScriptBase_GetOwningInventory, "GetOwningInventory" }, // 1527551697
		{ &Z_Construct_UFunction_UWeaponScriptBase_IsLocallyControlled, "IsLocallyControlled" }, // 2602702205
		{ &Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponEquipped, "OwningWeaponEquipped" }, // 2503409325
		{ &Z_Construct_UFunction_UWeaponScriptBase_OwningWeaponUnequipped, "OwningWeaponUnequipped" }, // 1342906194
		{ &Z_Construct_UFunction_UWeaponScriptBase_RemoveAllUObject, "RemoveAllUObject" }, // 2843880643
		{ &Z_Construct_UFunction_UWeaponScriptBase_RemoveBinding, "RemoveBinding" }, // 3260399493
		{ &Z_Construct_UFunction_UWeaponScriptBase_SetupBinding, "SetupBinding" }, // 3290325148
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponScriptBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Weapon Scripts are instanced objects that reside on a Weapon. These scripts carry out\n *\x09""chunks of logic that are easily modifiable through inline variable editing in the owning\n *\x09Weapon's BP. Weapon scripts support replication as long as the owning Weapon is tethered\n *\x09to an inventory.\n */" },
		{ "IncludePath", "WeaponSystem/Weapons/WeaponScriptBase.h" },
		{ "IsBlueprintBase", "true" },
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
	IMPLEMENT_CLASS(UWeaponScriptBase, 3559935747);
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
