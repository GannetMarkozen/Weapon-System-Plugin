// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Gameplay/PolyStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyStruct() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStruct();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStructHandle();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PolyStruct;
class UScriptStruct* FPolyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PolyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolyStruct, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("PolyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PolyStruct.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FPolyStruct>()
{
	return FPolyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPolyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolyStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* A polymorphic struct that can store any USTRUCT and be casted to\n * or extracted back into it's original type. Supports net serialization\n */" },
		{ "DisplayName", "Polymorphic Struct" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolyStruct.h" },
		{ "ToolTip", "A polymorphic struct that can store any USTRUCT and be casted to\n* or extracted back into it's original type. Supports net serialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolyStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"PolyStruct",
		sizeof(FPolyStruct),
		alignof(FPolyStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPolyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPolyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PolyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PolyStruct.InnerSingleton, Z_Construct_UScriptStruct_FPolyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PolyStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PolyStructHandle;
class UScriptStruct* FPolyStructHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolyStructHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PolyStructHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolyStructHandle, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("PolyStructHandle"));
	}
	return Z_Registration_Info_UScriptStruct_PolyStructHandle.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FPolyStructHandle>()
{
	return FPolyStructHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPolyStructHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolyStructHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* An array of Poly Structs being passed around by-reference via Shared Pointers.\n * Avoids copying when being passed around in Blueprints. Supports net serialization\n */" },
		{ "DisplayName", "Polymorphic Struct Handle" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolyStruct.h" },
		{ "ToolTip", "An array of Poly Structs being passed around by-reference via Shared Pointers.\n* Avoids copying when being passed around in Blueprints. Supports net serialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolyStructHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolyStructHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolyStructHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"PolyStructHandle",
		sizeof(FPolyStructHandle),
		alignof(FPolyStructHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPolyStructHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolyStructHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPolyStructHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_PolyStructHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PolyStructHandle.InnerSingleton, Z_Construct_UScriptStruct_FPolyStructHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PolyStructHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_PolyStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_PolyStruct_h_Statics::ScriptStructInfo[] = {
		{ FPolyStruct::StaticStruct, Z_Construct_UScriptStruct_FPolyStruct_Statics::NewStructOps, TEXT("PolyStruct"), &Z_Registration_Info_UScriptStruct_PolyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolyStruct), 61013912U) },
		{ FPolyStructHandle::StaticStruct, Z_Construct_UScriptStruct_FPolyStructHandle_Statics::NewStructOps, TEXT("PolyStructHandle"), &Z_Registration_Info_UScriptStruct_PolyStructHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolyStructHandle), 3456734502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_PolyStruct_h_1998873016(TEXT("/Script/WeaponSystemPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_PolyStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_PolyStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
