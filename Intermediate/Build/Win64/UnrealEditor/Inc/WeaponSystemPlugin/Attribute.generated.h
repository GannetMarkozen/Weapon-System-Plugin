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
struct FEffectModContext;
#ifdef WEAPONSYSTEMPLUGIN_Attribute_generated_h
#error "Attribute.generated.h already included, missing '#pragma once' in Attribute.h"
#endif
#define WEAPONSYSTEMPLUGIN_Attribute_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_RPC_WRAPPERS \
	virtual UAttributesComponent* GetAttributesComponent_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetAttributesComponent);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttributesComponent);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_EVENT_PARMS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_STANDARD_CONSTRUCTORS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_ENHANCED_CONSTRUCTORS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAttributesInterface(); \
	friend struct Z_Construct_UClass_UAttributesInterface_Statics; \
public: \
	DECLARE_CLASS(UAttributesInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), WEAPONSYSTEMPLUGIN_API) \
	DECLARE_SERIALIZER(UAttributesInterface)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_GENERATED_UINTERFACE_BODY() \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_GENERATED_UINTERFACE_BODY() \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAttributesInterface() {} \
public: \
	typedef UAttributesInterface UClassType; \
	typedef IAttributesInterface ThisClass; \
	static UAttributesComponent* Execute_GetAttributesComponent(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IAttributesInterface() {} \
public: \
	typedef UAttributesInterface UClassType; \
	typedef IAttributesInterface ThisClass; \
	static UAttributesComponent* Execute_GetAttributesComponent(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_14_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAttributesInterface>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectModContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FEffectModContext>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributeHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAttributeHandle>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_130_DELEGATE \
struct _Script_WeaponSystemPlugin_eventAttributeValueChangedDelegate_Parms \
{ \
	float NewValue; \
	float OldValue; \
	FAttributeHandle AttributeHandle; \
	FEffectModContext ModificationContext; \
}; \
static inline void FAttributeValueChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AttributeValueChangedDelegate, float NewValue, float OldValue, FAttributeHandle& AttributeHandle, FEffectModContext const& ModificationContext) \
{ \
	_Script_WeaponSystemPlugin_eventAttributeValueChangedDelegate_Parms Parms; \
	Parms.NewValue=NewValue; \
	Parms.OldValue=OldValue; \
	Parms.AttributeHandle=AttributeHandle; \
	Parms.ModificationContext=ModificationContext; \
	AttributeValueChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
	AttributeHandle=Parms.AttributeHandle; \
}


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_131_DELEGATE \
struct _Script_WeaponSystemPlugin_eventAttributeValueChangedUniDelegate_Parms \
{ \
	float NewValue; \
	float OldValue; \
	FAttributeHandle AttributeHandle; \
	FEffectModContext ModificationContext; \
}; \
static inline void FAttributeValueChangedUniDelegate_DelegateWrapper(const FScriptDelegate& AttributeValueChangedUniDelegate, float NewValue, float OldValue, FAttributeHandle& AttributeHandle, FEffectModContext const& ModificationContext) \
{ \
	_Script_WeaponSystemPlugin_eventAttributeValueChangedUniDelegate_Parms Parms; \
	Parms.NewValue=NewValue; \
	Parms.OldValue=OldValue; \
	Parms.AttributeHandle=AttributeHandle; \
	Parms.ModificationContext=ModificationContext; \
	AttributeValueChangedUniDelegate.ProcessDelegate<UObject>(&Parms); \
	AttributeHandle=Parms.AttributeHandle; \
}


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
