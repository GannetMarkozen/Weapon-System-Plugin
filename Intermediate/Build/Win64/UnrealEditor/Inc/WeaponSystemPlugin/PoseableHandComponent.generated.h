// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPoseSnapshot;
#ifdef WEAPONSYSTEMPLUGIN_PoseableHandComponent_generated_h
#error "PoseableHandComponent.generated.h already included, missing '#pragma once' in PoseableHandComponent.h"
#endif
#define WEAPONSYSTEMPLUGIN_PoseableHandComponent_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasValidCachedPoseSnapshot); \
	DECLARE_FUNCTION(execGetCachedPoseSnapshot);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasValidCachedPoseSnapshot); \
	DECLARE_FUNCTION(execGetCachedPoseSnapshot);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseableHandComponent(); \
	friend struct Z_Construct_UClass_UPoseableHandComponent_Statics; \
public: \
	DECLARE_CLASS(UPoseableHandComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPoseableHandComponent)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUPoseableHandComponent(); \
	friend struct Z_Construct_UClass_UPoseableHandComponent_Statics; \
public: \
	DECLARE_CLASS(UPoseableHandComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPoseableHandComponent)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseableHandComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseableHandComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseableHandComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseableHandComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoseableHandComponent(UPoseableHandComponent&&); \
	NO_API UPoseableHandComponent(const UPoseableHandComponent&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoseableHandComponent(UPoseableHandComponent&&); \
	NO_API UPoseableHandComponent(const UPoseableHandComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseableHandComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseableHandComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPoseableHandComponent)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_29_PROLOG
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UPoseableHandComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Attachments_PoseableHandComponent_h


#define FOREACH_ENUM_ELATERALITY(op) \
	op(ELaterality::Left) \
	op(ELaterality::Right) 

enum class ELaterality : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<ELaterality>();

#define FOREACH_ENUM_ELATERALITYMOD(op) \
	op(ELateralityMod::Left) \
	op(ELateralityMod::Right) \
	op(ELateralityMod::Both) 

enum class ELateralityMod : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<ELateralityMod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
