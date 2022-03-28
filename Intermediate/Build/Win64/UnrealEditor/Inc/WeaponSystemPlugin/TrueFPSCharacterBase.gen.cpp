// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Character/TrueFPSCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrueFPSCharacterBase() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_ATrueFPSCharacterBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRecoilParams();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UDamageInterface_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UDamageInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_ATrueFPSCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UCharacterInventoryComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature_Statics
	{
		struct _Script_WeaponSystemPlugin_eventCurrentWeaponChangedDelgate_Parms
		{
			AWeapon* CurrentWeapon;
			AWeapon* OldWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventCurrentWeaponChangedDelgate_Parms, CurrentWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature_Statics::NewProp_OldWeapon = { "OldWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventCurrentWeaponChangedDelgate_Parms, OldWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature_Statics::NewProp_CurrentWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature_Statics::NewProp_OldWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin, nullptr, "CurrentWeaponChangedDelgate__DelegateSignature", nullptr, nullptr, sizeof(_Script_WeaponSystemPlugin_eventCurrentWeaponChangedDelgate_Parms), Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics
	{
		struct _Script_WeaponSystemPlugin_eventOnLandedMultiDelegate_Parms
		{
			ATrueFPSCharacterBase* Character;
			FHitResult Hit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventOnLandedMultiDelegate_Parms, Character), Z_Construct_UClass_ATrueFPSCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventOnLandedMultiDelegate_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::NewProp_Hit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin, nullptr, "OnLandedMultiDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_WeaponSystemPlugin_eventOnLandedMultiDelegate_Parms), Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FRecoilParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEAPONSYSTEMPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FRecoilParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecoilParams, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("RecoilParams"), sizeof(FRecoilParams), Get_Z_Construct_UScriptStruct_FRecoilParams_Hash());
	}
	return Singleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FRecoilParams>()
{
	return FRecoilParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecoilParams(FRecoilParams::StaticStruct, TEXT("/Script/WeaponSystemPlugin"), TEXT("RecoilParams"), false, nullptr, nullptr);
static struct FScriptStruct_WeaponSystemPlugin_StaticRegisterNativesFRecoilParams
{
	FScriptStruct_WeaponSystemPlugin_StaticRegisterNativesFRecoilParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RecoilParams")),new UScriptStruct::TCppStructOps<FRecoilParams>);
	}
} ScriptStruct_WeaponSystemPlugin_StaticRegisterNativesFRecoilParams;
	struct Z_Construct_UScriptStruct_FRecoilParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecoilParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecoilParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecoilParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "RecoilParams" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecoilParams, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "RecoilParams" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecoilParams, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "RecoilParams" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecoilParams, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "RecoilParams" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecoilParams, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Magnitude_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecoilParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilParams_Statics::NewProp_Magnitude,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecoilParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"RecoilParams",
		sizeof(FRecoilParams),
		alignof(FRecoilParams),
		Z_Construct_UScriptStruct_FRecoilParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecoilParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecoilParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecoilParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponSystemPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecoilParams"), sizeof(FRecoilParams), Get_Z_Construct_UScriptStruct_FRecoilParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRecoilParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecoilParams_Hash() { return 106742654U; }
	DEFINE_FUNCTION(IDamageInterface::execApplyDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_KnockbackMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDamage_Implementation(Z_Param_Damage,Z_Param_Out_Direction,Z_Param_KnockbackMultiplier);
		P_NATIVE_END;
	}
	void IDamageInterface::ApplyDamage(float Damage, FVector const& Direction, float KnockbackMultiplier)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ApplyDamage instead.");
	}
	void UDamageInterface::StaticRegisterNativesUDamageInterface()
	{
		UClass* Class = UDamageInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDamage", &IDamageInterface::execApplyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageInterface_eventApplyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageInterface_eventApplyDamage_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::NewProp_Direction_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::NewProp_KnockbackMultiplier = { "KnockbackMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageInterface_eventApplyDamage_Parms, KnockbackMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::NewProp_KnockbackMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "AutoCreateRefTerm", "Direction" },
		{ "Category", "Damage Interface" },
		{ "CPP_Default_Direction", "" },
		{ "CPP_Default_KnockbackMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageInterface, nullptr, "ApplyDamage", nullptr, nullptr, sizeof(DamageInterface_eventApplyDamage_Parms), Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageInterface_ApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageInterface_ApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDamageInterface_NoRegister()
	{
		return UDamageInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDamageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageInterface_ApplyDamage, "ApplyDamage" }, // 1111806694
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageInterface_Statics::ClassParams = {
		&UDamageInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageInterface, 465120191);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UDamageInterface>()
	{
		return UDamageInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageInterface(Z_Construct_UClass_UDamageInterface, &UDamageInterface::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UDamageInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageInterface);
	static FName NAME_UDamageInterface_ApplyDamage = FName(TEXT("ApplyDamage"));
	void IDamageInterface::Execute_ApplyDamage(UObject* O, float Damage, FVector const& Direction, float KnockbackMultiplier)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDamageInterface::StaticClass()));
		DamageInterface_eventApplyDamage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDamageInterface_ApplyDamage);
		if (Func)
		{
			Parms.Damage=Damage;
			Parms.Direction=Direction;
			Parms.KnockbackMultiplier=KnockbackMultiplier;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDamageInterface*)(O->GetNativeInterfaceAddress(UDamageInterface::StaticClass())))
		{
			I->ApplyDamage_Implementation(Damage,Direction,KnockbackMultiplier);
		}
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execInternal_CurrentWeaponChanged)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_CurrentWeapon);
		P_GET_OBJECT(AWeaponBase,Z_Param_OldWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_CurrentWeaponChanged(Z_Param_CurrentWeapon,Z_Param_OldWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execMulti_StopLeaning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multi_StopLeaning_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execServer_StopLeaning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_StopLeaning_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execMulti_LeanLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multi_LeanLeft_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execServer_LeanLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_LeanLeft_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execMulti_LeanRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multi_LeanRight_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execServer_LeanRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_LeanRight_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execMulti_StopCrouching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multi_StopCrouching_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execServer_StopCrouching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_StopCrouching_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execMulti_StartCrouching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multi_StartCrouching_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execServer_StartCrouching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_StartCrouching_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execGetNumRecoilInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumRecoilInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execAddRecoilInstance)
	{
		P_GET_STRUCT_REF(FRecoilParams,Z_Param_Out_RecoilParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRecoilInstance(Z_Param_Out_RecoilParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execGetWeaponOffsetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetWeaponOffsetTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execGetOffHandTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetOffHandTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execGetDomHandTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetDomHandTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeapon**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execGetCurrentWeaponBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponBase**)Z_Param__Result=P_THIS->GetCurrentWeaponBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrueFPSCharacterBase::execSetupMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupMesh_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATrueFPSCharacterBase_GetDomHandTransform = FName(TEXT("GetDomHandTransform"));
	FTransform ATrueFPSCharacterBase::GetDomHandTransform() const
	{
		TrueFPSCharacterBase_eventGetDomHandTransform_Parms Parms;
		const_cast<ATrueFPSCharacterBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_GetDomHandTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATrueFPSCharacterBase_GetOffHandTransform = FName(TEXT("GetOffHandTransform"));
	FTransform ATrueFPSCharacterBase::GetOffHandTransform() const
	{
		TrueFPSCharacterBase_eventGetOffHandTransform_Parms Parms;
		const_cast<ATrueFPSCharacterBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_GetOffHandTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATrueFPSCharacterBase_GetWeaponOffsetTransform = FName(TEXT("GetWeaponOffsetTransform"));
	FTransform ATrueFPSCharacterBase::GetWeaponOffsetTransform() const
	{
		TrueFPSCharacterBase_eventGetWeaponOffsetTransform_Parms Parms;
		const_cast<ATrueFPSCharacterBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_GetWeaponOffsetTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATrueFPSCharacterBase_Multi_LeanLeft = FName(TEXT("Multi_LeanLeft"));
	void ATrueFPSCharacterBase::Multi_LeanLeft()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_Multi_LeanLeft),NULL);
	}
	static FName NAME_ATrueFPSCharacterBase_Multi_LeanRight = FName(TEXT("Multi_LeanRight"));
	void ATrueFPSCharacterBase::Multi_LeanRight()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_Multi_LeanRight),NULL);
	}
	static FName NAME_ATrueFPSCharacterBase_Multi_StartCrouching = FName(TEXT("Multi_StartCrouching"));
	void ATrueFPSCharacterBase::Multi_StartCrouching()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_Multi_StartCrouching),NULL);
	}
	static FName NAME_ATrueFPSCharacterBase_Multi_StopCrouching = FName(TEXT("Multi_StopCrouching"));
	void ATrueFPSCharacterBase::Multi_StopCrouching()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_Multi_StopCrouching),NULL);
	}
	static FName NAME_ATrueFPSCharacterBase_Multi_StopLeaning = FName(TEXT("Multi_StopLeaning"));
	void ATrueFPSCharacterBase::Multi_StopLeaning()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_Multi_StopLeaning),NULL);
	}
	static FName NAME_ATrueFPSCharacterBase_Server_LeanLeft = FName(TEXT("Server_LeanLeft"));
	void ATrueFPSCharacterBase::Server_LeanLeft()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_Server_LeanLeft),NULL);
	}
	static FName NAME_ATrueFPSCharacterBase_Server_LeanRight = FName(TEXT("Server_LeanRight"));
	void ATrueFPSCharacterBase::Server_LeanRight()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_Server_LeanRight),NULL);
	}
	static FName NAME_ATrueFPSCharacterBase_Server_StartCrouching = FName(TEXT("Server_StartCrouching"));
	void ATrueFPSCharacterBase::Server_StartCrouching()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_Server_StartCrouching),NULL);
	}
	static FName NAME_ATrueFPSCharacterBase_Server_StopCrouching = FName(TEXT("Server_StopCrouching"));
	void ATrueFPSCharacterBase::Server_StopCrouching()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_Server_StopCrouching),NULL);
	}
	static FName NAME_ATrueFPSCharacterBase_Server_StopLeaning = FName(TEXT("Server_StopLeaning"));
	void ATrueFPSCharacterBase::Server_StopLeaning()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_Server_StopLeaning),NULL);
	}
	static FName NAME_ATrueFPSCharacterBase_SetupMesh = FName(TEXT("SetupMesh"));
	void ATrueFPSCharacterBase::SetupMesh()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATrueFPSCharacterBase_SetupMesh),NULL);
	}
	void ATrueFPSCharacterBase::StaticRegisterNativesATrueFPSCharacterBase()
	{
		UClass* Class = ATrueFPSCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRecoilInstance", &ATrueFPSCharacterBase::execAddRecoilInstance },
			{ "GetCurrentWeapon", &ATrueFPSCharacterBase::execGetCurrentWeapon },
			{ "GetCurrentWeaponBase", &ATrueFPSCharacterBase::execGetCurrentWeaponBase },
			{ "GetDomHandTransform", &ATrueFPSCharacterBase::execGetDomHandTransform },
			{ "GetNumRecoilInstances", &ATrueFPSCharacterBase::execGetNumRecoilInstances },
			{ "GetOffHandTransform", &ATrueFPSCharacterBase::execGetOffHandTransform },
			{ "GetWeaponOffsetTransform", &ATrueFPSCharacterBase::execGetWeaponOffsetTransform },
			{ "Internal_CurrentWeaponChanged", &ATrueFPSCharacterBase::execInternal_CurrentWeaponChanged },
			{ "Multi_LeanLeft", &ATrueFPSCharacterBase::execMulti_LeanLeft },
			{ "Multi_LeanRight", &ATrueFPSCharacterBase::execMulti_LeanRight },
			{ "Multi_StartCrouching", &ATrueFPSCharacterBase::execMulti_StartCrouching },
			{ "Multi_StopCrouching", &ATrueFPSCharacterBase::execMulti_StopCrouching },
			{ "Multi_StopLeaning", &ATrueFPSCharacterBase::execMulti_StopLeaning },
			{ "Server_LeanLeft", &ATrueFPSCharacterBase::execServer_LeanLeft },
			{ "Server_LeanRight", &ATrueFPSCharacterBase::execServer_LeanRight },
			{ "Server_StartCrouching", &ATrueFPSCharacterBase::execServer_StartCrouching },
			{ "Server_StopCrouching", &ATrueFPSCharacterBase::execServer_StopCrouching },
			{ "Server_StopLeaning", &ATrueFPSCharacterBase::execServer_StopLeaning },
			{ "SetupMesh", &ATrueFPSCharacterBase::execSetupMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics
	{
		struct TrueFPSCharacterBase_eventAddRecoilInstance_Parms
		{
			FRecoilParams RecoilParams;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics::NewProp_RecoilParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics::NewProp_RecoilParams = { "RecoilParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrueFPSCharacterBase_eventAddRecoilInstance_Parms, RecoilParams), Z_Construct_UScriptStruct_FRecoilParams, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics::NewProp_RecoilParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics::NewProp_RecoilParams_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics::NewProp_RecoilParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "RecoilParams" },
		{ "Category", "Weapon|Recoil" },
		{ "Comment", "//\n//\x09Recoil\n//\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
		{ "ToolTip", "Recoil" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "AddRecoilInstance", nullptr, nullptr, sizeof(TrueFPSCharacterBase_eventAddRecoilInstance_Parms), Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeapon_Statics
	{
		struct TrueFPSCharacterBase_eventGetCurrentWeapon_Parms
		{
			AWeapon* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrueFPSCharacterBase_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Automatically casts it to UWeapon\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
		{ "ToolTip", "Automatically casts it to UWeapon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(TrueFPSCharacterBase_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeaponBase_Statics
	{
		struct TrueFPSCharacterBase_eventGetCurrentWeaponBase_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeaponBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrueFPSCharacterBase_eventGetCurrentWeaponBase_Parms, ReturnValue), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeaponBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeaponBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeaponBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeaponBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "GetCurrentWeaponBase", nullptr, nullptr, sizeof(TrueFPSCharacterBase_eventGetCurrentWeaponBase_Parms), Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeaponBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeaponBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeaponBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeaponBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeaponBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeaponBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_GetDomHandTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrueFPSCharacterBase_GetDomHandTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrueFPSCharacterBase_eventGetDomHandTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrueFPSCharacterBase_GetDomHandTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrueFPSCharacterBase_GetDomHandTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_GetDomHandTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|Anim" },
		{ "Comment", "// By default returns the world-transform of hand_r\n" },
		{ "DisplayName", "Get Dominant-Hand World Transform" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
		{ "ToolTip", "By default returns the world-transform of hand_r" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_GetDomHandTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "GetDomHandTransform", nullptr, nullptr, sizeof(TrueFPSCharacterBase_eventGetDomHandTransform_Parms), Z_Construct_UFunction_ATrueFPSCharacterBase_GetDomHandTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_GetDomHandTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_GetDomHandTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_GetDomHandTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_GetDomHandTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_GetDomHandTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_GetNumRecoilInstances_Statics
	{
		struct TrueFPSCharacterBase_eventGetNumRecoilInstances_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATrueFPSCharacterBase_GetNumRecoilInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrueFPSCharacterBase_eventGetNumRecoilInstances_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrueFPSCharacterBase_GetNumRecoilInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrueFPSCharacterBase_GetNumRecoilInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_GetNumRecoilInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon|Recoil" },
		{ "DisplayName", "Get Number of Recoil Instances" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_GetNumRecoilInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "GetNumRecoilInstances", nullptr, nullptr, sizeof(TrueFPSCharacterBase_eventGetNumRecoilInstances_Parms), Z_Construct_UFunction_ATrueFPSCharacterBase_GetNumRecoilInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_GetNumRecoilInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_GetNumRecoilInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_GetNumRecoilInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_GetNumRecoilInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_GetNumRecoilInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_GetOffHandTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrueFPSCharacterBase_GetOffHandTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrueFPSCharacterBase_eventGetOffHandTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrueFPSCharacterBase_GetOffHandTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrueFPSCharacterBase_GetOffHandTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_GetOffHandTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|Anim" },
		{ "Comment", "// By default returns the world-transform of hand_l\n" },
		{ "DisplayName", "Get Off-Hand World Transform" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
		{ "ToolTip", "By default returns the world-transform of hand_l" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_GetOffHandTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "GetOffHandTransform", nullptr, nullptr, sizeof(TrueFPSCharacterBase_eventGetOffHandTransform_Parms), Z_Construct_UFunction_ATrueFPSCharacterBase_GetOffHandTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_GetOffHandTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_GetOffHandTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_GetOffHandTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_GetOffHandTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_GetOffHandTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_GetWeaponOffsetTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrueFPSCharacterBase_GetWeaponOffsetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrueFPSCharacterBase_eventGetWeaponOffsetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrueFPSCharacterBase_GetWeaponOffsetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrueFPSCharacterBase_GetWeaponOffsetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_GetWeaponOffsetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|Anim" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_GetWeaponOffsetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "GetWeaponOffsetTransform", nullptr, nullptr, sizeof(TrueFPSCharacterBase_eventGetWeaponOffsetTransform_Parms), Z_Construct_UFunction_ATrueFPSCharacterBase_GetWeaponOffsetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_GetWeaponOffsetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_GetWeaponOffsetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_GetWeaponOffsetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_GetWeaponOffsetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_GetWeaponOffsetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged_Statics
	{
		struct TrueFPSCharacterBase_eventInternal_CurrentWeaponChanged_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrueFPSCharacterBase_eventInternal_CurrentWeaponChanged_Parms, CurrentWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged_Statics::NewProp_OldWeapon = { "OldWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrueFPSCharacterBase_eventInternal_CurrentWeaponChanged_Parms, OldWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged_Statics::NewProp_CurrentWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged_Statics::NewProp_OldWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "Internal_CurrentWeaponChanged", nullptr, nullptr, sizeof(TrueFPSCharacterBase_eventInternal_CurrentWeaponChanged_Parms), Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "Multi_LeanLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanRight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "Multi_LeanRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StartCrouching_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StartCrouching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StartCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "Multi_StartCrouching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StartCrouching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StartCrouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StartCrouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StartCrouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopCrouching_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopCrouching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "Multi_StopCrouching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopCrouching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopCrouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopCrouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopCrouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopLeaning_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopLeaning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopLeaning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "Multi_StopLeaning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopLeaning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopLeaning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopLeaning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopLeaning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "Server_LeanLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanRight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "Server_LeanRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StartCrouching_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StartCrouching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StartCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "Server_StartCrouching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StartCrouching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StartCrouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StartCrouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StartCrouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopCrouching_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopCrouching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "Server_StopCrouching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopCrouching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopCrouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopCrouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopCrouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopLeaning_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopLeaning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopLeaning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "Server_StopLeaning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopLeaning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopLeaning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopLeaning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopLeaning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrueFPSCharacterBase_SetupMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrueFPSCharacterBase_SetupMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrueFPSCharacterBase_SetupMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrueFPSCharacterBase, nullptr, "SetupMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrueFPSCharacterBase_SetupMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrueFPSCharacterBase_SetupMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrueFPSCharacterBase_SetupMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrueFPSCharacterBase_SetupMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATrueFPSCharacterBase_NoRegister()
	{
		return ATrueFPSCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ATrueFPSCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ADSValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ADSValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponOffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponOffsetTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandedMultiDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LandedMultiDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CurrentWeaponChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeanAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeanAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeanValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeanValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrueFPSCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATrueFPSCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_AddRecoilInstance, "AddRecoilInstance" }, // 2591403426
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeapon, "GetCurrentWeapon" }, // 980961066
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_GetCurrentWeaponBase, "GetCurrentWeaponBase" }, // 3797872924
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_GetDomHandTransform, "GetDomHandTransform" }, // 731370532
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_GetNumRecoilInstances, "GetNumRecoilInstances" }, // 3268037751
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_GetOffHandTransform, "GetOffHandTransform" }, // 2595666703
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_GetWeaponOffsetTransform, "GetWeaponOffsetTransform" }, // 3173533193
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_Internal_CurrentWeaponChanged, "Internal_CurrentWeaponChanged" }, // 414162967
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanLeft, "Multi_LeanLeft" }, // 3637738802
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_LeanRight, "Multi_LeanRight" }, // 3726311309
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StartCrouching, "Multi_StartCrouching" }, // 2469225507
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopCrouching, "Multi_StopCrouching" }, // 4085037393
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_Multi_StopLeaning, "Multi_StopLeaning" }, // 1285748560
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanLeft, "Server_LeanLeft" }, // 1484640300
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_Server_LeanRight, "Server_LeanRight" }, // 1984952482
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StartCrouching, "Server_StartCrouching" }, // 2289870527
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopCrouching, "Server_StopCrouching" }, // 677728728
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_Server_StopLeaning, "Server_StopLeaning" }, // 3585128864
		{ &Z_Construct_UFunction_ATrueFPSCharacterBase_SetupMesh, "SetupMesh" }, // 2884928218
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WeaponSystem/Character/TrueFPSCharacterBase.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrueFPSCharacterBase, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_ClientMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// The third person mesh that you, as the client, can see\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
		{ "ToolTip", "The third person mesh that you, as the client, can see" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_ClientMesh = { "ClientMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrueFPSCharacterBase, ClientMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_ClientMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_ClientMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_Inventory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrueFPSCharacterBase, Inventory), Z_Construct_UClass_UCharacterInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_ADSValue_MetaData[] = {
		{ "Category", "Character|Anim" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_ADSValue = { "ADSValue", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrueFPSCharacterBase, ADSValue), METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_ADSValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_ADSValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_WeaponOffsetTransform_MetaData[] = {
		{ "Category", "Character|Anim" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_WeaponOffsetTransform = { "WeaponOffsetTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrueFPSCharacterBase, WeaponOffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_WeaponOffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_WeaponOffsetTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LandedMultiDelegate_MetaData[] = {
		{ "Category", "Character|Delegates" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LandedMultiDelegate = { "LandedMultiDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrueFPSCharacterBase, LandedMultiDelegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LandedMultiDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LandedMultiDelegate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_CurrentWeaponChangedDelegate_MetaData[] = {
		{ "Category", "Character|Delegates" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_CurrentWeaponChangedDelegate = { "CurrentWeaponChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrueFPSCharacterBase, CurrentWeaponChangedDelegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_CurrentWeaponChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_CurrentWeaponChangedDelegate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_RecoilOffset_MetaData[] = {
		{ "Category", "Weapon|Recoil" },
		{ "Comment", "// The total offset from the accumulated recoil instances\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
		{ "ToolTip", "The total offset from the accumulated recoil instances" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_RecoilOffset = { "RecoilOffset", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrueFPSCharacterBase, RecoilOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_RecoilOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_RecoilOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LeanAmount_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "//\n//\x09""Anim Vars\n//\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
		{ "ToolTip", "Anim Vars" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LeanAmount = { "LeanAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrueFPSCharacterBase, LeanAmount), METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LeanAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LeanAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LeanValue_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LeanValue = { "LeanValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrueFPSCharacterBase, LeanValue), METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LeanValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LeanValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_CrouchValue_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_CrouchValue = { "CrouchValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrueFPSCharacterBase, CrouchValue), METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_CrouchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_CrouchValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrueFPSCharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_ClientMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_ADSValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_WeaponOffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LandedMultiDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_CurrentWeaponChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_RecoilOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LeanAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_LeanValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrueFPSCharacterBase_Statics::NewProp_CrouchValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrueFPSCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrueFPSCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrueFPSCharacterBase_Statics::ClassParams = {
		&ATrueFPSCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATrueFPSCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrueFPSCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATrueFPSCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrueFPSCharacterBase, 863071127);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<ATrueFPSCharacterBase>()
	{
		return ATrueFPSCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrueFPSCharacterBase(Z_Construct_UClass_ATrueFPSCharacterBase, &ATrueFPSCharacterBase::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("ATrueFPSCharacterBase"), false, nullptr, nullptr, nullptr);

	void ATrueFPSCharacterBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ADSValue(TEXT("ADSValue"));

		const bool bIsValid = true
			&& Name_ADSValue == ClassReps[(int32)ENetFields_Private::ADSValue].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATrueFPSCharacterBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrueFPSCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
