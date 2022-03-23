// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEMPLUGIN_CycleSightsScript_generated_h
#error "CycleSightsScript.generated.h already included, missing '#pragma once' in CycleSightsScript.h"
#endif
#define WEAPONSYSTEMPLUGIN_CycleSightsScript_generated_h

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_RPC_WRAPPERS \
	virtual void OnRep_CurrentSights_Implementation(); \
	virtual void Server_CycleSights_Implementation(); \
	virtual void CycleSights_Implementation(); \
	virtual void TimelineProgress_Implementation(const float Value); \
 \
	DECLARE_FUNCTION(execOnRep_CurrentSights); \
	DECLARE_FUNCTION(execServer_CycleSights); \
	DECLARE_FUNCTION(execCycleSights); \
	DECLARE_FUNCTION(execTimelineProgress); \
	DECLARE_FUNCTION(execSetupActivationBinding);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentSights); \
	DECLARE_FUNCTION(execServer_CycleSights); \
	DECLARE_FUNCTION(execCycleSights); \
	DECLARE_FUNCTION(execTimelineProgress); \
	DECLARE_FUNCTION(execSetupActivationBinding);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_EVENT_PARMS \
	struct CycleSightsScriptBase_eventTimelineProgress_Parms \
	{ \
		float Value; \
	};


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_CALLBACK_WRAPPERS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCycleSightsScriptBase(); \
	friend struct Z_Construct_UClass_UCycleSightsScriptBase_Statics; \
public: \
	DECLARE_CLASS(UCycleSightsScriptBase, UWeaponScript, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCycleSightsScriptBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentSights=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentSights	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UCycleSightsScriptBase) \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCycleSightsScriptBase(); \
	friend struct Z_Construct_UClass_UCycleSightsScriptBase_Statics; \
public: \
	DECLARE_CLASS(UCycleSightsScriptBase, UWeaponScript, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCycleSightsScriptBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentSights=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentSights	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UCycleSightsScriptBase) \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCycleSightsScriptBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCycleSightsScriptBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCycleSightsScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCycleSightsScriptBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCycleSightsScriptBase(UCycleSightsScriptBase&&); \
	NO_API UCycleSightsScriptBase(const UCycleSightsScriptBase&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCycleSightsScriptBase(UCycleSightsScriptBase&&); \
	NO_API UCycleSightsScriptBase(const UCycleSightsScriptBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCycleSightsScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCycleSightsScriptBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCycleSightsScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetRelativeTransform() { return STRUCT_OFFSET(UCycleSightsScriptBase, TargetRelativeTransform); } \
	FORCEINLINE static uint32 __PPO__OldRelativeTransform() { return STRUCT_OFFSET(UCycleSightsScriptBase, OldRelativeTransform); } \
	FORCEINLINE static uint32 __PPO__CurrentSights() { return STRUCT_OFFSET(UCycleSightsScriptBase, CurrentSights); } \
	FORCEINLINE static uint32 __PPO__CycleCurve() { return STRUCT_OFFSET(UCycleSightsScriptBase, CycleCurve); } \
	FORCEINLINE static uint32 __PPO__PlayRate() { return STRUCT_OFFSET(UCycleSightsScriptBase, PlayRate); }


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_14_PROLOG \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_EVENT_PARMS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UCycleSightsScriptBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
