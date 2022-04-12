// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UWeaponAttachmentPoint;
#ifdef WEAPONSYSTEMPLUGIN_Interfaces_generated_h
#error "Interfaces.generated.h already included, missing '#pragma once' in Interfaces.h"
#endif
#define WEAPONSYSTEMPLUGIN_Interfaces_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_RPC_WRAPPERS \
	virtual FText GetDescription_Implementation() const { return FText::GetEmpty(); }; \
	virtual FText GetDisplayName_Implementation() const { return FText::GetEmpty(); }; \
	virtual UTexture2D* GetThumbnail_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetThumbnail);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetThumbnail);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_EVENT_PARMS \
	struct ItemInterface_eventGetDescription_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct ItemInterface_eventGetDisplayName_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct ItemInterface_eventGetThumbnail_Parms \
	{ \
		UTexture2D* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ItemInterface_eventGetThumbnail_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEAPONSYSTEMPLUGIN_API UItemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEAPONSYSTEMPLUGIN_API, UItemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WEAPONSYSTEMPLUGIN_API UItemInterface(UItemInterface&&); \
	WEAPONSYSTEMPLUGIN_API UItemInterface(const UItemInterface&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEAPONSYSTEMPLUGIN_API UItemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WEAPONSYSTEMPLUGIN_API UItemInterface(UItemInterface&&); \
	WEAPONSYSTEMPLUGIN_API UItemInterface(const UItemInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEAPONSYSTEMPLUGIN_API, UItemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemInterface)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUItemInterface(); \
	friend struct Z_Construct_UClass_UItemInterface_Statics; \
public: \
	DECLARE_CLASS(UItemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), WEAPONSYSTEMPLUGIN_API) \
	DECLARE_SERIALIZER(UItemInterface)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_GENERATED_UINTERFACE_BODY() \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_GENERATED_UINTERFACE_BODY() \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IItemInterface() {} \
public: \
	typedef UItemInterface UClassType; \
	typedef IItemInterface ThisClass; \
	static FText Execute_GetDescription(const UObject* O); \
	static FText Execute_GetDisplayName(const UObject* O); \
	static UTexture2D* Execute_GetThumbnail(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IItemInterface() {} \
public: \
	typedef UItemInterface UClassType; \
	typedef IItemInterface ThisClass; \
	static FText Execute_GetDescription(const UObject* O); \
	static FText Execute_GetDisplayName(const UObject* O); \
	static UTexture2D* Execute_GetThumbnail(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_7_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UItemInterface>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_RPC_WRAPPERS \
	virtual void WidgetConstructed_Implementation(UWeaponAttachmentPoint* AttachmentPoint) {}; \
 \
	DECLARE_FUNCTION(execWidgetConstructed);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWidgetConstructed);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_EVENT_PARMS \
	struct WeaponAttachmentWidgetInterface_eventWidgetConstructed_Parms \
	{ \
		UWeaponAttachmentPoint* AttachmentPoint; \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEAPONSYSTEMPLUGIN_API UWeaponAttachmentWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponAttachmentWidgetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEAPONSYSTEMPLUGIN_API, UWeaponAttachmentWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponAttachmentWidgetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WEAPONSYSTEMPLUGIN_API UWeaponAttachmentWidgetInterface(UWeaponAttachmentWidgetInterface&&); \
	WEAPONSYSTEMPLUGIN_API UWeaponAttachmentWidgetInterface(const UWeaponAttachmentWidgetInterface&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEAPONSYSTEMPLUGIN_API UWeaponAttachmentWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WEAPONSYSTEMPLUGIN_API UWeaponAttachmentWidgetInterface(UWeaponAttachmentWidgetInterface&&); \
	WEAPONSYSTEMPLUGIN_API UWeaponAttachmentWidgetInterface(const UWeaponAttachmentWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEAPONSYSTEMPLUGIN_API, UWeaponAttachmentWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponAttachmentWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponAttachmentWidgetInterface)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWeaponAttachmentWidgetInterface(); \
	friend struct Z_Construct_UClass_UWeaponAttachmentWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UWeaponAttachmentWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), WEAPONSYSTEMPLUGIN_API) \
	DECLARE_SERIALIZER(UWeaponAttachmentWidgetInterface)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_GENERATED_UINTERFACE_BODY() \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_GENERATED_UINTERFACE_BODY() \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWeaponAttachmentWidgetInterface() {} \
public: \
	typedef UWeaponAttachmentWidgetInterface UClassType; \
	typedef IWeaponAttachmentWidgetInterface ThisClass; \
	static void Execute_WidgetConstructed(UObject* O, UWeaponAttachmentPoint* AttachmentPoint); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_INCLASS_IINTERFACE \
protected: \
	virtual ~IWeaponAttachmentWidgetInterface() {} \
public: \
	typedef UWeaponAttachmentWidgetInterface UClassType; \
	typedef IWeaponAttachmentWidgetInterface ThisClass; \
	static void Execute_WidgetConstructed(UObject* O, UWeaponAttachmentPoint* AttachmentPoint); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_31_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UWeaponAttachmentWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Private_WeaponSystem_Weapons_Interfaces_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
