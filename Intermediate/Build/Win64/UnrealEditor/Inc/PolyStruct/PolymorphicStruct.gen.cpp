// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PolyStruct/Public/Polymorphic/PolymorphicStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolymorphicStruct() {}
// Cross Module References
	POLYSTRUCT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStruct();
	UPackage* Z_Construct_UPackage__Script_PolyStruct();
	POLYSTRUCT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStructHandle();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PolyStruct;
class UScriptStruct* FPolyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PolyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolyStruct, Z_Construct_UPackage__Script_PolyStruct(), TEXT("PolyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PolyStruct.OuterSingleton;
}
template<> POLYSTRUCT_API UScriptStruct* StaticStruct<FPolyStruct>()
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
		{ "Comment", "/*\n * A polymorphic struct that can store any USTRUCT and can be casted to\n * or extracted back into it's original type. Supports dynamic net serialization\n */" },
		{ "DisplayName", "Polymorphic Struct" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStruct.h" },
		{ "ToolTip", "* A polymorphic struct that can store any USTRUCT and can be casted to\n* or extracted back into it's original type. Supports dynamic net serialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolyStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PolyStruct,
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
		Z_Registration_Info_UScriptStruct_PolyStructHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolyStructHandle, Z_Construct_UPackage__Script_PolyStruct(), TEXT("PolyStructHandle"));
	}
	return Z_Registration_Info_UScriptStruct_PolyStructHandle.OuterSingleton;
}
template<> POLYSTRUCT_API UScriptStruct* StaticStruct<FPolyStructHandle>()
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
		{ "Comment", "/*\n * An array of Poly Structs being passed around by-reference via Shared Pointer.\n * Avoids copying when being passed around. Supports net serialization\n * and has optimizations for delta serialization so this is preferable to use over a\n * standard array of Poly Structs\n */" },
		{ "DisplayName", "Polymorphic Struct Handle" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStruct.h" },
		{ "ToolTip", "* An array of Poly Structs being passed around by-reference via Shared Pointer.\n* Avoids copying when being passed around. Supports net serialization\n* and has optimizations for delta serialization so this is preferable to use over a\n* standard array of Poly Structs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolyStructHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolyStructHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolyStructHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PolyStruct,
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
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStruct_h_Statics::ScriptStructInfo[] = {
		{ FPolyStruct::StaticStruct, Z_Construct_UScriptStruct_FPolyStruct_Statics::NewStructOps, TEXT("PolyStruct"), &Z_Registration_Info_UScriptStruct_PolyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolyStruct), 279423337U) },
		{ FPolyStructHandle::StaticStruct, Z_Construct_UScriptStruct_FPolyStructHandle_Statics::NewStructOps, TEXT("PolyStructHandle"), &Z_Registration_Info_UScriptStruct_PolyStructHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolyStructHandle), 84488860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStruct_h_3935116430(TEXT("/Script/PolyStruct"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
