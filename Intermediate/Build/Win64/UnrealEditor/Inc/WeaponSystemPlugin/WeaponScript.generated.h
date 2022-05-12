// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AShooterCharacterBase;
#ifdef WEAPONSYSTEMPLUGIN_WeaponScript_generated_h
#error "WeaponScript.generated.h already included, missing '#pragma once' in WeaponScript.h"
#endif
#define WEAPONSYSTEMPLUGIN_WeaponScript_generated_h

#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_SPARSE_DATA
#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwningCharacter);


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwningCharacter);


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponScript(); \
	friend struct Z_Construct_UClass_UWeaponScript_Statics; \
public: \
	DECLARE_CLASS(UWeaponScript, UWeaponScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWeaponScript)


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponScript(); \
	friend struct Z_Construct_UClass_UWeaponScript_Statics; \
public: \
	DECLARE_CLASS(UWeaponScript, UWeaponScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWeaponScript)


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponScript(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponScript(UWeaponScript&&); \
	NO_API UWeaponScript(const UWeaponScript&); \
public:


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponScript(UWeaponScript&&); \
	NO_API UWeaponScript(const UWeaponScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponScript); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UWeaponScript)


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_23_PROLOG
#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_SPARSE_DATA \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_RPC_WRAPPERS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_INCLASS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_SPARSE_DATA \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_INCLASS_NO_PURE_DECLS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UWeaponScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h


#define FOREACH_ENUM_EINPUTBINDING(op) \
	op(EInputBinding::PrimaryFire) \
	op(EInputBinding::SecondaryFire) \
	op(EInputBinding::Reload) \
	op(EInputBinding::Interact) \
	op(EInputBinding::Inspect) \
	op(EInputBinding::Jump) \
	op(EInputBinding::CycleSights) 

enum class EInputBinding : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EInputBinding>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
