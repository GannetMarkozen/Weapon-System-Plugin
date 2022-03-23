// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponAttachmentBase() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponAttachmentBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponAttachmentBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponAttachmentPoint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(AWeaponAttachmentBase::execInternal_OnUnequipped)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_W);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnUnequipped(Z_Param_W);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execInternal_OnEquipped)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_W);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnEquipped(Z_Param_W);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execInternal_OnUnobtained)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_W);
		P_GET_OBJECT(UInventoryComponent,Z_Param_InOldInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnUnobtained(Z_Param_W,Z_Param_InOldInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execInternal_OnObtained)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_W);
		P_GET_OBJECT(UInventoryComponent,Z_Param_InOwningInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnObtained(Z_Param_W,Z_Param_InOwningInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execSetVisibility)
	{
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibility(Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execOnUnobtained_Implementation)
	{
		P_GET_OBJECT(UInventoryComponent,Z_Param_OldInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnobtained_Implementation(Z_Param_OldInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execOnUnobtained)
	{
		P_GET_OBJECT(UInventoryComponent,Z_Param_OldInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnobtained_Implementation(Z_Param_OldInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execOnObtained_Implementation)
	{
		P_GET_OBJECT(UInventoryComponent,Z_Param_OwningInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObtained_Implementation(Z_Param_OwningInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execOnObtained)
	{
		P_GET_OBJECT(UInventoryComponent,Z_Param_OwningInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObtained_Implementation(Z_Param_OwningInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execOnUnequipped_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnequipped_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execOnUnequipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnequipped_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execOnEquipped_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquipped_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execOnEquipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquipped_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execOnRemoved_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemoved_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execOnRemoved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemoved_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execOnAttached_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttached_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execOnAttached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttached_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execSpawnAttachmentUnattached)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AWeaponAttachmentBase> ,Z_Param_Out_AttachmentClass);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponAttachmentBase**)Z_Param__Result=AWeaponAttachmentBase::SpawnAttachmentUnattached(Z_Param_WorldContextObject,Z_Param_Out_AttachmentClass,Z_Param_Out_WorldTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execSpawnAttachment)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AWeaponAttachmentBase> ,Z_Param_Out_AttachmentClass);
		P_GET_OBJECT(UWeaponAttachmentPoint,Z_Param_AttachmentPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponAttachmentBase**)Z_Param__Result=AWeaponAttachmentBase::SpawnAttachment(Z_Param_Out_AttachmentClass,Z_Param_AttachmentPoint);
		P_NATIVE_END;
	}
	static FName NAME_AWeaponAttachmentBase_OnAttached = FName(TEXT("OnAttached"));
	void AWeaponAttachmentBase::OnAttached()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponAttachmentBase_OnAttached),NULL);
	}
	static FName NAME_AWeaponAttachmentBase_OnEquipped = FName(TEXT("OnEquipped"));
	void AWeaponAttachmentBase::OnEquipped()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponAttachmentBase_OnEquipped),NULL);
	}
	static FName NAME_AWeaponAttachmentBase_OnObtained = FName(TEXT("OnObtained"));
	void AWeaponAttachmentBase::OnObtained(UInventoryComponent* OwningInventory)
	{
		WeaponAttachmentBase_eventOnObtained_Parms Parms;
		Parms.OwningInventory=OwningInventory;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponAttachmentBase_OnObtained),&Parms);
	}
	static FName NAME_AWeaponAttachmentBase_OnRemoved = FName(TEXT("OnRemoved"));
	void AWeaponAttachmentBase::OnRemoved()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponAttachmentBase_OnRemoved),NULL);
	}
	static FName NAME_AWeaponAttachmentBase_OnUnequipped = FName(TEXT("OnUnequipped"));
	void AWeaponAttachmentBase::OnUnequipped()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponAttachmentBase_OnUnequipped),NULL);
	}
	static FName NAME_AWeaponAttachmentBase_OnUnobtained = FName(TEXT("OnUnobtained"));
	void AWeaponAttachmentBase::OnUnobtained(UInventoryComponent* OldInventory)
	{
		WeaponAttachmentBase_eventOnUnobtained_Parms Parms;
		Parms.OldInventory=OldInventory;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponAttachmentBase_OnUnobtained),&Parms);
	}
	void AWeaponAttachmentBase::StaticRegisterNativesAWeaponAttachmentBase()
	{
		UClass* Class = AWeaponAttachmentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Internal_OnEquipped", &AWeaponAttachmentBase::execInternal_OnEquipped },
			{ "Internal_OnObtained", &AWeaponAttachmentBase::execInternal_OnObtained },
			{ "Internal_OnUnequipped", &AWeaponAttachmentBase::execInternal_OnUnequipped },
			{ "Internal_OnUnobtained", &AWeaponAttachmentBase::execInternal_OnUnobtained },
			{ "OnAttached", &AWeaponAttachmentBase::execOnAttached },
			{ "OnAttached_Implementation", &AWeaponAttachmentBase::execOnAttached_Implementation },
			{ "OnEquipped", &AWeaponAttachmentBase::execOnEquipped },
			{ "OnEquipped_Implementation", &AWeaponAttachmentBase::execOnEquipped_Implementation },
			{ "OnObtained", &AWeaponAttachmentBase::execOnObtained },
			{ "OnObtained_Implementation", &AWeaponAttachmentBase::execOnObtained_Implementation },
			{ "OnRemoved", &AWeaponAttachmentBase::execOnRemoved },
			{ "OnRemoved_Implementation", &AWeaponAttachmentBase::execOnRemoved_Implementation },
			{ "OnUnequipped", &AWeaponAttachmentBase::execOnUnequipped },
			{ "OnUnequipped_Implementation", &AWeaponAttachmentBase::execOnUnequipped_Implementation },
			{ "OnUnobtained", &AWeaponAttachmentBase::execOnUnobtained },
			{ "OnUnobtained_Implementation", &AWeaponAttachmentBase::execOnUnobtained_Implementation },
			{ "SetVisibility", &AWeaponAttachmentBase::execSetVisibility },
			{ "SpawnAttachment", &AWeaponAttachmentBase::execSpawnAttachment },
			{ "SpawnAttachmentUnattached", &AWeaponAttachmentBase::execSpawnAttachmentUnattached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics
	{
		struct WeaponAttachmentBase_eventInternal_OnEquipped_Parms
		{
			AWeaponBase* W;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_W;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventInternal_OnEquipped_Parms, W), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::NewProp_W,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "Internal_OnEquipped", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventInternal_OnEquipped_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics
	{
		struct WeaponAttachmentBase_eventInternal_OnObtained_Parms
		{
			AWeaponBase* W;
			UInventoryComponent* InOwningInventory;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_W;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOwningInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwningInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventInternal_OnObtained_Parms, W), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::NewProp_InOwningInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::NewProp_InOwningInventory = { "InOwningInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventInternal_OnObtained_Parms, InOwningInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::NewProp_InOwningInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::NewProp_InOwningInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::NewProp_InOwningInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "Internal_OnObtained", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventInternal_OnObtained_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics
	{
		struct WeaponAttachmentBase_eventInternal_OnUnequipped_Parms
		{
			AWeaponBase* W;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_W;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventInternal_OnUnequipped_Parms, W), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::NewProp_W,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "Internal_OnUnequipped", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventInternal_OnUnequipped_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics
	{
		struct WeaponAttachmentBase_eventInternal_OnUnobtained_Parms
		{
			AWeaponBase* W;
			UInventoryComponent* InOldInventory;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_W;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventInternal_OnUnobtained_Parms, W), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::NewProp_InOldInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::NewProp_InOldInventory = { "InOldInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventInternal_OnUnobtained_Parms, InOldInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::NewProp_InOldInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::NewProp_InOldInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::NewProp_InOldInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "Internal_OnUnobtained", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventInternal_OnUnobtained_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "Comment", "// Equivalent to BeginPlay but is called after replication when the OwningWeapon is valid.\n// OwningWeapon should always be valid unless the Weapon Attachment Point was placed on an\n// actor that does not eventually have it's owner derive from WeaponBase (which you should never do).\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
		{ "ToolTip", "Equivalent to BeginPlay but is called after replication when the OwningWeapon is valid.\nOwningWeapon should always be valid unless the Weapon Attachment Point was placed on an\nactor that does not eventually have it's owner derive from WeaponBase (which you should never do)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "OnAttached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Implementation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "Comment", "// The C++ parent implementation of On Attached\n" },
		{ "DisplayName", "Parent: On Attached" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
		{ "ToolTip", "The C++ parent implementation of On Attached" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "OnAttached_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "OnEquipped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Implementation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "DisplayName", "Parent: On Equipped" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "OnEquipped_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics::NewProp_OwningInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics::NewProp_OwningInventory = { "OwningInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventOnObtained_Parms, OwningInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics::NewProp_OwningInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics::NewProp_OwningInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics::NewProp_OwningInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "Comment", "// Called whenever the owning inventory of the owning weapon changes to a valid inventory\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
		{ "ToolTip", "Called whenever the owning inventory of the owning weapon changes to a valid inventory" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "OnObtained", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventOnObtained_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics
	{
		struct WeaponAttachmentBase_eventOnObtained_Implementation_Parms
		{
			UInventoryComponent* OwningInventory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics::NewProp_OwningInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics::NewProp_OwningInventory = { "OwningInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventOnObtained_Implementation_Parms, OwningInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics::NewProp_OwningInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics::NewProp_OwningInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics::NewProp_OwningInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "DisplayName", "Parent: On Obtained" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "OnObtained_Implementation", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventOnObtained_Implementation_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "Comment", "// Equivalent to OnDestroy but is called right beforehand\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
		{ "ToolTip", "Equivalent to OnDestroy but is called right beforehand" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "OnRemoved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Implementation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "DisplayName", "Parent: On Removed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "OnRemoved_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "OnUnequipped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Implementation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "DisplayName", "Parent: On Unequipped" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "OnUnequipped_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics::NewProp_OldInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics::NewProp_OldInventory = { "OldInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventOnUnobtained_Parms, OldInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics::NewProp_OldInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics::NewProp_OldInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics::NewProp_OldInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "Comment", "// Called whenever the owning inventory of the owning weapon becomes invalid. Also called on destroyed\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
		{ "ToolTip", "Called whenever the owning inventory of the owning weapon becomes invalid. Also called on destroyed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "OnUnobtained", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventOnUnobtained_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics
	{
		struct WeaponAttachmentBase_eventOnUnobtained_Implementation_Parms
		{
			UInventoryComponent* OldInventory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics::NewProp_OldInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics::NewProp_OldInventory = { "OldInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventOnUnobtained_Implementation_Parms, OldInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics::NewProp_OldInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics::NewProp_OldInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics::NewProp_OldInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "DisplayName", "Parent: On Unobtained" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "OnUnobtained_Implementation", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventOnUnobtained_Implementation_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics
	{
		struct WeaponAttachmentBase_eventSetVisibility_Parms
		{
			bool bVisible;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::NewProp_bVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((WeaponAttachmentBase_eventSetVisibility_Parms*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponAttachmentBase_eventSetVisibility_Parms), &Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::NewProp_bVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "CPP_Default_bVisible", "false" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "SetVisibility", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventSetVisibility_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics
	{
		struct WeaponAttachmentBase_eventSpawnAttachment_Parms
		{
			const TSubclassOf<AWeaponAttachmentBase>  AttachmentClass;
			UWeaponAttachmentPoint* AttachmentPoint;
			AWeaponAttachmentBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::NewProp_AttachmentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::NewProp_AttachmentClass = { "AttachmentClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventSpawnAttachment_Parms, AttachmentClass), Z_Construct_UClass_AWeaponAttachmentBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::NewProp_AttachmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::NewProp_AttachmentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::NewProp_AttachmentPoint_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::NewProp_AttachmentPoint = { "AttachmentPoint", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventSpawnAttachment_Parms, AttachmentPoint), Z_Construct_UClass_UWeaponAttachmentPoint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::NewProp_AttachmentPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::NewProp_AttachmentPoint_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventSpawnAttachment_Parms, ReturnValue), Z_Construct_UClass_AWeaponAttachmentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::NewProp_AttachmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::NewProp_AttachmentPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "AttachmentClass" },
		{ "Category", "Attachment" },
		{ "Comment", "// Spawns weapon attachment and attaches it to the attachment point. Only call on server. If set attachment point that will be where the weapon is spawned\n" },
		{ "DefaultToSelf", "AttachmentPoint" },
		{ "DeterminesOutputType", "AttachmentClass" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
		{ "ToolTip", "Spawns weapon attachment and attaches it to the attachment point. Only call on server. If set attachment point that will be where the weapon is spawned" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "SpawnAttachment", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventSpawnAttachment_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics
	{
		struct WeaponAttachmentBase_eventSpawnAttachmentUnattached_Parms
		{
			const UObject* WorldContextObject;
			const TSubclassOf<AWeaponAttachmentBase>  AttachmentClass;
			FTransform WorldTransform;
			AWeaponAttachmentBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventSpawnAttachmentUnattached_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_AttachmentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_AttachmentClass = { "AttachmentClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventSpawnAttachmentUnattached_Parms, AttachmentClass), Z_Construct_UClass_AWeaponAttachmentBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_AttachmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_AttachmentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventSpawnAttachmentUnattached_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_WorldTransform_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventSpawnAttachmentUnattached_Parms, ReturnValue), Z_Construct_UClass_AWeaponAttachmentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_AttachmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "AttachmentClass, WorldTransform" },
		{ "Category", "Attachment" },
		{ "Comment", "// Does nothing but spawn the weapon attachment\n" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DeterminesOutputType", "AttachmentClass" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
		{ "ToolTip", "Does nothing but spawn the weapon attachment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "SpawnAttachmentUnattached", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventSpawnAttachmentUnattached_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C82405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponAttachmentBase_NoRegister()
	{
		return AWeaponAttachmentBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponAttachmentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponAttachmentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponAttachmentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped, "Internal_OnEquipped" }, // 2351710582
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained, "Internal_OnObtained" }, // 209923426
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped, "Internal_OnUnequipped" }, // 208843231
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained, "Internal_OnUnobtained" }, // 1869058782
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached, "OnAttached" }, // 4280499806
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_OnAttached_Implementation, "OnAttached_Implementation" }, // 1190749316
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped, "OnEquipped" }, // 1871234610
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_OnEquipped_Implementation, "OnEquipped_Implementation" }, // 176001175
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained, "OnObtained" }, // 1772134365
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_OnObtained_Implementation, "OnObtained_Implementation" }, // 4154734617
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved, "OnRemoved" }, // 1689225397
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_OnRemoved_Implementation, "OnRemoved_Implementation" }, // 543293294
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped, "OnUnequipped" }, // 1938476075
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_OnUnequipped_Implementation, "OnUnequipped_Implementation" }, // 1759787237
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained, "OnUnobtained" }, // 3994249294
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_OnUnobtained_Implementation, "OnUnobtained_Implementation" }, // 8526938
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility, "SetVisibility" }, // 125349569
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment, "SpawnAttachment" }, // 3760523635
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached, "SpawnAttachmentUnattached" }, // 1544954123
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponAttachmentBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponAttachmentBase_Statics::NewProp_OwningWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attachment" },
		{ "Comment", "// The weapon that owns this attachment\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
		{ "ToolTip", "The weapon that owns this attachment" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponAttachmentBase_Statics::NewProp_OwningWeapon = { "OwningWeapon", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponAttachmentBase, OwningWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponAttachmentBase_Statics::NewProp_OwningWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponAttachmentBase_Statics::NewProp_OwningWeapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponAttachmentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponAttachmentBase_Statics::NewProp_OwningWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponAttachmentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponAttachmentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponAttachmentBase_Statics::ClassParams = {
		&AWeaponAttachmentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponAttachmentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponAttachmentBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponAttachmentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponAttachmentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponAttachmentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponAttachmentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponAttachmentBase, 2401906604);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<AWeaponAttachmentBase>()
	{
		return AWeaponAttachmentBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponAttachmentBase(Z_Construct_UClass_AWeaponAttachmentBase, &AWeaponAttachmentBase::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("AWeaponAttachmentBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponAttachmentBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
