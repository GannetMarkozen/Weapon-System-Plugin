// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Inventories/CharacterInventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterInventoryComponent() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UCharacterInventoryComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UCharacterInventoryComponent();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UInventoryComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_WeaponSystemPlugin_eventCurrentWeaponChangedDelegate_Parms
		{
			AWeaponBase* CurrentWeapon;
			AWeaponBase* OldWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventCurrentWeaponChangedDelegate_Parms, CurrentWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature_Statics::NewProp_OldWeapon = { "OldWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventCurrentWeaponChangedDelegate_Parms, OldWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature_Statics::NewProp_CurrentWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature_Statics::NewProp_OldWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin, nullptr, "CurrentWeaponChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_WeaponSystemPlugin_eventCurrentWeaponChangedDelegate_Parms), Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execServer_EquipAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_EquipAt_Implementation(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execCanEquip)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_QueryWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEquip_Implementation(Z_Param_QueryWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execEquipNone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipNone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execEquipLast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipLast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execEquipNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipNext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execEquip)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_Weapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Equip(Z_Param_Weapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execEquipAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_bLocalPredicted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipAt(Z_Param_Index,Z_Param_bLocalPredicted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterInventoryComponent::execOnRep_CurrentWeapon)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_OldWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentWeapon(Z_Param_OldWeapon);
		P_NATIVE_END;
	}
	static FName NAME_UCharacterInventoryComponent_BP_CurrentWeaponChanged = FName(TEXT("BP_CurrentWeaponChanged"));
	void UCharacterInventoryComponent::BP_CurrentWeaponChanged(AWeaponBase* NewWeapon, AWeaponBase* OldWeapon)
	{
		CharacterInventoryComponent_eventBP_CurrentWeaponChanged_Parms Parms;
		Parms.NewWeapon=NewWeapon;
		Parms.OldWeapon=OldWeapon;
		ProcessEvent(FindFunctionChecked(NAME_UCharacterInventoryComponent_BP_CurrentWeaponChanged),&Parms);
	}
	static FName NAME_UCharacterInventoryComponent_CanEquip = FName(TEXT("CanEquip"));
	bool UCharacterInventoryComponent::CanEquip(const AWeaponBase* QueryWeapon) const
	{
		CharacterInventoryComponent_eventCanEquip_Parms Parms;
		Parms.QueryWeapon=QueryWeapon;
		const_cast<UCharacterInventoryComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UCharacterInventoryComponent_CanEquip),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UCharacterInventoryComponent_Server_EquipAt = FName(TEXT("Server_EquipAt"));
	void UCharacterInventoryComponent::Server_EquipAt(const int32 Index)
	{
		CharacterInventoryComponent_eventServer_EquipAt_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_UCharacterInventoryComponent_Server_EquipAt),&Parms);
	}
	void UCharacterInventoryComponent::StaticRegisterNativesUCharacterInventoryComponent()
	{
		UClass* Class = UCharacterInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanEquip", &UCharacterInventoryComponent::execCanEquip },
			{ "Equip", &UCharacterInventoryComponent::execEquip },
			{ "EquipAt", &UCharacterInventoryComponent::execEquipAt },
			{ "EquipLast", &UCharacterInventoryComponent::execEquipLast },
			{ "EquipNext", &UCharacterInventoryComponent::execEquipNext },
			{ "EquipNone", &UCharacterInventoryComponent::execEquipNone },
			{ "OnRep_CurrentWeapon", &UCharacterInventoryComponent::execOnRep_CurrentWeapon },
			{ "Server_EquipAt", &UCharacterInventoryComponent::execServer_EquipAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWeapon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventBP_CurrentWeaponChanged_Parms, NewWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged_Statics::NewProp_OldWeapon = { "OldWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventBP_CurrentWeaponChanged_Parms, OldWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged_Statics::NewProp_NewWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged_Statics::NewProp_OldWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Called on all instances whenever the current weapon has been changed. Equivalent to OnRep_CurrentWeapon\n" },
		{ "DisplayName", "Current Weapon Changed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
		{ "ToolTip", "Called on all instances whenever the current weapon has been changed. Equivalent to OnRep_CurrentWeapon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "BP_CurrentWeaponChanged", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventBP_CurrentWeaponChanged_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryWeapon;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::NewProp_QueryWeapon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::NewProp_QueryWeapon = { "QueryWeapon", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventCanEquip_Parms, QueryWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::NewProp_QueryWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::NewProp_QueryWeapon_MetaData)) };
	void Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterInventoryComponent_eventCanEquip_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterInventoryComponent_eventCanEquip_Parms), &Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::NewProp_QueryWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Override to add parameters on whether to equip or not. Called on both client and server.\n// If failed prediction, calls Client_EquipPredictionFailed.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
		{ "ToolTip", "Override to add parameters on whether to equip or not. Called on both client and server.\nIf failed prediction, calls Client_EquipPredictionFailed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "CanEquip", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventCanEquip_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_Equip_Statics
	{
		struct CharacterInventoryComponent_eventEquip_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Equip_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventEquip_Parms, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_Equip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Equip_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_Equip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_Equip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "Equip", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventEquip_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_Equip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Equip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_Equip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Equip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_Equip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_Equip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics
	{
		struct CharacterInventoryComponent_eventEquipAt_Parms
		{
			int32 Index;
			bool bLocalPredicted;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocalPredicted_MetaData[];
#endif
		static void NewProp_bLocalPredicted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalPredicted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventEquipAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::NewProp_bLocalPredicted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::NewProp_bLocalPredicted_SetBit(void* Obj)
	{
		((CharacterInventoryComponent_eventEquipAt_Parms*)Obj)->bLocalPredicted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::NewProp_bLocalPredicted = { "bLocalPredicted", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterInventoryComponent_eventEquipAt_Parms), &Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::NewProp_bLocalPredicted_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::NewProp_bLocalPredicted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::NewProp_bLocalPredicted_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::NewProp_bLocalPredicted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Call this locally to instantiate CurrentIndex. Will RPC to server.\n// Local prediction determines whether to call on client immediately.\n" },
		{ "CPP_Default_bLocalPredicted", "false" },
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
		{ "ToolTip", "Call this locally to instantiate CurrentIndex. Will RPC to server.\nLocal prediction determines whether to call on client immediately." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "EquipAt", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventEquipAt_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_EquipLast_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_EquipLast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_EquipLast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "EquipLast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_EquipLast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_EquipLast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_EquipLast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_EquipLast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_EquipNext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_EquipNext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_EquipNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "EquipNext", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_EquipNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_EquipNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_EquipNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_EquipNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_EquipNone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_EquipNone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_EquipNone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "EquipNone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_EquipNone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_EquipNone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_EquipNone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_EquipNone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics
	{
		struct CharacterInventoryComponent_eventOnRep_CurrentWeapon_Parms
		{
			const AWeaponBase* OldWeapon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics::NewProp_OldWeapon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics::NewProp_OldWeapon = { "OldWeapon", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventOnRep_CurrentWeapon_Parms, OldWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics::NewProp_OldWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics::NewProp_OldWeapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics::NewProp_OldWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "OnRep_CurrentWeapon", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventOnRep_CurrentWeapon_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterInventoryComponent_eventServer_EquipAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInventoryComponent, nullptr, "Server_EquipAt", nullptr, nullptr, sizeof(CharacterInventoryComponent_eventServer_EquipAt_Parms), Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterInventoryComponent_NoRegister()
	{
		return UCharacterInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CurrentWeaponChangedDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInventoryComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_BP_CurrentWeaponChanged, "BP_CurrentWeaponChanged" }, // 1203901527
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_CanEquip, "CanEquip" }, // 1451579837
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_Equip, "Equip" }, // 2407884612
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_EquipAt, "EquipAt" }, // 1697639530
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_EquipLast, "EquipLast" }, // 16854190
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_EquipNext, "EquipNext" }, // 1215323519
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_EquipNone, "EquipNone" }, // 124085539
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_OnRep_CurrentWeapon, "OnRep_CurrentWeapon" }, // 128656969
		{ &Z_Construct_UFunction_UCharacterInventoryComponent_Server_EquipAt, "Server_EquipAt" }, // 2803618781
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/* Derived from UInventoryComponent. Comes with built-in weapon swapping and equipping logic / notifies.\n * Owning Character should implement the ICharacterInventoryInterface if it wants to receive events.\n */" },
		{ "IncludePath", "WeaponSystem/Inventories/CharacterInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
		{ "ToolTip", "Derived from UInventoryComponent. Comes with built-in weapon swapping and equipping logic / notifies.\n* Owning Character should implement the ICharacterInventoryInterface if it wants to receive events." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", "OnRep_CurrentWeapon", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterInventoryComponent, CurrentWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "Comment", "// Can change in editor to determine what the current weapon index we want to start out with (must be a valid index)\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
		{ "ToolTip", "Can change in editor to determine what the current weapon index we want to start out with (must be a valid index)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterInventoryComponent, CurrentIndex), METADATA_PARAMS(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentWeaponChangedDelegate_MetaData[] = {
		{ "Category", "Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Inventories/CharacterInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentWeaponChangedDelegate = { "CurrentWeaponChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterInventoryComponent, CurrentWeaponChangedDelegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentWeaponChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentWeaponChangedDelegate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterInventoryComponent_Statics::NewProp_CurrentWeaponChangedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterInventoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterInventoryComponent_Statics::ClassParams = {
		&UCharacterInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterInventoryComponent, 4200501307);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UCharacterInventoryComponent>()
	{
		return UCharacterInventoryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterInventoryComponent(Z_Construct_UClass_UCharacterInventoryComponent, &UCharacterInventoryComponent::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UCharacterInventoryComponent"), false, nullptr, nullptr, nullptr);

	void UCharacterInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentWeapon(TEXT("CurrentWeapon"));

		const bool bIsValid = true
			&& Name_CurrentWeapon == ClassReps[(int32)ENetFields_Private::CurrentWeapon].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCharacterInventoryComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterInventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
