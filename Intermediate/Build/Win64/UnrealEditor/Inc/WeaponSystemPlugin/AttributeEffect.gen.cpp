// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/AttributeSystem/AttributeEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeEffect() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeModParams();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeEffectCalculation_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeEffect_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEffectModContext();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeHandle();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAggregateGameplayTagValue();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeModParams;
class UScriptStruct* FAttributeModParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeModParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeModParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeModParams, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("AttributeModParams"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeModParams.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAttributeModParams>()
{
	return FAttributeModParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributeModParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectCalculations_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectCalculations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectCalculations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectCalculations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Attribute Modifier Parameters" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeModParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_Attribute_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attribute Modifier" },
		{ "Comment", "// The name of the attribute to be modified\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "The name of the attribute to be modified" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeModParams, Attribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_Attribute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_EffectCalculations_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attribute Modifier" },
		{ "Comment", "// Effect calculations used to modify the attribute value\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Effect calculations used to modify the attribute value" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_EffectCalculations_Inner = { "EffectCalculations", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAttributeEffectCalculation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_EffectCalculations_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_EffectCalculations_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_EffectCalculations_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attribute Modifier" },
		{ "Comment", "// Effect calculations used to modify the attribute value\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Effect calculations used to modify the attribute value" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_EffectCalculations = { "EffectCalculations", nullptr, (EPropertyFlags)0x004000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeModParams, EffectCalculations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_EffectCalculations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_EffectCalculations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeModParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_EffectCalculations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewProp_EffectCalculations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeModParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"AttributeModParams",
		sizeof(FAttributeModParams),
		alignof(FAttributeModParams),
		Z_Construct_UScriptStruct_FAttributeModParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeModParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeModParams()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributeModParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeModParams.InnerSingleton, Z_Construct_UScriptStruct_FAttributeModParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributeModParams.InnerSingleton;
	}
	DEFINE_FUNCTION(UAttributeEffect::execHasAllModAttributes)
	{
		P_GET_OBJECT(UAttributesComponent,Z_Param_AttributesComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAllModAttributes(Z_Param_AttributesComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEffect::execGetAllModAttributes)
	{
		P_GET_OBJECT(UAttributesComponent,Z_Param_AttributesComponent);
		P_GET_TARRAY_REF(FAttributeHandle,Z_Param_Out_OutAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllModAttributes(Z_Param_AttributesComponent,Z_Param_Out_OutAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEffect::execModifyAttributes)
	{
		P_GET_OBJECT(UAttributesComponent,Z_Param_AttributesComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_GET_STRUCT_REF(FEffectModContext,Z_Param_Out_ModificationContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyAttributes_Implementation(Z_Param_AttributesComponent,Z_Param_Magnitude,Z_Param_Out_ModificationContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEffect::execCanApplyEffect)
	{
		P_GET_OBJECT(UAttributesComponent,Z_Param_AttributesComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_GET_STRUCT_REF(FEffectModContext,Z_Param_Out_ModificationContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanApplyEffect_Implementation(Z_Param_AttributesComponent,Z_Param_Magnitude,Z_Param_Out_ModificationContext);
		P_NATIVE_END;
	}
	static FName NAME_UAttributeEffect_BP_OnEffectApplied = FName(TEXT("BP_OnEffectApplied"));
	void UAttributeEffect::BP_OnEffectApplied(UAttributesComponent* AttributesComponent, FEffectModContext const& ModificationContext) const
	{
		AttributeEffect_eventBP_OnEffectApplied_Parms Parms;
		Parms.AttributesComponent=AttributesComponent;
		Parms.ModificationContext=ModificationContext;
		const_cast<UAttributeEffect*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAttributeEffect_BP_OnEffectApplied),&Parms);
	}
	static FName NAME_UAttributeEffect_BP_OnEffectRemoved = FName(TEXT("BP_OnEffectRemoved"));
	void UAttributeEffect::BP_OnEffectRemoved(UAttributesComponent* AttributesComponent, FEffectModContext const& ModificationContext, const EEffectRemovalReason Reason) const
	{
		AttributeEffect_eventBP_OnEffectRemoved_Parms Parms;
		Parms.AttributesComponent=AttributesComponent;
		Parms.ModificationContext=ModificationContext;
		Parms.Reason=Reason;
		const_cast<UAttributeEffect*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAttributeEffect_BP_OnEffectRemoved),&Parms);
	}
	static FName NAME_UAttributeEffect_CanApplyEffect = FName(TEXT("CanApplyEffect"));
	bool UAttributeEffect::CanApplyEffect(const UAttributesComponent* AttributesComponent, const float Magnitude, FEffectModContext const& ModificationContext) const
	{
		AttributeEffect_eventCanApplyEffect_Parms Parms;
		Parms.AttributesComponent=AttributesComponent;
		Parms.Magnitude=Magnitude;
		Parms.ModificationContext=ModificationContext;
		const_cast<UAttributeEffect*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAttributeEffect_CanApplyEffect),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAttributeEffect_ModifyAttributes = FName(TEXT("ModifyAttributes"));
	void UAttributeEffect::ModifyAttributes(UAttributesComponent* AttributesComponent, const float Magnitude, FEffectModContext const& ModificationContext) const
	{
		AttributeEffect_eventModifyAttributes_Parms Parms;
		Parms.AttributesComponent=AttributesComponent;
		Parms.Magnitude=Magnitude;
		Parms.ModificationContext=ModificationContext;
		const_cast<UAttributeEffect*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAttributeEffect_ModifyAttributes),&Parms);
	}
	void UAttributeEffect::StaticRegisterNativesUAttributeEffect()
	{
		UClass* Class = UAttributeEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanApplyEffect", &UAttributeEffect::execCanApplyEffect },
			{ "GetAllModAttributes", &UAttributeEffect::execGetAllModAttributes },
			{ "HasAllModAttributes", &UAttributeEffect::execHasAllModAttributes },
			{ "ModifyAttributes", &UAttributeEffect::execModifyAttributes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModificationContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModificationContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_AttributesComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_AttributesComponent = { "AttributesComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventBP_OnEffectApplied_Parms, AttributesComponent), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_AttributesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_AttributesComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_ModificationContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_ModificationContext = { "ModificationContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventBP_OnEffectApplied_Parms, ModificationContext), Z_Construct_UScriptStruct_FEffectModContext, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_ModificationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_ModificationContext_MetaData)) }; // 3878031127
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_AttributesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_ModificationContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "Comment", "// Called when this effect is applied\n" },
		{ "DisplayName", "On Effect Applied" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Called when this effect is applied" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEffect, nullptr, "BP_OnEffectApplied", nullptr, nullptr, sizeof(AttributeEffect_eventBP_OnEffectApplied_Parms), Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModificationContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModificationContext;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_AttributesComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_AttributesComponent = { "AttributesComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventBP_OnEffectRemoved_Parms, AttributesComponent), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_AttributesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_AttributesComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_ModificationContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_ModificationContext = { "ModificationContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventBP_OnEffectRemoved_Parms, ModificationContext), Z_Construct_UScriptStruct_FEffectModContext, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_ModificationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_ModificationContext_MetaData)) }; // 3878031127
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventBP_OnEffectRemoved_Parms, Reason), Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Reason_MetaData)) }; // 3942470696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_AttributesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_ModificationContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Reason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "Comment", "// Called when this effect is removed before being destroyed\n" },
		{ "DisplayName", "On Effect Removed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Called when this effect is removed before being destroyed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEffect, nullptr, "BP_OnEffectRemoved", nullptr, nullptr, sizeof(AttributeEffect_eventBP_OnEffectRemoved_Parms), Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModificationContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModificationContext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_AttributesComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_AttributesComponent = { "AttributesComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventCanApplyEffect_Parms, AttributesComponent), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_AttributesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_AttributesComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Magnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventCanApplyEffect_Parms, Magnitude), METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_ModificationContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_ModificationContext = { "ModificationContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventCanApplyEffect_Parms, ModificationContext), Z_Construct_UScriptStruct_FEffectModContext, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_ModificationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_ModificationContext_MetaData)) }; // 3878031127
	void Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeEffect_eventCanApplyEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributeEffect_eventCanApplyEffect_Parms), &Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_AttributesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_ModificationContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "Comment", "// Whether or not this effect should be applied. Returns true by default\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Whether or not this effect should be applied. Returns true by default" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEffect, nullptr, "CanApplyEffect", nullptr, nullptr, sizeof(AttributeEffect_eventCanApplyEffect_Parms), Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEffect_CanApplyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics
	{
		struct AttributeEffect_eventGetAllModAttributes_Parms
		{
			UAttributesComponent* AttributesComponent;
			TArray<FAttributeHandle> OutAttributes;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttributes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::NewProp_AttributesComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::NewProp_AttributesComponent = { "AttributesComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventGetAllModAttributes_Parms, AttributesComponent), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::NewProp_AttributesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::NewProp_AttributesComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::NewProp_OutAttributes_Inner = { "OutAttributes", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::NewProp_OutAttributes = { "OutAttributes", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventGetAllModAttributes_Parms, OutAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::NewProp_AttributesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::NewProp_OutAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::NewProp_OutAttributes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "Comment", "// Gets all the modifying attributes present on the Attributes Component (all handles will be valid)\n" },
		{ "DisplayName", "Get All Modifying Attributes" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Gets all the modifying attributes present on the Attributes Component (all handles will be valid)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEffect, nullptr, "GetAllModAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::AttributeEffect_eventGetAllModAttributes_Parms), Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics
	{
		struct AttributeEffect_eventHasAllModAttributes_Parms
		{
			const UAttributesComponent* AttributesComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::NewProp_AttributesComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::NewProp_AttributesComponent = { "AttributesComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventHasAllModAttributes_Parms, AttributesComponent), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::NewProp_AttributesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::NewProp_AttributesComponent_MetaData)) };
	void Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeEffect_eventHasAllModAttributes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributeEffect_eventHasAllModAttributes_Parms), &Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::NewProp_AttributesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "DisplayName", "Has All Modifying Attributes" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEffect, nullptr, "HasAllModAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::AttributeEffect_eventHasAllModAttributes_Parms), Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModificationContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModificationContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_AttributesComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_AttributesComponent = { "AttributesComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventModifyAttributes_Parms, AttributesComponent), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_AttributesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_AttributesComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_Magnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventModifyAttributes_Parms, Magnitude), METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_ModificationContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_ModificationContext = { "ModificationContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventModifyAttributes_Parms, ModificationContext), Z_Construct_UScriptStruct_FEffectModContext, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_ModificationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_ModificationContext_MetaData)) }; // 3878031127
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_AttributesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::NewProp_ModificationContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "Comment", "// Called everytime an attribute is to be modified. Consider the Effect Modifier Type when calculating the output.\n// The context can be modified to maintain / alter state. Should generally not be overridden\n" },
		{ "DisplayName", "Modify" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Called everytime an attribute is to be modified. Consider the Effect Modifier Type when calculating the output.\nThe context can be modified to maintain / alter state. Should generally not be overridden" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEffect, nullptr, "ModifyAttributes", nullptr, nullptr, sizeof(AttributeEffect_eventModifyAttributes_Parms), Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEffect_ModifyAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEffect_ModifyAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeEffect);
	UClass* Z_Construct_UClass_UAttributeEffect_NoRegister()
	{
		return UAttributeEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EffectRepCond_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectRepCond_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectRepCond;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EffectDurType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectDurType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectDurType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntervalDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntervalDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lifespan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifespan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AppliedTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AppliedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LifespanTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifespanTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LifespanTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovedTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovedTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovedTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied, "BP_OnEffectApplied" }, // 1714633201
		{ &Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved, "BP_OnEffectRemoved" }, // 1052099955
		{ &Z_Construct_UFunction_UAttributeEffect_CanApplyEffect, "CanApplyEffect" }, // 4235999024
		{ &Z_Construct_UFunction_UAttributeEffect_GetAllModAttributes, "GetAllModAttributes" }, // 2975849869
		{ &Z_Construct_UFunction_UAttributeEffect_HasAllModAttributes, "HasAllModAttributes" }, // 3996926663
		{ &Z_Construct_UFunction_UAttributeEffect_ModifyAttributes, "ModifyAttributes" }, // 590846607
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttributeModParams, METADATA_PARAMS(nullptr, 0) }; // 1368514135
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Modifiers_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Configurations" },
		{ "Comment", "// Modifiers with an Attribute to modify and an array of Attribute Effect Calculations that will be ran sequentially\n// to modify the Attribute's value when this Effect is successfully applied\n" },
		{ "DisplayName", "Effect Attribute Modifiers" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Modifiers with an Attribute to modify and an array of Attribute Effect Calculations that will be ran sequentially\nto modify the Attribute's value when this Effect is successfully applied" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0020088000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Modifiers_MetaData)) }; // 1368514135
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Configurations" },
		{ "Comment", "// How this effect should be replicated. Will make no difference if playing as server / playing in Standalone-Mode\n" },
		{ "DisplayName", "Effect Replication Condition" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "How this effect should be replicated. Will make no difference if playing as server / playing in Standalone-Mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond = { "EffectRepCond", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, EffectRepCond), Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond, METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond_MetaData)) }; // 3222879814
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Configurations" },
		{ "Comment", "// The duration of the effect. Forever being infinite until removed manually. Duration being for the duration time. And instant being instantaneous\n// Note: Using an instant effect does not instance the Attribute Effect thus you should not store any variables. Treat the functions as static functions\n" },
		{ "DisplayName", "Effect Duration Type" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "The duration of the effect. Forever being infinite until removed manually. Duration being for the duration time. And instant being instantaneous\nNote: Using an instant effect does not instance the Attribute Effect thus you should not store any variables. Treat the functions as static functions" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType = { "EffectDurType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, EffectDurType), Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration, METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType_MetaData)) }; // 4066429253
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_IntervalDuration_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ClampMin", "0" },
		{ "Comment", "// The delay in-between effect applications for latent-effects\n" },
		{ "DisplayName", "Effect Interval Duration" },
		{ "EditCondition", "EffectDurType != EEffectDuration::Instant" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "The delay in-between effect applications for latent-effects" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_IntervalDuration = { "IntervalDuration", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, IntervalDuration), METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_IntervalDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_IntervalDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Lifespan_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ClampMin", "0" },
		{ "Comment", "// The total lifespan of this effect\n" },
		{ "DisplayName", "Effect Lifespan Duration" },
		{ "EditCondition", "EffectDurType == EEffectDuration::ForDuration" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "The total lifespan of this effect" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Lifespan = { "Lifespan", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, Lifespan), METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Lifespan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Lifespan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectTag_MetaData[] = {
		{ "Category", "Configurations|Tags" },
		{ "Comment", "// The optional tag for representing this Effect to allow for searching for the tag\n// within the Attributes Component\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "The optional tag for representing this Effect to allow for searching for the tag\nwithin the Attributes Component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectTag = { "EffectTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, EffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectTag_MetaData)) }; // 802167388
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_AppliedTags_Inner = { "AppliedTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateGameplayTagValue, METADATA_PARAMS(nullptr, 0) }; // 1448319351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_AppliedTags_MetaData[] = {
		{ "Category", "Configurations|Tags" },
		{ "Comment", "// Tags applied when this Effect is successfully applied\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Tags applied when this Effect is successfully applied" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_AppliedTags = { "AppliedTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, AppliedTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_AppliedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_AppliedTags_MetaData)) }; // 1448319351
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_LifespanTags_Inner = { "LifespanTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateGameplayTagValue, METADATA_PARAMS(nullptr, 0) }; // 1448319351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_LifespanTags_MetaData[] = {
		{ "Category", "Configurations|Tags" },
		{ "Comment", "// Tags applied when this Effect is successfully applied. Removed at Lifespan End\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Tags applied when this Effect is successfully applied. Removed at Lifespan End" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_LifespanTags = { "LifespanTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, LifespanTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_LifespanTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_LifespanTags_MetaData)) }; // 1448319351
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_RemovedTags_Inner = { "RemovedTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateGameplayTagValue, METADATA_PARAMS(nullptr, 0) }; // 1448319351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_RemovedTags_MetaData[] = {
		{ "Category", "Configurations|Tags" },
		{ "Comment", "// Tags removed when this Effect is successfully applied\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Tags removed when this Effect is successfully applied" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_RemovedTags = { "RemovedTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, RemovedTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_RemovedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_RemovedTags_MetaData)) }; // 1448319351
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_IntervalDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Lifespan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_AppliedTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_AppliedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_LifespanTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_LifespanTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_RemovedTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_RemovedTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeEffect_Statics::ClassParams = {
		&UAttributeEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::PropPointers),
		0,
		0x009100A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeEffect()
	{
		if (!Z_Registration_Info_UClass_UAttributeEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeEffect.OuterSingleton, Z_Construct_UClass_UAttributeEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeEffect.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UAttributeEffect>()
	{
		return UAttributeEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeEffect);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::ScriptStructInfo[] = {
		{ FAttributeModParams::StaticStruct, Z_Construct_UScriptStruct_FAttributeModParams_Statics::NewStructOps, TEXT("AttributeModParams"), &Z_Registration_Info_UScriptStruct_AttributeModParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeModParams), 1368514135U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeEffect, UAttributeEffect::StaticClass, TEXT("UAttributeEffect"), &Z_Registration_Info_UClass_UAttributeEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEffect), 2615994548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_4086446074(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
