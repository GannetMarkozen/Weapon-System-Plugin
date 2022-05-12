// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponBase;
class AWeaponDropBase;
class UInventoryComponent;
#ifdef WEAPONSYSTEMPLUGIN_WeaponDropBase_generated_h
#error "WeaponDropBase.generated.h already included, missing '#pragma once' in WeaponDropBase.h"
#endif
#define WEAPONSYSTEMPLUGIN_WeaponDropBase_generated_h

#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_SPARSE_DATA
#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_RPC_WRAPPERS \
	virtual void OnWeaponRemoved_Implementation(AWeaponBase* InWeapon, UInventoryComponent* InOldInventory); \
 \
	DECLARE_FUNCTION(execGetOwnedWeaponAndDestroy); \
	DECLARE_FUNCTION(execSpawnWeaponDrop); \
	DECLARE_FUNCTION(execSpawnWeaponDropFromClass); \
	DECLARE_FUNCTION(execOnWeaponRemoved); \
	DECLARE_FUNCTION(execOnRep_OwnedWeapon);


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwnedWeaponAndDestroy); \
	DECLARE_FUNCTION(execSpawnWeaponDrop); \
	DECLARE_FUNCTION(execSpawnWeaponDropFromClass); \
	DECLARE_FUNCTION(execOnWeaponRemoved); \
	DECLARE_FUNCTION(execOnRep_OwnedWeapon);


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_EVENT_PARMS \
	struct WeaponDropBase_eventOnWeaponRemoved_Parms \
	{ \
		AWeaponBase* InWeapon; \
		UInventoryComponent* InOldInventory; \
	};


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_CALLBACK_WRAPPERS
#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponDropBase(); \
	friend struct Z_Construct_UClass_AWeaponDropBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponDropBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWeaponDropBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwnedWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=OwnedWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponDropBase(); \
	friend struct Z_Construct_UClass_AWeaponDropBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponDropBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWeaponDropBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwnedWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=OwnedWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponDropBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponDropBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponDropBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponDropBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponDropBase(AWeaponDropBase&&); \
	NO_API AWeaponDropBase(const AWeaponDropBase&); \
public:


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponDropBase(AWeaponDropBase&&); \
	NO_API AWeaponDropBase(const AWeaponDropBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponDropBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponDropBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponDropBase)


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_12_PROLOG \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_EVENT_PARMS


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_SPARSE_DATA \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_RPC_WRAPPERS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_CALLBACK_WRAPPERS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_INCLASS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_SPARSE_DATA \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_CALLBACK_WRAPPERS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class AWeaponDropBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponDropBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
