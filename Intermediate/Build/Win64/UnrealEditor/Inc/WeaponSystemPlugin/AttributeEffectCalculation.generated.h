// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAttributeHandle;
class UAttributeEffect;
class UAttributesComponent;
struct FPolyStructHandle;
enum class EEffectModType : uint8;
#ifdef WEAPONSYSTEMPLUGIN_AttributeEffectCalculation_generated_h
#error "AttributeEffectCalculation.generated.h already included, missing '#pragma once' in AttributeEffectCalculation.h"
#endif
#define WEAPONSYSTEMPLUGIN_AttributeEffectCalculation_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_RPC_WRAPPERS \
	virtual void Modify_Implementation(const float CurrentValue, FAttributeHandle const& Attribute, const UAttributeEffect* Effect, const UAttributesComponent* AttributesComponent, FPolyStructHandle& Context, EEffectModType& OutModificationType, float& OutValue) const; \
	virtual bool CanModifyAttribute_Implementation(FAttributeHandle const& Attribute, const UAttributeEffect* Effect, const UAttributesComponent* AttributesComponent, FPolyStructHandle const& Context) const; \
 \
	DECLARE_FUNCTION(execModify); \
	DECLARE_FUNCTION(execCanModifyAttribute);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execModify); \
	DECLARE_FUNCTION(execCanModifyAttribute);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_EVENT_PARMS \
	struct AttributeEffectCalculation_eventCanModifyAttribute_Parms \
	{ \
		FAttributeHandle Attribute; \
		const UAttributeEffect* Effect; \
		const UAttributesComponent* AttributesComponent; \
		FPolyStructHandle Context; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AttributeEffectCalculation_eventCanModifyAttribute_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AttributeEffectCalculation_eventModify_Parms \
	{ \
		float CurrentValue; \
		FAttributeHandle Attribute; \
		const UAttributeEffect* Effect; \
		const UAttributesComponent* AttributesComponent; \
		FPolyStructHandle Context; \
		EEffectModType OutModificationType; \
		float OutValue; \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeEffectCalculation(); \
	friend struct Z_Construct_UClass_UAttributeEffectCalculation_Statics; \
public: \
	DECLARE_CLASS(UAttributeEffectCalculation, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributeEffectCalculation)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeEffectCalculation(); \
	friend struct Z_Construct_UClass_UAttributeEffectCalculation_Statics; \
public: \
	DECLARE_CLASS(UAttributeEffectCalculation, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributeEffectCalculation)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeEffectCalculation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeEffectCalculation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeEffectCalculation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeEffectCalculation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeEffectCalculation(UAttributeEffectCalculation&&); \
	NO_API UAttributeEffectCalculation(const UAttributeEffectCalculation&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeEffectCalculation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeEffectCalculation(UAttributeEffectCalculation&&); \
	NO_API UAttributeEffectCalculation(const UAttributeEffectCalculation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeEffectCalculation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeEffectCalculation); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeEffectCalculation)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_15_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAttributeEffectCalculation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
