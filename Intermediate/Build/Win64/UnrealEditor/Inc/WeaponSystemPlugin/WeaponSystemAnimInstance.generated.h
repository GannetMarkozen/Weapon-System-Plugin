// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class AShooterCharacterBase;
struct FHitResult;
class AWeapon;
#ifdef WEAPONSYSTEMPLUGIN_WeaponSystemAnimInstance_generated_h
#error "WeaponSystemAnimInstance.generated.h already included, missing '#pragma once' in WeaponSystemAnimInstance.h"
#endif
#define WEAPONSYSTEMPLUGIN_WeaponSystemAnimInstance_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyHitReaction); \
	DECLARE_FUNCTION(execOnCharacterLanded); \
	DECLARE_FUNCTION(execInternal_CurrentWeaponChanged);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyHitReaction); \
	DECLARE_FUNCTION(execOnCharacterLanded); \
	DECLARE_FUNCTION(execInternal_CurrentWeaponChanged);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_EVENT_PARMS \
	struct WeaponSystemAnimInstance_eventBP_CurrentWeaponChanged_Parms \
	{ \
		AWeapon* NewWeapon; \
		AWeapon* OldWeapon; \
	}; \
	struct WeaponSystemAnimInstance_eventBP_OnCharacterLanded_Parms \
	{ \
		AShooterCharacterBase* InCharacter; \
		FHitResult Hit; \
	}; \
	struct WeaponSystemAnimInstance_eventBP_PostUpdateAnimation_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct WeaponSystemAnimInstance_eventBP_UpdateOffsetTransform_Parms \
	{ \
		float DeltaTime; \
		FVector InOffsetLocation; \
		FRotator InOffsetRotation; \
		FVector OutOffsetLocation; \
		FRotator OutOffsetRotation; \
	}; \
	struct WeaponSystemAnimInstance_eventBP_UpdatePlacementTransform_Parms \
	{ \
		float DeltaTime; \
		FVector InPlacementLocation; \
		FRotator InPlacementRotation; \
		FVector OutPlacementLocation; \
		FRotator OutPlacementRotation; \
	}; \
	struct WeaponSystemAnimInstance_eventBP_UpdateVariables_Parms \
	{ \
		float DeltaTime; \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponSystemAnimInstance(); \
	friend struct Z_Construct_UClass_UWeaponSystemAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UWeaponSystemAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWeaponSystemAnimInstance)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponSystemAnimInstance(); \
	friend struct Z_Construct_UClass_UWeaponSystemAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UWeaponSystemAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWeaponSystemAnimInstance)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_STANDARD_CONSTRUCTORS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponSystemAnimInstance(UWeaponSystemAnimInstance&&); \
	NO_API UWeaponSystemAnimInstance(const UWeaponSystemAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponSystemAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponSystemAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponSystemAnimInstance)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_31_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UWeaponSystemAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_Anim_WeaponSystemAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
