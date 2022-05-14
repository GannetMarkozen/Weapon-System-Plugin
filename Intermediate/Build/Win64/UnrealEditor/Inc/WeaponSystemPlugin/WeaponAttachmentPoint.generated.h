// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
class AWeaponAttachmentBase;
#ifdef WEAPONSYSTEMPLUGIN_WeaponAttachmentPoint_generated_h
#error "WeaponAttachmentPoint.generated.h already included, missing '#pragma once' in WeaponAttachmentPoint.h"
#endif
#define WEAPONSYSTEMPLUGIN_WeaponAttachmentPoint_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttachedWidget); \
	DECLARE_FUNCTION(execSetAttachment); \
	DECLARE_FUNCTION(execDestroyAttachment); \
	DECLARE_FUNCTION(execSpawnAttachment); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execOnRep_Attachment);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttachedWidget); \
	DECLARE_FUNCTION(execSetAttachment); \
	DECLARE_FUNCTION(execDestroyAttachment); \
	DECLARE_FUNCTION(execSpawnAttachment); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execOnRep_Attachment);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_EVENT_PARMS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponAttachmentPoint(); \
	friend struct Z_Construct_UClass_UWeaponAttachmentPoint_Statics; \
public: \
	DECLARE_CLASS(UWeaponAttachmentPoint, UVisualizationSceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWeaponAttachmentPoint) \
	virtual UObject* _getUObject() const override { return const_cast<UWeaponAttachmentPoint*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Attachment=NETFIELD_REP_START, \
		NETFIELD_REP_END=Attachment	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponAttachmentPoint(); \
	friend struct Z_Construct_UClass_UWeaponAttachmentPoint_Statics; \
public: \
	DECLARE_CLASS(UWeaponAttachmentPoint, UVisualizationSceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWeaponAttachmentPoint) \
	virtual UObject* _getUObject() const override { return const_cast<UWeaponAttachmentPoint*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Attachment=NETFIELD_REP_START, \
		NETFIELD_REP_END=Attachment	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponAttachmentPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponAttachmentPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponAttachmentPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponAttachmentPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponAttachmentPoint(UWeaponAttachmentPoint&&); \
	NO_API UWeaponAttachmentPoint(const UWeaponAttachmentPoint&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponAttachmentPoint(UWeaponAttachmentPoint&&); \
	NO_API UWeaponAttachmentPoint(const UWeaponAttachmentPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponAttachmentPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponAttachmentPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponAttachmentPoint)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_19_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UWeaponAttachmentPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
