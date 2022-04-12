// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATrueFPSCharacterBase;
struct FHitResult;
class AWeapon;
class AWeaponBase;
struct FRecoilParams;
#ifdef WEAPONSYSTEMPLUGIN_TrueFPSCharacterBase_generated_h
#error "TrueFPSCharacterBase.generated.h already included, missing '#pragma once' in TrueFPSCharacterBase.h"
#endif
#define WEAPONSYSTEMPLUGIN_TrueFPSCharacterBase_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_RPC_WRAPPERS \
	virtual void ApplyDamage_Implementation(float Damage, FVector const& Direction, float KnockbackMultiplier) {}; \
 \
	DECLARE_FUNCTION(execApplyDamage);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyDamage);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_EVENT_PARMS \
	struct DamageInterface_eventApplyDamage_Parms \
	{ \
		float Damage; \
		FVector Direction; \
		float KnockbackMultiplier; \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEAPONSYSTEMPLUGIN_API UDamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEAPONSYSTEMPLUGIN_API, UDamageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WEAPONSYSTEMPLUGIN_API UDamageInterface(UDamageInterface&&); \
	WEAPONSYSTEMPLUGIN_API UDamageInterface(const UDamageInterface&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEAPONSYSTEMPLUGIN_API UDamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WEAPONSYSTEMPLUGIN_API UDamageInterface(UDamageInterface&&); \
	WEAPONSYSTEMPLUGIN_API UDamageInterface(const UDamageInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEAPONSYSTEMPLUGIN_API, UDamageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageInterface)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageInterface(); \
	friend struct Z_Construct_UClass_UDamageInterface_Statics; \
public: \
	DECLARE_CLASS(UDamageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), WEAPONSYSTEMPLUGIN_API) \
	DECLARE_SERIALIZER(UDamageInterface)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_GENERATED_UINTERFACE_BODY() \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_GENERATED_UINTERFACE_BODY() \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageInterface() {} \
public: \
	typedef UDamageInterface UClassType; \
	typedef IDamageInterface ThisClass; \
	static void Execute_ApplyDamage(UObject* O, float Damage, FVector const& Direction, float KnockbackMultiplier); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IDamageInterface() {} \
public: \
	typedef UDamageInterface UClassType; \
	typedef IDamageInterface ThisClass; \
	static void Execute_ApplyDamage(UObject* O, float Damage, FVector const& Direction, float KnockbackMultiplier); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_10_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UDamageInterface>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecoilParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FRecoilParams>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_76_DELEGATE \
struct _Script_WeaponSystemPlugin_eventOnLandedMultiDelegate_Parms \
{ \
	ATrueFPSCharacterBase* Character; \
	FHitResult Hit; \
}; \
static inline void FOnLandedMultiDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLandedMultiDelegate, ATrueFPSCharacterBase* Character, FHitResult const& Hit) \
{ \
	_Script_WeaponSystemPlugin_eventOnLandedMultiDelegate_Parms Parms; \
	Parms.Character=Character; \
	Parms.Hit=Hit; \
	OnLandedMultiDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_77_DELEGATE \
struct _Script_WeaponSystemPlugin_eventCurrentWeaponChangedDelgate_Parms \
{ \
	AWeapon* CurrentWeapon; \
	AWeapon* OldWeapon; \
}; \
static inline void FCurrentWeaponChangedDelgate_DelegateWrapper(const FMulticastScriptDelegate& CurrentWeaponChangedDelgate, AWeapon* CurrentWeapon, AWeapon* OldWeapon) \
{ \
	_Script_WeaponSystemPlugin_eventCurrentWeaponChangedDelgate_Parms Parms; \
	Parms.CurrentWeapon=CurrentWeapon; \
	Parms.OldWeapon=OldWeapon; \
	CurrentWeaponChangedDelgate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_RPC_WRAPPERS \
	virtual void Multi_StopLeaning_Implementation(); \
	virtual void Server_StopLeaning_Implementation(); \
	virtual void Multi_LeanLeft_Implementation(); \
	virtual void Server_LeanLeft_Implementation(); \
	virtual void Multi_LeanRight_Implementation(); \
	virtual void Server_LeanRight_Implementation(); \
	virtual void Multi_StopCrouching_Implementation(); \
	virtual void Server_StopCrouching_Implementation(); \
	virtual void Multi_StartCrouching_Implementation(); \
	virtual void Server_StartCrouching_Implementation(); \
	virtual FTransform GetWeaponOffsetTransform_Implementation() const; \
	virtual FTransform GetOffHandTransform_Implementation() const; \
	virtual FTransform GetDomHandTransform_Implementation() const; \
	virtual void SpawnWeaponDrop_Implementation(AWeaponBase* Weapon); \
	virtual void Server_DropWeaponAt_Implementation(const int32 Index); \
	virtual void SetupMesh_Implementation(); \
 \
	DECLARE_FUNCTION(execInternal_CurrentWeaponChanged); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execMulti_StopLeaning); \
	DECLARE_FUNCTION(execServer_StopLeaning); \
	DECLARE_FUNCTION(execMulti_LeanLeft); \
	DECLARE_FUNCTION(execServer_LeanLeft); \
	DECLARE_FUNCTION(execMulti_LeanRight); \
	DECLARE_FUNCTION(execServer_LeanRight); \
	DECLARE_FUNCTION(execMulti_StopCrouching); \
	DECLARE_FUNCTION(execServer_StopCrouching); \
	DECLARE_FUNCTION(execMulti_StartCrouching); \
	DECLARE_FUNCTION(execServer_StartCrouching); \
	DECLARE_FUNCTION(execGetNumRecoilInstances); \
	DECLARE_FUNCTION(execAddRecoilInstance); \
	DECLARE_FUNCTION(execGetWeaponOffsetTransform); \
	DECLARE_FUNCTION(execGetOffHandTransform); \
	DECLARE_FUNCTION(execGetDomHandTransform); \
	DECLARE_FUNCTION(execSpawnWeaponDrop); \
	DECLARE_FUNCTION(execServer_DropWeaponAt); \
	DECLARE_FUNCTION(execDropWeapon); \
	DECLARE_FUNCTION(execDropCurrentWeapon); \
	DECLARE_FUNCTION(execDropWeaponAt); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execGetCurrentWeaponBase); \
	DECLARE_FUNCTION(execSetupMesh);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInternal_CurrentWeaponChanged); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execMulti_StopLeaning); \
	DECLARE_FUNCTION(execServer_StopLeaning); \
	DECLARE_FUNCTION(execMulti_LeanLeft); \
	DECLARE_FUNCTION(execServer_LeanLeft); \
	DECLARE_FUNCTION(execMulti_LeanRight); \
	DECLARE_FUNCTION(execServer_LeanRight); \
	DECLARE_FUNCTION(execMulti_StopCrouching); \
	DECLARE_FUNCTION(execServer_StopCrouching); \
	DECLARE_FUNCTION(execMulti_StartCrouching); \
	DECLARE_FUNCTION(execServer_StartCrouching); \
	DECLARE_FUNCTION(execGetNumRecoilInstances); \
	DECLARE_FUNCTION(execAddRecoilInstance); \
	DECLARE_FUNCTION(execGetWeaponOffsetTransform); \
	DECLARE_FUNCTION(execGetOffHandTransform); \
	DECLARE_FUNCTION(execGetDomHandTransform); \
	DECLARE_FUNCTION(execSpawnWeaponDrop); \
	DECLARE_FUNCTION(execServer_DropWeaponAt); \
	DECLARE_FUNCTION(execDropWeapon); \
	DECLARE_FUNCTION(execDropCurrentWeapon); \
	DECLARE_FUNCTION(execDropWeaponAt); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execGetCurrentWeaponBase); \
	DECLARE_FUNCTION(execSetupMesh);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_EVENT_PARMS \
	struct TrueFPSCharacterBase_eventGetDomHandTransform_Parms \
	{ \
		FTransform ReturnValue; \
	}; \
	struct TrueFPSCharacterBase_eventGetOffHandTransform_Parms \
	{ \
		FTransform ReturnValue; \
	}; \
	struct TrueFPSCharacterBase_eventGetWeaponOffsetTransform_Parms \
	{ \
		FTransform ReturnValue; \
	}; \
	struct TrueFPSCharacterBase_eventServer_DropWeaponAt_Parms \
	{ \
		int32 Index; \
	}; \
	struct TrueFPSCharacterBase_eventSpawnWeaponDrop_Parms \
	{ \
		AWeaponBase* Weapon; \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrueFPSCharacterBase(); \
	friend struct Z_Construct_UClass_ATrueFPSCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ATrueFPSCharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATrueFPSCharacterBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ADSValue=NETFIELD_REP_START, \
		NETFIELD_REP_END=ADSValue	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_INCLASS \
private: \
	static void StaticRegisterNativesATrueFPSCharacterBase(); \
	friend struct Z_Construct_UClass_ATrueFPSCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ATrueFPSCharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATrueFPSCharacterBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ADSValue=NETFIELD_REP_START, \
		NETFIELD_REP_END=ADSValue	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrueFPSCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrueFPSCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrueFPSCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrueFPSCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrueFPSCharacterBase(ATrueFPSCharacterBase&&); \
	NO_API ATrueFPSCharacterBase(const ATrueFPSCharacterBase&); \
public:


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrueFPSCharacterBase(ATrueFPSCharacterBase&&); \
	NO_API ATrueFPSCharacterBase(const ATrueFPSCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrueFPSCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrueFPSCharacterBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATrueFPSCharacterBase)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_79_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class ATrueFPSCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
