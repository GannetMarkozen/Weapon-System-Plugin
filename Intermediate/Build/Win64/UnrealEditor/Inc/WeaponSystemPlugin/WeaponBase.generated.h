// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponBase;
class UCharacterInventoryComponent;
class UInventoryComponent;
class UWeaponScriptBase;
class UUserWidget;
class UWeaponAttachmentPoint;
class AWeaponAttachmentBase;
#ifdef WEAPONSYSTEMPLUGIN_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define WEAPONSYSTEMPLUGIN_WeaponBase_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_12_DELEGATE \
struct _Script_WeaponSystemPlugin_eventWeaponEquippedDelegate_Parms \
{ \
	AWeaponBase* Weapon; \
	UCharacterInventoryComponent* Inventory; \
}; \
static inline void FWeaponEquippedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WeaponEquippedDelegate, AWeaponBase* Weapon, UCharacterInventoryComponent* Inventory) \
{ \
	_Script_WeaponSystemPlugin_eventWeaponEquippedDelegate_Parms Parms; \
	Parms.Weapon=Weapon; \
	Parms.Inventory=Inventory; \
	WeaponEquippedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_13_DELEGATE \
struct _Script_WeaponSystemPlugin_eventWeaponUnequippedDelegate_Parms \
{ \
	AWeaponBase* Weapon; \
	UCharacterInventoryComponent* Inventory; \
}; \
static inline void FWeaponUnequippedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WeaponUnequippedDelegate, AWeaponBase* Weapon, UCharacterInventoryComponent* Inventory) \
{ \
	_Script_WeaponSystemPlugin_eventWeaponUnequippedDelegate_Parms Parms; \
	Parms.Weapon=Weapon; \
	Parms.Inventory=Inventory; \
	WeaponUnequippedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_14_DELEGATE \
struct _Script_WeaponSystemPlugin_eventWeaponObtainedDelegate_Parms \
{ \
	AWeaponBase* Weapon; \
	UInventoryComponent* CurrentInventory; \
}; \
static inline void FWeaponObtainedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WeaponObtainedDelegate, AWeaponBase* Weapon, UInventoryComponent* CurrentInventory) \
{ \
	_Script_WeaponSystemPlugin_eventWeaponObtainedDelegate_Parms Parms; \
	Parms.Weapon=Weapon; \
	Parms.CurrentInventory=CurrentInventory; \
	WeaponObtainedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_15_DELEGATE \
struct _Script_WeaponSystemPlugin_eventWeaponUnobtainedDelegate_Parms \
{ \
	AWeaponBase* Weapon; \
	UInventoryComponent* OldInventory; \
}; \
static inline void FWeaponUnobtainedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WeaponUnobtainedDelegate, AWeaponBase* Weapon, UInventoryComponent* OldInventory) \
{ \
	_Script_WeaponSystemPlugin_eventWeaponUnobtainedDelegate_Parms Parms; \
	Parms.Weapon=Weapon; \
	Parms.OldInventory=OldInventory; \
	WeaponUnobtainedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasScript); \
	DECLARE_FUNCTION(execGetScriptOfClass); \
	DECLARE_FUNCTION(execGetScriptsOfClass); \
	DECLARE_FUNCTION(execRemoveScriptByClass); \
	DECLARE_FUNCTION(execRemoveScriptsByClass); \
	DECLARE_FUNCTION(execRemoveScript); \
	DECLARE_FUNCTION(execAddScript); \
	DECLARE_FUNCTION(execCreateScriptUninitialized); \
	DECLARE_FUNCTION(execCreateScript); \
	DECLARE_FUNCTION(execGetAttachedWidgets); \
	DECLARE_FUNCTION(execGetAttachmentPoints); \
	DECLARE_FUNCTION(execGetAttachmentsOfClass); \
	DECLARE_FUNCTION(execGetAttachments); \
	DECLARE_FUNCTION(execIsEquippedBy); \
	DECLARE_FUNCTION(execIsEquipped); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execOnRep_Scripts); \
	DECLARE_FUNCTION(execOnRep_OwningInventory);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasScript); \
	DECLARE_FUNCTION(execGetScriptOfClass); \
	DECLARE_FUNCTION(execGetScriptsOfClass); \
	DECLARE_FUNCTION(execRemoveScriptByClass); \
	DECLARE_FUNCTION(execRemoveScriptsByClass); \
	DECLARE_FUNCTION(execRemoveScript); \
	DECLARE_FUNCTION(execAddScript); \
	DECLARE_FUNCTION(execCreateScriptUninitialized); \
	DECLARE_FUNCTION(execCreateScript); \
	DECLARE_FUNCTION(execGetAttachedWidgets); \
	DECLARE_FUNCTION(execGetAttachmentPoints); \
	DECLARE_FUNCTION(execGetAttachmentsOfClass); \
	DECLARE_FUNCTION(execGetAttachments); \
	DECLARE_FUNCTION(execIsEquippedBy); \
	DECLARE_FUNCTION(execIsEquipped); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execOnRep_Scripts); \
	DECLARE_FUNCTION(execOnRep_OwningInventory);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_EVENT_PARMS \
	struct WeaponBase_eventBP_OnAddedScript_Parms \
	{ \
		UWeaponScriptBase* NewScript; \
	}; \
	struct WeaponBase_eventBP_OnEquipped_Parms \
	{ \
		UCharacterInventoryComponent* Inventory; \
	}; \
	struct WeaponBase_eventBP_OnObtained_Parms \
	{ \
		UInventoryComponent* CurrentInventory; \
	}; \
	struct WeaponBase_eventBP_OnRemovedScript_Parms \
	{ \
		UWeaponScriptBase* RemovedScript; \
	}; \
	struct WeaponBase_eventBP_OnRep_OwningInventory_Parms \
	{ \
		UInventoryComponent* OldInventory; \
	}; \
	struct WeaponBase_eventBP_OnUnequipped_Parms \
	{ \
		UCharacterInventoryComponent* Inventory; \
	}; \
	struct WeaponBase_eventBP_OnUnobtained_Parms \
	{ \
		UInventoryComponent* OldInventory; \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Scripts=NETFIELD_REP_START, \
		OwningInventory, \
		NETFIELD_REP_END=OwningInventory	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Scripts=NETFIELD_REP_START, \
		OwningInventory, \
		NETFIELD_REP_END=OwningInventory	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_26_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
