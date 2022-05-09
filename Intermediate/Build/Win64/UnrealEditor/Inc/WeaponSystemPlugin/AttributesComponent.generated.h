// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
struct FAttributeValuePairs;
struct FAttributeHandle;
class UObject;
class AActor;
struct FEffectNetPredKey;
struct FPolyStructHandle;
struct FInstantNumericEffectNetValue;
enum class EEffectModType : uint8;
class UAttributeEffect;
enum class EEffectRepCond : uint8;
#ifdef WEAPONSYSTEMPLUGIN_AttributesComponent_generated_h
#error "AttributesComponent.generated.h already included, missing '#pragma once' in AttributesComponent.h"
#endif
#define WEAPONSYSTEMPLUGIN_AttributesComponent_generated_h

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectNetPredKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FEffectNetPredKey>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveEffect_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FActiveEffect>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributeValuePairs_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAttributeValuePairs>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstantNumericEffectNetValue_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FInstantNumericEffectNetValue>();

#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_SPARSE_DATA
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_RPC_WRAPPERS \
	virtual void Client_SyncAttributes_Implementation(FAttributeValuePairs const& AttributeValues); \
	virtual void Server_SyncAttributes_Implementation(TArray<FAttributeHandle> const& Attributes); \
	virtual void Client_ApplyEffect_LocalPredicted_Fail_Implementation(UClass* Effect, const AActor* Instigator, const FEffectNetPredKey PredictionKey); \
	virtual void Client_ApplyEffect_LocalPredicted_Success_Implementation(UClass* Effect, const AActor* Instigator, const FEffectNetPredKey PredictionKey); \
	virtual void Server_ApplyEffect_LocalPredicted_Implementation(UClass* Effect, const AActor* Instigator, FPolyStructHandle const& Context, const FEffectNetPredKey PredictionKey); \
	virtual void Server_ApplyEffect_Implementation(UClass* Effect, const AActor* Instigator, FPolyStructHandle const& Context); \
 \
	DECLARE_FUNCTION(execOnRep_OwnedTags); \
	DECLARE_FUNCTION(execAppendTags); \
	DECLARE_FUNCTION(execClient_SyncAttributes); \
	DECLARE_FUNCTION(execServer_SyncAttributes); \
	DECLARE_FUNCTION(execSyncAttributes); \
	DECLARE_FUNCTION(execSyncAttribute); \
	DECLARE_FUNCTION(execClient_ApplyEffect_LocalPredicted_Fail); \
	DECLARE_FUNCTION(execClient_ApplyEffect_LocalPredicted_Success); \
	DECLARE_FUNCTION(execServer_ApplyEffect_LocalPredicted); \
	DECLARE_FUNCTION(execServer_ApplyEffect); \
	DECLARE_FUNCTION(execNet_ApplyInstantNumericEffect); \
	DECLARE_FUNCTION(execInternal_ApplyInstantNumericEffect); \
	DECLARE_FUNCTION(execRemoveActiveEffectsByClass); \
	DECLARE_FUNCTION(execApplyInstantNumericEffect); \
	DECLARE_FUNCTION(execTryApplyEffect); \
	DECLARE_FUNCTION(execBindAllAttributesChanged); \
	DECLARE_FUNCTION(execFindAttributeByName); \
	DECLARE_FUNCTION(execGetAllActiveEffects); \
	DECLARE_FUNCTION(execHasAuthority);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_SyncAttributes_Implementation(FAttributeValuePairs const& AttributeValues); \
	virtual void Server_SyncAttributes_Implementation(TArray<FAttributeHandle> const& Attributes); \
	virtual void Server_ApplyEffect_LocalPredicted_Implementation(UClass* Effect, const AActor* Instigator, FPolyStructHandle const& Context, const FEffectNetPredKey PredictionKey); \
 \
	DECLARE_FUNCTION(execOnRep_OwnedTags); \
	DECLARE_FUNCTION(execAppendTags); \
	DECLARE_FUNCTION(execClient_SyncAttributes); \
	DECLARE_FUNCTION(execServer_SyncAttributes); \
	DECLARE_FUNCTION(execSyncAttributes); \
	DECLARE_FUNCTION(execSyncAttribute); \
	DECLARE_FUNCTION(execClient_ApplyEffect_LocalPredicted_Fail); \
	DECLARE_FUNCTION(execClient_ApplyEffect_LocalPredicted_Success); \
	DECLARE_FUNCTION(execServer_ApplyEffect_LocalPredicted); \
	DECLARE_FUNCTION(execServer_ApplyEffect); \
	DECLARE_FUNCTION(execNet_ApplyInstantNumericEffect); \
	DECLARE_FUNCTION(execInternal_ApplyInstantNumericEffect); \
	DECLARE_FUNCTION(execRemoveActiveEffectsByClass); \
	DECLARE_FUNCTION(execApplyInstantNumericEffect); \
	DECLARE_FUNCTION(execTryApplyEffect); \
	DECLARE_FUNCTION(execBindAllAttributesChanged); \
	DECLARE_FUNCTION(execFindAttributeByName); \
	DECLARE_FUNCTION(execGetAllActiveEffects); \
	DECLARE_FUNCTION(execHasAuthority);


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_EVENT_PARMS \
	struct AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Fail_Parms \
	{ \
		UClass* Effect; \
		const AActor* Instigator; \
		FEffectNetPredKey PredictionKey; \
	}; \
	struct AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Success_Parms \
	{ \
		UClass* Effect; \
		const AActor* Instigator; \
		FEffectNetPredKey PredictionKey; \
	}; \
	struct AttributesComponent_eventClient_SyncAttributes_Parms \
	{ \
		FAttributeValuePairs AttributeValues; \
	}; \
	struct AttributesComponent_eventServer_ApplyEffect_Parms \
	{ \
		UClass* Effect; \
		const AActor* Instigator; \
		FPolyStructHandle Context; \
	}; \
	struct AttributesComponent_eventServer_ApplyEffect_LocalPredicted_Parms \
	{ \
		UClass* Effect; \
		const AActor* Instigator; \
		FPolyStructHandle Context; \
		FEffectNetPredKey PredictionKey; \
	}; \
	struct AttributesComponent_eventServer_SyncAttributes_Parms \
	{ \
		TArray<FAttributeHandle> Attributes; \
	};


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_CALLBACK_WRAPPERS
#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributesComponent(); \
	friend struct Z_Construct_UClass_UAttributesComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributesComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAttributesComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwnedTags=NETFIELD_REP_START, \
		NETFIELD_REP_END=OwnedTags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_INCLASS \
private: \
	static void StaticRegisterNativesUAttributesComponent(); \
	friend struct Z_Construct_UClass_UAttributesComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAttributesComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAttributesComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwnedTags=NETFIELD_REP_START, \
		NETFIELD_REP_END=OwnedTags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_STANDARD_CONSTRUCTORS \
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


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributesComponent(UAttributesComponent&&); \
	NO_API UAttributesComponent(const UAttributesComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributesComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributesComponent)


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_145_PROLOG \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_EVENT_PARMS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_RPC_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_INCLASS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_SPARSE_DATA \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_CALLBACK_WRAPPERS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_INCLASS_NO_PURE_DECLS \
	FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<class UAttributesComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
