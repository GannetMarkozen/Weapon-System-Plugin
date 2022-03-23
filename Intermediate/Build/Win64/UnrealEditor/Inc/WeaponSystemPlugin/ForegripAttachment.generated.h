// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEMPLUGIN_ForegripAttachment_generated_h
#error "ForegripAttachment.generated.h already included, missing '#pragma once' in ForegripAttachment.h"
#endif
#define WEAPONSYSTEMPLUGIN_ForegripAttachment_generated_h

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHandPlacement);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHandPlacement);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAForegripAttachment(); \
	friend struct Z_Construct_UClass_AForegripAttachment_Statics; \
public: \
	DECLARE_CLASS(AForegripAttachment, AWeaponAttachmentBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AForegripAttachment)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAForegripAttachment(); \
	friend struct Z_Construct_UClass_AForegripAttachment_Statics; \
public: \
	DECLARE_CLASS(AForegripAttachment, AWeaponAttachmentBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AForegripAttachment)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AForegripAttachment(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AForegripAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AForegripAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AForegripAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AForegripAttachment(AForegripAttachment&&); \
	NO_API AForegripAttachment(const AForegripAttachment&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AForegripAttachment(AForegripAttachment&&); \
	NO_API AForegripAttachment(const AForegripAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AForegripAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AForegripAttachment); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AForegripAttachment)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Foregrip() { return STRUCT_OFFSET(AForegripAttachment, Foregrip); } \
	FORCEINLINE static uint32 __PPO__HandAttachPoint() { return STRUCT_OFFSET(AForegripAttachment, HandAttachPoint); } \
	FORCEINLINE static uint32 __PPO__RotOffset() { return STRUCT_OFFSET(AForegripAttachment, RotOffset); } \
	FORCEINLINE static uint32 __PPO__DomHandName() { return STRUCT_OFFSET(AForegripAttachment, DomHandName); } \
	FORCEINLINE static uint32 __PPO__OffHandName() { return STRUCT_OFFSET(AForegripAttachment, OffHandName); } \
	FORCEINLINE static uint32 __PPO__WeaponSocketName() { return STRUCT_OFFSET(AForegripAttachment, WeaponSocketName); } \
	FORCEINLINE static uint32 __PPO__bCachePose() { return STRUCT_OFFSET(AForegripAttachment, bCachePose); } \
	FORCEINLINE static uint32 __PPO__bRemoveCache() { return STRUCT_OFFSET(AForegripAttachment, bRemoveCache); } \
	FORCEINLINE static uint32 __PPO__CachedPoseName() { return STRUCT_OFFSET(AForegripAttachment, CachedPoseName); }


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_9_PROLOG
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class AForegripAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_ForegripAttachment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
