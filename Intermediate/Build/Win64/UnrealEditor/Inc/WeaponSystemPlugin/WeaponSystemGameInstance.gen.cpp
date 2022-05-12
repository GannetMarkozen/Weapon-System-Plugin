// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Gamemode/WeaponSystemGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSystemGameInstance() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponSystemGameInstance_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponSystemGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
// End Cross Module References
	void UWeaponSystemGameInstance::StaticRegisterNativesUWeaponSystemGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponSystemGameInstance);
	UClass* Z_Construct_UClass_UWeaponSystemGameInstance_NoRegister()
	{
		return UWeaponSystemGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponSystemGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponSystemGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponSystem/Gamemode/WeaponSystemGameInstance.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gamemode/WeaponSystemGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponSystemGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponSystemGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponSystemGameInstance_Statics::ClassParams = {
		&UWeaponSystemGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponSystemGameInstance()
	{
		if (!Z_Registration_Info_UClass_UWeaponSystemGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponSystemGameInstance.OuterSingleton, Z_Construct_UClass_UWeaponSystemGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeaponSystemGameInstance.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UWeaponSystemGameInstance>()
	{
		return UWeaponSystemGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponSystemGameInstance);
	struct Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gamemode_WeaponSystemGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gamemode_WeaponSystemGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponSystemGameInstance, UWeaponSystemGameInstance::StaticClass, TEXT("UWeaponSystemGameInstance"), &Z_Registration_Info_UClass_UWeaponSystemGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponSystemGameInstance), 3573787669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gamemode_WeaponSystemGameInstance_h_1357315216(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gamemode_WeaponSystemGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gamemode_WeaponSystemGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
