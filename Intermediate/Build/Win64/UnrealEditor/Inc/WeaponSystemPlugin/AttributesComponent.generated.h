// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
struct FEffectNetPredKey;
struct FPolyStructHandle;
class UAttributeEffect;
struct FAttributeHandle;
#ifdef WEAPONSYSTEMPLUGIN_AttributesComponent_generated_h
#error "AttributesComponent.generated.h already included, missing '#pragma once' in AttributesComponent.h"
#endif
#define WEAPONSYSTEMPLUGIN_AttributesComponent_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectNetPredKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FEffectNetPredKey>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveEffect_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FActiveEffect>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_RPC_WRAPPERS \
	virtual void Client_ApplyEffect_LocalPredicted_Fail_Implementation(UClass* Effect, const AActor* Instigator, const FEffectNetPredKey PredictionKey); \
	virtual void Client_ApplyEffect_LocalPredicted_Success_Implementation(UClass* Effect, const AActor* Instigator, const FEffectNetPredKey PredictionKey); \
	virtual void Server_ApplyEffect_LocalPredicted_Implementation(UClass* Effect, const AActor* Instigator, FPolyStructHandle const& Context, const FEffectNetPredKey PredictionKey); \
	virtual void Server_ApplyEffect_Implementation(UClass* Effect, const AActor* Instigator, FPolyStructHandle const& Context); \
 \
	DECLARE_FUNCTION(execClient_ApplyEffect_LocalPredicted_Fail); \
	DECLARE_FUNCTION(execClient_ApplyEffect_LocalPredicted_Success); \
	DECLARE_FUNCTION(execServer_ApplyEffect_LocalPredicted); \
	DECLARE_FUNCTION(execServer_ApplyEffect); \
	DECLARE_FUNCTION(execApplyEffect); \
	DECLARE_FUNCTION(execBindAllAttributesChanged); \
	DECLARE_FUNCTION(execFindAttributeByName); \
	DECLARE_FUNCTION(execHasAuthority);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_ApplyEffect_LocalPredicted_Implementation(UClass* Effect, const AActor* Instigator, FPolyStructHandle const& Context, const FEffectNetPredKey PredictionKey); \
 \
	DECLARE_FUNCTION(execClient_ApplyEffect_LocalPredicted_Fail); \
	DECLARE_FUNCTION(execClient_ApplyEffect_LocalPredicted_Success); \
	DECLARE_FUNCTION(execServer_ApplyEffect_LocalPredicted); \
	DECLARE_FUNCTION(execServer_ApplyEffect); \
	DECLARE_FUNCTION(execApplyEffect); \
	DECLARE_FUNCTION(execBindAllAttributesChanged); \
	DECLARE_FUNCTION(execFindAttributeByName); \
	DECLARE_FUNCTION(execHasAuthority);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_EVENT_PARMS \
	struct AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Fail_Parms \
	{ \
		UClass* Effect; \
		const AActor* Instigator; \
		FEffectNetPredKey PredictionKey; \
	}; \
	struct AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Success_Parms \
	{ \
		UClass* Effect; \
		const AActor* Instigator; \
		FEffectNetPredKey PredictionKey; \
	}; \
	struct AttributesComponent_eventServer_ApplyEffect_Parms \
	{ \
		UClass* Effect; \
		const AActor* Instigator; \
		FPolyStructHandle Context; \
	}; \
	struct AttributesComponent_eventServer_ApplyEffect_LocalPredicted_Parms \
	{ \
		UClass* Effect; \
		const AActor* Instigator; \
		FPolyStructHandle Context; \
		FEffectNetPredKey PredictionKey; \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributesComponent(); \
	friend struct Z_Construct_UClass_UAttributesComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributesComponent)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUAttributesComponent(); \
	friend struct Z_Construct_UClass_UAttributesComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributesComponent)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributesComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributesComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributesComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributesComponent(UAttributesComponent&&); \
	NO_API UAttributesComponent(const UAttributesComponent&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributesComponent(UAttributesComponent&&); \
	NO_API UAttributesComponent(const UAttributesComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributesComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributesComponent)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_59_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAttributesComponent>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSomething);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSomething);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributesComponentRepUtils(); \
	friend struct Z_Construct_UClass_UAttributesComponentRepUtils_Statics; \
public: \
	DECLARE_CLASS(UAttributesComponentRepUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributesComponentRepUtils)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_INCLASS \
private: \
	static void StaticRegisterNativesUAttributesComponentRepUtils(); \
	friend struct Z_Construct_UClass_UAttributesComponentRepUtils_Statics; \
public: \
	DECLARE_CLASS(UAttributesComponentRepUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributesComponentRepUtils)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributesComponentRepUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributesComponentRepUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributesComponentRepUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributesComponentRepUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributesComponentRepUtils(UAttributesComponentRepUtils&&); \
	NO_API UAttributesComponentRepUtils(const UAttributesComponentRepUtils&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributesComponentRepUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributesComponentRepUtils(UAttributesComponentRepUtils&&); \
	NO_API UAttributesComponentRepUtils(const UAttributesComponentRepUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributesComponentRepUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributesComponentRepUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributesComponentRepUtils)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_119_PROLOG
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAttributesComponentRepUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
