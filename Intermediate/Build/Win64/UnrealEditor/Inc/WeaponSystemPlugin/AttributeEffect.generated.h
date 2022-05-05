// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAttributesComponent;
struct FAttributeHandle;
struct FPolyStructHandle;
enum class EEffectRemovalReason : uint8;
#ifdef WEAPONSYSTEMPLUGIN_AttributeEffect_generated_h
#error "AttributeEffect.generated.h already included, missing '#pragma once' in AttributeEffect.h"
#endif
#define WEAPONSYSTEMPLUGIN_AttributeEffect_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributeModParams_Statics; \
	WEAPONSYSTEMPLUGIN_API static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAttributeModParams>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_RPC_WRAPPERS \
	virtual void ModifyAttributes_Implementation(UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) const; \
	virtual bool CanApplyEffect_Implementation(const UAttributesComponent* AttributesComponent, FPolyStructHandle const& Context) const; \
 \
	DECLARE_FUNCTION(execHasAllModAttributes); \
	DECLARE_FUNCTION(execGetAllModAttributes); \
	DECLARE_FUNCTION(execModifyAttributes); \
	DECLARE_FUNCTION(execCanApplyEffect);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasAllModAttributes); \
	DECLARE_FUNCTION(execGetAllModAttributes); \
	DECLARE_FUNCTION(execModifyAttributes); \
	DECLARE_FUNCTION(execCanApplyEffect);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_EVENT_PARMS \
	struct AttributeEffect_eventBP_OnEffectApplied_Parms \
	{ \
		const UAttributesComponent* AttributesComponent; \
		FPolyStructHandle Context; \
	}; \
	struct AttributeEffect_eventBP_OnEffectRemoved_Parms \
	{ \
		const UAttributesComponent* AttributesComponent; \
		FPolyStructHandle Context; \
		EEffectRemovalReason Reason; \
	}; \
	struct AttributeEffect_eventCanApplyEffect_Parms \
	{ \
		const UAttributesComponent* AttributesComponent; \
		FPolyStructHandle Context; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AttributeEffect_eventCanApplyEffect_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AttributeEffect_eventModifyAttributes_Parms \
	{ \
		UAttributesComponent* AttributesComponent; \
		FPolyStructHandle Context; \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeEffect(); \
	friend struct Z_Construct_UClass_UAttributeEffect_Statics; \
public: \
	DECLARE_CLASS(UAttributeEffect, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributeEffect)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeEffect(); \
	friend struct Z_Construct_UClass_UAttributeEffect_Statics; \
public: \
	DECLARE_CLASS(UAttributeEffect, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributeEffect)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeEffect(UAttributeEffect&&); \
	NO_API UAttributeEffect(const UAttributeEffect&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeEffect(UAttributeEffect&&); \
	NO_API UAttributeEffect(const UAttributeEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeEffect); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAttributeEffect)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_35_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAttributeEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
