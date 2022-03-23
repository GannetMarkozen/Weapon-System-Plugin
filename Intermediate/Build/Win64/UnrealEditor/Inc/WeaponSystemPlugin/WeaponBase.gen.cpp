// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/WeaponBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponAttachmentPoint_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponAttachmentBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponScriptBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics
	{
		struct _Script_WeaponSystemPlugin_eventWeaponUnobtainedDelegate_Parms
		{
			AWeaponBase* Weapon;
			UInventoryComponent* OldInventory;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventWeaponUnobtainedDelegate_Parms, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::NewProp_OldInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::NewProp_OldInventory = { "OldInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventWeaponUnobtainedDelegate_Parms, OldInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::NewProp_OldInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::NewProp_OldInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::NewProp_OldInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin, nullptr, "WeaponUnobtainedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_WeaponSystemPlugin_eventWeaponUnobtainedDelegate_Parms), Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics
	{
		struct _Script_WeaponSystemPlugin_eventWeaponObtainedDelegate_Parms
		{
			AWeaponBase* Weapon;
			UInventoryComponent* CurrentInventory;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventWeaponObtainedDelegate_Parms, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::NewProp_CurrentInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::NewProp_CurrentInventory = { "CurrentInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventWeaponObtainedDelegate_Parms, CurrentInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::NewProp_CurrentInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::NewProp_CurrentInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::NewProp_CurrentInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin, nullptr, "WeaponObtainedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_WeaponSystemPlugin_eventWeaponObtainedDelegate_Parms), Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature_Statics
	{
		struct _Script_WeaponSystemPlugin_eventWeaponUnequippedDelegate_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventWeaponUnequippedDelegate_Parms, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin, nullptr, "WeaponUnequippedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_WeaponSystemPlugin_eventWeaponUnequippedDelegate_Parms), Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature_Statics
	{
		struct _Script_WeaponSystemPlugin_eventWeaponEquippedDelegate_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventWeaponEquippedDelegate_Parms, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin, nullptr, "WeaponEquippedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_WeaponSystemPlugin_eventWeaponEquippedDelegate_Parms), Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AWeaponBase::execGetScriptsOfClass)
	{
		P_GET_TARRAY_REF(UWeaponScriptBase*,Z_Param_Out_OutScripts);
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UWeaponScriptBase> ,Z_Param_Out_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetScriptsOfClass(Z_Param_Out_OutScripts,Z_Param_Out_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponBase::execGetAttachmentPoints)
	{
		P_GET_TARRAY_REF(UWeaponAttachmentPoint*,Z_Param_Out_OutAttachmentPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAttachmentPoints(Z_Param_Out_OutAttachmentPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponBase::execGetAttachmentsOfClass)
	{
		P_GET_TARRAY_REF(AWeaponAttachmentBase*,Z_Param_Out_OutAttachments);
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AWeaponAttachmentBase> ,Z_Param_Out_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAttachmentsOfClass(Z_Param_Out_OutAttachments,Z_Param_Out_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponBase::execGetAttachments)
	{
		P_GET_TARRAY_REF(AWeaponAttachmentBase*,Z_Param_Out_OutAttachments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAttachments(Z_Param_Out_OutAttachments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponBase::execIsVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponBase::execSetVisibility)
	{
		P_GET_UBOOL(Z_Param_bVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibility(Z_Param_bVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponBase::execIsLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponBase::execOnRep_OwningInventory)
	{
		P_GET_OBJECT(UInventoryComponent,Z_Param_OldInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OwningInventory(Z_Param_OldInventory);
		P_NATIVE_END;
	}
	static FName NAME_AWeaponBase_BP_OnEquipped = FName(TEXT("BP_OnEquipped"));
	void AWeaponBase::BP_OnEquipped()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_BP_OnEquipped),NULL);
	}
	static FName NAME_AWeaponBase_BP_OnObtained = FName(TEXT("BP_OnObtained"));
	void AWeaponBase::BP_OnObtained(UInventoryComponent* CurrentInventory)
	{
		WeaponBase_eventBP_OnObtained_Parms Parms;
		Parms.CurrentInventory=CurrentInventory;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_BP_OnObtained),&Parms);
	}
	static FName NAME_AWeaponBase_BP_OnRep_OwningInventory = FName(TEXT("BP_OnRep_OwningInventory"));
	void AWeaponBase::BP_OnRep_OwningInventory(UInventoryComponent* OldInventory)
	{
		WeaponBase_eventBP_OnRep_OwningInventory_Parms Parms;
		Parms.OldInventory=OldInventory;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_BP_OnRep_OwningInventory),&Parms);
	}
	static FName NAME_AWeaponBase_BP_OnUnequipped = FName(TEXT("BP_OnUnequipped"));
	void AWeaponBase::BP_OnUnequipped()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_BP_OnUnequipped),NULL);
	}
	static FName NAME_AWeaponBase_BP_OnUnobtained = FName(TEXT("BP_OnUnobtained"));
	void AWeaponBase::BP_OnUnobtained(UInventoryComponent* OldInventory)
	{
		WeaponBase_eventBP_OnUnobtained_Parms Parms;
		Parms.OldInventory=OldInventory;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_BP_OnUnobtained),&Parms);
	}
	void AWeaponBase::StaticRegisterNativesAWeaponBase()
	{
		UClass* Class = AWeaponBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachmentPoints", &AWeaponBase::execGetAttachmentPoints },
			{ "GetAttachments", &AWeaponBase::execGetAttachments },
			{ "GetAttachmentsOfClass", &AWeaponBase::execGetAttachmentsOfClass },
			{ "GetScriptsOfClass", &AWeaponBase::execGetScriptsOfClass },
			{ "IsLocallyControlled", &AWeaponBase::execIsLocallyControlled },
			{ "IsVisible", &AWeaponBase::execIsVisible },
			{ "OnRep_OwningInventory", &AWeaponBase::execOnRep_OwningInventory },
			{ "SetVisibility", &AWeaponBase::execSetVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponBase_BP_OnEquipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_BP_OnEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "DisplayName", "On Equipped" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_BP_OnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "BP_OnEquipped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_BP_OnEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BP_OnEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_BP_OnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_BP_OnEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics::NewProp_CurrentInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics::NewProp_CurrentInventory = { "CurrentInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponBase_eventBP_OnObtained_Parms, CurrentInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics::NewProp_CurrentInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics::NewProp_CurrentInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics::NewProp_CurrentInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "DisplayName", "On Obtained" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "BP_OnObtained", nullptr, nullptr, sizeof(WeaponBase_eventBP_OnObtained_Parms), Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_BP_OnObtained()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_BP_OnObtained_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics::NewProp_OldInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics::NewProp_OldInventory = { "OldInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponBase_eventBP_OnRep_OwningInventory_Parms, OldInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics::NewProp_OldInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics::NewProp_OldInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics::NewProp_OldInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "DisplayName", "OnRep_Owning Inventory" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "BP_OnRep_OwningInventory", nullptr, nullptr, sizeof(WeaponBase_eventBP_OnRep_OwningInventory_Parms), Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_BP_OnUnequipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_BP_OnUnequipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "DisplayName", "On Unequipped" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_BP_OnUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "BP_OnUnequipped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_BP_OnUnequipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BP_OnUnequipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_BP_OnUnequipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_BP_OnUnequipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics::NewProp_OldInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics::NewProp_OldInventory = { "OldInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponBase_eventBP_OnUnobtained_Parms, OldInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics::NewProp_OldInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics::NewProp_OldInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics::NewProp_OldInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "DisplayName", "On Unobtained" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "BP_OnUnobtained", nullptr, nullptr, sizeof(WeaponBase_eventBP_OnUnobtained_Parms), Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics
	{
		struct WeaponBase_eventGetAttachmentPoints_Parms
		{
			TArray<UWeaponAttachmentPoint*> OutAttachmentPoints;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAttachmentPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutAttachmentPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAttachmentPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::NewProp_OutAttachmentPoints_Inner = { "OutAttachmentPoints", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWeaponAttachmentPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::NewProp_OutAttachmentPoints_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::NewProp_OutAttachmentPoints = { "OutAttachmentPoints", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponBase_eventGetAttachmentPoints_Parms, OutAttachmentPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::NewProp_OutAttachmentPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::NewProp_OutAttachmentPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::NewProp_OutAttachmentPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::NewProp_OutAttachmentPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetAttachmentPoints", nullptr, nullptr, sizeof(WeaponBase_eventGetAttachmentPoints_Parms), Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_GetAttachments_Statics
	{
		struct WeaponBase_eventGetAttachments_Parms
		{
			TArray<AWeaponAttachmentBase*> OutAttachments;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAttachments_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAttachments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_GetAttachments_Statics::NewProp_OutAttachments_Inner = { "OutAttachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWeaponAttachmentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWeaponBase_GetAttachments_Statics::NewProp_OutAttachments = { "OutAttachments", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponBase_eventGetAttachments_Parms, OutAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetAttachments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetAttachments_Statics::NewProp_OutAttachments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetAttachments_Statics::NewProp_OutAttachments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_GetAttachments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// Helper functions\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
		{ "ToolTip", "Helper functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetAttachments", nullptr, nullptr, sizeof(WeaponBase_eventGetAttachments_Parms), Z_Construct_UFunction_AWeaponBase_GetAttachments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetAttachments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_GetAttachments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetAttachments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_GetAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics
	{
		struct WeaponBase_eventGetAttachmentsOfClass_Parms
		{
			TArray<AWeaponAttachmentBase*> OutAttachments;
			const TSubclassOf<AWeaponAttachmentBase>  Class;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAttachments_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAttachments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::NewProp_OutAttachments_Inner = { "OutAttachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWeaponAttachmentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::NewProp_OutAttachments = { "OutAttachments", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponBase_eventGetAttachmentsOfClass_Parms, OutAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponBase_eventGetAttachmentsOfClass_Parms, Class), Z_Construct_UClass_AWeaponAttachmentBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::NewProp_OutAttachments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::NewProp_OutAttachments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Class" },
		{ "Category", "Weapon" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetAttachmentsOfClass", nullptr, nullptr, sizeof(WeaponBase_eventGetAttachmentsOfClass_Parms), Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics
	{
		struct WeaponBase_eventGetScriptsOfClass_Parms
		{
			TArray<UWeaponScriptBase*> OutScripts;
			const TSubclassOf<UWeaponScriptBase>  Class;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutScripts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutScripts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutScripts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::NewProp_OutScripts_Inner = { "OutScripts", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWeaponScriptBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::NewProp_OutScripts_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::NewProp_OutScripts = { "OutScripts", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponBase_eventGetScriptsOfClass_Parms, OutScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::NewProp_OutScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::NewProp_OutScripts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponBase_eventGetScriptsOfClass_Parms, Class), Z_Construct_UClass_UWeaponScriptBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::NewProp_OutScripts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::NewProp_OutScripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Class" },
		{ "Category", "Weapon" },
		{ "DeterminesOutput", "Class" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetScriptsOfClass", nullptr, nullptr, sizeof(WeaponBase_eventGetScriptsOfClass_Parms), Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_IsLocallyControlled_Statics
	{
		struct WeaponBase_eventIsLocallyControlled_Parms
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
	void Z_Construct_UFunction_AWeaponBase_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponBase_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponBase_IsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponBase_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_AWeaponBase_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_IsLocallyControlled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_IsLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_IsLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "IsLocallyControlled", nullptr, nullptr, sizeof(WeaponBase_eventIsLocallyControlled_Parms), Z_Construct_UFunction_AWeaponBase_IsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_IsLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_IsLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_IsLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_IsLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_IsLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_IsVisible_Statics
	{
		struct WeaponBase_eventIsVisible_Parms
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
	void Z_Construct_UFunction_AWeaponBase_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponBase_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponBase_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponBase_eventIsVisible_Parms), &Z_Construct_UFunction_AWeaponBase_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_IsVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_IsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_IsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// Whether or not this weapon's components are visible\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
		{ "ToolTip", "Whether or not this weapon's components are visible" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "IsVisible", nullptr, nullptr, sizeof(WeaponBase_eventIsVisible_Parms), Z_Construct_UFunction_AWeaponBase_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_IsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_IsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_IsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_IsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_IsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics
	{
		struct WeaponBase_eventOnRep_OwningInventory_Parms
		{
			const UInventoryComponent* OldInventory;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics::NewProp_OldInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics::NewProp_OldInventory = { "OldInventory", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponBase_eventOnRep_OwningInventory_Parms, OldInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics::NewProp_OldInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics::NewProp_OldInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics::NewProp_OldInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Equivalent to \"On Obtained\"\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
		{ "ToolTip", "Equivalent to \"On Obtained\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "OnRep_OwningInventory", nullptr, nullptr, sizeof(WeaponBase_eventOnRep_OwningInventory_Parms), Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics
	{
		struct WeaponBase_eventSetVisibility_Parms
		{
			bool bVisibility;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisibility_MetaData[];
#endif
		static void NewProp_bVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::NewProp_bVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::NewProp_bVisibility_SetBit(void* Obj)
	{
		((WeaponBase_eventSetVisibility_Parms*)Obj)->bVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::NewProp_bVisibility = { "bVisibility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponBase_eventSetVisibility_Parms), &Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::NewProp_bVisibility_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::NewProp_bVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::NewProp_bVisibility_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::NewProp_bVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// Sets this weapon's visibility and all of it's attachments.\n" },
		{ "CPP_Default_bVisibility", "false" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
		{ "ToolTip", "Sets this weapon's visibility and all of it's attachments." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "SetVisibility", nullptr, nullptr, sizeof(WeaponBase_eventSetVisibility_Parms), Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponBase_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponBase_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
	{
		return AWeaponBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scripts_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Scripts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scripts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Scripts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EquippedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnequippedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UnequippedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObtainedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ObtainedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnobtainedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UnobtainedDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponBase_BP_OnEquipped, "BP_OnEquipped" }, // 2881107784
		{ &Z_Construct_UFunction_AWeaponBase_BP_OnObtained, "BP_OnObtained" }, // 1975266530
		{ &Z_Construct_UFunction_AWeaponBase_BP_OnRep_OwningInventory, "BP_OnRep_OwningInventory" }, // 1702421
		{ &Z_Construct_UFunction_AWeaponBase_BP_OnUnequipped, "BP_OnUnequipped" }, // 3947829203
		{ &Z_Construct_UFunction_AWeaponBase_BP_OnUnobtained, "BP_OnUnobtained" }, // 2251267009
		{ &Z_Construct_UFunction_AWeaponBase_GetAttachmentPoints, "GetAttachmentPoints" }, // 2213006058
		{ &Z_Construct_UFunction_AWeaponBase_GetAttachments, "GetAttachments" }, // 482644158
		{ &Z_Construct_UFunction_AWeaponBase_GetAttachmentsOfClass, "GetAttachmentsOfClass" }, // 4253800229
		{ &Z_Construct_UFunction_AWeaponBase_GetScriptsOfClass, "GetScriptsOfClass" }, // 2340408016
		{ &Z_Construct_UFunction_AWeaponBase_IsLocallyControlled, "IsLocallyControlled" }, // 2384321065
		{ &Z_Construct_UFunction_AWeaponBase_IsVisible, "IsVisible" }, // 1845909840
		{ &Z_Construct_UFunction_AWeaponBase_OnRep_OwningInventory, "OnRep_OwningInventory" }, // 2504853382
		{ &Z_Construct_UFunction_AWeaponBase_SetVisibility, "SetVisibility" }, // 930343393
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09The base class for creating your own weapon class. The weapon class is designed to be fully replicated\n *\x09""and extremely modular. Most of your logic should not be on the weapon itself but on weapon scripts. Weapon\n *\x09scripts are instanced objects that can be applied to any weapon with in the Scripts array and are editable inline\n *\x09""allowing for a lot of flexibility. They have functions for binding input for the duration the weapon is equipped\n *\x09""and are fully replicated. Any RPC, replicated variable, NetMulticast are replicated properly on the Weapon and \n *\x09it's WeaponScripts. The Weapon should be tethered to an Inventory at all times to allow for replication.\n *\x09The CharacterInventoryComponent comes with built-in weapon swapping and equipping logic for your own generic\n *\x09Pawn class.\n */" },
		{ "IncludePath", "WeaponSystem/Weapons/WeaponBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
		{ "ToolTip", "The base class for creating your own weapon class. The weapon class is designed to be fully replicated\nand extremely modular. Most of your logic should not be on the weapon itself but on weapon scripts. Weapon\nscripts are instanced objects that can be applied to any weapon with in the Scripts array and are editable inline\nallowing for a lot of flexibility. They have functions for binding input for the duration the weapon is equipped\nand are fully replicated. Any RPC, replicated variable, NetMulticast are replicated properly on the Weapon and\nit's WeaponScripts. The Weapon should be tethered to an Inventory at all times to allow for replication.\nThe CharacterInventoryComponent comes with built-in weapon swapping and equipping logic for your own generic\nPawn class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_Scripts_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Configurations" },
		{ "Comment", "// Instanced objects that act as scripts for the weapon for built in logic attached to input or events.\n// Can change variables inline on the weapon itself. Replication is supported on these Objects.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
		{ "ToolTip", "Instanced objects that act as scripts for the weapon for built in logic attached to input or events.\nCan change variables inline on the weapon itself. Replication is supported on these Objects." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Scripts_Inner = { "Scripts", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWeaponScriptBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_Scripts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_Scripts_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_Scripts_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Configurations" },
		{ "Comment", "// Instanced objects that act as scripts for the weapon for built in logic attached to input or events.\n// Can change variables inline on the weapon itself. Replication is supported on these Objects.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
		{ "ToolTip", "Instanced objects that act as scripts for the weapon for built in logic attached to input or events.\nCan change variables inline on the weapon itself. Replication is supported on these Objects." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Scripts = { "Scripts", nullptr, (EPropertyFlags)0x002008800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, Scripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_Scripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_Scripts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_OwningInventory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "State" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_OwningInventory = { "OwningInventory", "OnRep_OwningInventory", (EPropertyFlags)0x002008010008003c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, OwningInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_OwningInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_OwningInventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_EquippedDelegate_MetaData[] = {
		{ "Category", "Weapon|Delegates" },
		{ "Comment", "// Called when this weapon is equipped by a UCharacterInventoryComponent\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
		{ "ToolTip", "Called when this weapon is equipped by a UCharacterInventoryComponent" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_EquippedDelegate = { "EquippedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, EquippedDelegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_EquippedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_EquippedDelegate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_UnequippedDelegate_MetaData[] = {
		{ "Category", "Weapon|Delegates" },
		{ "Comment", "// Called when this weapon is unequipped by a UCharacterInventoryComponent\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
		{ "ToolTip", "Called when this weapon is unequipped by a UCharacterInventoryComponent" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_UnequippedDelegate = { "UnequippedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, UnequippedDelegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_UnequippedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_UnequippedDelegate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_ObtainedDelegate_MetaData[] = {
		{ "Category", "Weapon|Delegates" },
		{ "Comment", "// Called whenever the owning inventory becomes valid, thus obtained by an inventory.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
		{ "ToolTip", "Called whenever the owning inventory becomes valid, thus obtained by an inventory." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ObtainedDelegate = { "ObtainedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, ObtainedDelegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_ObtainedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_ObtainedDelegate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_UnobtainedDelegate_MetaData[] = {
		{ "Category", "Weapon|Delegates" },
		{ "Comment", "// Called whenever the owning inventory becomes invalid, meaning this weapon has been dropped essentially.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponBase.h" },
		{ "ToolTip", "Called whenever the owning inventory becomes invalid, meaning this weapon has been dropped essentially." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_UnobtainedDelegate = { "UnobtainedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, UnobtainedDelegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_UnobtainedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_UnobtainedDelegate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Scripts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Scripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_OwningInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_EquippedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_UnequippedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_ObtainedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_UnobtainedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
		&AWeaponBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponBase, 2373267061);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<AWeaponBase>()
	{
		return AWeaponBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponBase(Z_Construct_UClass_AWeaponBase, &AWeaponBase::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("AWeaponBase"), false, nullptr, nullptr, nullptr);

	void AWeaponBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OwningInventory(TEXT("OwningInventory"));

		const bool bIsValid = true
			&& Name_OwningInventory == ClassReps[(int32)ENetFields_Private::OwningInventory].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWeaponBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
