// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEMPLUGIN_AttributeEffectParams_generated_h
#error "AttributeEffectParams.generated.h already included, missing '#pragma once' in AttributeEffectParams.h"
#endif
#define WEAPONSYSTEMPLUGIN_AttributeEffectParams_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectParams_h


#define FOREACH_ENUM_EEFFECTDURATION(op) \
	op(EEffectDuration::Instant) \
	op(EEffectDuration::ForDuration) \
	op(EEffectDuration::Infinite) 

enum class EEffectDuration : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectDuration>();

#define FOREACH_ENUM_EEFFECTREPCOND(op) \
	op(EEffectRepCond::ServerOnly) \
	op(EEffectRepCond::LocalOnly) \
	op(EEffectRepCond::LocalPredicted) 

enum class EEffectRepCond : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectRepCond>();

#define FOREACH_ENUM_EEFFECTMODTYPE(op) \
	op(EEffectModType::None) \
	op(EEffectModType::Overriding) \
	op(EEffectModType::Additive) \
	op(EEffectModType::Multiplicative) 

enum class EEffectModType : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectModType>();

#define FOREACH_ENUM_EEFFECTREMOVALREASON(op) \
	op(EEffectRemovalReason::LifespanEnd) \
	op(EEffectRemovalReason::ManualRemoval) \
	op(EEffectRemovalReason::NetPredSuccess) \
	op(EEffectRemovalReason::NetPredFail) 

enum class EEffectRemovalReason : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectRemovalReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
