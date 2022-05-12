// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemAnimsRuntime/Public/AnimGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGlobals() {}
// Cross Module References
	WEAPONSYSTEMANIMSRUNTIME_API UEnum* Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime();
	WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArmPullbackConfig();
	WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FJointClampConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArmPullbackConfig;
	static UEnum* EArmPullbackConfig_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EArmPullbackConfig.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EArmPullbackConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig, Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime(), TEXT("EArmPullbackConfig"));
		}
		return Z_Registration_Info_UEnum_EArmPullbackConfig.OuterSingleton;
	}
	template<> WEAPONSYSTEMANIMSRUNTIME_API UEnum* StaticEnum<EArmPullbackConfig>()
	{
		return EArmPullbackConfig_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig_Statics::Enumerators[] = {
		{ "EArmPullbackConfig::Enabled", (int64)EArmPullbackConfig::Enabled },
		{ "EArmPullbackConfig::Disabled", (int64)EArmPullbackConfig::Disabled },
		{ "EArmPullbackConfig::AimingValue", (int64)EArmPullbackConfig::AimingValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig_Statics::Enum_MetaDataParams[] = {
		{ "AimingValue.DisplayName", "Based on Aiming Value" },
		{ "AimingValue.Name", "EArmPullbackConfig::AimingValue" },
		{ "BlueprintType", "true" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EArmPullbackConfig::Disabled" },
		{ "Enabled.DisplayName", "Enabled" },
		{ "Enabled.Name", "EArmPullbackConfig::Enabled" },
		{ "ModuleRelativePath", "Public/AnimGlobals.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime,
		nullptr,
		"EArmPullbackConfig",
		"EArmPullbackConfig",
		Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig()
	{
		if (!Z_Registration_Info_UEnum_EArmPullbackConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArmPullbackConfig.InnerSingleton, Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EArmPullbackConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArmPullbackConfig;
class UScriptStruct* FArmPullbackConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArmPullbackConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArmPullbackConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArmPullbackConfig, Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime(), TEXT("ArmPullbackConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ArmPullbackConfig.OuterSingleton;
}
template<> WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* StaticStruct<FArmPullbackConfig>()
{
	return FArmPullbackConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FArmPullbackConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Config_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmPullbackThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmPullbackThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Arm Pull-Back Configuration" },
		{ "ModuleRelativePath", "Public/AnimGlobals.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArmPullbackConfig>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "ArmPullbackConfig" },
		{ "DisplayName", "Arm Pull-Back Configuration" },
		{ "ModuleRelativePath", "Public/AnimGlobals.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArmPullbackConfig, Config), Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config_MetaData)) }; // 342289929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_ArmPullbackThreshold_MetaData[] = {
		{ "Category", "ArmPullbackConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The aiming value that, when exceeded, will disable arm pull-back.\n" },
		{ "DisplayName", "Arm Pull-Back Disabled Threshold" },
		{ "EditCondition", "Config == EArmPullbackConfig::AimingValue" },
		{ "ModuleRelativePath", "Public/AnimGlobals.h" },
		{ "ToolTip", "The aiming value that, when exceeded, will disable arm pull-back." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_ArmPullbackThreshold = { "ArmPullbackThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArmPullbackConfig, ArmPullbackThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_ArmPullbackThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_ArmPullbackThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_ArmPullbackThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime,
		nullptr,
		&NewStructOps,
		"ArmPullbackConfig",
		sizeof(FArmPullbackConfig),
		alignof(FArmPullbackConfig),
		Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArmPullbackConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_ArmPullbackConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArmPullbackConfig.InnerSingleton, Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ArmPullbackConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JointClampConfig;
class UScriptStruct* FJointClampConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JointClampConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JointClampConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJointClampConfig, Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime(), TEXT("JointClampConfig"));
	}
	return Z_Registration_Info_UScriptStruct_JointClampConfig.OuterSingleton;
}
template<> WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* StaticStruct<FJointClampConfig>()
{
	return FJointClampConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJointClampConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJointClampConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Arm Joint Clamping Configurations" },
		{ "ModuleRelativePath", "Public/AnimGlobals.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJointClampConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_HorizontalRange_MetaData[] = {
		{ "Category", "JointClampConfig" },
		{ "DisplayName", "Joint Horizontal Clamp Range" },
		{ "ModuleRelativePath", "Public/AnimGlobals.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_HorizontalRange = { "HorizontalRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJointClampConfig, HorizontalRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_HorizontalRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_HorizontalRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_VerticalRange_MetaData[] = {
		{ "Category", "JointClampConfig" },
		{ "DisplayName", "Joint Vertical Clamp Range" },
		{ "ModuleRelativePath", "Public/AnimGlobals.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_VerticalRange = { "VerticalRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJointClampConfig, VerticalRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_VerticalRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_VerticalRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJointClampConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_HorizontalRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_VerticalRange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJointClampConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime,
		nullptr,
		&NewStructOps,
		"JointClampConfig",
		sizeof(FJointClampConfig),
		alignof(FJointClampConfig),
		Z_Construct_UScriptStruct_FJointClampConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJointClampConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJointClampConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJointClampConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJointClampConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_JointClampConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JointClampConfig.InnerSingleton, Z_Construct_UScriptStruct_FJointClampConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JointClampConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimGlobals_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimGlobals_h_Statics::EnumInfo[] = {
		{ EArmPullbackConfig_StaticEnum, TEXT("EArmPullbackConfig"), &Z_Registration_Info_UEnum_EArmPullbackConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 342289929U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimGlobals_h_Statics::ScriptStructInfo[] = {
		{ FArmPullbackConfig::StaticStruct, Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewStructOps, TEXT("ArmPullbackConfig"), &Z_Registration_Info_UScriptStruct_ArmPullbackConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArmPullbackConfig), 1062641928U) },
		{ FJointClampConfig::StaticStruct, Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewStructOps, TEXT("JointClampConfig"), &Z_Registration_Info_UScriptStruct_JointClampConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJointClampConfig), 2408498901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimGlobals_h_832411956(TEXT("/Script/WeaponSystemAnimsRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimGlobals_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimGlobals_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimGlobals_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimGlobals_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
