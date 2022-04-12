// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Gameplay/GameplayData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayData() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDataContainer();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataContainer;
class UScriptStruct* FDataContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataContainer, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("DataContainer"));
	}
	return Z_Registration_Info_UScriptStruct_DataContainer.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FDataContainer>()
{
	return FDataContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/GameplayData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataContainer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"DataContainer",
		sizeof(FDataContainer),
		alignof(FDataContainer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_DataContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataContainer.InnerSingleton, Z_Construct_UScriptStruct_FDataContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_GameplayData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_GameplayData_h_Statics::ScriptStructInfo[] = {
		{ FDataContainer::StaticStruct, Z_Construct_UScriptStruct_FDataContainer_Statics::NewStructOps, TEXT("DataContainer"), &Z_Registration_Info_UScriptStruct_DataContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataContainer), 35568278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_GameplayData_h_3653010302(TEXT("/Script/WeaponSystemPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_GameplayData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_GameplayData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
