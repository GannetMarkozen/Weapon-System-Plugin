// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
class ATrueFPSCharacterBase;
class UAnimSequence;
#ifdef WEAPONSYSTEMPLUGIN_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define WEAPONSYSTEMPLUGIN_Weapon_generated_h

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimProperties_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAnimProperties>();

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_RPC_WRAPPERS \
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


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_EVENT_PARMS \
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


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_CALLBACK_WRAPPERS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AWeaponBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AWeaponBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_STANDARD_CONSTRUCTORS \
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


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwningCharacter() { return STRUCT_OFFSET(AWeapon, OwningCharacter); } \
	FORCEINLINE static uint32 __PPO__RelativeLocationPlacement() { return STRUCT_OFFSET(AWeapon, RelativeLocationPlacement); } \
	FORCEINLINE static uint32 __PPO__RelativeRotationPlacement() { return STRUCT_OFFSET(AWeapon, RelativeRotationPlacement); } \
	FORCEINLINE static uint32 __PPO__AnimProps() { return STRUCT_OFFSET(AWeapon, AnimProps); } \
	FORCEINLINE static uint32 __PPO__OriginRelativeTransform() { return STRUCT_OFFSET(AWeapon, OriginRelativeTransform); } \
	FORCEINLINE static uint32 __PPO__EquipMontage() { return STRUCT_OFFSET(AWeapon, EquipMontage); } \
	FORCEINLINE static uint32 __PPO__UnequipMontage() { return STRUCT_OFFSET(AWeapon, UnequipMontage); }


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_30_PROLOG \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_EVENT_PARMS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
