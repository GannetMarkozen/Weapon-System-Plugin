// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AShooterCharacterBase;
class UAnimSequence;
#ifdef WEAPONSYSTEMPLUGIN_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define WEAPONSYSTEMPLUGIN_Weapon_generated_h

#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimProperties_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAnimProperties>();

#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_SPARSE_DATA
#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_RPC_WRAPPERS \
	virtual FTransform GetOrientationRelativeTransform_Implementation(const float AimingValue) const; \
	virtual FTransform GetOriginRelativeTransform_Implementation() const; \
	virtual FTransform GetMuzzleWorldTransform_Implementation() const; \
	virtual FTransform GetDefaultSightsRelativeTransform_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetOrientationWorldTransform); \
	DECLARE_FUNCTION(execGetOrientationRelativeTransform); \
	DECLARE_FUNCTION(execGetOriginWorldTransform); \
	DECLARE_FUNCTION(execGetOriginRelativeTransform); \
	DECLARE_FUNCTION(execGetMuzzleWorldTransform); \
	DECLARE_FUNCTION(execGetSightsWorldTransform); \
	DECLARE_FUNCTION(execGetDefaultSightsRelativeTransform); \
	DECLARE_FUNCTION(execGetAnimationVariablesOnTick); \
	DECLARE_FUNCTION(execGetAnimationVariablesOnEquipped);


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOrientationWorldTransform); \
	DECLARE_FUNCTION(execGetOrientationRelativeTransform); \
	DECLARE_FUNCTION(execGetOriginWorldTransform); \
	DECLARE_FUNCTION(execGetOriginRelativeTransform); \
	DECLARE_FUNCTION(execGetMuzzleWorldTransform); \
	DECLARE_FUNCTION(execGetSightsWorldTransform); \
	DECLARE_FUNCTION(execGetDefaultSightsRelativeTransform); \
	DECLARE_FUNCTION(execGetAnimationVariablesOnTick); \
	DECLARE_FUNCTION(execGetAnimationVariablesOnEquipped);


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_EVENT_PARMS \
	struct Weapon_eventGetDefaultSightsRelativeTransform_Parms \
	{ \
		FTransform ReturnValue; \
	}; \
	struct Weapon_eventGetMuzzleWorldTransform_Parms \
	{ \
		FTransform ReturnValue; \
	}; \
	struct Weapon_eventGetOrientationRelativeTransform_Parms \
	{ \
		float AimingValue; \
		FTransform ReturnValue; \
	}; \
	struct Weapon_eventGetOriginRelativeTransform_Parms \
	{ \
		FTransform ReturnValue; \
	};


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_CALLBACK_WRAPPERS
#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AWeaponBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AWeaponBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_30_PROLOG \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_EVENT_PARMS


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_SPARSE_DATA \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_RPC_WRAPPERS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_CALLBACK_WRAPPERS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_INCLASS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_SPARSE_DATA \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_CALLBACK_WRAPPERS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_INCLASS_NO_PURE_DECLS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
