// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/AttributeSystem/AttributeEffectCalculation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeEffectCalculation() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeEffectCalculation_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeEffectCalculation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeHandle();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeEffect_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesComponent_NoRegister();
	POLYSTRUCT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStructHandle();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType();
// End Cross Module References
	DEFINE_FUNCTION(UAttributeEffectCalculation::execModifyAttribute)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentModValue);
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Attribute);
		P_GET_OBJECT(UAttributeEffect,Z_Param_Effect);
		P_GET_OBJECT(UAttributesComponent,Z_Param_AttributesComponent);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_Context);
		P_GET_ENUM_REF(EEffectModType,Z_Param_Out_OutModificationType);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutModValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyAttribute_Implementation(Z_Param_AttributeValue,Z_Param_CurrentModValue,Z_Param_Out_Attribute,Z_Param_Effect,Z_Param_AttributesComponent,Z_Param_Out_Context,(EEffectModType&)(Z_Param_Out_OutModificationType),Z_Param_Out_OutModValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEffectCalculation::execCanModifyAttribute)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Attribute);
		P_GET_OBJECT(UAttributeEffect,Z_Param_Effect);
		P_GET_OBJECT(UAttributesComponent,Z_Param_AttributesComponent);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanModifyAttribute_Implementation(Z_Param_Out_Attribute,Z_Param_Effect,Z_Param_AttributesComponent,Z_Param_Out_Context);
		P_NATIVE_END;
	}
	static FName NAME_UAttributeEffectCalculation_CanModifyAttribute = FName(TEXT("CanModifyAttribute"));
	bool UAttributeEffectCalculation::CanModifyAttribute(FAttributeHandle const& Attribute, const UAttributeEffect* Effect, const UAttributesComponent* AttributesComponent, FPolyStructHandle const& Context) const
	{
		AttributeEffectCalculation_eventCanModifyAttribute_Parms Parms;
		Parms.Attribute=Attribute;
		Parms.Effect=Effect;
		Parms.AttributesComponent=AttributesComponent;
		Parms.Context=Context;
		const_cast<UAttributeEffectCalculation*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAttributeEffectCalculation_CanModifyAttribute),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAttributeEffectCalculation_ModifyAttribute = FName(TEXT("ModifyAttribute"));
	void UAttributeEffectCalculation::ModifyAttribute(const float AttributeValue, const float CurrentModValue, FAttributeHandle const& Attribute, const UAttributeEffect* Effect, const UAttributesComponent* AttributesComponent, FPolyStructHandle& Context, EEffectModType& OutModificationType, float& OutModValue) const
	{
		AttributeEffectCalculation_eventModifyAttribute_Parms Parms;
		Parms.AttributeValue=AttributeValue;
		Parms.CurrentModValue=CurrentModValue;
		Parms.Attribute=Attribute;
		Parms.Effect=Effect;
		Parms.AttributesComponent=AttributesComponent;
		Parms.Context=Context;
		Parms.OutModificationType=OutModificationType;
		Parms.OutModValue=OutModValue;
		const_cast<UAttributeEffectCalculation*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAttributeEffectCalculation_ModifyAttribute),&Parms);
		Context=Parms.Context;
		OutModificationType=Parms.OutModificationType;
		OutModValue=Parms.OutModValue;
	}
	void UAttributeEffectCalculation::StaticRegisterNativesUAttributeEffectCalculation()
	{
		UClass* Class = UAttributeEffectCalculation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanModifyAttribute", &UAttributeEffectCalculation::execCanModifyAttribute },
			{ "ModifyAttribute", &UAttributeEffectCalculation::execModifyAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectCalculation_eventCanModifyAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Attribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectCalculation_eventCanModifyAttribute_Parms, Effect), Z_Construct_UClass_UAttributeEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_AttributesComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_AttributesComponent = { "AttributesComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectCalculation_eventCanModifyAttribute_Parms, AttributesComponent), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_AttributesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_AttributesComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectCalculation_eventCanModifyAttribute_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Context_MetaData)) }; // 2519392893
	void Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeEffectCalculation_eventCanModifyAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributeEffectCalculation_eventCanModifyAttribute_Parms), &Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_AttributesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect Calculation" },
		{ "Comment", "// Whether or not we should attempt to modify the attribute. True by default\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffectCalculation.h" },
		{ "ToolTip", "Whether or not we should attempt to modify the attribute. True by default" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEffectCalculation, nullptr, "CanModifyAttribute", nullptr, nullptr, sizeof(AttributeEffectCalculation_eventCanModifyAttribute_Parms), Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentModValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentModValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutModificationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutModificationType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutModValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectCalculation_eventModifyAttribute_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_AttributeValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_CurrentModValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_CurrentModValue = { "CurrentModValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectCalculation_eventModifyAttribute_Parms, CurrentModValue), METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_CurrentModValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_CurrentModValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectCalculation_eventModifyAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_Attribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_Effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectCalculation_eventModifyAttribute_Parms, Effect), Z_Construct_UClass_UAttributeEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_AttributesComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_AttributesComponent = { "AttributesComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectCalculation_eventModifyAttribute_Parms, AttributesComponent), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_AttributesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_AttributesComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectCalculation_eventModifyAttribute_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_OutModificationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_OutModificationType = { "OutModificationType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectCalculation_eventModifyAttribute_Parms, OutModificationType), Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType, METADATA_PARAMS(nullptr, 0) }; // 347396436
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_OutModValue = { "OutModValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectCalculation_eventModifyAttribute_Parms, OutModValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_CurrentModValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_AttributesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_OutModificationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_OutModificationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::NewProp_OutModValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect Calculation" },
		{ "Comment", "// Called when modifying an attribute\n" },
		{ "DisplayName", "Modify" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffectCalculation.h" },
		{ "ToolTip", "Called when modifying an attribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEffectCalculation, nullptr, "ModifyAttribute", nullptr, nullptr, sizeof(AttributeEffectCalculation_eventModifyAttribute_Parms), Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeEffectCalculation);
	UClass* Z_Construct_UClass_UAttributeEffectCalculation_NoRegister()
	{
		return UAttributeEffectCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeEffectCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEffectCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeEffectCalculation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeEffectCalculation_CanModifyAttribute, "CanModifyAttribute" }, // 1622220125
		{ &Z_Construct_UFunction_UAttributeEffectCalculation_ModifyAttribute, "ModifyAttribute" }, // 2590398095
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffectCalculation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  The base-class for modifying an attribute's value from an Attribute Effect.\n *  Each calculation in the array modifies the Attribute sequentially.\n *  NOTE: This is a non-instanced object so do not attempt to modify member-variables\n */" },
		{ "IncludePath", "WeaponSystem/AttributeSystem/AttributeEffectCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffectCalculation.h" },
		{ "NotBlueprintSpawnable", "" },
		{ "ToolTip", "The base-class for modifying an attribute's value from an Attribute Effect.\nEach calculation in the array modifies the Attribute sequentially.\nNOTE: This is a non-instanced object so do not attempt to modify member-variables" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeEffectCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeEffectCalculation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeEffectCalculation_Statics::ClassParams = {
		&UAttributeEffectCalculation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeEffectCalculation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffectCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeEffectCalculation()
	{
		if (!Z_Registration_Info_UClass_UAttributeEffectCalculation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeEffectCalculation.OuterSingleton, Z_Construct_UClass_UAttributeEffectCalculation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeEffectCalculation.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UAttributeEffectCalculation>()
	{
		return UAttributeEffectCalculation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeEffectCalculation);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeEffectCalculation, UAttributeEffectCalculation::StaticClass, TEXT("UAttributeEffectCalculation"), &Z_Registration_Info_UClass_UAttributeEffectCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEffectCalculation), 119745871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_2797136989(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffectCalculation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
