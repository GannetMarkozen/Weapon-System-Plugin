// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPolyStructHandle;
struct FPolyStruct;
class UScriptStruct;
enum class EStructCastPin : uint8;
#ifdef POLYSTRUCT_PolymorphicStructFunctionLibrary_generated_h
#error "PolymorphicStructFunctionLibrary.generated.h already included, missing '#pragma once' in PolymorphicStructFunctionLibrary.h"
#endif
#define POLYSTRUCT_PolymorphicStructFunctionLibrary_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeDefaultPolyStructHandle); \
	DECLARE_FUNCTION(execToArray); \
	DECLARE_FUNCTION(execConv_PolyStructHandleToPolyStruct); \
	DECLARE_FUNCTION(execLength); \
	DECLARE_FUNCTION(execHasData); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execEmptyPolyStructHandle); \
	DECLARE_FUNCTION(execGetAtIndex); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAppendFromPolyHandle); \
	DECLARE_FUNCTION(execAppendFromPolyArray); \
	DECLARE_FUNCTION(execAdd); \
	DECLARE_FUNCTION(execMakePolyStructHandleFromArray); \
	DECLARE_FUNCTION(execConv_PolyStructHandleToString); \
	DECLARE_FUNCTION(execToJsonString); \
	DECLARE_FUNCTION(execConv_PolyStructToPolyStructHandle); \
	DECLARE_FUNCTION(execEqualsNOT); \
	DECLARE_FUNCTION(execEquals); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execIsAWithExecs); \
	DECLARE_FUNCTION(execIsA); \
	DECLARE_FUNCTION(execIsValidWithExecs); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execEmptyPolyStruct); \
	DECLARE_FUNCTION(execConv_PolyStructToBool); \
	DECLARE_FUNCTION(execConv_PolyStructToString); \
	DECLARE_FUNCTION(execConv_PolyStructToName); \
	DECLARE_FUNCTION(execConv_PolyStructToScriptStruct); \
	DECLARE_FUNCTION(execMakePolyStructAndInitializeAs); \
	DECLARE_FUNCTION(execSetAs);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeDefaultPolyStructHandle); \
	DECLARE_FUNCTION(execToArray); \
	DECLARE_FUNCTION(execConv_PolyStructHandleToPolyStruct); \
	DECLARE_FUNCTION(execLength); \
	DECLARE_FUNCTION(execHasData); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execEmptyPolyStructHandle); \
	DECLARE_FUNCTION(execGetAtIndex); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAppendFromPolyHandle); \
	DECLARE_FUNCTION(execAppendFromPolyArray); \
	DECLARE_FUNCTION(execAdd); \
	DECLARE_FUNCTION(execMakePolyStructHandleFromArray); \
	DECLARE_FUNCTION(execConv_PolyStructHandleToString); \
	DECLARE_FUNCTION(execToJsonString); \
	DECLARE_FUNCTION(execConv_PolyStructToPolyStructHandle); \
	DECLARE_FUNCTION(execEqualsNOT); \
	DECLARE_FUNCTION(execEquals); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execIsAWithExecs); \
	DECLARE_FUNCTION(execIsA); \
	DECLARE_FUNCTION(execIsValidWithExecs); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execEmptyPolyStruct); \
	DECLARE_FUNCTION(execConv_PolyStructToBool); \
	DECLARE_FUNCTION(execConv_PolyStructToString); \
	DECLARE_FUNCTION(execConv_PolyStructToName); \
	DECLARE_FUNCTION(execConv_PolyStructToScriptStruct); \
	DECLARE_FUNCTION(execMakePolyStructAndInitializeAs); \
	DECLARE_FUNCTION(execSetAs);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPolyStructFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPolyStructFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPolyStructFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PolyStruct"), NO_API) \
	DECLARE_SERIALIZER(UPolyStructFunctionLibrary)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUPolyStructFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPolyStructFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPolyStructFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PolyStruct"), NO_API) \
	DECLARE_SERIALIZER(UPolyStructFunctionLibrary)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPolyStructFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolyStructFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPolyStructFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolyStructFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPolyStructFunctionLibrary(UPolyStructFunctionLibrary&&); \
	NO_API UPolyStructFunctionLibrary(const UPolyStructFunctionLibrary&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPolyStructFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPolyStructFunctionLibrary(UPolyStructFunctionLibrary&&); \
	NO_API UPolyStructFunctionLibrary(const UPolyStructFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPolyStructFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolyStructFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolyStructFunctionLibrary)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_43_PROLOG
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POLYSTRUCT_API UClass* StaticClass<class UPolyStructFunctionLibrary>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetZeroIndex);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetZeroIndex);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPolyStructHack(); \
	friend struct Z_Construct_UClass_UPolyStructHack_Statics; \
public: \
	DECLARE_CLASS(UPolyStructHack, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PolyStruct"), NO_API) \
	DECLARE_SERIALIZER(UPolyStructHack)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_INCLASS \
private: \
	static void StaticRegisterNativesUPolyStructHack(); \
	friend struct Z_Construct_UClass_UPolyStructHack_Statics; \
public: \
	DECLARE_CLASS(UPolyStructHack, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PolyStruct"), NO_API) \
	DECLARE_SERIALIZER(UPolyStructHack)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPolyStructHack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolyStructHack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPolyStructHack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolyStructHack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPolyStructHack(UPolyStructHack&&); \
	NO_API UPolyStructHack(const UPolyStructHack&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPolyStructHack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPolyStructHack(UPolyStructHack&&); \
	NO_API UPolyStructHack(const UPolyStructHack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPolyStructHack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolyStructHack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolyStructHack)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_469_PROLOG
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_472_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POLYSTRUCT_API UClass* StaticClass<class UPolyStructHack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h


#define FOREACH_ENUM_ESTRUCTCASTPIN(op) \
	op(EStructCastPin::Success) \
	op(EStructCastPin::Fail) 

enum class EStructCastPin : uint8;
template<> POLYSTRUCT_API UEnum* StaticEnum<EStructCastPin>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
