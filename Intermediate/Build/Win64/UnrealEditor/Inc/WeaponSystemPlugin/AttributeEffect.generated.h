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
#ifdef WEAPONSYSTEMPLUGIN_AttributeEffect_generated_h
#error "AttributeEffect.generated.h already included, missing '#pragma once' in AttributeEffect.h"
#endif
#define WEAPONSYSTEMPLUGIN_AttributeEffect_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_RPC_WRAPPERS \
	virtual float ModifyAttribute_Implementation(FAttributeHandle const& Attribute, const UAttributesComponent* AttributesComponent, FPolyStructHandle& Context); \
 \
	DECLARE_FUNCTION(execModifyAttribute);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execModifyAttribute);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_EVENT_PARMS \
	struct AttributeEffectBase_eventModifyAttribute_Parms \
	{ \
		FAttributeHandle Attribute; \
		const UAttributesComponent* AttributesComponent; \
		FPolyStructHandle Context; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AttributeEffectBase_eventModifyAttribute_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeEffectBase(); \
	friend struct Z_Construct_UClass_UAttributeEffectBase_Statics; \
public: \
	DECLARE_CLASS(UAttributeEffectBase, UScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributeEffectBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeEffectBase(); \
	friend struct Z_Construct_UClass_UAttributeEffectBase_Statics; \
public: \
	DECLARE_CLASS(UAttributeEffectBase, UScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributeEffectBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeEffectBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeEffectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeEffectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeEffectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeEffectBase(UAttributeEffectBase&&); \
	NO_API UAttributeEffectBase(const UAttributeEffectBase&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeEffectBase(UAttributeEffectBase&&); \
	NO_API UAttributeEffectBase(const UAttributeEffectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeEffectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeEffectBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAttributeEffectBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_43_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAttributeEffectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h


#define FOREACH_ENUM_EEFFECTDURATION(op) \
	op(EEffectDuration::Instant) \
	op(EEffectDuration::ForDuration) \
	op(EEffectDuration::Infinite) 

enum class EEffectDuration : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectDuration>();

#define FOREACH_ENUM_EEFFECTREPCOND(op) \
	op(EEffectRepCond::ServerOnly) \
	op(EEffectRepCond::LocalOnly) \
	op(EEffectRepCond::LocalPredicted) 

enum class EEffectRepCond : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectRepCond>();

#define FOREACH_ENUM_EEFFECTMODTYPE(op) \
	op(EEffectModType::Overriding) \
	op(EEffectModType::Additive) \
	op(EEffectModType::Multiplicative) 

enum class EEffectModType : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectModType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
