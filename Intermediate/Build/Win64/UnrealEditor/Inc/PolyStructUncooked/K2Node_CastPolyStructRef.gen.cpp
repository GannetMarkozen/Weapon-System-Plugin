// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PolyStructUncooked/Public/Nodes/K2Node_CastPolyStructRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_CastPolyStructRef() {}
// Cross Module References
	POLYSTRUCTUNCOOKED_API UClass* Z_Construct_UClass_UK2Node_CastPolyStructRef_NoRegister();
	POLYSTRUCTUNCOOKED_API UClass* Z_Construct_UClass_UK2Node_CastPolyStructRef();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_PolyStructUncooked();
// End Cross Module References
	void UK2Node_CastPolyStructRef::StaticRegisterNativesUK2Node_CastPolyStructRef()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_CastPolyStructRef);
	UClass* Z_Construct_UClass_UK2Node_CastPolyStructRef_NoRegister()
	{
		return UK2Node_CastPolyStructRef::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_CastPolyStructRef_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_CastPolyStructRef_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_PolyStructUncooked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CastPolyStructRef_Statics::Class_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/K2Node_CastPolyStructRef.h" },
		{ "KeyWords", "poly,polymorphic,struct" },
		{ "ModuleRelativePath", "Public/Nodes/K2Node_CastPolyStructRef.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_CastPolyStructRef_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_CastPolyStructRef>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_CastPolyStructRef_Statics::ClassParams = {
		&UK2Node_CastPolyStructRef::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_CastPolyStructRef_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CastPolyStructRef_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_CastPolyStructRef()
	{
		if (!Z_Registration_Info_UClass_UK2Node_CastPolyStructRef.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_CastPolyStructRef.OuterSingleton, Z_Construct_UClass_UK2Node_CastPolyStructRef_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_CastPolyStructRef.OuterSingleton;
	}
	template<> POLYSTRUCTUNCOOKED_API UClass* StaticClass<UK2Node_CastPolyStructRef>()
	{
		return UK2Node_CastPolyStructRef::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_CastPolyStructRef);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_K2Node_CastPolyStructRef_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_K2Node_CastPolyStructRef_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_CastPolyStructRef, UK2Node_CastPolyStructRef::StaticClass, TEXT("UK2Node_CastPolyStructRef"), &Z_Registration_Info_UClass_UK2Node_CastPolyStructRef, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_CastPolyStructRef), 2486158082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_K2Node_CastPolyStructRef_h_4193520716(TEXT("/Script/PolyStructUncooked"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_K2Node_CastPolyStructRef_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_K2Node_CastPolyStructRef_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
