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

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execCanAim); \
	DECLARE_FUNCTION(execStopAiming); \
	DECLARE_FUNCTION(execStartAiming); \
	DECLARE_FUNCTION(execSetupActionBinding);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMulti_StopAiming); \
	DECLARE_FUNCTION(execServer_StopAiming); \
	DECLARE_FUNCTION(execClient_StartAimingFailedPrediction); \
	DECLARE_FUNCTION(execMulti_StartAiming); \
	DECLARE_FUNCTION(execServer_StartAiming); \
	DECLARE_FUNCTION(execAimingComplete); \
	DECLARE_FUNCTION(execCanAim); \
	DECLARE_FUNCTION(execStopAiming); \
	DECLARE_FUNCTION(execStartAiming); \
	DECLARE_FUNCTION(execSetupActionBinding);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_EVENT_PARMS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAimingScript(); \
	friend struct Z_Construct_UClass_UAimingScript_Statics; \
public: \
	DECLARE_CLASS(UAimingScript, UWeaponScript, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAimingScript)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAimingScript(); \
	friend struct Z_Construct_UClass_UAimingScript_Statics; \
public: \
	DECLARE_CLASS(UAimingScript, UWeaponScript, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAimingScript)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_STANDARD_CONSTRUCTORS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimingScript(UAimingScript&&); \
	NO_API UAimingScript(const UAimingScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimingScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimingScript); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAimingScript)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_13_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAimingScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
