// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputComponent;
class UInventoryComponent;
class UObject;
class AWeaponBase;
class UCharacterInventoryComponent;
#ifdef WEAPONSYSTEMPLUGIN_WeaponScriptBase_generated_h
#error "WeaponScriptBase.generated.h already included, missing '#pragma once' in WeaponScriptBase.h"
#endif
#define WEAPONSYSTEMPLUGIN_WeaponScriptBase_generated_h

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_RPC_WRAPPERS \
	virtual UInputComponent* GetInputComponentFromInventory_Implementation(const UInventoryComponent* Inventory, bool bHasPriority) const; \
	virtual bool CanTick_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetInputComponentFromInventory); \
	DECLARE_FUNCTION(execGetInputComponent); \
	DECLARE_FUNCTION(execRemoveAllUObjectFromInputComponent); \
	DECLARE_FUNCTION(execRemoveAllUObject); \
	DECLARE_FUNCTION(execRemoveBinding); \
	DECLARE_FUNCTION(execSetupBinding); \
	DECLARE_FUNCTION(execIsEquippedBy); \
	DECLARE_FUNCTION(execIsEquipped); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execGetOwningInventory); \
	DECLARE_FUNCTION(execOwningWeaponUnequipped); \
	DECLARE_FUNCTION(execOwningWeaponEquipped); \
	DECLARE_FUNCTION(execCanTick);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputComponentFromInventory); \
	DECLARE_FUNCTION(execGetInputComponent); \
	DECLARE_FUNCTION(execRemoveAllUObjectFromInputComponent); \
	DECLARE_FUNCTION(execRemoveAllUObject); \
	DECLARE_FUNCTION(execRemoveBinding); \
	DECLARE_FUNCTION(execSetupBinding); \
	DECLARE_FUNCTION(execIsEquippedBy); \
	DECLARE_FUNCTION(execIsEquipped); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execGetOwningInventory); \
	DECLARE_FUNCTION(execOwningWeaponUnequipped); \
	DECLARE_FUNCTION(execOwningWeaponEquipped); \
	DECLARE_FUNCTION(execCanTick);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_EVENT_PARMS \
	struct WeaponScriptBase_eventBP_OwningWeaponEquipped_Parms \
	{ \
		UCharacterInventoryComponent* Inventory; \
	}; \
	struct WeaponScriptBase_eventBP_OwningWeaponUnequipped_Parms \
	{ \
		UCharacterInventoryComponent* Inventory; \
	}; \
	struct WeaponScriptBase_eventBP_RemoveInput_Parms \
	{ \
		UInputComponent* InputComponent; \
	}; \
	struct WeaponScriptBase_eventBP_SetupInput_Parms \
	{ \
		UInputComponent* InputComponent; \
	}; \
	struct WeaponScriptBase_eventBP_Tick_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct WeaponScriptBase_eventCanTick_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WeaponScriptBase_eventCanTick_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct WeaponScriptBase_eventGetInputComponentFromInventory_Parms \
	{ \
		const UInventoryComponent* Inventory; \
		bool bHasPriority; \
		UInputComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WeaponScriptBase_eventGetInputComponentFromInventory_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_CALLBACK_WRAPPERS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponScriptBase(); \
	friend struct Z_Construct_UClass_UWeaponScriptBase_Statics; \
public: \
	DECLARE_CLASS(UWeaponScriptBase, UReplicatedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWeaponScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponScriptBase(); \
	friend struct Z_Construct_UClass_UWeaponScriptBase_Statics; \
public: \
	DECLARE_CLASS(UWeaponScriptBase, UReplicatedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWeaponScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponScriptBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponScriptBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponScriptBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponScriptBase(UWeaponScriptBase&&); \
	NO_API UWeaponScriptBase(const UWeaponScriptBase&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponScriptBase(UWeaponScriptBase&&); \
	NO_API UWeaponScriptBase(const UWeaponScriptBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponScriptBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UWeaponScriptBase)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwningWeaponBase() { return STRUCT_OFFSET(UWeaponScriptBase, OwningWeaponBase); }


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_17_PROLOG \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_EVENT_PARMS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UWeaponScriptBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScriptBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
