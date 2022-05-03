// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/AttributeSystem/AttributeEffectParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeEffectParams() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectDuration;
	static UEnum* EEffectDuration_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectDuration.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectDuration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EEffectDuration"));
		}
		return Z_Registration_Info_UEnum_EEffectDuration.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectDuration>()
	{
		return EEffectDuration_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::Enumerators[] = {
		{ "EEffectDuration::Instant", (int64)EEffectDuration::Instant },
		{ "EEffectDuration::ForDuration", (int64)EEffectDuration::ForDuration },
		{ "EEffectDuration::Infinite", (int64)EEffectDuration::Infinite },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Effect Duration" },
		{ "ForDuration.DisplayName", "For-Duration" },
		{ "ForDuration.Name", "EEffectDuration::ForDuration" },
		{ "ForDuration.Tooltip", "This effect will run for it's duration unless manully ended" },
		{ "Infinite.DisplayName", "Infinite" },
		{ "Infinite.Name", "EEffectDuration::Infinite" },
		{ "Infinite.Tooltip", "This effect will run forever until manually ended" },
		{ "Instant.DisplayName", "Instant" },
		{ "Instant.Name", "EEffectDuration::Instant" },
		{ "Instant.Tooltip", "This effect will be instantaneous and have no duration" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffectParams.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		"EEffectDuration",
		"EEffectDuration",
		Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration()
	{
		if (!Z_Registration_Info_UEnum_EEffectDuration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectDuration.InnerSingleton, Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectDuration.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectRepCond;
	static UEnum* EEffectRepCond_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectRepCond.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectRepCond.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EEffectRepCond"));
		}
		return Z_Registration_Info_UEnum_EEffectRepCond.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectRepCond>()
	{
		return EEffectRepCond_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::Enumerators[] = {
		{ "EEffectRepCond::ServerOnly", (int64)EEffectRepCond::ServerOnly },
		{ "EEffectRepCond::LocalOnly", (int64)EEffectRepCond::LocalOnly },
		{ "EEffectRepCond::LocalPredicted", (int64)EEffectRepCond::LocalPredicted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Effect Replication Condition" },
		{ "LocalOnly.DisplayName", "Local-Only" },
		{ "LocalOnly.Name", "EEffectRepCond::LocalOnly" },
		{ "LocalOnly.Tooltip", "This effect will run only locally where it's being called" },
		{ "LocalPredicted.DisplayName", "Local-Predicted" },
		{ "LocalPredicted.Name", "EEffectRepCond::LocalPredicted" },
		{ "LocalPredicted.Tooltip", "This effect will run locally and server-side and attempt to stay in sync (to minimize latency)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffectParams.h" },
		{ "ServerOnly.DisplayName", "Server-Only" },
		{ "ServerOnly.Name", "EEffectRepCond::ServerOnly" },
		{ "ServerOnly.Tooltip", "This effect will run only on the server" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		"EEffectRepCond",
		"EEffectRepCond",
		Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond()
	{
		if (!Z_Registration_Info_UEnum_EEffectRepCond.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectRepCond.InnerSingleton, Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectRepCond.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectModType;
	static UEnum* EEffectModType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectModType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectModType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EEffectModType"));
		}
		return Z_Registration_Info_UEnum_EEffectModType.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectModType>()
	{
		return EEffectModType_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::Enumerators[] = {
		{ "EEffectModType::None", (int64)EEffectModType::None },
		{ "EEffectModType::Overriding", (int64)EEffectModType::Overriding },
		{ "EEffectModType::Additive", (int64)EEffectModType::Additive },
		{ "EEffectModType::Multiplicative", (int64)EEffectModType::Multiplicative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::Enum_MetaDataParams[] = {
		{ "Additive.DisplayName", "Additive" },
		{ "Additive.Name", "EEffectModType::Additive" },
		{ "Additive.Tooltip", "Adds to the current attribute value" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "Effect Modifier Type" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffectParams.h" },
		{ "Multiplicative.DisplayName", "Multiplicative" },
		{ "Multiplicative.Name", "EEffectModType::Multiplicative" },
		{ "Multiplicative.Tooltip", "Multiplies the current attribute value" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EEffectModType::None" },
		{ "None.Tooltip", "Does nothing. The attribute will remain unchanged regardless of the value" },
		{ "Overriding.DisplayName", "Overriding" },
		{ "Overriding.Name", "EEffectModType::Overriding" },
		{ "Overriding.Tooltip", "Overrides current attribute value with the new one" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		"EEffectModType",
		"EEffectModType",
		Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType()
	{
		if (!Z_Registration_Info_UEnum_EEffectModType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectModType.InnerSingleton, Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectModType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectRemovalReason;
	static UEnum* EEffectRemovalReason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectRemovalReason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectRemovalReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EEffectRemovalReason"));
		}
		return Z_Registration_Info_UEnum_EEffectRemovalReason.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectRemovalReason>()
	{
		return EEffectRemovalReason_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason_Statics::Enumerators[] = {
		{ "EEffectRemovalReason::LifespanEnd", (int64)EEffectRemovalReason::LifespanEnd },
		{ "EEffectRemovalReason::ManualRemoval", (int64)EEffectRemovalReason::ManualRemoval },
		{ "EEffectRemovalReason::NetPredSuccess", (int64)EEffectRemovalReason::NetPredSuccess },
		{ "EEffectRemovalReason::NetPredFail", (int64)EEffectRemovalReason::NetPredFail },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Effect Removal Reason" },
		{ "LifespanEnd.DisplayName", "Lifespan-End" },
		{ "LifespanEnd.Name", "EEffectRemovalReason::LifespanEnd" },
		{ "LifespanEnd.Tooltip", "The effect's lifespan duration was exceeded and was automatically removed" },
		{ "ManualRemoval.DisplayName", "Manually-Removal" },
		{ "ManualRemoval.Name", "EEffectRemovalReason::ManualRemoval" },
		{ "ManualRemoval.Tooltip", "The effect was manually removed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffectParams.h" },
		{ "NetPredFail.DisplayName", "Network-Prediction Failed" },
		{ "NetPredFail.Name", "EEffectRemovalReason::NetPredFail" },
		{ "NetPredFail.Tooltip", "The network-predicted effect was applied client-side but failed server-side so it was removed client-side" },
		{ "NetPredSuccess.DisplayName", "Network-Prediction Success" },
		{ "NetPredSuccess.Name", "EEffectRemovalReason::NetPredSuccess" },
		{ "NetPredSuccess.Tooltip", "The network-predicted effect was applied client-side and succeeded server-side so it was removed client-side" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		"EEffectRemovalReason",
		"EEffectRemovalReason",
		Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason()
	{
		if (!Z_Registration_Info_UEnum_EEffectRemovalReason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectRemovalReason.InnerSingleton, Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectRemovalReason.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectParams_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectParams_h_Statics::EnumInfo[] = {
		{ EEffectDuration_StaticEnum, TEXT("EEffectDuration"), &Z_Registration_Info_UEnum_EEffectDuration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4066429253U) },
		{ EEffectRepCond_StaticEnum, TEXT("EEffectRepCond"), &Z_Registration_Info_UEnum_EEffectRepCond, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3222879814U) },
		{ EEffectModType_StaticEnum, TEXT("EEffectModType"), &Z_Registration_Info_UEnum_EEffectModType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 347396436U) },
		{ EEffectRemovalReason_StaticEnum, TEXT("EEffectRemovalReason"), &Z_Registration_Info_UEnum_EEffectRemovalReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3942470696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectParams_h_4129696416(TEXT("/Script/WeaponSystemPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectParams_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectParams_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
