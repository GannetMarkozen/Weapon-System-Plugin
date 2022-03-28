// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
class UWidgetComponent;
#ifdef WEAPONSYSTEMPLUGIN_SetupAttachmentsScriptBase_generated_h
#error "SetupAttachmentsScriptBase.generated.h already included, missing '#pragma once' in SetupAttachmentsScriptBase.h"
#endif
#define WEAPONSYSTEMPLUGIN_SetupAttachmentsScriptBase_generated_h

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_RPC_WRAPPERS \
	virtual void Server_SetupAttachments_Implementation(); \
 \
	DECLARE_FUNCTION(execDestroyAttachmentWidgetsByClass); \
	DECLARE_FUNCTION(execSpawnAttachmentWidgets); \
	DECLARE_FUNCTION(execOnRep_IsAttaching); \
	DECLARE_FUNCTION(execServer_SetupAttachments); \
	DECLARE_FUNCTION(execSetupAttachments); \
	DECLARE_FUNCTION(execTimelineProgress); \
	DECLARE_FUNCTION(execSetupActivationBinding);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_SetupAttachments_Implementation(); \
 \
	DECLARE_FUNCTION(execDestroyAttachmentWidgetsByClass); \
	DECLARE_FUNCTION(execSpawnAttachmentWidgets); \
	DECLARE_FUNCTION(execOnRep_IsAttaching); \
	DECLARE_FUNCTION(execServer_SetupAttachments); \
	DECLARE_FUNCTION(execSetupAttachments); \
	DECLARE_FUNCTION(execTimelineProgress); \
	DECLARE_FUNCTION(execSetupActivationBinding);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_EVENT_PARMS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_CALLBACK_WRAPPERS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSetupAttachmentsScriptBase(); \
	friend struct Z_Construct_UClass_USetupAttachmentsScriptBase_Statics; \
public: \
	DECLARE_CLASS(USetupAttachmentsScriptBase, UWeaponScript, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(USetupAttachmentsScriptBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsAttaching=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsAttaching	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USetupAttachmentsScriptBase) \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSetupAttachmentsScriptBase(); \
	friend struct Z_Construct_UClass_USetupAttachmentsScriptBase_Statics; \
public: \
	DECLARE_CLASS(USetupAttachmentsScriptBase, UWeaponScript, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(USetupAttachmentsScriptBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsAttaching=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsAttaching	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USetupAttachmentsScriptBase) \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USetupAttachmentsScriptBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USetupAttachmentsScriptBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USetupAttachmentsScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USetupAttachmentsScriptBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USetupAttachmentsScriptBase(USetupAttachmentsScriptBase&&); \
	NO_API USetupAttachmentsScriptBase(const USetupAttachmentsScriptBase&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USetupAttachmentsScriptBase() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USetupAttachmentsScriptBase(USetupAttachmentsScriptBase&&); \
	NO_API USetupAttachmentsScriptBase(const USetupAttachmentsScriptBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USetupAttachmentsScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USetupAttachmentsScriptBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USetupAttachmentsScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsAttaching() { return STRUCT_OFFSET(USetupAttachmentsScriptBase, bIsAttaching); } \
	FORCEINLINE static uint32 __PPO__WidgetClass() { return STRUCT_OFFSET(USetupAttachmentsScriptBase, WidgetClass); } \
	FORCEINLINE static uint32 __PPO__TargetPoseTransform() { return STRUCT_OFFSET(USetupAttachmentsScriptBase, TargetPoseTransform); } \
	FORCEINLINE static uint32 __PPO__Curve() { return STRUCT_OFFSET(USetupAttachmentsScriptBase, Curve); } \
	FORCEINLINE static uint32 __PPO__PlayRate() { return STRUCT_OFFSET(USetupAttachmentsScriptBase, PlayRate); }


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_15_PROLOG \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_EVENT_PARMS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class USetupAttachmentsScriptBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
