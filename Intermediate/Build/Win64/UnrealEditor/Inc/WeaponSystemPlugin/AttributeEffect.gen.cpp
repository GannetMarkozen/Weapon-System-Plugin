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
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeEffect_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeEffect();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UScriptBase();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeHandle();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesComponent_NoRegister();
	POLYSTRUCT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStructHandle();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UAttributeEffect::execModifyAttribute)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Attribute);
		P_GET_OBJECT(UAttributesComponent,Z_Param_AttributesComponent);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ModifyAttribute_Implementation(Z_Param_Out_Attribute,Z_Param_AttributesComponent,Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEffect::execCanApplyEffect)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Attribute);
		P_GET_OBJECT(UAttributesComponent,Z_Param_AttributesComponent);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanApplyEffect_Implementation(Z_Param_Out_Attribute,Z_Param_AttributesComponent,Z_Param_Out_Context);
		P_NATIVE_END;
	}
	static FName NAME_UAttributeEffect_BP_OnEffectApplied = FName(TEXT("BP_OnEffectApplied"));
	void UAttributeEffect::BP_OnEffectApplied(FAttributeHandle const& Attribute, const UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) const
	{
		AttributeEffect_eventBP_OnEffectApplied_Parms Parms;
		Parms.Attribute=Attribute;
		Parms.AttributesComponent=AttributesComponent;
		Parms.Context=Context;
		const_cast<UAttributeEffect*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAttributeEffect_BP_OnEffectApplied),&Parms);
		Context=Parms.Context;
	}
	static FName NAME_UAttributeEffect_BP_OnEffectRemoved = FName(TEXT("BP_OnEffectRemoved"));
	void UAttributeEffect::BP_OnEffectRemoved(FAttributeHandle const& Attribute, const UAttributesComponent* AttributesComponent, FPolyStructHandle const& Context, const EEffectRemovalReason Reason) const
	{
		AttributeEffect_eventBP_OnEffectRemoved_Parms Parms;
		Parms.Attribute=Attribute;
		Parms.AttributesComponent=AttributesComponent;
		Parms.Context=Context;
		Parms.Reason=Reason;
		const_cast<UAttributeEffect*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAttributeEffect_BP_OnEffectRemoved),&Parms);
	}
	static FName NAME_UAttributeEffect_CanApplyEffect = FName(TEXT("CanApplyEffect"));
	bool UAttributeEffect::CanApplyEffect(FAttributeHandle const& Attribute, const UAttributesComponent* AttributesComponent, FPolyStructHandle const& Context) const
	{
		AttributeEffect_eventCanApplyEffect_Parms Parms;
		Parms.Attribute=Attribute;
		Parms.AttributesComponent=AttributesComponent;
		Parms.Context=Context;
		const_cast<UAttributeEffect*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAttributeEffect_CanApplyEffect),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAttributeEffect_ModifyAttribute = FName(TEXT("ModifyAttribute"));
	float UAttributeEffect::ModifyAttribute(FAttributeHandle const& Attribute, const UAttributesComponent* AttributesComponent, FPolyStructHandle& Context) const
	{
		AttributeEffect_eventModifyAttribute_Parms Parms;
		Parms.Attribute=Attribute;
		Parms.AttributesComponent=AttributesComponent;
		Parms.Context=Context;
		const_cast<UAttributeEffect*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAttributeEffect_ModifyAttribute),&Parms);
		Context=Parms.Context;
		return Parms.ReturnValue;
	}
	void UAttributeEffect::StaticRegisterNativesUAttributeEffect()
	{
		UClass* Class = UAttributeEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanApplyEffect", &UAttributeEffect::execCanApplyEffect },
			{ "ModifyAttribute", &UAttributeEffect::execModifyAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventBP_OnEffectApplied_Parms, Attribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_Attribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_AttributesComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_AttributesComponent = { "AttributesComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventBP_OnEffectApplied_Parms, AttributesComponent), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_AttributesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_AttributesComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventBP_OnEffectApplied_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2436832372
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_AttributesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied_Statics::NewProp_Context,
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventBP_OnEffectRemoved_Parms, Attribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Attribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_AttributesComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_AttributesComponent = { "AttributesComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventBP_OnEffectRemoved_Parms, AttributesComponent), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_AttributesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_AttributesComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventBP_OnEffectRemoved_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Context_MetaData)) }; // 2436832372
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventBP_OnEffectRemoved_Parms, Reason), Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Reason_MetaData)) }; // 3942470696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_AttributesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved_Statics::NewProp_Context,
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventCanApplyEffect_Parms, Attribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Attribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_AttributesComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_AttributesComponent = { "AttributesComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventCanApplyEffect_Parms, AttributesComponent), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_AttributesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_AttributesComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventCanApplyEffect_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Context_MetaData)) }; // 2436832372
	void Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeEffect_eventCanApplyEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributeEffect_eventCanApplyEffect_Parms), &Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_AttributesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_CanApplyEffect_Statics::NewProp_Context,
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
	struct Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventModifyAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_Attribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_AttributesComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_AttributesComponent = { "AttributesComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventModifyAttribute_Parms, AttributesComponent), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_AttributesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_AttributesComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventModifyAttribute_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2436832372
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffect_eventModifyAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_AttributesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "Comment", "// Called everytime an attribute is to be modified. Consider the Effect Modifier Type when calculating the output.\n// The context can be modified to maintain / alter state\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Called everytime an attribute is to be modified. Consider the Effect Modifier Type when calculating the output.\nThe context can be modified to maintain / alter state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEffect, nullptr, "ModifyAttribute", nullptr, nullptr, sizeof(AttributeEffect_eventModifyAttribute_Parms), Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEffect_ModifyAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEffect_ModifyAttribute_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttrTargetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttrTargetName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EffectModType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectModType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectModType;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_EffectRepCond_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectRepCond_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectRepCond;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InheritedEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritedEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InheritedEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeEffect_BP_OnEffectApplied, "BP_OnEffectApplied" }, // 1707239558
		{ &Z_Construct_UFunction_UAttributeEffect_BP_OnEffectRemoved, "BP_OnEffectRemoved" }, // 2491514423
		{ &Z_Construct_UFunction_UAttributeEffect_CanApplyEffect, "CanApplyEffect" }, // 42676517
		{ &Z_Construct_UFunction_UAttributeEffect_ModifyAttribute, "ModifyAttribute" }, // 612956303
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_AttrTargetName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Effect" },
		{ "Comment", "// The name of the attribute this effect is attempting to target\n" },
		{ "DisplayName", "Attribute Target Name" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "The name of the attribute this effect is attempting to target" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_AttrTargetName = { "AttrTargetName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, AttrTargetName), METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_AttrTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_AttrTargetName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectModType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectModType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Effect" },
		{ "Comment", "// The modification type that is applied to the targeted Attribute calculated from the Modify Attribute function\n" },
		{ "DisplayName", "Effect Modifier Type" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "The modification type that is applied to the targeted Attribute calculated from the Modify Attribute function" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectModType = { "EffectModType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, EffectModType), Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType, METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectModType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectModType_MetaData)) }; // 2448245670
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Effect" },
		{ "Comment", "// The duration of the effect. Forever being infinite until removed manually. Duration being for the duration time. And instant being instantaneous\n// Note: Using an instant effect does not instance the Attribute Effect thus you should not store any variables. Treat the functions as static functions\n" },
		{ "DisplayName", "Effect Duration Type" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "The duration of the effect. Forever being infinite until removed manually. Duration being for the duration time. And instant being instantaneous\nNote: Using an instant effect does not instance the Attribute Effect thus you should not store any variables. Treat the functions as static functions" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType = { "EffectDurType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, EffectDurType), Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration, METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType_MetaData)) }; // 1785194202
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_IntervalDuration_MetaData[] = {
		{ "Category", "Effect" },
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
		{ "Category", "Effect" },
		{ "ClampMin", "0" },
		{ "Comment", "// The total lifespan of this effect\n" },
		{ "DisplayName", "Effect Lifespan Duration" },
		{ "EditCondition", "EffectDurType == EEffectDuration::ForDuration" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "The total lifespan of this effect" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Lifespan = { "Lifespan", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, Lifespan), METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Lifespan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Lifespan_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Effect" },
		{ "Comment", "// How this effect should be replicated\n" },
		{ "DisplayName", "Effect Replication Condition" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "How this effect should be replicated" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond = { "EffectRepCond", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, EffectRepCond), Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond, METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond_MetaData)) }; // 3222879814
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_InheritedEffects_Inner = { "InheritedEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAttributeEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffect_Statics::NewProp_InheritedEffects_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Effect" },
		{ "Comment", "// Other effects attempted to be applied if this one is successfully applied\n" },
		{ "DisplayName", "Inherited Effects" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Other effects attempted to be applied if this one is successfully applied" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEffect_Statics::NewProp_InheritedEffects = { "InheritedEffects", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffect, InheritedEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_InheritedEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffect_Statics::NewProp_InheritedEffects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_AttrTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectModType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectModType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectDurType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_IntervalDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_Lifespan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_EffectRepCond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_InheritedEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffect_Statics::NewProp_InheritedEffects,
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
		0x003010A1u,
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
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeEffect, UAttributeEffect::StaticClass, TEXT("UAttributeEffect"), &Z_Registration_Info_UClass_UAttributeEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEffect), 124902608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_939265035(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
