// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
#ifdef WEAPONSYSTEMPLUGIN_HitscanScriptBase_generated_h
#error "HitscanScriptBase.generated.h already included, missing '#pragma once' in HitscanScriptBase.h"
#endif
#define WEAPONSYSTEMPLUGIN_HitscanScriptBase_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_RPC_WRAPPERS \
	virtual void ApplyDamage_Implementation(AActor* Target); \
	virtual float CalculateRecoilMagnitude_Implementation() const; \
	virtual float CalculateSpreadMagnitude_Implementation() const; \
	virtual void PlayImpactEffect_Implementation(TArray<FHitResult> const& Hits); \
	virtual void PlayFiringEffect_Implementation(); \
	virtual void Multi_Hitscan_Implementation(TArray<FHitResult> const& Hits); \
	virtual void Server_Hitscan_Implementation(TArray<FHitResult> const& Hits); \
	virtual bool CanHitscan_Implementation() const; \
 \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execCalculateRecoilMagnitude); \
	DECLARE_FUNCTION(execCalculateSpreadMagnitude); \
	DECLARE_FUNCTION(execPlayImpactEffect); \
	DECLARE_FUNCTION(execPlayFiringEffect); \
	DECLARE_FUNCTION(execMulti_Hitscan); \
	DECLARE_FUNCTION(execServer_Hitscan); \
	DECLARE_FUNCTION(execHitscan); \
	DECLARE_FUNCTION(execCanHitscan);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execCalculateRecoilMagnitude); \
	DECLARE_FUNCTION(execCalculateSpreadMagnitude); \
	DECLARE_FUNCTION(execPlayImpactEffect); \
	DECLARE_FUNCTION(execPlayFiringEffect); \
	DECLARE_FUNCTION(execMulti_Hitscan); \
	DECLARE_FUNCTION(execServer_Hitscan); \
	DECLARE_FUNCTION(execHitscan); \
	DECLARE_FUNCTION(execCanHitscan);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_EVENT_PARMS \
	struct HitscanScriptBase_eventApplyDamage_Parms \
	{ \
		AActor* Target; \
	}; \
	struct HitscanScriptBase_eventCalculateRecoilMagnitude_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HitscanScriptBase_eventCalculateRecoilMagnitude_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitscanScriptBase(); \
	friend struct Z_Construct_UClass_UHitscanScriptBase_Statics; \
public: \
	DECLARE_CLASS(UHitscanScriptBase, UWeaponScript, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHitscanScriptBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHitscanScriptBase(); \
	friend struct Z_Construct_UClass_UHitscanScriptBase_Statics; \
public: \
	DECLARE_CLASS(UHitscanScriptBase, UWeaponScript, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHitscanScriptBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_STANDARD_CONSTRUCTORS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHitscanScriptBase(UHitscanScriptBase&&); \
	NO_API UHitscanScriptBase(const UHitscanScriptBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitscanScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitscanScriptBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UHitscanScriptBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_12_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UHitscanScriptBase>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_RPC_WRAPPERS \
	virtual bool CanFire_Implementation() const; \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execSetupActivationBinding);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execSetupActivationBinding);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_EVENT_PARMS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSemiAutoHitscanScriptBase(); \
	friend struct Z_Construct_UClass_USemiAutoHitscanScriptBase_Statics; \
public: \
	DECLARE_CLASS(USemiAutoHitscanScriptBase, UHitscanScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(USemiAutoHitscanScriptBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_INCLASS \
private: \
	static void StaticRegisterNativesUSemiAutoHitscanScriptBase(); \
	friend struct Z_Construct_UClass_USemiAutoHitscanScriptBase_Statics; \
public: \
	DECLARE_CLASS(USemiAutoHitscanScriptBase, UHitscanScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(USemiAutoHitscanScriptBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_STANDARD_CONSTRUCTORS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USemiAutoHitscanScriptBase(USemiAutoHitscanScriptBase&&); \
	NO_API USemiAutoHitscanScriptBase(const USemiAutoHitscanScriptBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USemiAutoHitscanScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USemiAutoHitscanScriptBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USemiAutoHitscanScriptBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_106_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class USemiAutoHitscanScriptBase>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_RPC_WRAPPERS \
	virtual bool CanFire_Implementation() const; \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execSetupActivationBinding);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execSetupActivationBinding);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_EVENT_PARMS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBurstFireHitscanScriptBase(); \
	friend struct Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics; \
public: \
	DECLARE_CLASS(UBurstFireHitscanScriptBase, UHitscanScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBurstFireHitscanScriptBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_INCLASS \
private: \
	static void StaticRegisterNativesUBurstFireHitscanScriptBase(); \
	friend struct Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics; \
public: \
	DECLARE_CLASS(UBurstFireHitscanScriptBase, UHitscanScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBurstFireHitscanScriptBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_STANDARD_CONSTRUCTORS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBurstFireHitscanScriptBase(UBurstFireHitscanScriptBase&&); \
	NO_API UBurstFireHitscanScriptBase(const UBurstFireHitscanScriptBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBurstFireHitscanScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBurstFireHitscanScriptBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBurstFireHitscanScriptBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_143_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UBurstFireHitscanScriptBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_HitscanScriptBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
