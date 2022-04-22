// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEMPLUGIN_Types_generated_h
#error "Types.generated.h already included, missing '#pragma once' in Types.h"
#endif
#define WEAPONSYSTEMPLUGIN_Types_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Types_h


#define FOREACH_ENUM_ELATERALITY(op) \
	op(ELaterality::Left) \
	op(ELaterality::Right) 

enum class ELaterality : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<ELaterality>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
