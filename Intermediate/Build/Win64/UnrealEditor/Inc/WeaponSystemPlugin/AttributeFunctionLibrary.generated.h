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
enum class EValidity : uint8;
#ifdef WEAPONSYSTEMPLUGIN_AttributeFunctionLibrary_generated_h
#error "AttributeFunctionLibrary.generated.h already included, missing '#pragma once' in AttributeFunctionLibrary.h"
#endif
#define WEAPONSYSTEMPLUGIN_AttributeFunctionLibrary_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnbindAllAttributeChangedFromHandle); \
	DECLARE_FUNCTION(execUnbindAllAttributeChanged); \
	DECLARE_FUNCTION(execBindAttributeChangedFromHandleByName); \
	DECLARE_FUNCTION(execBindAttributeChangedFromAttributeByName); \
	DECLARE_FUNCTION(execBindAttributeChangedFromHandle); \
	DECLARE_FUNCTION(execBindAttributeChangedFromAttribute); \
	DECLARE_FUNCTION(execGetAttribute); \
	DECLARE_FUNCTION(execGetAttributeName); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execConv_AttributeHandleToAttribute); \
	DECLARE_FUNCTION(execConv_AttributeToAttributeHandle);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnbindAllAttributeChangedFromHandle); \
	DECLARE_FUNCTION(execUnbindAllAttributeChanged); \
	DECLARE_FUNCTION(execBindAttributeChangedFromHandleByName); \
	DECLARE_FUNCTION(execBindAttributeChangedFromAttributeByName); \
	DECLARE_FUNCTION(execBindAttributeChangedFromHandle); \
	DECLARE_FUNCTION(execBindAttributeChangedFromAttribute); \
	DECLARE_FUNCTION(execGetAttribute); \
	DECLARE_FUNCTION(execGetAttributeName); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execConv_AttributeHandleToAttribute); \
	DECLARE_FUNCTION(execConv_AttributeToAttributeHandle);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAttributeFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAttributeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributeFunctionLibrary)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAttributeFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAttributeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributeFunctionLibrary)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeFunctionLibrary(UAttributeFunctionLibrary&&); \
	NO_API UAttributeFunctionLibrary(const UAttributeFunctionLibrary&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeFunctionLibrary(UAttributeFunctionLibrary&&); \
	NO_API UAttributeFunctionLibrary(const UAttributeFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeFunctionLibrary)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_18_PROLOG
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAttributeFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h


#define FOREACH_ENUM_EVALIDITY(op) \
	op(EValidity::Valid) \
	op(EValidity::Invalid) 

enum class EValidity : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EValidity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
