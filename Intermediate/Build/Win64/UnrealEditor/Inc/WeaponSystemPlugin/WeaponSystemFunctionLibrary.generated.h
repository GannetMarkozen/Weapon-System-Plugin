// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FPoseSnapshot;
class UAnimSequence;
class USkeletalMeshComponent;
enum class EBoneSpaceTransform : uint8;
struct FTransform;
class UAnimInstance;
#ifdef WEAPONSYSTEMPLUGIN_WeaponSystemFunctionLibrary_generated_h
#error "WeaponSystemFunctionLibrary.generated.h already included, missing '#pragma once' in WeaponSystemFunctionLibrary.h"
#endif
#define WEAPONSYSTEMPLUGIN_WeaponSystemFunctionLibrary_generated_h

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_49_DELEGATE \
static inline void FPlaceholderDelegate_DelegateWrapper(const FScriptDelegate& PlaceholderDelegate) \
{ \
	PlaceholderDelegate.ProcessDelegate<UObject>(NULL); \
}


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDefaultObject); \
	DECLARE_FUNCTION(execGetAnimationSequenceAsPoseSnapshot); \
	DECLARE_FUNCTION(execGetBoneTransformFromAnimationSequence); \
	DECLARE_FUNCTION(execCachedPoseSnapshotIsValid); \
	DECLARE_FUNCTION(execRemoveCachedPoseSnapshot); \
	DECLARE_FUNCTION(execGetCachedPoseSnapshot); \
	DECLARE_FUNCTION(execCachePoseSnapshot);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDefaultObject); \
	DECLARE_FUNCTION(execGetAnimationSequenceAsPoseSnapshot); \
	DECLARE_FUNCTION(execGetBoneTransformFromAnimationSequence); \
	DECLARE_FUNCTION(execCachedPoseSnapshotIsValid); \
	DECLARE_FUNCTION(execRemoveCachedPoseSnapshot); \
	DECLARE_FUNCTION(execGetCachedPoseSnapshot); \
	DECLARE_FUNCTION(execCachePoseSnapshot);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponSystemFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWeaponSystemFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UWeaponSystemFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWeaponSystemFunctionLibrary)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponSystemFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWeaponSystemFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UWeaponSystemFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWeaponSystemFunctionLibrary)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponSystemFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponSystemFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponSystemFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponSystemFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponSystemFunctionLibrary(UWeaponSystemFunctionLibrary&&); \
	NO_API UWeaponSystemFunctionLibrary(const UWeaponSystemFunctionLibrary&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponSystemFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponSystemFunctionLibrary(UWeaponSystemFunctionLibrary&&); \
	NO_API UWeaponSystemFunctionLibrary(const UWeaponSystemFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponSystemFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponSystemFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponSystemFunctionLibrary)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_PRIVATE_PROPERTY_OFFSET
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_61_PROLOG
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UWeaponSystemFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h


#define FOREACH_ENUM_EBONESPACETRANSFORM(op) \
	op(EBoneSpaceTransform::ParentBoneSpace) \
	op(EBoneSpaceTransform::WorldSpace) 

enum class EBoneSpaceTransform : uint8;
template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EBoneSpaceTransform>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
