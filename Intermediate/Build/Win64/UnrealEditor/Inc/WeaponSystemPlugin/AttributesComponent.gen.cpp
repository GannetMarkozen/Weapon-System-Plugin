// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/AttributeSystem/AttributesComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributesComponent() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEffectNetPredKey();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FActiveEffect();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeValuePairs();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FServerLocalPredictedNetParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	POLYSTRUCT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStructHandle();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLocalPredictionResultNetParams();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FServerApplyEffectNetParams();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInstantNumericEffectNetValue();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAggregateGameplayTagContainer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectNetPredKey;
class UScriptStruct* FEffectNetPredKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectNetPredKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectNetPredKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectNetPredKey, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EffectNetPredKey"));
	}
	return Z_Registration_Info_UScriptStruct_EffectNetPredKey.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FEffectNetPredKey>()
{
	return FEffectNetPredKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEffectNetPredKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectNetPredKey>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"EffectNetPredKey",
		sizeof(FEffectNetPredKey),
		alignof(FEffectNetPredKey),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffectNetPredKey()
	{
		if (!Z_Registration_Info_UScriptStruct_EffectNetPredKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectNetPredKey.InnerSingleton, Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EffectNetPredKey.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveEffect;
class UScriptStruct* FActiveEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveEffect, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("ActiveEffect"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveEffect.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FActiveEffect>()
{
	return FActiveEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActiveEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveEffect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveEffect>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"ActiveEffect",
		sizeof(FActiveEffect),
		alignof(FActiveEffect),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_ActiveEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveEffect.InnerSingleton, Z_Construct_UScriptStruct_FActiveEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActiveEffect.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeValuePairs;
class UScriptStruct* FAttributeValuePairs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeValuePairs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeValuePairs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeValuePairs, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("AttributeValuePairs"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeValuePairs.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAttributeValuePairs>()
{
	return FAttributeValuePairs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributeValuePairs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeValuePairs_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeValuePairs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeValuePairs>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeValuePairs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"AttributeValuePairs",
		sizeof(FAttributeValuePairs),
		alignof(FAttributeValuePairs),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeValuePairs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeValuePairs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeValuePairs()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributeValuePairs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeValuePairs.InnerSingleton, Z_Construct_UScriptStruct_FAttributeValuePairs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributeValuePairs.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerLocalPredictedNetParams;
class UScriptStruct* FServerLocalPredictedNetParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerLocalPredictedNetParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerLocalPredictedNetParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("ServerLocalPredictedNetParams"));
	}
	return Z_Registration_Info_UScriptStruct_ServerLocalPredictedNetParams.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FServerLocalPredictedNetParams>()
{
	return FServerLocalPredictedNetParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerLocalPredictedNetParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Effect_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLocalPredictedNetParams, Effect), Z_Construct_UClass_UAttributeEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Magnitude_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLocalPredictedNetParams, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLocalPredictedNetParams, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLocalPredictedNetParams, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Context_MetaData)) }; // 2519392893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLocalPredictedNetParams, PredictionKey), Z_Construct_UScriptStruct_FEffectNetPredKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_PredictionKey_MetaData)) }; // 3246888771
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewProp_PredictionKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"ServerLocalPredictedNetParams",
		sizeof(FServerLocalPredictedNetParams),
		alignof(FServerLocalPredictedNetParams),
		Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerLocalPredictedNetParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ServerLocalPredictedNetParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerLocalPredictedNetParams.InnerSingleton, Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ServerLocalPredictedNetParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalPredictionResultNetParams;
class UScriptStruct* FLocalPredictionResultNetParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalPredictionResultNetParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalPredictionResultNetParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalPredictionResultNetParams, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("LocalPredictionResultNetParams"));
	}
	return Z_Registration_Info_UScriptStruct_LocalPredictionResultNetParams.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FLocalPredictionResultNetParams>()
{
	return FLocalPredictionResultNetParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalPredictionResultNetParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_Effect_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalPredictionResultNetParams, Effect), Z_Construct_UClass_UAttributeEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalPredictionResultNetParams, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalPredictionResultNetParams, PredictionKey), Z_Construct_UScriptStruct_FEffectNetPredKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_PredictionKey_MetaData)) }; // 3246888771
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewProp_PredictionKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"LocalPredictionResultNetParams",
		sizeof(FLocalPredictionResultNetParams),
		alignof(FLocalPredictionResultNetParams),
		Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalPredictionResultNetParams()
	{
		if (!Z_Registration_Info_UScriptStruct_LocalPredictionResultNetParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalPredictionResultNetParams.InnerSingleton, Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LocalPredictionResultNetParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerApplyEffectNetParams;
class UScriptStruct* FServerApplyEffectNetParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerApplyEffectNetParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerApplyEffectNetParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerApplyEffectNetParams, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("ServerApplyEffectNetParams"));
	}
	return Z_Registration_Info_UScriptStruct_ServerApplyEffectNetParams.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FServerApplyEffectNetParams>()
{
	return FServerApplyEffectNetParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerApplyEffectNetParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Effect_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerApplyEffectNetParams, Effect), Z_Construct_UClass_UAttributeEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Magnitude_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerApplyEffectNetParams, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerApplyEffectNetParams, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerApplyEffectNetParams, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Context_MetaData)) }; // 2519392893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewProp_Context,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"ServerApplyEffectNetParams",
		sizeof(FServerApplyEffectNetParams),
		alignof(FServerApplyEffectNetParams),
		Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerApplyEffectNetParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ServerApplyEffectNetParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerApplyEffectNetParams.InnerSingleton, Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ServerApplyEffectNetParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstantNumericEffectNetValue;
class UScriptStruct* FInstantNumericEffectNetValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstantNumericEffectNetValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstantNumericEffectNetValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstantNumericEffectNetValue, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("InstantNumericEffectNetValue"));
	}
	return Z_Registration_Info_UScriptStruct_InstantNumericEffectNetValue.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FInstantNumericEffectNetValue>()
{
	return FInstantNumericEffectNetValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInstantNumericEffectNetValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstantNumericEffectNetValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstantNumericEffectNetValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstantNumericEffectNetValue>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstantNumericEffectNetValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"InstantNumericEffectNetValue",
		sizeof(FInstantNumericEffectNetValue),
		alignof(FInstantNumericEffectNetValue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstantNumericEffectNetValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantNumericEffectNetValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstantNumericEffectNetValue()
	{
		if (!Z_Registration_Info_UScriptStruct_InstantNumericEffectNetValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstantNumericEffectNetValue.InnerSingleton, Z_Construct_UScriptStruct_FInstantNumericEffectNetValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InstantNumericEffectNetValue.InnerSingleton;
	}
	DEFINE_FUNCTION(UAttributesComponent::execClient_SyncAttributes)
	{
		P_GET_STRUCT(FAttributeValuePairs,Z_Param_AttributeValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SyncAttributes_Implementation(Z_Param_AttributeValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execServer_SyncAttributes)
	{
		P_GET_TARRAY(FAttributeHandle,Z_Param_Attributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SyncAttributes_Implementation(Z_Param_Attributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execSyncAttributes)
	{
		P_GET_TARRAY_REF(FAttributeHandle,Z_Param_Out_Attributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncAttributes(Z_Param_Out_Attributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execSyncAttribute)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncAttribute(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execClient_ApplyEffect_LocalPredicted_Fail)
	{
		P_GET_OBJECT(UClass,Z_Param_Effect);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_STRUCT(FEffectNetPredKey,Z_Param_PredictionKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_ApplyEffect_LocalPredicted_Fail_Implementation(Z_Param_Effect,Z_Param_Instigator,Z_Param_PredictionKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execClient_ApplyEffect_LocalPredicted_Success)
	{
		P_GET_OBJECT(UClass,Z_Param_Effect);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_STRUCT(FEffectNetPredKey,Z_Param_PredictionKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_ApplyEffect_LocalPredicted_Success_Implementation(Z_Param_Effect,Z_Param_Instigator,Z_Param_PredictionKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execServer_ApplyEffect_LocalPredicted)
	{
		P_GET_OBJECT(UClass,Z_Param_Effect);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_Context);
		P_GET_STRUCT(FEffectNetPredKey,Z_Param_PredictionKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ApplyEffect_LocalPredicted(Z_Param_Effect,Z_Param_Magnitude,Z_Param_Instigator,Z_Param_Out_Context,Z_Param_PredictionKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execServer_ApplyEffect)
	{
		P_GET_OBJECT(UClass,Z_Param_Effect);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_STRUCT(FPolyStructHandle,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ApplyEffect_Implementation(Z_Param_Effect,Z_Param_Magnitude,Z_Param_Instigator,Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execNet_ApplyInstantNumericEffect)
	{
		P_GET_STRUCT_REF(FInstantNumericEffectNetValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Net_ApplyInstantNumericEffect(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execInternal_ApplyInstantNumericEffect)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_GET_ENUM(EEffectModType,Z_Param_ModType);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_ApplyInstantNumericEffect(Z_Param_Out_Attribute,Z_Param_Magnitude,EEffectModType(Z_Param_ModType),Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execRemoveActiveEffectsByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_UBOOL(Z_Param_bIncludeChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveActiveEffectsByClass(Z_Param_Class,Z_Param_bIncludeChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execApplyInstantNumericEffect)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_GET_ENUM(EEffectModType,Z_Param_ModificationType);
		P_GET_ENUM(EEffectRepCond,Z_Param_ReplicationCondition);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyInstantNumericEffect(Z_Param_Out_AttributeName,Z_Param_Magnitude,EEffectModType(Z_Param_ModificationType),EEffectRepCond(Z_Param_ReplicationCondition),Z_Param_Instigator,Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execTryApplyEffect)
	{
		P_GET_OBJECT(UClass,Z_Param_Effect);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryApplyEffect(Z_Param_Effect,Z_Param_Magnitude,Z_Param_Instigator,Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execUnbindTagCountChanged)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindTagCountChanged(Z_Param_Target,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execUnbindAllTagCountChanged)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindAllTagCountChanged(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execBindTagCountChanged)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindTagCountChanged(Z_Param_Out_Tag,FAggregateDynamicDelegate(Z_Param_Out_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execBindAllAttributesChanged)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindAllAttributesChanged(FAttributeValueChangedUniDelegate(Z_Param_Out_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execFindAttributeByName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttributeHandle*)Z_Param__Result=P_THIS->FindAttributeByName(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execGetAllActiveEffects)
	{
		P_GET_TARRAY_REF(TSubclassOf<UAttributeEffect> ,Z_Param_Out_OutEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllActiveEffects(Z_Param_Out_OutEffects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execHasAuthority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAuthority();
		P_NATIVE_END;
	}
	static FName NAME_UAttributesComponent_BP_PreModifyAttribute = FName(TEXT("BP_PreModifyAttribute"));
	void UAttributesComponent::BP_PreModifyAttribute(FAttributeHandle const& Attribute, const UAttributeEffect* Effect, FPolyStructHandle const& Context, const float InValue, float& OutValue) const
	{
		AttributesComponent_eventBP_PreModifyAttribute_Parms Parms;
		Parms.Attribute=Attribute;
		Parms.Effect=Effect;
		Parms.Context=Context;
		Parms.InValue=InValue;
		Parms.OutValue=OutValue;
		const_cast<UAttributesComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAttributesComponent_BP_PreModifyAttribute),&Parms);
		OutValue=Parms.OutValue;
	}
	static FName NAME_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail = FName(TEXT("Client_ApplyEffect_LocalPredicted_Fail"));
	void UAttributesComponent::Client_ApplyEffect_LocalPredicted_Fail(UClass* Effect, const AActor* Instigator, const FEffectNetPredKey PredictionKey)
	{
		AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Fail_Parms Parms;
		Parms.Effect=Effect;
		Parms.Instigator=Instigator;
		Parms.PredictionKey=PredictionKey;
		ProcessEvent(FindFunctionChecked(NAME_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail),&Parms);
	}
	static FName NAME_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success = FName(TEXT("Client_ApplyEffect_LocalPredicted_Success"));
	void UAttributesComponent::Client_ApplyEffect_LocalPredicted_Success(UClass* Effect, const AActor* Instigator, const FEffectNetPredKey PredictionKey)
	{
		AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Success_Parms Parms;
		Parms.Effect=Effect;
		Parms.Instigator=Instigator;
		Parms.PredictionKey=PredictionKey;
		ProcessEvent(FindFunctionChecked(NAME_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success),&Parms);
	}
	static FName NAME_UAttributesComponent_Client_SyncAttributes = FName(TEXT("Client_SyncAttributes"));
	void UAttributesComponent::Client_SyncAttributes(FAttributeValuePairs const& AttributeValues)
	{
		AttributesComponent_eventClient_SyncAttributes_Parms Parms;
		Parms.AttributeValues=AttributeValues;
		ProcessEvent(FindFunctionChecked(NAME_UAttributesComponent_Client_SyncAttributes),&Parms);
	}
	static FName NAME_UAttributesComponent_Server_ApplyEffect = FName(TEXT("Server_ApplyEffect"));
	void UAttributesComponent::Server_ApplyEffect(UClass* Effect, const float Magnitude, const AActor* Instigator, FPolyStructHandle const& Context)
	{
		AttributesComponent_eventServer_ApplyEffect_Parms Parms;
		Parms.Effect=Effect;
		Parms.Magnitude=Magnitude;
		Parms.Instigator=Instigator;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UAttributesComponent_Server_ApplyEffect),&Parms);
	}
	static FName NAME_UAttributesComponent_Server_SyncAttributes = FName(TEXT("Server_SyncAttributes"));
	void UAttributesComponent::Server_SyncAttributes(TArray<FAttributeHandle> const& Attributes)
	{
		AttributesComponent_eventServer_SyncAttributes_Parms Parms;
		Parms.Attributes=Attributes;
		ProcessEvent(FindFunctionChecked(NAME_UAttributesComponent_Server_SyncAttributes),&Parms);
	}
	void UAttributesComponent::StaticRegisterNativesUAttributesComponent()
	{
		UClass* Class = UAttributesComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyInstantNumericEffect", &UAttributesComponent::execApplyInstantNumericEffect },
			{ "BindAllAttributesChanged", &UAttributesComponent::execBindAllAttributesChanged },
			{ "BindTagCountChanged", &UAttributesComponent::execBindTagCountChanged },
			{ "Client_ApplyEffect_LocalPredicted_Fail", &UAttributesComponent::execClient_ApplyEffect_LocalPredicted_Fail },
			{ "Client_ApplyEffect_LocalPredicted_Success", &UAttributesComponent::execClient_ApplyEffect_LocalPredicted_Success },
			{ "Client_SyncAttributes", &UAttributesComponent::execClient_SyncAttributes },
			{ "FindAttributeByName", &UAttributesComponent::execFindAttributeByName },
			{ "GetAllActiveEffects", &UAttributesComponent::execGetAllActiveEffects },
			{ "HasAuthority", &UAttributesComponent::execHasAuthority },
			{ "Internal_ApplyInstantNumericEffect", &UAttributesComponent::execInternal_ApplyInstantNumericEffect },
			{ "Net_ApplyInstantNumericEffect", &UAttributesComponent::execNet_ApplyInstantNumericEffect },
			{ "RemoveActiveEffectsByClass", &UAttributesComponent::execRemoveActiveEffectsByClass },
			{ "Server_ApplyEffect", &UAttributesComponent::execServer_ApplyEffect },
			{ "Server_ApplyEffect_LocalPredicted", &UAttributesComponent::execServer_ApplyEffect_LocalPredicted },
			{ "Server_SyncAttributes", &UAttributesComponent::execServer_SyncAttributes },
			{ "SyncAttribute", &UAttributesComponent::execSyncAttribute },
			{ "SyncAttributes", &UAttributesComponent::execSyncAttributes },
			{ "TryApplyEffect", &UAttributesComponent::execTryApplyEffect },
			{ "UnbindAllTagCountChanged", &UAttributesComponent::execUnbindAllTagCountChanged },
			{ "UnbindTagCountChanged", &UAttributesComponent::execUnbindTagCountChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics
	{
		struct AttributesComponent_eventApplyInstantNumericEffect_Parms
		{
			FName AttributeName;
			float Magnitude;
			EEffectModType ModificationType;
			EEffectRepCond ReplicationCondition;
			const AActor* Instigator;
			FPolyStructHandle Context;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModificationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModificationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModificationType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReplicationCondition_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationCondition_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReplicationCondition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventApplyInstantNumericEffect_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Magnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventApplyInstantNumericEffect_Parms, Magnitude), METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Magnitude_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ModificationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ModificationType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ModificationType = { "ModificationType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventApplyInstantNumericEffect_Parms, ModificationType), Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ModificationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ModificationType_MetaData)) }; // 347396436
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ReplicationCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ReplicationCondition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ReplicationCondition = { "ReplicationCondition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventApplyInstantNumericEffect_Parms, ReplicationCondition), Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ReplicationCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ReplicationCondition_MetaData)) }; // 3222879814
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Instigator_MetaData[] = {
		{ "DisplayName", "Optional Instigator" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventApplyInstantNumericEffect_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Context_MetaData[] = {
		{ "DisplayName", "Optional Context" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventApplyInstantNumericEffect_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Context_MetaData)) }; // 2519392893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ModificationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ModificationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ReplicationCondition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_ReplicationCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "AttributeName,Context" },
		{ "Category", "Effect" },
		{ "Comment", "// Apply a basic numeric value effect. Less flexibility but more convenient for simple non-latent Attribute modifications. Local-Prediction simply\n// applies the effect locally and server-side. Local-Predicted effect requires an Instigator. No checking so not recommended.\n" },
		{ "DefaultToSelf", "Instigator" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "Apply a basic numeric value effect. Less flexibility but more convenient for simple non-latent Attribute modifications. Local-Prediction simply\napplies the effect locally and server-side. Local-Predicted effect requires an Instigator. No checking so not recommended." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "ApplyInstantNumericEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::AttributesComponent_eventApplyInstantNumericEffect_Parms), Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics
	{
		struct AttributesComponent_eventBindAllAttributesChanged_Parms
		{
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBindAllAttributesChanged_Parms, Delegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::NewProp_Delegate_MetaData)) }; // 625479229
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "BindAllAttributesChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::AttributesComponent_eventBindAllAttributesChanged_Parms), Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics
	{
		struct AttributesComponent_eventBindTagCountChanged_Parms
		{
			FGameplayTag Tag;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBindTagCountChanged_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBindTagCountChanged_Parms, Delegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::NewProp_Delegate_MetaData)) }; // 13607744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "BindTagCountChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::AttributesComponent_eventBindTagCountChanged_Parms), Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_PreModifyAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Attribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_PreModifyAttribute_Parms, Effect), Z_Construct_UClass_UAttributeEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_PreModifyAttribute_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Context_MetaData)) }; // 2519392893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_PreModifyAttribute_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_PreModifyAttribute_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_OutValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "// Called before modifying an attribute with the given OutValue. This is where clamping should occur\n" },
		{ "DisplayName", "Pre Modify Attribute" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "Called before modifying an attribute with the given OutValue. This is where clamping should occur" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "BP_PreModifyAttribute", nullptr, nullptr, sizeof(AttributesComponent_eventBP_PreModifyAttribute_Parms), Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Fail_Parms, Effect), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::NewProp_Instigator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Fail_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Fail_Parms, PredictionKey), Z_Construct_UScriptStruct_FEffectNetPredKey, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::NewProp_PredictionKey_MetaData)) }; // 3246888771
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::NewProp_PredictionKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "Client_ApplyEffect_LocalPredicted_Fail", nullptr, nullptr, sizeof(AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Fail_Parms), Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Success_Parms, Effect), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::NewProp_Instigator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Success_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Success_Parms, PredictionKey), Z_Construct_UScriptStruct_FEffectNetPredKey, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::NewProp_PredictionKey_MetaData)) }; // 3246888771
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::NewProp_PredictionKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "Client_ApplyEffect_LocalPredicted_Success", nullptr, nullptr, sizeof(AttributesComponent_eventClient_ApplyEffect_LocalPredicted_Success_Parms), Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValues_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics::NewProp_AttributeValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics::NewProp_AttributeValues = { "AttributeValues", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventClient_SyncAttributes_Parms, AttributeValues), Z_Construct_UScriptStruct_FAttributeValuePairs, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics::NewProp_AttributeValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics::NewProp_AttributeValues_MetaData)) }; // 3006700070
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics::NewProp_AttributeValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "Client_SyncAttributes", nullptr, nullptr, sizeof(AttributesComponent_eventClient_SyncAttributes_Parms), Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics
	{
		struct AttributesComponent_eventFindAttributeByName_Parms
		{
			FName Name;
			FAttributeHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventFindAttributeByName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventFindAttributeByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Name" },
		{ "Category", "Attributes" },
		{ "Comment", "// Finds the attribute by name. If none exists this will return an invalid handle\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "Finds the attribute by name. If none exists this will return an invalid handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "FindAttributeByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::AttributesComponent_eventFindAttributeByName_Parms), Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_FindAttributeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics
	{
		struct AttributesComponent_eventGetAllActiveEffects_Parms
		{
			TArray<TSubclassOf<UAttributeEffect> > OutEffects;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_OutEffects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics::NewProp_OutEffects_Inner = { "OutEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAttributeEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics::NewProp_OutEffects = { "OutEffects", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventGetAllActiveEffects_Parms, OutEffects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics::NewProp_OutEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics::NewProp_OutEffects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "GetAllActiveEffects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics::AttributesComponent_eventGetAllActiveEffects_Parms), Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics
	{
		struct AttributesComponent_eventHasAuthority_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributesComponent_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributesComponent_eventHasAuthority_Parms), &Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "HasAuthority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::AttributesComponent_eventHasAuthority_Parms), Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_HasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics
	{
		struct AttributesComponent_eventInternal_ApplyInstantNumericEffect_Parms
		{
			FAttributeHandle Attribute;
			float Magnitude;
			EEffectModType ModType;
			FPolyStructHandle Context;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventInternal_ApplyInstantNumericEffect_Parms, Attribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_Attribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_Magnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventInternal_ApplyInstantNumericEffect_Parms, Magnitude), METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_Magnitude_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_ModType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_ModType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_ModType = { "ModType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventInternal_ApplyInstantNumericEffect_Parms, ModType), Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_ModType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_ModType_MetaData)) }; // 347396436
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventInternal_ApplyInstantNumericEffect_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_ModType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_ModType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "Internal_ApplyInstantNumericEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::AttributesComponent_eventInternal_ApplyInstantNumericEffect_Parms), Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics
	{
		struct AttributesComponent_eventNet_ApplyInstantNumericEffect_Parms
		{
			FInstantNumericEffectNetValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventNet_ApplyInstantNumericEffect_Parms, Value), Z_Construct_UScriptStruct_FInstantNumericEffectNetValue, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::NewProp_Value_MetaData)) }; // 819096624
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "Net_ApplyInstantNumericEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::AttributesComponent_eventNet_ApplyInstantNumericEffect_Parms), Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics
	{
		struct AttributesComponent_eventRemoveActiveEffectsByClass_Parms
		{
			const TSubclassOf<UAttributeEffect>  Class;
			bool bIncludeChildren;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeChildren_MetaData[];
#endif
		static void NewProp_bIncludeChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildren;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventRemoveActiveEffectsByClass_Parms, Class), Z_Construct_UClass_UAttributeEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_bIncludeChildren_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_bIncludeChildren_SetBit(void* Obj)
	{
		((AttributesComponent_eventRemoveActiveEffectsByClass_Parms*)Obj)->bIncludeChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_bIncludeChildren = { "bIncludeChildren", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributesComponent_eventRemoveActiveEffectsByClass_Parms), &Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_bIncludeChildren_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_bIncludeChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_bIncludeChildren_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventRemoveActiveEffectsByClass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_bIncludeChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "Comment", "// Remove all active effects from Class. Should take the Effect's Replication Condition into account when calling this\n" },
		{ "CPP_Default_bIncludeChildren", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "Remove all active effects from Class. Should take the Effect's Replication Condition into account when calling this" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "RemoveActiveEffectsByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::AttributesComponent_eventRemoveActiveEffectsByClass_Parms), Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_ApplyEffect_Parms, Effect), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Magnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_ApplyEffect_Parms, Magnitude), METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Instigator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_ApplyEffect_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_ApplyEffect_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Context_MetaData)) }; // 2519392893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "Server_ApplyEffect", nullptr, nullptr, sizeof(AttributesComponent_eventServer_ApplyEffect_Parms), Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics
	{
		struct AttributesComponent_eventServer_ApplyEffect_LocalPredicted_Parms
		{
			UClass* Effect;
			float Magnitude;
			const AActor* Instigator;
			FPolyStructHandle Context;
			FEffectNetPredKey PredictionKey;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_ApplyEffect_LocalPredicted_Parms, Effect), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Magnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_ApplyEffect_LocalPredicted_Parms, Magnitude), METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Instigator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_ApplyEffect_LocalPredicted_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_ApplyEffect_LocalPredicted_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Context_MetaData)) }; // 2519392893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_ApplyEffect_LocalPredicted_Parms, PredictionKey), Z_Construct_UScriptStruct_FEffectNetPredKey, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_PredictionKey_MetaData)) }; // 3246888771
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::NewProp_PredictionKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "Server_ApplyEffect_LocalPredicted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::AttributesComponent_eventServer_ApplyEffect_LocalPredicted_Parms), Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_SyncAttributes_Parms, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::NewProp_Attributes_MetaData)) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::NewProp_Attributes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "Server_SyncAttributes", nullptr, nullptr, sizeof(AttributesComponent_eventServer_SyncAttributes_Parms), Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics
	{
		struct AttributesComponent_eventSyncAttribute_Parms
		{
			FAttributeHandle Attribute;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventSyncAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::NewProp_Attribute_MetaData)) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "// Will update the client's value for the specified Attribute\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "Will update the client's value for the specified Attribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "SyncAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::AttributesComponent_eventSyncAttribute_Parms), Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_SyncAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_SyncAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics
	{
		struct AttributesComponent_eventSyncAttributes_Parms
		{
			TArray<FAttributeHandle> Attributes;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventSyncAttributes_Parms, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::NewProp_Attributes_MetaData)) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::NewProp_Attributes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "// Will update the client's values for the specified Attributes\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "Will update the client's values for the specified Attributes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "SyncAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::AttributesComponent_eventSyncAttributes_Parms), Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_SyncAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_SyncAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics
	{
		struct AttributesComponent_eventTryApplyEffect_Parms
		{
			const TSubclassOf<UAttributeEffect>  Effect;
			float Magnitude;
			const AActor* Instigator;
			FPolyStructHandle Context;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventTryApplyEffect_Parms, Effect), Z_Construct_UClass_UAttributeEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Magnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventTryApplyEffect_Parms, Magnitude), METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Instigator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventTryApplyEffect_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Instigator_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventTryApplyEffect_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
	void Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributesComponent_eventTryApplyEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributesComponent_eventTryApplyEffect_Parms), &Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Context" },
		{ "Category", "Effect" },
		{ "Comment", "// Attempts to apply the effect with optional context for custom calculations\n" },
		{ "DefaultToSelf", "Instigator" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "Attempts to apply the effect with optional context for custom calculations" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "TryApplyEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::AttributesComponent_eventTryApplyEffect_Parms), Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_TryApplyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_TryApplyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged_Statics
	{
		struct AttributesComponent_eventUnbindAllTagCountChanged_Parms
		{
			UObject* Target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventUnbindAllTagCountChanged_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tags" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "UnbindAllTagCountChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged_Statics::AttributesComponent_eventUnbindAllTagCountChanged_Parms), Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics
	{
		struct AttributesComponent_eventUnbindTagCountChanged_Parms
		{
			UObject* Target;
			FGameplayTag Tag;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventUnbindTagCountChanged_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventUnbindTagCountChanged_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::NewProp_Tag_MetaData)) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Tags" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "UnbindTagCountChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::AttributesComponent_eventUnbindTagCountChanged_Parms), Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributesComponent);
	UClass* Z_Construct_UClass_UAttributesComponent_NoRegister()
	{
		return UAttributesComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAttributesComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnedTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributesComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributesComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributesComponent_ApplyInstantNumericEffect, "ApplyInstantNumericEffect" }, // 2327436843
		{ &Z_Construct_UFunction_UAttributesComponent_BindAllAttributesChanged, "BindAllAttributesChanged" }, // 3739458263
		{ &Z_Construct_UFunction_UAttributesComponent_BindTagCountChanged, "BindTagCountChanged" }, // 1164592149
		{ &Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute, "BP_PreModifyAttribute" }, // 413349806
		{ &Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Fail, "Client_ApplyEffect_LocalPredicted_Fail" }, // 1994945601
		{ &Z_Construct_UFunction_UAttributesComponent_Client_ApplyEffect_LocalPredicted_Success, "Client_ApplyEffect_LocalPredicted_Success" }, // 3117004166
		{ &Z_Construct_UFunction_UAttributesComponent_Client_SyncAttributes, "Client_SyncAttributes" }, // 3661267779
		{ &Z_Construct_UFunction_UAttributesComponent_FindAttributeByName, "FindAttributeByName" }, // 1018912684
		{ &Z_Construct_UFunction_UAttributesComponent_GetAllActiveEffects, "GetAllActiveEffects" }, // 1827627065
		{ &Z_Construct_UFunction_UAttributesComponent_HasAuthority, "HasAuthority" }, // 3489321914
		{ &Z_Construct_UFunction_UAttributesComponent_Internal_ApplyInstantNumericEffect, "Internal_ApplyInstantNumericEffect" }, // 3771224992
		{ &Z_Construct_UFunction_UAttributesComponent_Net_ApplyInstantNumericEffect, "Net_ApplyInstantNumericEffect" }, // 2928413411
		{ &Z_Construct_UFunction_UAttributesComponent_RemoveActiveEffectsByClass, "RemoveActiveEffectsByClass" }, // 83552102
		{ &Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect, "Server_ApplyEffect" }, // 3496195298
		{ &Z_Construct_UFunction_UAttributesComponent_Server_ApplyEffect_LocalPredicted, "Server_ApplyEffect_LocalPredicted" }, // 247550337
		{ &Z_Construct_UFunction_UAttributesComponent_Server_SyncAttributes, "Server_SyncAttributes" }, // 10390210
		{ &Z_Construct_UFunction_UAttributesComponent_SyncAttribute, "SyncAttribute" }, // 3055949455
		{ &Z_Construct_UFunction_UAttributesComponent_SyncAttributes, "SyncAttributes" }, // 118825540
		{ &Z_Construct_UFunction_UAttributesComponent_TryApplyEffect, "TryApplyEffect" }, // 4177738464
		{ &Z_Construct_UFunction_UAttributesComponent_UnbindAllTagCountChanged, "UnbindAllTagCountChanged" }, // 588210190
		{ &Z_Construct_UFunction_UAttributesComponent_UnbindTagCountChanged, "UnbindTagCountChanged" }, // 4010806736
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributesComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/*\n *\n */" },
		{ "IncludePath", "WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributesComponent_Statics::NewProp_OwnedTags_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// Gameplay Tag Container used for state calculations. Attribute Effects can modify these tags.\n// Bind delegate to listen for specific tag count changes\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "Gameplay Tag Container used for state calculations. Attribute Effects can modify these tags.\nBind delegate to listen for specific tag count changes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributesComponent_Statics::NewProp_OwnedTags = { "OwnedTags", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributesComponent, OwnedTags), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UAttributesComponent_Statics::NewProp_OwnedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponent_Statics::NewProp_OwnedTags_MetaData)) }; // 3960791148
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributesComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesComponent_Statics::NewProp_OwnedTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributesComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributesComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributesComponent_Statics::ClassParams = {
		&UAttributesComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributesComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributesComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributesComponent()
	{
		if (!Z_Registration_Info_UClass_UAttributesComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributesComponent.OuterSingleton, Z_Construct_UClass_UAttributesComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributesComponent.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UAttributesComponent>()
	{
		return UAttributesComponent::StaticClass();
	}

	void UAttributesComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OwnedTags(TEXT("OwnedTags"));

		const bool bIsValid = true
			&& Name_OwnedTags == ClassReps[(int32)ENetFields_Private::OwnedTags].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAttributesComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributesComponent);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ScriptStructInfo[] = {
		{ FEffectNetPredKey::StaticStruct, Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::NewStructOps, TEXT("EffectNetPredKey"), &Z_Registration_Info_UScriptStruct_EffectNetPredKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectNetPredKey), 3246888771U) },
		{ FActiveEffect::StaticStruct, Z_Construct_UScriptStruct_FActiveEffect_Statics::NewStructOps, TEXT("ActiveEffect"), &Z_Registration_Info_UScriptStruct_ActiveEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveEffect), 2620387727U) },
		{ FAttributeValuePairs::StaticStruct, Z_Construct_UScriptStruct_FAttributeValuePairs_Statics::NewStructOps, TEXT("AttributeValuePairs"), &Z_Registration_Info_UScriptStruct_AttributeValuePairs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeValuePairs), 3006700070U) },
		{ FServerLocalPredictedNetParams::StaticStruct, Z_Construct_UScriptStruct_FServerLocalPredictedNetParams_Statics::NewStructOps, TEXT("ServerLocalPredictedNetParams"), &Z_Registration_Info_UScriptStruct_ServerLocalPredictedNetParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerLocalPredictedNetParams), 216846327U) },
		{ FLocalPredictionResultNetParams::StaticStruct, Z_Construct_UScriptStruct_FLocalPredictionResultNetParams_Statics::NewStructOps, TEXT("LocalPredictionResultNetParams"), &Z_Registration_Info_UScriptStruct_LocalPredictionResultNetParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalPredictionResultNetParams), 795895130U) },
		{ FServerApplyEffectNetParams::StaticStruct, Z_Construct_UScriptStruct_FServerApplyEffectNetParams_Statics::NewStructOps, TEXT("ServerApplyEffectNetParams"), &Z_Registration_Info_UScriptStruct_ServerApplyEffectNetParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerApplyEffectNetParams), 1005296276U) },
		{ FInstantNumericEffectNetValue::StaticStruct, Z_Construct_UScriptStruct_FInstantNumericEffectNetValue_Statics::NewStructOps, TEXT("InstantNumericEffectNetValue"), &Z_Registration_Info_UScriptStruct_InstantNumericEffectNetValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstantNumericEffectNetValue), 819096624U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributesComponent, UAttributesComponent::StaticClass, TEXT("UAttributesComponent"), &Z_Registration_Info_UClass_UAttributesComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributesComponent), 500755142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_3508682623(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
