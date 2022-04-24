// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/AttributeSystem/Effect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffect() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UEffect_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UEffect();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UScriptBase();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
// End Cross Module References
	void UEffect::StaticRegisterNativesUEffect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEffect);
	UClass* Z_Construct_UClass_UEffect_NoRegister()
	{
		return UEffect::StaticClass();
	}
	struct Z_Construct_UClass_UEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponSystem/AttributeSystem/Effect.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/Effect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEffect_Statics::ClassParams = {
		&UEffect::StaticClass,
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
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffect()
	{
		if (!Z_Registration_Info_UClass_UEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEffect.OuterSingleton, Z_Construct_UClass_UEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEffect.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UEffect>()
	{
		return UEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffect);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Effect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Effect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEffect, UEffect::StaticClass, TEXT("UEffect"), &Z_Registration_Info_UClass_UEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEffect), 2931952414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Effect_h_1153692206(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Effect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Effect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
