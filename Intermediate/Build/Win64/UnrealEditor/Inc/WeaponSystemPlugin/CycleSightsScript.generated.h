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

#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_SPARSE_DATA
#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_RPC_WRAPPERS \
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


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentSights); \
	DECLARE_FUNCTION(execServer_CycleSights); \
	DECLARE_FUNCTION(execCycleSights); \
	DECLARE_FUNCTION(execTimelineProgress); \
	DECLARE_FUNCTION(execSetupActivationBinding);


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_EVENT_PARMS \
	struct CycleSightsScriptBase_eventTimelineProgress_Parms \
	{ \
		float Value; \
	};


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_CALLBACK_WRAPPERS
#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_INCLASS_NO_PURE_DECLS \
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


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_INCLASS \
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


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_STANDARD_CONSTRUCTORS \
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


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCycleSightsScriptBase(UCycleSightsScriptBase&&); \
	NO_API UCycleSightsScriptBase(const UCycleSightsScriptBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCycleSightsScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCycleSightsScriptBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCycleSightsScriptBase)


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_14_PROLOG \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_EVENT_PARMS


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_SPARSE_DATA \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_RPC_WRAPPERS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_CALLBACK_WRAPPERS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_INCLASS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_SPARSE_DATA \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_CALLBACK_WRAPPERS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_INCLASS_NO_PURE_DECLS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UCycleSightsScriptBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_CycleSightsScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
