// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEMANIMSRUNTIME_AnimGlobals_generated_h
#error "AnimGlobals.generated.h already included, missing '#pragma once' in AnimGlobals.h"
#endif
#define WEAPONSYSTEMANIMSRUNTIME_AnimGlobals_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimGlobals_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArmPullbackConfig_Statics; \
	WEAPONSYSTEMANIMSRUNTIME_API static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* StaticStruct<struct FArmPullbackConfig>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimGlobals_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJointClampConfig_Statics; \
	WEAPONSYSTEMANIMSRUNTIME_API static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* StaticStruct<struct FJointClampConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimGlobals_h


#define FOREACH_ENUM_EARMPULLBACKCONFIG(op) \
	op(EArmPullbackConfig::Enabled) \
	op(EArmPullbackConfig::Disabled) \
	op(EArmPullbackConfig::AimingValue) 

enum class EArmPullbackConfig : uint8;
template<> WEAPONSYSTEMANIMSRUNTIME_API UEnum* StaticEnum<EArmPullbackConfig>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
