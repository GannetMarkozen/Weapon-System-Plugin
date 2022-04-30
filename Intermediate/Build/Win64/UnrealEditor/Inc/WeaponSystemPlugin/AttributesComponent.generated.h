// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAttributesComponent;
struct FAttributeHandle;
struct FEffectNetPredKey;
class UObject;
struct FPolyStructHandle;
class UAttributeEffect;
enum class EEffectRemovalReason : uint8;
#ifdef WEAPONSYSTEMPLUGIN_AttributesComponent_generated_h
#error "AttributesComponent.generated.h already included, missing '#pragma once' in AttributesComponent.h"
#endif
#define WEAPONSYSTEMPLUGIN_AttributesComponent_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_RPC_WRAPPERS \
	virtual UAttributesComponent* GetAttributesComponent_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetAttributesComponent);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttributesComponent);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_EVENT_PARMS \
	struct AttributesInterface_eventGetAttributesComponent_Parms \
	{ \
		UAttributesComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AttributesInterface_eventGetAttributesComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEAPONSYSTEMPLUGIN_API UAttributesInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributesInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEAPONSYSTEMPLUGIN_API, UAttributesInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributesInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WEAPONSYSTEMPLUGIN_API UAttributesInterface(UAttributesInterface&&); \
	WEAPONSYSTEMPLUGIN_API UAttributesInterface(const UAttributesInterface&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEAPONSYSTEMPLUGIN_API UAttributesInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WEAPONSYSTEMPLUGIN_API UAttributesInterface(UAttributesInterface&&); \
	WEAPONSYSTEMPLUGIN_API UAttributesInterface(const UAttributesInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEAPONSYSTEMPLUGIN_API, UAttributesInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributesInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributesInterface)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAttributesInterface(); \
	friend struct Z_Construct_UClass_UAttributesInterface_Statics; \
public: \
	DECLARE_CLASS(UAttributesInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), WEAPONSYSTEMPLUGIN_API) \
	DECLARE_SERIALIZER(UAttributesInterface)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_GENERATED_UINTERFACE_BODY() \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_GENERATED_UINTERFACE_BODY() \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAttributesInterface() {} \
public: \
	typedef UAttributesInterface UClassType; \
	typedef IAttributesInterface ThisClass; \
	static UAttributesComponent* Execute_GetAttributesComponent(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IAttributesInterface() {} \
public: \
	typedef UAttributesInterface UClassType; \
	typedef IAttributesInterface ThisClass; \
	static UAttributesComponent* Execute_GetAttributesComponent(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_14_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAttributesInterface>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectNetPredKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FEffectNetPredKey>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_RPC_WRAPPERS \
	virtual void Client_Internal_ApplyEffect_Fail_Implementation(FAttributeHandle const& Attribute, const float CorrectValue, const FEffectNetPredKey Key); \
	virtual void Client_Internal_ApplyEffect_Success_Implementation(const FEffectNetPredKey Key); \
	virtual void Server_Internal_ApplyEffect_NetPrediction_Implementation(UClass* EffectClass, FAttributeHandle const& ModAttribute, FPolyStructHandle const& Context, const FEffectNetPredKey Key); \
	virtual void Server_Internal_ApplyEffect_Implementation(UClass* EffectClass, FAttributeHandle const& ModAttribute, FPolyStructHandle const& Context); \
 \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execClient_Internal_ApplyEffect_Fail); \
	DECLARE_FUNCTION(execClient_Internal_ApplyEffect_Success); \
	DECLARE_FUNCTION(execServer_Internal_ApplyEffect_NetPrediction); \
	DECLARE_FUNCTION(execServer_Internal_ApplyEffect); \
	DECLARE_FUNCTION(execFindAttributeByName); \
	DECLARE_FUNCTION(execRemoveEffectsByClass); \
	DECLARE_FUNCTION(execApplyEffect);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execClient_Internal_ApplyEffect_Fail); \
	DECLARE_FUNCTION(execClient_Internal_ApplyEffect_Success); \
	DECLARE_FUNCTION(execServer_Internal_ApplyEffect_NetPrediction); \
	DECLARE_FUNCTION(execServer_Internal_ApplyEffect); \
	DECLARE_FUNCTION(execFindAttributeByName); \
	DECLARE_FUNCTION(execRemoveEffectsByClass); \
	DECLARE_FUNCTION(execApplyEffect);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_EVENT_PARMS \
	struct AttributesComponent_eventBP_OnActiveEffectRemoved_Parms \
	{ \
		UAttributeEffect* ActiveEffect; \
		FAttributeHandle Attribute; \
		FPolyStructHandle Context; \
		EEffectRemovalReason Reason; \
	}; \
	struct AttributesComponent_eventBP_OnEffectApplied_Parms \
	{ \
		const UAttributeEffect* Effect; \
		FPolyStructHandle Context; \
	}; \
	struct AttributesComponent_eventBP_PreModifyAttribute_Parms \
	{ \
		FAttributeHandle Attribute; \
		const UAttributeEffect* Effect; \
		FPolyStructHandle Context; \
		float InValue; \
		float OutValue; \
	}; \
	struct AttributesComponent_eventClient_Internal_ApplyEffect_Fail_Parms \
	{ \
		FAttributeHandle Attribute; \
		float CorrectValue; \
		FEffectNetPredKey Key; \
	}; \
	struct AttributesComponent_eventClient_Internal_ApplyEffect_Success_Parms \
	{ \
		FEffectNetPredKey Key; \
	}; \
	struct AttributesComponent_eventServer_Internal_ApplyEffect_Parms \
	{ \
		UClass* EffectClass; \
		FAttributeHandle ModAttribute; \
		FPolyStructHandle Context; \
	}; \
	struct AttributesComponent_eventServer_Internal_ApplyEffect_NetPrediction_Parms \
	{ \
		UClass* EffectClass; \
		FAttributeHandle ModAttribute; \
		FPolyStructHandle Context; \
		FEffectNetPredKey Key; \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributesComponent(); \
	friend struct Z_Construct_UClass_UAttributesComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributesComponent)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUAttributesComponent(); \
	friend struct Z_Construct_UClass_UAttributesComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributesComponent)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_STANDARD_CONSTRUCTORS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributesComponent(UAttributesComponent&&); \
	NO_API UAttributesComponent(const UAttributesComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributesComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributesComponent)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_52_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAttributesComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
