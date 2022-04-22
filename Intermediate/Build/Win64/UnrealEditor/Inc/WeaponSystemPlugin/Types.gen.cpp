// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypes() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_ELaterality();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELaterality;
	static UEnum* ELaterality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELaterality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELaterality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_ELaterality, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("ELaterality"));
		}
		return Z_Registration_Info_UEnum_ELaterality.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<ELaterality>()
	{
		return ELaterality_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystemPlugin_ELaterality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystemPlugin_ELaterality_Statics::Enumerators[] = {
		{ "ELaterality::Left", (int64)ELaterality::Left },
		{ "ELaterality::Right", (int64)ELaterality::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystemPlugin_ELaterality_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Left / Right hand\n" },
		{ "Left.Name", "ELaterality::Left" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Types.h" },
		{ "Right.Name", "ELaterality::Right" },
		{ "ToolTip", "Left / Right hand" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystemPlugin_ELaterality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		"ELaterality",
		"ELaterality",
		Z_Construct_UEnum_WeaponSystemPlugin_ELaterality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_ELaterality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystemPlugin_ELaterality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_ELaterality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_ELaterality()
	{
		if (!Z_Registration_Info_UEnum_ELaterality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELaterality.InnerSingleton, Z_Construct_UEnum_WeaponSystemPlugin_ELaterality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELaterality.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Types_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Types_h_Statics::EnumInfo[] = {
		{ ELaterality_StaticEnum, TEXT("ELaterality"), &Z_Registration_Info_UEnum_ELaterality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 913489345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Types_h_3459959686(TEXT("/Script/WeaponSystemPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Types_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Types_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
