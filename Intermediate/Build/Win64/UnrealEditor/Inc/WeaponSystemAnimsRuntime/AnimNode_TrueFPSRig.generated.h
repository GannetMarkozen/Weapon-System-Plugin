// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEMANIMSRUNTIME_AnimNode_TrueFPSRig_generated_h
#error "AnimNode_TrueFPSRig.generated.h already included, missing '#pragma once' in AnimNode_TrueFPSRig.h"
#endif
#define WEAPONSYSTEMANIMSRUNTIME_AnimNode_TrueFPSRig_generated_h

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimNode_TrueFPSRig_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_TrueFPSRig>();

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimNode_TrueFPSRig_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArmPullbackConfig_Statics; \
	WEAPONSYSTEMANIMSRUNTIME_API static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* StaticStruct<struct FArmPullbackConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimNode_TrueFPSRig_h


#define FOREACH_ENUM_EARMPULLBACKCONFIG(op) \
	op(EArmPullbackConfig::Enabled) \
	op(EArmPullbackConfig::Disabled) \
	op(EArmPullbackConfig::AimingValue) 

enum class EArmPullbackConfig : uint8;
template<> WEAPONSYSTEMANIMSRUNTIME_API UEnum* StaticEnum<EArmPullbackConfig>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
