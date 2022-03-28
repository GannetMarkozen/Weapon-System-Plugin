// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponBase;
#ifdef WEAPONSYSTEMPLUGIN_CharacterInventoryComponent_generated_h
#error "CharacterInventoryComponent.generated.h already included, missing '#pragma once' in CharacterInventoryComponent.h"
#endif
#define WEAPONSYSTEMPLUGIN_CharacterInventoryComponent_generated_h

#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_9_DELEGATE \
struct _Script_WeaponSystemPlugin_eventCurrentWeaponChangedDelegate_Parms \
{ \
	AWeaponBase* CurrentWeapon; \
	AWeaponBase* OldWeapon; \
}; \
static inline void FCurrentWeaponChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CurrentWeaponChangedDelegate, AWeaponBase* CurrentWeapon, AWeaponBase* OldWeapon) \
{ \
	_Script_WeaponSystemPlugin_eventCurrentWeaponChangedDelegate_Parms Parms; \
	Parms.CurrentWeapon=CurrentWeapon; \
	Parms.OldWeapon=OldWeapon; \
	CurrentWeaponChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_SPARSE_DATA
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_RPC_WRAPPERS \
	virtual void Server_EquipAt_Implementation(const int32 Index); \
	virtual bool CanEquip_Implementation(const AWeaponBase* QueryWeapon) const; \
 \
	DECLARE_FUNCTION(execServer_EquipAt); \
	DECLARE_FUNCTION(execCanEquip); \
	DECLARE_FUNCTION(execEquipLast); \
	DECLARE_FUNCTION(execEquipNext); \
	DECLARE_FUNCTION(execEquip); \
	DECLARE_FUNCTION(execEquipAt); \
	DECLARE_FUNCTION(execCurrentWeaponChanged);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServer_EquipAt); \
	DECLARE_FUNCTION(execCanEquip); \
	DECLARE_FUNCTION(execEquipLast); \
	DECLARE_FUNCTION(execEquipNext); \
	DECLARE_FUNCTION(execEquip); \
	DECLARE_FUNCTION(execEquipAt); \
	DECLARE_FUNCTION(execCurrentWeaponChanged);


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_EVENT_PARMS \
	struct CharacterInventoryComponent_eventBP_CurrentWeaponChanged_Parms \
	{ \
		const AWeaponBase* OldWeapon; \
	}; \
	struct CharacterInventoryComponent_eventCanEquip_Parms \
	{ \
		const AWeaponBase* QueryWeapon; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CharacterInventoryComponent_eventCanEquip_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct CharacterInventoryComponent_eventServer_EquipAt_Parms \
	{ \
		int32 Index; \
	};


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_CALLBACK_WRAPPERS
#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterInventoryComponent(); \
	friend struct Z_Construct_UClass_UCharacterInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterInventoryComponent, UInventoryComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCharacterInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		CurrentIndex, \
		NETFIELD_REP_END=CurrentIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterInventoryComponent(); \
	friend struct Z_Construct_UClass_UCharacterInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterInventoryComponent, UInventoryComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCharacterInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		CurrentIndex, \
		NETFIELD_REP_END=CurrentIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterInventoryComponent(UCharacterInventoryComponent&&); \
	NO_API UCharacterInventoryComponent(const UCharacterInventoryComponent&); \
public:


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterInventoryComponent(UCharacterInventoryComponent&&); \
	NO_API UCharacterInventoryComponent(const UCharacterInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterInventoryComponent)


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(UCharacterInventoryComponent, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__CurrentIndex() { return STRUCT_OFFSET(UCharacterInventoryComponent, CurrentIndex); }


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_14_PROLOG \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_EVENT_PARMS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_RPC_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_INCLASS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_SPARSE_DATA \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_CALLBACK_WRAPPERS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_INCLASS_NO_PURE_DECLS \
	AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UCharacterInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Inventories_CharacterInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS