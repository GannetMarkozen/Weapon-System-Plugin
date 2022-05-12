// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEMPLUGIN_Globals_generated_h
#error "Globals.generated.h already included, missing '#pragma once' in Globals.h"
#endif
#define WEAPONSYSTEMPLUGIN_Globals_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Globals_h


#define FOREACH_ENUM_ELATERALITY(op) \
	op(ELaterality::Left) \
	op(ELaterality::Right) 

enum class ELaterality : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<ELaterality>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
