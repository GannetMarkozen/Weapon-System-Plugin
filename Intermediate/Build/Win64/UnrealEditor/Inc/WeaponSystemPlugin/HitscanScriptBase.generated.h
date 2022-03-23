// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef WEAPONSYSTEMPLUGIN_HitscanScriptBase_generated_h
#error "HitscanScriptBase.generated.h already included, missing '#pragma once' in HitscanScriptBase.h"
#endif
#define WEAPONSYSTEMPLUGIN_HitscanScriptBase_generated_h

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_RPC_WRAPPERS \
	virtual float CalculateSpreadMagnitude_Implementation() const; \
	virtual void PlayImpactEffect_Implementation(TArray<FHitResult> const& Hits); \
	virtual void PlayFiringEffect_Implementation(); \
	virtual void Multi_Hitscan_Implementation(TArray<FHitResult> const& Hits); \
	virtual void Server_Hitscan_Implementation(TArray<FHitResult> const& Hits); \
	virtual bool CanHitscan_Implementation() const; \
 \
	DECLARE_FUNCTION(execCalculateSpreadMagnitude); \
	DECLARE_FUNCTION(execPlayImpactEffect); \
	DECLARE_FUNCTION(execPlayFiringEffect); \
	DECLARE_FUNCTION(execMulti_Hitscan); \
	DECLARE_FUNCTION(execServer_Hitscan); \
	DECLARE_FUNCTION(execHitscan); \
	DECLARE_FUNCTION(execCanHitscan);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateSpreadMagnitude); \
	DECLARE_FUNCTION(execPlayImpactEffect); \
	DECLARE_FUNCTION(execPlayFiringEffect); \
	DECLARE_FUNCTION(execMulti_Hitscan); \
	DECLARE_FUNCTION(execServer_Hitscan); \
	DECLARE_FUNCTION(execHitscan); \
	DECLARE_FUNCTION(execCanHitscan);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_EVENT_PARMS \
	struct HitscanScriptBase_eventCalculateSpreadMagnitude_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HitscanScriptBase_eventCalculateSpreadMagnitude_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct HitscanScriptBase_eventCanHitscan_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HitscanScriptBase_eventCanHitscan_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HitscanScriptBase_eventMulti_Hitscan_Parms \
	{ \
		TArray<FHitResult> Hits; \
	}; \
	struct HitscanScriptBase_eventPlayImpactEffect_Parms \
	{ \
		TArray<FHitResult> Hits; \
	}; \
	struct HitscanScriptBase_eventServer_Hitscan_Parms \
	{ \
		TArray<FHitResult> Hits; \
	};


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_CALLBACK_WRAPPERS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitscanScriptBase(); \
	friend struct Z_Construct_UClass_UHitscanScriptBase_Statics; \
public: \
	DECLARE_CLASS(UHitscanScriptBase, UWeaponScript, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHitscanScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHitscanScriptBase(); \
	friend struct Z_Construct_UClass_UHitscanScriptBase_Statics; \
public: \
	DECLARE_CLASS(UHitscanScriptBase, UWeaponScript, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHitscanScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHitscanScriptBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitscanScriptBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitscanScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitscanScriptBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHitscanScriptBase(UHitscanScriptBase&&); \
	NO_API UHitscanScriptBase(const UHitscanScriptBase&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHitscanScriptBase(UHitscanScriptBase&&); \
	NO_API UHitscanScriptBase(const UHitscanScriptBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitscanScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitscanScriptBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UHitscanScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_PRIVATE_PROPERTY_OFFSET
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_12_PROLOG \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_EVENT_PARMS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UHitscanScriptBase>();

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_RPC_WRAPPERS \
	virtual bool CanFire_Implementation() const; \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execSetupActivationBinding);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execSetupActivationBinding);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_EVENT_PARMS \
	struct SemiAutoHitscanScriptBase_eventCanFire_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SemiAutoHitscanScriptBase_eventCanFire_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_CALLBACK_WRAPPERS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSemiAutoHitscanScriptBase(); \
	friend struct Z_Construct_UClass_USemiAutoHitscanScriptBase_Statics; \
public: \
	DECLARE_CLASS(USemiAutoHitscanScriptBase, UHitscanScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(USemiAutoHitscanScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUSemiAutoHitscanScriptBase(); \
	friend struct Z_Construct_UClass_USemiAutoHitscanScriptBase_Statics; \
public: \
	DECLARE_CLASS(USemiAutoHitscanScriptBase, UHitscanScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(USemiAutoHitscanScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USemiAutoHitscanScriptBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USemiAutoHitscanScriptBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USemiAutoHitscanScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USemiAutoHitscanScriptBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USemiAutoHitscanScriptBase(USemiAutoHitscanScriptBase&&); \
	NO_API USemiAutoHitscanScriptBase(const USemiAutoHitscanScriptBase&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USemiAutoHitscanScriptBase(USemiAutoHitscanScriptBase&&); \
	NO_API USemiAutoHitscanScriptBase(const USemiAutoHitscanScriptBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USemiAutoHitscanScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USemiAutoHitscanScriptBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USemiAutoHitscanScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_PRIVATE_PROPERTY_OFFSET
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_83_PROLOG \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_EVENT_PARMS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class USemiAutoHitscanScriptBase>();

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_RPC_WRAPPERS \
	virtual bool CanFire_Implementation() const; \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execSetupActivationBinding);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execSetupActivationBinding);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_EVENT_PARMS \
	struct BurstFireHitscanScriptBase_eventCanFire_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BurstFireHitscanScriptBase_eventCanFire_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_CALLBACK_WRAPPERS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBurstFireHitscanScriptBase(); \
	friend struct Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics; \
public: \
	DECLARE_CLASS(UBurstFireHitscanScriptBase, UHitscanScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBurstFireHitscanScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUBurstFireHitscanScriptBase(); \
	friend struct Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics; \
public: \
	DECLARE_CLASS(UBurstFireHitscanScriptBase, UHitscanScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBurstFireHitscanScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBurstFireHitscanScriptBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBurstFireHitscanScriptBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBurstFireHitscanScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBurstFireHitscanScriptBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBurstFireHitscanScriptBase(UBurstFireHitscanScriptBase&&); \
	NO_API UBurstFireHitscanScriptBase(const UBurstFireHitscanScriptBase&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBurstFireHitscanScriptBase(UBurstFireHitscanScriptBase&&); \
	NO_API UBurstFireHitscanScriptBase(const UBurstFireHitscanScriptBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBurstFireHitscanScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBurstFireHitscanScriptBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBurstFireHitscanScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BurstRateOfFire() { return STRUCT_OFFSET(UBurstFireHitscanScriptBase, BurstRateOfFire); } \
	FORCEINLINE static uint32 __PPO__NumShotsPerBurst() { return STRUCT_OFFSET(UBurstFireHitscanScriptBase, NumShotsPerBurst); }


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_120_PROLOG \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_EVENT_PARMS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UBurstFireHitscanScriptBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
