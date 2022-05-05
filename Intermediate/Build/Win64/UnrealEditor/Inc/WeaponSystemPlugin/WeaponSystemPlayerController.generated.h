// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FNetParams;
#ifdef WEAPONSYSTEMPLUGIN_WeaponSystemPlayerController_generated_h
#error "WeaponSystemPlayerController.generated.h already included, missing '#pragma once' in WeaponSystemPlayerController.h"
#endif
#define WEAPONSYSTEMPLUGIN_WeaponSystemPlayerController_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FNetParams>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_RPC_WRAPPERS \
	virtual void Client_Unreliable_CallRemoteFunctionOnObject_Implementation(UObject* Target, FNetParams const& NetParams); \
	virtual void Client_Reliable_CallRemoteFunctionOnObject_Implementation(UObject* Target, FNetParams const& NetParams); \
	virtual void Server_Unreliable_CallRemoteFunctionOnObject_Implementation(UObject* Target, FNetParams const& NetParams); \
	virtual void Server_Reliable_CallRemoteFunctionOnObject_Implementation(UObject* Target, FNetParams const& NetParams); \
 \
	DECLARE_FUNCTION(execClient_Unreliable_CallRemoteFunctionOnObject); \
	DECLARE_FUNCTION(execClient_Reliable_CallRemoteFunctionOnObject); \
	DECLARE_FUNCTION(execServer_Unreliable_CallRemoteFunctionOnObject); \
	DECLARE_FUNCTION(execServer_Reliable_CallRemoteFunctionOnObject);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClient_Unreliable_CallRemoteFunctionOnObject); \
	DECLARE_FUNCTION(execClient_Reliable_CallRemoteFunctionOnObject); \
	DECLARE_FUNCTION(execServer_Unreliable_CallRemoteFunctionOnObject); \
	DECLARE_FUNCTION(execServer_Reliable_CallRemoteFunctionOnObject);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_EVENT_PARMS \
	struct WeaponSystemPlayerController_eventClient_Reliable_CallRemoteFunctionOnObject_Parms \
	{ \
		UObject* Target; \
		FNetParams NetParams; \
	}; \
	struct WeaponSystemPlayerController_eventClient_Unreliable_CallRemoteFunctionOnObject_Parms \
	{ \
		UObject* Target; \
		FNetParams NetParams; \
	}; \
	struct WeaponSystemPlayerController_eventServer_Reliable_CallRemoteFunctionOnObject_Parms \
	{ \
		UObject* Target; \
		FNetParams NetParams; \
	}; \
	struct WeaponSystemPlayerController_eventServer_Unreliable_CallRemoteFunctionOnObject_Parms \
	{ \
		UObject* Target; \
		FNetParams NetParams; \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponSystemPlayerController(); \
	friend struct Z_Construct_UClass_AWeaponSystemPlayerController_Statics; \
public: \
	DECLARE_CLASS(AWeaponSystemPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWeaponSystemPlayerController)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponSystemPlayerController(); \
	friend struct Z_Construct_UClass_AWeaponSystemPlayerController_Statics; \
public: \
	DECLARE_CLASS(AWeaponSystemPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWeaponSystemPlayerController)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponSystemPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponSystemPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponSystemPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponSystemPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponSystemPlayerController(AWeaponSystemPlayerController&&); \
	NO_API AWeaponSystemPlayerController(const AWeaponSystemPlayerController&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponSystemPlayerController(AWeaponSystemPlayerController&&); \
	NO_API AWeaponSystemPlayerController(const AWeaponSystemPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponSystemPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponSystemPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponSystemPlayerController)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_94_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class AWeaponSystemPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_WeaponSystemPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
