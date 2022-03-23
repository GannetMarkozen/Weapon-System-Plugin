// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATrueFPSCharacterBase;
struct FHitResult;
class AWeapon;
#ifdef WEAPONSYSTEMPLUGIN_WeaponSystemAnimInstance_generated_h
#error "WeaponSystemAnimInstance.generated.h already included, missing '#pragma once' in WeaponSystemAnimInstance.h"
#endif
#define WEAPONSYSTEMPLUGIN_WeaponSystemAnimInstance_generated_h

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_RPC_WRAPPERS \
	virtual void SetVars_Implementation(const float DeltaTime); \
	virtual void CurrentWeaponChanged_Implementation(AWeapon* NewWeapon, AWeapon* OldWeapon); \
 \
	DECLARE_FUNCTION(execOnCharacterLanded); \
	DECLARE_FUNCTION(execSetVars); \
	DECLARE_FUNCTION(execCurrentWeaponChanged);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCharacterLanded); \
	DECLARE_FUNCTION(execSetVars); \
	DECLARE_FUNCTION(execCurrentWeaponChanged);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_EVENT_PARMS \
	struct WeaponSystemAnimInstance_eventBP_OnCharacterLanded_Parms \
	{ \
		ATrueFPSCharacterBase* InCharacter; \
		FHitResult Hit; \
	}; \
	struct WeaponSystemAnimInstance_eventCurrentWeaponChanged_Parms \
	{ \
		AWeapon* NewWeapon; \
		AWeapon* OldWeapon; \
	}; \
	struct WeaponSystemAnimInstance_eventSetVars_Parms \
	{ \
		float DeltaTime; \
	};


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_CALLBACK_WRAPPERS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponSystemAnimInstance(); \
	friend struct Z_Construct_UClass_UWeaponSystemAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UWeaponSystemAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWeaponSystemAnimInstance)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponSystemAnimInstance(); \
	friend struct Z_Construct_UClass_UWeaponSystemAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UWeaponSystemAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWeaponSystemAnimInstance)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponSystemAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponSystemAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponSystemAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponSystemAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponSystemAnimInstance(UWeaponSystemAnimInstance&&); \
	NO_API UWeaponSystemAnimInstance(const UWeaponSystemAnimInstance&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponSystemAnimInstance(UWeaponSystemAnimInstance&&); \
	NO_API UWeaponSystemAnimInstance(const UWeaponSystemAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponSystemAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponSystemAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponSystemAnimInstance)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_PRIVATE_PROPERTY_OFFSET
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_16_PROLOG \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_EVENT_PARMS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UWeaponSystemAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
