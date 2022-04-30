// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAttributeHandle;
class UAttributesComponent;
struct FPolyStructHandle;
enum class EEffectRemovalReason : uint8;
#ifdef WEAPONSYSTEMPLUGIN_AttributeEffect_generated_h
#error "AttributeEffect.generated.h already included, missing '#pragma once' in AttributeEffect.h"
#endif
#define WEAPONSYSTEMPLUGIN_AttributeEffect_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_RPC_WRAPPERS \
	virtual float ModifyAttribute_Implementation(FAttributeHandle const& Attribute, const UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) const; \
	virtual bool CanApplyEffect_Implementation(FAttributeHandle const& Attribute, const UAttributesComponent* AttributesComponent, FPolyStructHandle const& Context) const; \
 \
	DECLARE_FUNCTION(execModifyAttribute); \
	DECLARE_FUNCTION(execCanApplyEffect);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execModifyAttribute); \
	DECLARE_FUNCTION(execCanApplyEffect);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_EVENT_PARMS \
	struct AttributeEffect_eventBP_OnEffectApplied_Parms \
	{ \
		FAttributeHandle Attribute; \
		const UAttributesComponent* AttributesComponent; \
		FPolyStructHandle Context; \
	}; \
	struct AttributeEffect_eventBP_OnEffectRemoved_Parms \
	{ \
		FAttributeHandle Attribute; \
		const UAttributesComponent* AttributesComponent; \
		FPolyStructHandle Context; \
		EEffectRemovalReason Reason; \
	}; \
	struct AttributeEffect_eventCanApplyEffect_Parms \
	{ \
		FAttributeHandle Attribute; \
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
	struct AttributeEffect_eventModifyAttribute_Parms \
	{ \
		FAttributeHandle Attribute; \
		const UAttributesComponent* AttributesComponent; \
		FPolyStructHandle Context; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AttributeEffect_eventModifyAttribute_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeEffect(); \
	friend struct Z_Construct_UClass_UAttributeEffect_Statics; \
public: \
	DECLARE_CLASS(UAttributeEffect, UScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributeEffect)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeEffect(); \
	friend struct Z_Construct_UClass_UAttributeEffect_Statics; \
public: \
	DECLARE_CLASS(UAttributeEffect, UScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributeEffect)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_STANDARD_CONSTRUCTORS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeEffect(UAttributeEffect&&); \
	NO_API UAttributeEffect(const UAttributeEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeEffect); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAttributeEffect)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_16_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAttributeEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
