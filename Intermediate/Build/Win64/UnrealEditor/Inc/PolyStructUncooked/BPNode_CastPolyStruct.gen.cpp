// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PolyStructUncooked/Public/Nodes/BPNode_CastPolyStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPNode_CastPolyStruct() {}
// Cross Module References
	POLYSTRUCTUNCOOKED_API UClass* Z_Construct_UClass_UBPNode_CastPolyStruct_NoRegister();
	POLYSTRUCTUNCOOKED_API UClass* Z_Construct_UClass_UBPNode_CastPolyStruct();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_PolyStructUncooked();
// End Cross Module References
	void UBPNode_CastPolyStruct::StaticRegisterNativesUBPNode_CastPolyStruct()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBPNode_CastPolyStruct);
	UClass* Z_Construct_UClass_UBPNode_CastPolyStruct_NoRegister()
	{
		return UBPNode_CastPolyStruct::StaticClass();
	}
	struct Z_Construct_UClass_UBPNode_CastPolyStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPNode_CastPolyStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_PolyStructUncooked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPNode_CastPolyStruct_Statics::Class_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "/**\n * \n*/" },
		{ "IncludePath", "Nodes/BPNode_CastPolyStruct.h" },
		{ "KeyWords", "poly,polymorphic,struct" },
		{ "ModuleRelativePath", "Public/Nodes/BPNode_CastPolyStruct.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPNode_CastPolyStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPNode_CastPolyStruct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPNode_CastPolyStruct_Statics::ClassParams = {
		&UBPNode_CastPolyStruct::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPNode_CastPolyStruct_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPNode_CastPolyStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPNode_CastPolyStruct()
	{
		if (!Z_Registration_Info_UClass_UBPNode_CastPolyStruct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPNode_CastPolyStruct.OuterSingleton, Z_Construct_UClass_UBPNode_CastPolyStruct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBPNode_CastPolyStruct.OuterSingleton;
	}
	template<> POLYSTRUCTUNCOOKED_API UClass* StaticClass<UBPNode_CastPolyStruct>()
	{
		return UBPNode_CastPolyStruct::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPNode_CastPolyStruct);
	struct Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_BPNode_CastPolyStruct_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_BPNode_CastPolyStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBPNode_CastPolyStruct, UBPNode_CastPolyStruct::StaticClass, TEXT("UBPNode_CastPolyStruct"), &Z_Registration_Info_UClass_UBPNode_CastPolyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPNode_CastPolyStruct), 3874404346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_BPNode_CastPolyStruct_h_4049655851(TEXT("/Script/PolyStructUncooked"),
		Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_BPNode_CastPolyStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_BPNode_CastPolyStruct_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
