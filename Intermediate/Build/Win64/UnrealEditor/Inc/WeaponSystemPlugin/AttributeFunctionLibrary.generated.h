// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAttributeHandle;
struct FAttribute;
class UAttributeEffect;
class AActor;
struct FPolyStructHandle;
enum class EStructCastPin : uint8;
class UAttributesComponent;
enum class EValidity : uint8;
#ifdef WEAPONSYSTEMPLUGIN_AttributeFunctionLibrary_generated_h
#error "AttributeFunctionLibrary.generated.h already included, missing '#pragma once' in AttributeFunctionLibrary.h"
#endif
#define WEAPONSYSTEMPLUGIN_AttributeFunctionLibrary_generated_h

#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_SPARSE_DATA
#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnbindAllAttributeChangedFromHandle); \
	DECLARE_FUNCTION(execUnbindAllAttributeChanged); \
	DECLARE_FUNCTION(execHasAttribute); \
	DECLARE_FUNCTION(execHasAttributesComponent); \
	DECLARE_FUNCTION(execBP_TryApplyEffectToTarget); \
	DECLARE_FUNCTION(execBP_GetAttributeHandle); \
	DECLARE_FUNCTION(execBP_GetAttributeComponentAs); \
	DECLARE_FUNCTION(execBP_GetAttributesComponent); \
	DECLARE_FUNCTION(execBindAttributeChangedFromHandleByName); \
	DECLARE_FUNCTION(execBindAttributeChangedFromAttributeByName); \
	DECLARE_FUNCTION(execBindAttributeChangedFromHandle); \
	DECLARE_FUNCTION(execBindAttributeChangedFromAttribute); \
	DECLARE_FUNCTION(execGetAttribute); \
	DECLARE_FUNCTION(execSetAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeName); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeHandleFromAttribute); \
	DECLARE_FUNCTION(execAttributeHandleEqualsNOT); \
	DECLARE_FUNCTION(execAttributeHandleEquals); \
	DECLARE_FUNCTION(execConv_AttributeHandleToName); \
	DECLARE_FUNCTION(execConv_AttributeHandleToString); \
	DECLARE_FUNCTION(execConv_AttributeToName); \
	DECLARE_FUNCTION(execConv_AttributeToString); \
	DECLARE_FUNCTION(execConv_AttributeHandleToAttribute); \
	DECLARE_FUNCTION(execConv_AttributeToAttributeHandle);


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnbindAllAttributeChangedFromHandle); \
	DECLARE_FUNCTION(execUnbindAllAttributeChanged); \
	DECLARE_FUNCTION(execHasAttribute); \
	DECLARE_FUNCTION(execHasAttributesComponent); \
	DECLARE_FUNCTION(execBP_TryApplyEffectToTarget); \
	DECLARE_FUNCTION(execBP_GetAttributeHandle); \
	DECLARE_FUNCTION(execBP_GetAttributeComponentAs); \
	DECLARE_FUNCTION(execBP_GetAttributesComponent); \
	DECLARE_FUNCTION(execBindAttributeChangedFromHandleByName); \
	DECLARE_FUNCTION(execBindAttributeChangedFromAttributeByName); \
	DECLARE_FUNCTION(execBindAttributeChangedFromHandle); \
	DECLARE_FUNCTION(execBindAttributeChangedFromAttribute); \
	DECLARE_FUNCTION(execGetAttribute); \
	DECLARE_FUNCTION(execSetAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeName); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeHandleFromAttribute); \
	DECLARE_FUNCTION(execAttributeHandleEqualsNOT); \
	DECLARE_FUNCTION(execAttributeHandleEquals); \
	DECLARE_FUNCTION(execConv_AttributeHandleToName); \
	DECLARE_FUNCTION(execConv_AttributeHandleToString); \
	DECLARE_FUNCTION(execConv_AttributeToName); \
	DECLARE_FUNCTION(execConv_AttributeToString); \
	DECLARE_FUNCTION(execConv_AttributeHandleToAttribute); \
	DECLARE_FUNCTION(execConv_AttributeToAttributeHandle);


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeUtils(); \
	friend struct Z_Construct_UClass_UAttributeUtils_Statics; \
public: \
	DECLARE_CLASS(UAttributeUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributeUtils)


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeUtils(); \
	friend struct Z_Construct_UClass_UAttributeUtils_Statics; \
public: \
	DECLARE_CLASS(UAttributeUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributeUtils)


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeUtils(UAttributeUtils&&); \
	NO_API UAttributeUtils(const UAttributeUtils&); \
public:


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeUtils(UAttributeUtils&&); \
	NO_API UAttributeUtils(const UAttributeUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeUtils)


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_19_PROLOG
#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_SPARSE_DATA \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_RPC_WRAPPERS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_INCLASS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_SPARSE_DATA \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAttributeUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h


#define FOREACH_ENUM_EVALIDITY(op) \
	op(EValidity::Valid) \
	op(EValidity::Invalid) 

enum class EValidity : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EValidity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
