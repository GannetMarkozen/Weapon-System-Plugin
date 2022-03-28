// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponBase;
class UInventoryComponent;
class UObject;
class AWeaponAttachmentBase;
struct FTransform;
class UWeaponAttachmentPoint;
#ifdef WEAPONSYSTEMPLUGIN_WeaponAttachmentBase_generated_h
#error "WeaponAttachmentBase.generated.h already included, missing '#pragma once' in WeaponAttachmentBase.h"
#endif
#define WEAPONSYSTEMPLUGIN_WeaponAttachmentBase_generated_h

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInternal_OnUnequipped); \
	DECLARE_FUNCTION(execInternal_OnEquipped); \
	DECLARE_FUNCTION(execInternal_OnUnobtained); \
	DECLARE_FUNCTION(execInternal_OnObtained); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execSpawnAttachmentUnattached); \
	DECLARE_FUNCTION(execSpawnAttachment);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInternal_OnUnequipped); \
	DECLARE_FUNCTION(execInternal_OnEquipped); \
	DECLARE_FUNCTION(execInternal_OnUnobtained); \
	DECLARE_FUNCTION(execInternal_OnObtained); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execSpawnAttachmentUnattached); \
	DECLARE_FUNCTION(execSpawnAttachment);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_EVENT_PARMS \
	struct WeaponAttachmentBase_eventBP_OnObtained_Parms \
	{ \
		UInventoryComponent* OwningInventory; \
	}; \
	struct WeaponAttachmentBase_eventBP_OnUnobtained_Parms \
	{ \
		UInventoryComponent* OldInventory; \
	};


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_CALLBACK_WRAPPERS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponAttachmentBase(); \
	friend struct Z_Construct_UClass_AWeaponAttachmentBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponAttachmentBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWeaponAttachmentBase) \
	virtual UObject* _getUObject() const override { return const_cast<AWeaponAttachmentBase*>(this); }


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponAttachmentBase(); \
	friend struct Z_Construct_UClass_AWeaponAttachmentBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponAttachmentBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWeaponAttachmentBase) \
	virtual UObject* _getUObject() const override { return const_cast<AWeaponAttachmentBase*>(this); }


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponAttachmentBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponAttachmentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponAttachmentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponAttachmentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponAttachmentBase(AWeaponAttachmentBase&&); \
	NO_API AWeaponAttachmentBase(const AWeaponAttachmentBase&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponAttachmentBase(AWeaponAttachmentBase&&); \
	NO_API AWeaponAttachmentBase(const AWeaponAttachmentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponAttachmentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponAttachmentBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AWeaponAttachmentBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwningWeapon() { return STRUCT_OFFSET(AWeaponAttachmentBase, OwningWeapon); }


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_14_PROLOG \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_EVENT_PARMS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class AWeaponAttachmentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Attachments_WeaponAttachmentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS