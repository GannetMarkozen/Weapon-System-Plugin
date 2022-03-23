// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSystemPlugin_init() {}
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_PlaceholderDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponSystemPlugin_OnLandedMultiDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponSystemPlugin_CurrentWeaponChangedDelgate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponSystemPlugin_PlaceholderDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponEquippedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnequippedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponObtainedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponSystemPlugin_WeaponUnobtainedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WeaponSystemPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xACE2B514,
				0x0015A606,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
