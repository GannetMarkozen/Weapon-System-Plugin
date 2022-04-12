// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScriptObjectArray;
class UScriptBase;
struct FScriptObjectSingle;
#ifdef WEAPONSYSTEMPLUGIN_ScriptBase_generated_h
#error "ScriptBase.generated.h already included, missing '#pragma once' in ScriptBase.h"
#endif
#define WEAPONSYSTEMPLUGIN_ScriptBase_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_RPC_WRAPPERS \
	virtual bool CanTick_Implementation() const; \
 \
	DECLARE_FUNCTION(execCanTick);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanTick);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_EVENT_PARMS \
	struct ScriptBase_eventBP_Tick_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct ScriptBase_eventCanTick_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ScriptBase_eventCanTick_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptBase(); \
	friend struct Z_Construct_UClass_UScriptBase_Statics; \
public: \
	DECLARE_CLASS(UScriptBase, UReplicatedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUScriptBase(); \
	friend struct Z_Construct_UClass_UScriptBase_Statics; \
public: \
	DECLARE_CLASS(UScriptBase, UReplicatedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptBase(UScriptBase&&); \
	NO_API UScriptBase(const UScriptBase&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptBase(UScriptBase&&); \
	NO_API UScriptBase(const UScriptBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UScriptBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_8_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UScriptBase>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_RPC_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptContainerComponent(); \
	friend struct Z_Construct_UClass_UScriptContainerComponent_Statics; \
public: \
	DECLARE_CLASS(UScriptContainerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptContainerComponent)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUScriptContainerComponent(); \
	friend struct Z_Construct_UClass_UScriptContainerComponent_Statics; \
public: \
	DECLARE_CLASS(UScriptContainerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptContainerComponent)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptContainerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptContainerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptContainerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptContainerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptContainerComponent(UScriptContainerComponent&&); \
	NO_API UScriptContainerComponent(const UScriptContainerComponent&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptContainerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptContainerComponent(UScriptContainerComponent&&); \
	NO_API UScriptContainerComponent(const UScriptContainerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptContainerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptContainerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptContainerComponent)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_51_PROLOG
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UScriptContainerComponent>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScriptObjectSingle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FScriptObjectSingle>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScriptObjectArray_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FScriptObjectArray>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_ScriptObjectArrayToScriptBases); \
	DECLARE_FUNCTION(execConv_ScriptObjectSingleToScriptBase);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_ScriptObjectArrayToScriptBases); \
	DECLARE_FUNCTION(execConv_ScriptObjectSingleToScriptBase);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptObjectWrapperFunctionLibrary(); \
	friend struct Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UScriptObjectWrapperFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptObjectWrapperFunctionLibrary)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_INCLASS \
private: \
	static void StaticRegisterNativesUScriptObjectWrapperFunctionLibrary(); \
	friend struct Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UScriptObjectWrapperFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptObjectWrapperFunctionLibrary)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptObjectWrapperFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptObjectWrapperFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptObjectWrapperFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptObjectWrapperFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptObjectWrapperFunctionLibrary(UScriptObjectWrapperFunctionLibrary&&); \
	NO_API UScriptObjectWrapperFunctionLibrary(const UScriptObjectWrapperFunctionLibrary&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptObjectWrapperFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptObjectWrapperFunctionLibrary(UScriptObjectWrapperFunctionLibrary&&); \
	NO_API UScriptObjectWrapperFunctionLibrary(const UScriptObjectWrapperFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptObjectWrapperFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptObjectWrapperFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptObjectWrapperFunctionLibrary)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_95_PROLOG
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UScriptObjectWrapperFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
