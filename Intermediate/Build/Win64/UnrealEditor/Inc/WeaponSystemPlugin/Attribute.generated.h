// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAttributeHandle;
#ifdef WEAPONSYSTEMPLUGIN_Attribute_generated_h
#error "Attribute.generated.h already included, missing '#pragma once' in Attribute.h"
#endif
#define WEAPONSYSTEMPLUGIN_Attribute_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributeHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAttributeHandle>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_54_DELEGATE \
struct _Script_WeaponSystemPlugin_eventAttributeValueChangedDelegate_Parms \
{ \
	float NewValue; \
	float OldValue; \
	FAttributeHandle AttributeHandle; \
}; \
static inline void FAttributeValueChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AttributeValueChangedDelegate, float NewValue, float OldValue, FAttributeHandle& AttributeHandle) \
{ \
	_Script_WeaponSystemPlugin_eventAttributeValueChangedDelegate_Parms Parms; \
	Parms.NewValue=NewValue; \
	Parms.OldValue=OldValue; \
	Parms.AttributeHandle=AttributeHandle; \
	AttributeValueChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
	AttributeHandle=Parms.AttributeHandle; \
}


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_55_DELEGATE \
struct _Script_WeaponSystemPlugin_eventAttributeValueChangedUniDelegate_Parms \
{ \
	float NewValue; \
	float OldValue; \
	FAttributeHandle AttributeHandle; \
}; \
static inline void FAttributeValueChangedUniDelegate_DelegateWrapper(const FScriptDelegate& AttributeValueChangedUniDelegate, float NewValue, float OldValue, FAttributeHandle& AttributeHandle) \
{ \
	_Script_WeaponSystemPlugin_eventAttributeValueChangedUniDelegate_Parms Parms; \
	Parms.NewValue=NewValue; \
	Parms.OldValue=OldValue; \
	Parms.AttributeHandle=AttributeHandle; \
	AttributeValueChangedUniDelegate.ProcessDelegate<UObject>(&Parms); \
	AttributeHandle=Parms.AttributeHandle; \
}


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
