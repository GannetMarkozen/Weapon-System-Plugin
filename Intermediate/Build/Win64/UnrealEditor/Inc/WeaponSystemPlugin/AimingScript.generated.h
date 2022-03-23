// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEMPLUGIN_AimingScript_generated_h
#error "AimingScript.generated.h already included, missing '#pragma once' in AimingScript.h"
#endif
#define WEAPONSYSTEMPLUGIN_AimingScript_generated_h

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_RPC_WRAPPERS \
	virtual void Multi_StopAiming_Implementation(); \
	virtual void Server_StopAiming_Implementation(); \
	virtual void Client_StartAimingFailedPrediction_Implementation(); \
	virtual void Multi_StartAiming_Implementation(); \
	virtual void Server_StartAiming_Implementation(); \
	virtual void AimingComplete_Implementation(); \
	virtual bool CanAim_Implementation() const; \
 \
	DECLARE_FUNCTION(execMulti_StopAiming); \
	DECLARE_FUNCTION(execServer_StopAiming); \
	DECLARE_FUNCTION(execClient_StartAimingFailedPrediction); \
	DECLARE_FUNCTION(execMulti_StartAiming); \
	DECLARE_FUNCTION(execServer_StartAiming); \
	DECLARE_FUNCTION(execAimingComplete); \
	DECLARE_FUNCTION(execCanAim);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMulti_StopAiming); \
	DECLARE_FUNCTION(execServer_StopAiming); \
	DECLARE_FUNCTION(execClient_StartAimingFailedPrediction); \
	DECLARE_FUNCTION(execMulti_StartAiming); \
	DECLARE_FUNCTION(execServer_StartAiming); \
	DECLARE_FUNCTION(execAimingComplete); \
	DECLARE_FUNCTION(execCanAim);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_EVENT_PARMS \
	struct AimingScript_eventCanAim_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AimingScript_eventCanAim_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_CALLBACK_WRAPPERS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAimingScript(); \
	friend struct Z_Construct_UClass_UAimingScript_Statics; \
public: \
	DECLARE_CLASS(UAimingScript, UWeaponScript, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAimingScript)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAimingScript(); \
	friend struct Z_Construct_UClass_UAimingScript_Statics; \
public: \
	DECLARE_CLASS(UAimingScript, UWeaponScript, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAimingScript)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAimingScript(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAimingScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimingScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimingScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimingScript(UAimingScript&&); \
	NO_API UAimingScript(const UAimingScript&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimingScript(UAimingScript&&); \
	NO_API UAimingScript(const UAimingScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimingScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimingScript); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAimingScript)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AimingCurve() { return STRUCT_OFFSET(UAimingScript, AimingCurve); } \
	FORCEINLINE static uint32 __PPO__PlayRate() { return STRUCT_OFFSET(UAimingScript, PlayRate); }


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_13_PROLOG \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_EVENT_PARMS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAimingScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
