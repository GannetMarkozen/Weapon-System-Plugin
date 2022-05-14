// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAggregateGameplayTagContainer;
struct FGameplayTag;
struct FAggregateGameplayTagValue;
class UObject;
struct FGameplayTagContainer;
#ifdef WEAPONSYSTEMPLUGIN_AggregateTagContainer_generated_h
#error "AggregateTagContainer.generated.h already included, missing '#pragma once' in AggregateTagContainer.h"
#endif
#define WEAPONSYSTEMPLUGIN_AggregateTagContainer_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAggregateGameplayTagValue>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAggregateGameplayTagContainer>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_202_DELEGATE \
struct _Script_WeaponSystemPlugin_eventAggregateDynamicDelegate_Parms \
{ \
	FAggregateGameplayTagContainer Container; \
	FGameplayTag Tag; \
	int32 CurrentCount; \
	int32 OldCount; \
}; \
static inline void FAggregateDynamicDelegate_DelegateWrapper(const FScriptDelegate& AggregateDynamicDelegate, FAggregateGameplayTagContainer const& Container, FGameplayTag const& Tag, int32 CurrentCount, int32 OldCount) \
{ \
	_Script_WeaponSystemPlugin_eventAggregateDynamicDelegate_Parms Parms; \
	Parms.Container=Container; \
	Parms.Tag=Tag; \
	Parms.CurrentCount=CurrentCount; \
	Parms.OldCount=OldCount; \
	AggregateDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAggregateTagValues); \
	DECLARE_FUNCTION(execGetExactTagValues); \
	DECLARE_FUNCTION(execGetTagCountExact); \
	DECLARE_FUNCTION(execGetTagCount); \
	DECLARE_FUNCTION(execUnbind); \
	DECLARE_FUNCTION(execUnbindAll); \
	DECLARE_FUNCTION(execBindTagCountChanged); \
	DECLARE_FUNCTION(execEmpty); \
	DECLARE_FUNCTION(execRemoveTagsExactAll); \
	DECLARE_FUNCTION(execRemoveTagsAll); \
	DECLARE_FUNCTION(execRemoveTagExactAll); \
	DECLARE_FUNCTION(execRemoveTagAll); \
	DECLARE_FUNCTION(execRemoveTagsExact); \
	DECLARE_FUNCTION(execRemoveTagExact); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAppendTags); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execMakeAggregateGameplayTagContainer); \
	DECLARE_FUNCTION(execConv_AggregateGameplayTagContainerToGameplayTagContainer); \
	DECLARE_FUNCTION(execGetAggregateTagCountDebugString); \
	DECLARE_FUNCTION(execConv_AggregateGameplayTagContainerToString);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAggregateTagValues); \
	DECLARE_FUNCTION(execGetExactTagValues); \
	DECLARE_FUNCTION(execGetTagCountExact); \
	DECLARE_FUNCTION(execGetTagCount); \
	DECLARE_FUNCTION(execUnbind); \
	DECLARE_FUNCTION(execUnbindAll); \
	DECLARE_FUNCTION(execBindTagCountChanged); \
	DECLARE_FUNCTION(execEmpty); \
	DECLARE_FUNCTION(execRemoveTagsExactAll); \
	DECLARE_FUNCTION(execRemoveTagsAll); \
	DECLARE_FUNCTION(execRemoveTagExactAll); \
	DECLARE_FUNCTION(execRemoveTagAll); \
	DECLARE_FUNCTION(execRemoveTagsExact); \
	DECLARE_FUNCTION(execRemoveTagExact); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAppendTags); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execMakeAggregateGameplayTagContainer); \
	DECLARE_FUNCTION(execConv_AggregateGameplayTagContainerToGameplayTagContainer); \
	DECLARE_FUNCTION(execGetAggregateTagCountDebugString); \
	DECLARE_FUNCTION(execConv_AggregateGameplayTagContainerToString);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAggregateGameplayTagContainerUtils(); \
	friend struct Z_Construct_UClass_UAggregateGameplayTagContainerUtils_Statics; \
public: \
	DECLARE_CLASS(UAggregateGameplayTagContainerUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAggregateGameplayTagContainerUtils)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_INCLASS \
private: \
	static void StaticRegisterNativesUAggregateGameplayTagContainerUtils(); \
	friend struct Z_Construct_UClass_UAggregateGameplayTagContainerUtils_Statics; \
public: \
	DECLARE_CLASS(UAggregateGameplayTagContainerUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAggregateGameplayTagContainerUtils)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAggregateGameplayTagContainerUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAggregateGameplayTagContainerUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAggregateGameplayTagContainerUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAggregateGameplayTagContainerUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAggregateGameplayTagContainerUtils(UAggregateGameplayTagContainerUtils&&); \
	NO_API UAggregateGameplayTagContainerUtils(const UAggregateGameplayTagContainerUtils&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAggregateGameplayTagContainerUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAggregateGameplayTagContainerUtils(UAggregateGameplayTagContainerUtils&&); \
	NO_API UAggregateGameplayTagContainerUtils(const UAggregateGameplayTagContainerUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAggregateGameplayTagContainerUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAggregateGameplayTagContainerUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAggregateGameplayTagContainerUtils)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_204_PROLOG
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_207_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAggregateGameplayTagContainerUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
