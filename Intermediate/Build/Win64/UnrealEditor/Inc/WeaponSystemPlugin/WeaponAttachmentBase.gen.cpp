// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponAttachmentBase() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponAttachmentBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponAttachmentBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UCharacterInventoryComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponAttachmentPoint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UItemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWeaponAttachmentBase::execInternal_OnUnequipped)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_W);
		P_GET_OBJECT(UCharacterInventoryComponent,Z_Param_InInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnUnequipped(Z_Param_W,Z_Param_InInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponAttachmentBase::execInternal_OnEquipped)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_W);
		P_GET_OBJECT(UCharacterInventoryComponent,Z_Param_InInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnEquipped(Z_Param_W,Z_Param_InInventory);
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
	DEFINE_FUNCTION(AWeaponAttachmentBase::execGetOwningInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInventoryComponent**)Z_Param__Result=P_THIS->GetOwningInventory();
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
	static FName NAME_AWeaponAttachmentBase_BP_OnAttached = FName(TEXT("BP_OnAttached"));
	void AWeaponAttachmentBase::BP_OnAttached()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponAttachmentBase_BP_OnAttached),NULL);
	}
	static FName NAME_AWeaponAttachmentBase_BP_OnEquipped = FName(TEXT("BP_OnEquipped"));
	void AWeaponAttachmentBase::BP_OnEquipped(UCharacterInventoryComponent* Inventory)
	{
		WeaponAttachmentBase_eventBP_OnEquipped_Parms Parms;
		Parms.Inventory=Inventory;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponAttachmentBase_BP_OnEquipped),&Parms);
	}
	static FName NAME_AWeaponAttachmentBase_BP_OnObtained = FName(TEXT("BP_OnObtained"));
	void AWeaponAttachmentBase::BP_OnObtained(UInventoryComponent* OwningInventory)
	{
		WeaponAttachmentBase_eventBP_OnObtained_Parms Parms;
		Parms.OwningInventory=OwningInventory;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponAttachmentBase_BP_OnObtained),&Parms);
	}
	static FName NAME_AWeaponAttachmentBase_BP_OnRemoved = FName(TEXT("BP_OnRemoved"));
	void AWeaponAttachmentBase::BP_OnRemoved()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponAttachmentBase_BP_OnRemoved),NULL);
	}
	static FName NAME_AWeaponAttachmentBase_BP_OnUnequipped = FName(TEXT("BP_OnUnequipped"));
	void AWeaponAttachmentBase::BP_OnUnequipped(UCharacterInventoryComponent* Inventory)
	{
		WeaponAttachmentBase_eventBP_OnUnequipped_Parms Parms;
		Parms.Inventory=Inventory;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponAttachmentBase_BP_OnUnequipped),&Parms);
	}
	static FName NAME_AWeaponAttachmentBase_BP_OnUnobtained = FName(TEXT("BP_OnUnobtained"));
	void AWeaponAttachmentBase::BP_OnUnobtained(UInventoryComponent* OldInventory)
	{
		WeaponAttachmentBase_eventBP_OnUnobtained_Parms Parms;
		Parms.OldInventory=OldInventory;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponAttachmentBase_BP_OnUnobtained),&Parms);
	}
	void AWeaponAttachmentBase::StaticRegisterNativesAWeaponAttachmentBase()
	{
		UClass* Class = AWeaponAttachmentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningInventory", &AWeaponAttachmentBase::execGetOwningInventory },
			{ "Internal_OnEquipped", &AWeaponAttachmentBase::execInternal_OnEquipped },
			{ "Internal_OnObtained", &AWeaponAttachmentBase::execInternal_OnObtained },
			{ "Internal_OnUnequipped", &AWeaponAttachmentBase::execInternal_OnUnequipped },
			{ "Internal_OnUnobtained", &AWeaponAttachmentBase::execInternal_OnUnobtained },
			{ "SetVisibility", &AWeaponAttachmentBase::execSetVisibility },
			{ "SpawnAttachment", &AWeaponAttachmentBase::execSpawnAttachment },
			{ "SpawnAttachmentUnattached", &AWeaponAttachmentBase::execSpawnAttachmentUnattached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnAttached_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnAttached_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "DisplayName", "On Attached" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "BP_OnAttached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventBP_OnEquipped_Parms, Inventory), Z_Construct_UClass_UCharacterInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics::NewProp_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "DisplayName", "On Equipped" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "BP_OnEquipped", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventBP_OnEquipped_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics::NewProp_OwningInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics::NewProp_OwningInventory = { "OwningInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventBP_OnObtained_Parms, OwningInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics::NewProp_OwningInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics::NewProp_OwningInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics::NewProp_OwningInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "DisplayName", "On Obtained" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "BP_OnObtained", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventBP_OnObtained_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnRemoved_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "DisplayName", "On Removed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "BP_OnRemoved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventBP_OnUnequipped_Parms, Inventory), Z_Construct_UClass_UCharacterInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics::NewProp_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "DisplayName", "On Unequipped" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "BP_OnUnequipped", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventBP_OnUnequipped_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics::NewProp_OldInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics::NewProp_OldInventory = { "OldInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventBP_OnUnobtained_Parms, OldInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics::NewProp_OldInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics::NewProp_OldInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics::NewProp_OldInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "DisplayName", "On Unobtained" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "BP_OnUnobtained", nullptr, nullptr, sizeof(WeaponAttachmentBase_eventBP_OnUnobtained_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics
	{
		struct WeaponAttachmentBase_eventGetOwningInventory_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventGetOwningInventory_Parms, ReturnValue), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "Comment", "// Get the Inventory that owns our owning weapon\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
		{ "ToolTip", "Get the Inventory that owns our owning weapon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "GetOwningInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::WeaponAttachmentBase_eventGetOwningInventory_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics
	{
		struct WeaponAttachmentBase_eventInternal_OnEquipped_Parms
		{
			AWeaponBase* W;
			UCharacterInventoryComponent* InInventory;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_W;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventInternal_OnEquipped_Parms, W), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::NewProp_InInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::NewProp_InInventory = { "InInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventInternal_OnEquipped_Parms, InInventory), Z_Construct_UClass_UCharacterInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::NewProp_InInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::NewProp_InInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::NewProp_InInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "Internal_OnEquipped", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::WeaponAttachmentBase_eventInternal_OnEquipped_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "Internal_OnObtained", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::WeaponAttachmentBase_eventInternal_OnObtained_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics
	{
		struct WeaponAttachmentBase_eventInternal_OnUnequipped_Parms
		{
			AWeaponBase* W;
			UCharacterInventoryComponent* InInventory;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_W;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventInternal_OnUnequipped_Parms, W), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::NewProp_InInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::NewProp_InInventory = { "InInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentBase_eventInternal_OnUnequipped_Parms, InInventory), Z_Construct_UClass_UCharacterInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::NewProp_InInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::NewProp_InInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::NewProp_InInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "Internal_OnUnequipped", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::WeaponAttachmentBase_eventInternal_OnUnequipped_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "Internal_OnUnobtained", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::WeaponAttachmentBase_eventInternal_OnUnobtained_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "SetVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::WeaponAttachmentBase_eventSetVisibility_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "SpawnAttachment", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::WeaponAttachmentBase_eventSpawnAttachment_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment_Statics::FuncParams);
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
		{ "DeterminesOutputType", "AttachmentClass" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentBase.h" },
		{ "ToolTip", "Does nothing but spawn the weapon attachment" },
		{ "WorldContextObject", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponAttachmentBase, nullptr, "SpawnAttachmentUnattached", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::WeaponAttachmentBase_eventSpawnAttachmentUnattached_Parms), Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C82405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponAttachmentBase);
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
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponAttachmentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponAttachmentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnAttached, "BP_OnAttached" }, // 106618859
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnEquipped, "BP_OnEquipped" }, // 2992493232
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnObtained, "BP_OnObtained" }, // 3062094496
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnRemoved, "BP_OnRemoved" }, // 1488570755
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnequipped, "BP_OnUnequipped" }, // 4246544367
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_BP_OnUnobtained, "BP_OnUnobtained" }, // 653369758
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_GetOwningInventory, "GetOwningInventory" }, // 882834712
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnEquipped, "Internal_OnEquipped" }, // 851693537
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnObtained, "Internal_OnObtained" }, // 772999765
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnequipped, "Internal_OnUnequipped" }, // 959010290
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_Internal_OnUnobtained, "Internal_OnUnobtained" }, // 4217770503
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_SetVisibility, "SetVisibility" }, // 1881111347
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachment, "SpawnAttachment" }, // 1644035833
		{ &Z_Construct_UFunction_AWeaponAttachmentBase_SpawnAttachmentUnattached, "SpawnAttachmentUnattached" }, // 980757232
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
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeaponAttachmentBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UItemInterface_NoRegister, (int32)VTABLE_OFFSET(AWeaponAttachmentBase, IItemInterface), false },  // 640128802
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
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponAttachmentBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponAttachmentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponAttachmentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponAttachmentBase()
	{
		if (!Z_Registration_Info_UClass_AWeaponAttachmentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponAttachmentBase.OuterSingleton, Z_Construct_UClass_AWeaponAttachmentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeaponAttachmentBase.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<AWeaponAttachmentBase>()
	{
		return AWeaponAttachmentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponAttachmentBase);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponAttachmentBase, AWeaponAttachmentBase::StaticClass, TEXT("AWeaponAttachmentBase"), &Z_Registration_Info_UClass_AWeaponAttachmentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponAttachmentBase), 498476086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_1634135658(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
