// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef WEAPONSYSTEMPLUGIN_SightsAttachment_generated_h
#error "SightsAttachment.generated.h already included, missing '#pragma once' in SightsAttachment.h"
#endif
#define WEAPONSYSTEMPLUGIN_SightsAttachment_generated_h

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_RPC_WRAPPERS \
	virtual FTransform GetSightsWorldTransform_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetSightsWorldTransform);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSightsWorldTransform);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_EVENT_PARMS \
	struct SightsAttachment_eventGetSightsWorldTransform_Parms \
	{ \
		FTransform ReturnValue; \
	};


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_CALLBACK_WRAPPERS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASightsAttachment(); \
	friend struct Z_Construct_UClass_ASightsAttachment_Statics; \
public: \
	DECLARE_CLASS(ASightsAttachment, AWeaponAttachmentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASightsAttachment)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASightsAttachment(); \
	friend struct Z_Construct_UClass_ASightsAttachment_Statics; \
public: \
	DECLARE_CLASS(ASightsAttachment, AWeaponAttachmentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASightsAttachment)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASightsAttachment(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASightsAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASightsAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASightsAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASightsAttachment(ASightsAttachment&&); \
	NO_API ASightsAttachment(const ASightsAttachment&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASightsAttachment(ASightsAttachment&&); \
	NO_API ASightsAttachment(const ASightsAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASightsAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASightsAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASightsAttachment)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sights() { return STRUCT_OFFSET(ASightsAttachment, Sights); } \
	FORCEINLINE static uint32 __PPO__SightsPoint() { return STRUCT_OFFSET(ASightsAttachment, SightsPoint); }


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_13_PROLOG \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_EVENT_PARMS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class ASightsAttachment>();

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_RPC_WRAPPERS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_RPC_WRAPPERS_NO_PURE_DECLS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSightsAttachmentPoint(); \
	friend struct Z_Construct_UClass_USightsAttachmentPoint_Statics; \
public: \
	DECLARE_CLASS(USightsAttachmentPoint, UWeaponAttachmentPoint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(USightsAttachmentPoint)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUSightsAttachmentPoint(); \
	friend struct Z_Construct_UClass_USightsAttachmentPoint_Statics; \
public: \
	DECLARE_CLASS(USightsAttachmentPoint, UWeaponAttachmentPoint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(USightsAttachmentPoint)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USightsAttachmentPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USightsAttachmentPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USightsAttachmentPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USightsAttachmentPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USightsAttachmentPoint(USightsAttachmentPoint&&); \
	NO_API USightsAttachmentPoint(const USightsAttachmentPoint&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USightsAttachmentPoint() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USightsAttachmentPoint(USightsAttachmentPoint&&); \
	NO_API USightsAttachmentPoint(const USightsAttachmentPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USightsAttachmentPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USightsAttachmentPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USightsAttachmentPoint)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_PRIVATE_PROPERTY_OFFSET
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_50_PROLOG
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class USightsAttachmentPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_SightsAttachment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS