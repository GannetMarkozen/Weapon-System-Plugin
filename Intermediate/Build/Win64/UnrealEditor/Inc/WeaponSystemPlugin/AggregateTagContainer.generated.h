// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAggregateTagContainerNotify;
struct FGameplayTag;
struct FAggregateTagContainer;
struct FGameplayTagContainer;
struct FAggregateTagValue;
class UObject;
#ifdef WEAPONSYSTEMPLUGIN_AggregateTagContainer_generated_h
#error "AggregateTagContainer.generated.h already included, missing '#pragma once' in AggregateTagContainer.h"
#endif
#define WEAPONSYSTEMPLUGIN_AggregateTagContainer_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAggregateTagValue_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAggregateTagValue>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAggregateTagContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAggregateTagContainer>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAggregateTagContainerNotify_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAggregateTagContainer Super;


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAggregateTagContainerNotify>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_201_DELEGATE \
struct _Script_WeaponSystemPlugin_eventAggregateContainerChangedUniDelegate_Parms \
{ \
	FAggregateTagContainerNotify TagContainer; \
	FGameplayTag Tag; \
	int32 CurrentCount; \
	int32 OldCount; \
}; \
static inline void FAggregateContainerChangedUniDelegate_DelegateWrapper(const FScriptDelegate& AggregateContainerChangedUniDelegate, FAggregateTagContainerNotify const& TagContainer, FGameplayTag const& Tag, int32 CurrentCount, int32 OldCount) \
{ \
	_Script_WeaponSystemPlugin_eventAggregateContainerChangedUniDelegate_Parms Parms; \
	Parms.TagContainer=TagContainer; \
	Parms.Tag=Tag; \
	Parms.CurrentCount=CurrentCount; \
	Parms.OldCount=OldCount; \
	AggregateContainerChangedUniDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execHasAll); \
	DECLARE_FUNCTION(execHasAny); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execGetNumTags); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execRemoveTags); \
	DECLARE_FUNCTION(execInitializeContainer); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execAppendTags); \
	DECLARE_FUNCTION(execEmpty); \
	DECLARE_FUNCTION(execMakeLiteralAggregateTagContainer); \
	DECLARE_FUNCTION(execConv_AggregateTagContainerToString); \
	DECLARE_FUNCTION(execConv_AggregateTagContainerToGameplayTagContainer);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execHasAll); \
	DECLARE_FUNCTION(execHasAny); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execGetNumTags); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execRemoveTags); \
	DECLARE_FUNCTION(execInitializeContainer); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execAppendTags); \
	DECLARE_FUNCTION(execEmpty); \
	DECLARE_FUNCTION(execMakeLiteralAggregateTagContainer); \
	DECLARE_FUNCTION(execConv_AggregateTagContainerToString); \
	DECLARE_FUNCTION(execConv_AggregateTagContainerToGameplayTagContainer);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAggregateTagContainerUtils(); \
	friend struct Z_Construct_UClass_UAggregateTagContainerUtils_Statics; \
public: \
	DECLARE_CLASS(UAggregateTagContainerUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAggregateTagContainerUtils)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_INCLASS \
private: \
	static void StaticRegisterNativesUAggregateTagContainerUtils(); \
	friend struct Z_Construct_UClass_UAggregateTagContainerUtils_Statics; \
public: \
	DECLARE_CLASS(UAggregateTagContainerUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAggregateTagContainerUtils)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAggregateTagContainerUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAggregateTagContainerUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAggregateTagContainerUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAggregateTagContainerUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAggregateTagContainerUtils(UAggregateTagContainerUtils&&); \
	NO_API UAggregateTagContainerUtils(const UAggregateTagContainerUtils&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAggregateTagContainerUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAggregateTagContainerUtils(UAggregateTagContainerUtils&&); \
	NO_API UAggregateTagContainerUtils(const UAggregateTagContainerUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAggregateTagContainerUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAggregateTagContainerUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAggregateTagContainerUtils)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_223_PROLOG
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_226_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAggregateTagContainerUtils>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execHasAll); \
	DECLARE_FUNCTION(execHasAny); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execGetNumTags); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execRemoveTags); \
	DECLARE_FUNCTION(execInitializeContainer); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execAppendTags); \
	DECLARE_FUNCTION(execEmpty); \
	DECLARE_FUNCTION(execMakeLiteralAggregateTagContainer); \
	DECLARE_FUNCTION(execConv_AggregateTagContainerNotifyToAggregateTagContainer); \
	DECLARE_FUNCTION(execConv_AggregateTagContainerToString); \
	DECLARE_FUNCTION(execConv_AggregateTagContainerToGameplayTagContainer); \
	DECLARE_FUNCTION(execUnbind); \
	DECLARE_FUNCTION(execUnbindAll); \
	DECLARE_FUNCTION(execBindOnChanged);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execHasAll); \
	DECLARE_FUNCTION(execHasAny); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execGetNumTags); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execRemoveTags); \
	DECLARE_FUNCTION(execInitializeContainer); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execAppendTags); \
	DECLARE_FUNCTION(execEmpty); \
	DECLARE_FUNCTION(execMakeLiteralAggregateTagContainer); \
	DECLARE_FUNCTION(execConv_AggregateTagContainerNotifyToAggregateTagContainer); \
	DECLARE_FUNCTION(execConv_AggregateTagContainerToString); \
	DECLARE_FUNCTION(execConv_AggregateTagContainerToGameplayTagContainer); \
	DECLARE_FUNCTION(execUnbind); \
	DECLARE_FUNCTION(execUnbindAll); \
	DECLARE_FUNCTION(execBindOnChanged);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAggregateTagContainerNotifyUtils(); \
	friend struct Z_Construct_UClass_UAggregateTagContainerNotifyUtils_Statics; \
public: \
	DECLARE_CLASS(UAggregateTagContainerNotifyUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAggregateTagContainerNotifyUtils)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_INCLASS \
private: \
	static void StaticRegisterNativesUAggregateTagContainerNotifyUtils(); \
	friend struct Z_Construct_UClass_UAggregateTagContainerNotifyUtils_Statics; \
public: \
	DECLARE_CLASS(UAggregateTagContainerNotifyUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAggregateTagContainerNotifyUtils)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAggregateTagContainerNotifyUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAggregateTagContainerNotifyUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAggregateTagContainerNotifyUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAggregateTagContainerNotifyUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAggregateTagContainerNotifyUtils(UAggregateTagContainerNotifyUtils&&); \
	NO_API UAggregateTagContainerNotifyUtils(const UAggregateTagContainerNotifyUtils&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAggregateTagContainerNotifyUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAggregateTagContainerNotifyUtils(UAggregateTagContainerNotifyUtils&&); \
	NO_API UAggregateTagContainerNotifyUtils(const UAggregateTagContainerNotifyUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAggregateTagContainerNotifyUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAggregateTagContainerNotifyUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAggregateTagContainerNotifyUtils)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_271_PROLOG
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_274_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAggregateTagContainerNotifyUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
