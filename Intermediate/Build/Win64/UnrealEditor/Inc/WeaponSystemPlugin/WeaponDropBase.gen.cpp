// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/WeaponDropBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponDropBase() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponDropBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponDropBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWeaponDropBase::execGetOwnedWeaponAndDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponBase**)Z_Param__Result=P_THIS->GetOwnedWeaponAndDestroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponDropBase::execSpawnWeaponDrop)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AWeaponDropBase> ,Z_Param_Out_WeaponDropClass);
		P_GET_OBJECT(AWeaponBase,Z_Param_Weapon);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Impulse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponDropBase**)Z_Param__Result=AWeaponDropBase::SpawnWeaponDrop(Z_Param_Out_WeaponDropClass,Z_Param_Weapon,Z_Param_Out_SpawnTransform,Z_Param_Out_Impulse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponDropBase::execSpawnWeaponDropFromClass)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AWeaponDropBase> ,Z_Param_Out_WeaponDropClass);
		P_GET_OBJECT(UClass,Z_Param_WeaponClass);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Impulse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponDropBase**)Z_Param__Result=AWeaponDropBase::SpawnWeaponDropFromClass(Z_Param_Out_WeaponDropClass,Z_Param_WeaponClass,Z_Param_Out_SpawnTransform,Z_Param_Out_Impulse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponDropBase::execOnWeaponRemoved)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_InWeapon);
		P_GET_OBJECT(UInventoryComponent,Z_Param_InOldInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWeaponRemoved_Implementation(Z_Param_InWeapon,Z_Param_InOldInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponDropBase::execOnRep_OwnedWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OwnedWeapon();
		P_NATIVE_END;
	}
	static FName NAME_AWeaponDropBase_BP_OnWeaponRemoved = FName(TEXT("BP_OnWeaponRemoved"));
	void AWeaponDropBase::BP_OnWeaponRemoved()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponDropBase_BP_OnWeaponRemoved),NULL);
	}
	static FName NAME_AWeaponDropBase_OnWeaponRemoved = FName(TEXT("OnWeaponRemoved"));
	void AWeaponDropBase::OnWeaponRemoved(AWeaponBase* InWeapon, UInventoryComponent* InOldInventory)
	{
		WeaponDropBase_eventOnWeaponRemoved_Parms Parms;
		Parms.InWeapon=InWeapon;
		Parms.InOldInventory=InOldInventory;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponDropBase_OnWeaponRemoved),&Parms);
	}
	void AWeaponDropBase::StaticRegisterNativesAWeaponDropBase()
	{
		UClass* Class = AWeaponDropBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwnedWeaponAndDestroy", &AWeaponDropBase::execGetOwnedWeaponAndDestroy },
			{ "OnRep_OwnedWeapon", &AWeaponDropBase::execOnRep_OwnedWeapon },
			{ "OnWeaponRemoved", &AWeaponDropBase::execOnWeaponRemoved },
			{ "SpawnWeaponDrop", &AWeaponDropBase::execSpawnWeaponDrop },
			{ "SpawnWeaponDropFromClass", &AWeaponDropBase::execSpawnWeaponDropFromClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponDropBase_BP_OnWeaponRemoved_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_BP_OnWeaponRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Drop" },
		{ "DisplayName", "On Weapon Removed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponDropBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponDropBase_BP_OnWeaponRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponDropBase, nullptr, "BP_OnWeaponRemoved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_BP_OnWeaponRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_BP_OnWeaponRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponDropBase_BP_OnWeaponRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponDropBase_BP_OnWeaponRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponDropBase_GetOwnedWeaponAndDestroy_Statics
	{
		struct WeaponDropBase_eventGetOwnedWeaponAndDestroy_Parms
		{
			AWeaponBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponDropBase_GetOwnedWeaponAndDestroy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDropBase_eventGetOwnedWeaponAndDestroy_Parms, ReturnValue), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponDropBase_GetOwnedWeaponAndDestroy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDropBase_GetOwnedWeaponAndDestroy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_GetOwnedWeaponAndDestroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Drop" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponDropBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponDropBase_GetOwnedWeaponAndDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponDropBase, nullptr, "GetOwnedWeaponAndDestroy", nullptr, nullptr, sizeof(WeaponDropBase_eventGetOwnedWeaponAndDestroy_Parms), Z_Construct_UFunction_AWeaponDropBase_GetOwnedWeaponAndDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_GetOwnedWeaponAndDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_GetOwnedWeaponAndDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_GetOwnedWeaponAndDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponDropBase_GetOwnedWeaponAndDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponDropBase_GetOwnedWeaponAndDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponDropBase_OnRep_OwnedWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_OnRep_OwnedWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponDropBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponDropBase_OnRep_OwnedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponDropBase, nullptr, "OnRep_OwnedWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_OnRep_OwnedWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_OnRep_OwnedWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponDropBase_OnRep_OwnedWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponDropBase_OnRep_OwnedWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOldInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOldInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::NewProp_InWeapon = { "InWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDropBase_eventOnWeaponRemoved_Parms, InWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::NewProp_InOldInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::NewProp_InOldInventory = { "InOldInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDropBase_eventOnWeaponRemoved_Parms, InOldInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::NewProp_InOldInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::NewProp_InOldInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::NewProp_InWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::NewProp_InOldInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Drop" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponDropBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponDropBase, nullptr, "OnWeaponRemoved", nullptr, nullptr, sizeof(WeaponDropBase_eventOnWeaponRemoved_Parms), Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics
	{
		struct WeaponDropBase_eventSpawnWeaponDrop_Parms
		{
			const TSubclassOf<AWeaponDropBase>  WeaponDropClass;
			AWeaponBase* Weapon;
			FTransform SpawnTransform;
			FVector Impulse;
			AWeaponDropBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDropClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponDropClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_WeaponDropClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_WeaponDropClass = { "WeaponDropClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDropBase_eventSpawnWeaponDrop_Parms, WeaponDropClass), Z_Construct_UClass_AWeaponDropBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_WeaponDropClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_WeaponDropClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDropBase_eventSpawnWeaponDrop_Parms, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDropBase_eventSpawnWeaponDrop_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_SpawnTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_Impulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDropBase_eventSpawnWeaponDrop_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_Impulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_Impulse_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDropBase_eventSpawnWeaponDrop_Parms, ReturnValue), Z_Construct_UClass_AWeaponDropBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_WeaponDropClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_SpawnTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_Impulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "AutoCreateRefTerm", "WeaponDropClass" },
		{ "Category", "Weapon Drop" },
		{ "DeterminesOutputType", "WeaponDropClass" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponDropBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponDropBase, nullptr, "SpawnWeaponDrop", nullptr, nullptr, sizeof(WeaponDropBase_eventSpawnWeaponDrop_Parms), Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C82405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics
	{
		struct WeaponDropBase_eventSpawnWeaponDropFromClass_Parms
		{
			const TSubclassOf<AWeaponDropBase>  WeaponDropClass;
			const TSubclassOf<AWeaponBase>  WeaponClass;
			FTransform SpawnTransform;
			FVector Impulse;
			AWeaponDropBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDropClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponDropClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_WeaponDropClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_WeaponDropClass = { "WeaponDropClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDropBase_eventSpawnWeaponDropFromClass_Parms, WeaponDropClass), Z_Construct_UClass_AWeaponDropBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_WeaponDropClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_WeaponDropClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDropBase_eventSpawnWeaponDropFromClass_Parms, WeaponClass), Z_Construct_UClass_AWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDropBase_eventSpawnWeaponDropFromClass_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_SpawnTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_Impulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDropBase_eventSpawnWeaponDropFromClass_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_Impulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_Impulse_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponDropBase_eventSpawnWeaponDropFromClass_Parms, ReturnValue), Z_Construct_UClass_AWeaponDropBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_WeaponDropClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_WeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_SpawnTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_Impulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "AutoCreateRefTerm", "WeaponDropClass,WeaponClass,SpawnTransform,Impulse" },
		{ "Category", "Weapon Drop" },
		{ "DeterminesOutputType", "WeaponDropClass" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponDropBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponDropBase, nullptr, "SpawnWeaponDropFromClass", nullptr, nullptr, sizeof(WeaponDropBase_eventSpawnWeaponDropFromClass_Parms), Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C82405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponDropBase_NoRegister()
	{
		return AWeaponDropBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponDropBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnedWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponDropBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponDropBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponDropBase_BP_OnWeaponRemoved, "BP_OnWeaponRemoved" }, // 3204557731
		{ &Z_Construct_UFunction_AWeaponDropBase_GetOwnedWeaponAndDestroy, "GetOwnedWeaponAndDestroy" }, // 301266543
		{ &Z_Construct_UFunction_AWeaponDropBase_OnRep_OwnedWeapon, "OnRep_OwnedWeapon" }, // 650179549
		{ &Z_Construct_UFunction_AWeaponDropBase_OnWeaponRemoved, "OnWeaponRemoved" }, // 1516439059
		{ &Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDrop, "SpawnWeaponDrop" }, // 3294371654
		{ &Z_Construct_UFunction_AWeaponDropBase_SpawnWeaponDropFromClass, "SpawnWeaponDropFromClass" }, // 959547149
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDropBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponSystem/Weapons/WeaponDropBase.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponDropBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponDropBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDropBase, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_SphereCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_SphereCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponDropBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDropBase, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_ProjectileMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_DefaultWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Configurations" },
		{ "Comment", "// The weapon spawned in during BeginPlay \n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponDropBase.h" },
		{ "ToolTip", "The weapon spawned in during BeginPlay" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_DefaultWeapon = { "DefaultWeapon", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDropBase, DefaultWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_DefaultWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_DefaultWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_OwnedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Drop" },
		{ "Comment", "// The weapon currently being held\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponDropBase.h" },
		{ "ToolTip", "The weapon currently being held" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_OwnedWeapon = { "OwnedWeapon", "OnRep_OwnedWeapon", (EPropertyFlags)0x0021080100000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDropBase, OwnedWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_OwnedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_OwnedWeapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponDropBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_SphereCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_ProjectileMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_DefaultWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDropBase_Statics::NewProp_OwnedWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponDropBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponDropBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponDropBase_Statics::ClassParams = {
		&AWeaponDropBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponDropBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDropBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponDropBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDropBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponDropBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponDropBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponDropBase, 1586924005);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<AWeaponDropBase>()
	{
		return AWeaponDropBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponDropBase(Z_Construct_UClass_AWeaponDropBase, &AWeaponDropBase::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("AWeaponDropBase"), false, nullptr, nullptr, nullptr);

	void AWeaponDropBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OwnedWeapon(TEXT("OwnedWeapon"));

		const bool bIsValid = true
			&& Name_OwnedWeapon == ClassReps[(int32)ENetFields_Private::OwnedWeapon].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWeaponDropBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponDropBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
