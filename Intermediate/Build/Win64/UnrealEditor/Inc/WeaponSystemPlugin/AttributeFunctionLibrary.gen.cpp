// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeFunctionLibrary() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EValidity();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeUtils_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeHandle();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttribute();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesComponent_NoRegister();
	POLYSTRUCT_API UEnum* Z_Construct_UEnum_PolyStruct_EStructCastPin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	POLYSTRUCT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStructHandle();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEffectModContext();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EValidity;
	static UEnum* EValidity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EValidity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EValidity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_EValidity, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EValidity"));
		}
		return Z_Registration_Info_UEnum_EValidity.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EValidity>()
	{
		return EValidity_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystemPlugin_EValidity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystemPlugin_EValidity_Statics::Enumerators[] = {
		{ "EValidity::Valid", (int64)EValidity::Valid },
		{ "EValidity::Invalid", (int64)EValidity::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystemPlugin_EValidity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Invalid.Name", "EValidity::Invalid" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "Valid.Name", "EValidity::Valid" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystemPlugin_EValidity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		"EValidity",
		"EValidity",
		Z_Construct_UEnum_WeaponSystemPlugin_EValidity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EValidity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystemPlugin_EValidity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EValidity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EValidity()
	{
		if (!Z_Registration_Info_UEnum_EValidity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EValidity.InnerSingleton, Z_Construct_UEnum_WeaponSystemPlugin_EValidity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EValidity.InnerSingleton;
	}
	DEFINE_FUNCTION(UAttributeUtils::execUnbindAllAttributeChangedFromHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeUtils::UnbindAllAttributeChangedFromHandle(Z_Param_Target,Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execUnbindAllAttributeChanged)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeUtils::UnbindAllAttributeChanged(Z_Param_Target,Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execHasAttribute)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAttributeUtils::HasAttribute(Z_Param_Target,Z_Param_Out_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execHasAttributesComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAttributeUtils::HasAttributesComponent(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execBP_TryApplyInstantNumericEffectToTarget)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_GET_ENUM(EEffectModType,Z_Param_ModificationType);
		P_GET_ENUM(EEffectRepCond,Z_Param_ReplicationCondition);
		P_GET_OBJECT(AActor,Z_Param_OptionalInstigator);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_OptionalContext);
		P_GET_ENUM_REF(EStructCastPin,Z_Param_Out_OutPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeUtils::BP_TryApplyInstantNumericEffectToTarget(Z_Param_Target,Z_Param_Out_AttributeName,Z_Param_Magnitude,EEffectModType(Z_Param_ModificationType),EEffectRepCond(Z_Param_ReplicationCondition),Z_Param_OptionalInstigator,Z_Param_Out_OptionalContext,(EStructCastPin&)(Z_Param_Out_OutPin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execBP_TryApplyEffectToTarget)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_OBJECT(UClass,Z_Param_Effect);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_Context);
		P_GET_ENUM_REF(EStructCastPin,Z_Param_Out_OutPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeUtils::BP_TryApplyEffectToTarget(Z_Param_Target,Z_Param_Effect,Z_Param_Magnitude,Z_Param_Instigator,Z_Param_Out_Context,(EStructCastPin&)(Z_Param_Out_OutPin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execBP_GetAttributeHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_ENUM_REF(EStructCastPin,Z_Param_Out_OutPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttributeHandle*)Z_Param__Result=UAttributeUtils::BP_GetAttributeHandle(Z_Param_Target,Z_Param_Out_AttributeName,(EStructCastPin&)(Z_Param_Out_OutPin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execBP_GetAttributeComponentAs)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_ENUM_REF(EStructCastPin,Z_Param_Out_OutPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAttributesComponent**)Z_Param__Result=UAttributeUtils::BP_GetAttributeComponentAs(Z_Param_Target,Z_Param_Class,(EStructCastPin&)(Z_Param_Out_OutPin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execBP_GetAttributesComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_ENUM_REF(EStructCastPin,Z_Param_Out_OutPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAttributesComponent**)Z_Param__Result=UAttributeUtils::BP_GetAttributesComponent(Z_Param_Target,(EStructCastPin&)(Z_Param_Out_OutPin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execBindAttributeChangedFromHandleByName)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Handle);
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeUtils::BindAttributeChangedFromHandleByName(Z_Param_Out_Handle,Z_Param_Target,Z_Param_Out_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execBindAttributeChangedFromAttributeByName)
	{
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeUtils::BindAttributeChangedFromAttributeByName(Z_Param_Out_Attribute,Z_Param_Target,Z_Param_Out_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execBindAttributeChangedFromHandle)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Handle);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeUtils::BindAttributeChangedFromHandle(Z_Param_Out_Handle,FAttributeValueChangedUniDelegate(Z_Param_Out_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execBindAttributeChangedFromAttribute)
	{
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeUtils::BindAttributeChangedFromAttribute(Z_Param_Out_Attribute,FAttributeValueChangedUniDelegate(Z_Param_Out_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execGetAttribute)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_AttributeHandle);
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_OutAttribute);
		P_GET_ENUM_REF(EValidity,Z_Param_Out_OutPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeUtils::GetAttribute(Z_Param_Out_AttributeHandle,Z_Param_Out_OutAttribute,(EValidity&)(Z_Param_Out_OutPin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execSetAttributeValue)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_AttributeHandle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_GET_STRUCT_REF(FEffectModContext,Z_Param_Out_OptionalModificationContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeUtils::SetAttributeValue(Z_Param_Out_AttributeHandle,Z_Param_NewValue,Z_Param_Out_OptionalModificationContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execGetAttributeName)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_AttributeHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAttributeUtils::GetAttributeName(Z_Param_Out_AttributeHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execGetAttributeValue)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_AttributeHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAttributeUtils::GetAttributeValue(Z_Param_Out_AttributeHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execGetOwner)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_AttributeHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAttributesComponent**)Z_Param__Result=UAttributeUtils::GetOwner(Z_Param_Out_AttributeHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execGetAttributeHandleFromAttribute)
	{
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttributeHandle*)Z_Param__Result=UAttributeUtils::GetAttributeHandleFromAttribute(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execAttributeHandleEqualsNOT)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_A);
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAttributeUtils::AttributeHandleEqualsNOT(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execAttributeHandleEquals)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_A);
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAttributeUtils::AttributeHandleEquals(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execConv_AttributeHandleToName)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAttributeUtils::Conv_AttributeHandleToName(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execConv_AttributeHandleToString)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAttributeUtils::Conv_AttributeHandleToString(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execConv_AttributeToName)
	{
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAttributeUtils::Conv_AttributeToName(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execConv_AttributeToString)
	{
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAttributeUtils::Conv_AttributeToString(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execConv_AttributeHandleToAttribute)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_AttributeHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttribute*)Z_Param__Result=UAttributeUtils::Conv_AttributeHandleToAttribute(Z_Param_Out_AttributeHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeUtils::execConv_AttributeToAttributeHandle)
	{
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttributeHandle*)Z_Param__Result=UAttributeUtils::Conv_AttributeToAttributeHandle(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	void UAttributeUtils::StaticRegisterNativesUAttributeUtils()
	{
		UClass* Class = UAttributeUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttributeHandleEquals", &UAttributeUtils::execAttributeHandleEquals },
			{ "AttributeHandleEqualsNOT", &UAttributeUtils::execAttributeHandleEqualsNOT },
			{ "BindAttributeChangedFromAttribute", &UAttributeUtils::execBindAttributeChangedFromAttribute },
			{ "BindAttributeChangedFromAttributeByName", &UAttributeUtils::execBindAttributeChangedFromAttributeByName },
			{ "BindAttributeChangedFromHandle", &UAttributeUtils::execBindAttributeChangedFromHandle },
			{ "BindAttributeChangedFromHandleByName", &UAttributeUtils::execBindAttributeChangedFromHandleByName },
			{ "BP_GetAttributeComponentAs", &UAttributeUtils::execBP_GetAttributeComponentAs },
			{ "BP_GetAttributeHandle", &UAttributeUtils::execBP_GetAttributeHandle },
			{ "BP_GetAttributesComponent", &UAttributeUtils::execBP_GetAttributesComponent },
			{ "BP_TryApplyEffectToTarget", &UAttributeUtils::execBP_TryApplyEffectToTarget },
			{ "BP_TryApplyInstantNumericEffectToTarget", &UAttributeUtils::execBP_TryApplyInstantNumericEffectToTarget },
			{ "Conv_AttributeHandleToAttribute", &UAttributeUtils::execConv_AttributeHandleToAttribute },
			{ "Conv_AttributeHandleToName", &UAttributeUtils::execConv_AttributeHandleToName },
			{ "Conv_AttributeHandleToString", &UAttributeUtils::execConv_AttributeHandleToString },
			{ "Conv_AttributeToAttributeHandle", &UAttributeUtils::execConv_AttributeToAttributeHandle },
			{ "Conv_AttributeToName", &UAttributeUtils::execConv_AttributeToName },
			{ "Conv_AttributeToString", &UAttributeUtils::execConv_AttributeToString },
			{ "GetAttribute", &UAttributeUtils::execGetAttribute },
			{ "GetAttributeHandleFromAttribute", &UAttributeUtils::execGetAttributeHandleFromAttribute },
			{ "GetAttributeName", &UAttributeUtils::execGetAttributeName },
			{ "GetAttributeValue", &UAttributeUtils::execGetAttributeValue },
			{ "GetOwner", &UAttributeUtils::execGetOwner },
			{ "HasAttribute", &UAttributeUtils::execHasAttribute },
			{ "HasAttributesComponent", &UAttributeUtils::execHasAttributesComponent },
			{ "SetAttributeValue", &UAttributeUtils::execSetAttributeValue },
			{ "UnbindAllAttributeChanged", &UAttributeUtils::execUnbindAllAttributeChanged },
			{ "UnbindAllAttributeChangedFromHandle", &UAttributeUtils::execUnbindAllAttributeChangedFromHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics
	{
		struct AttributeUtils_eventAttributeHandleEquals_Parms
		{
			FAttributeHandle A;
			FAttributeHandle B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventAttributeHandleEquals_Parms, A), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_A_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventAttributeHandleEquals_Parms, B), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_B_MetaData)) }; // 4070662230
	void Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeUtils_eventAttributeHandleEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributeUtils_eventAttributeHandleEquals_Parms), &Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "==" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "AttributeHandleEquals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::AttributeUtils_eventAttributeHandleEquals_Parms), Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics
	{
		struct AttributeUtils_eventAttributeHandleEqualsNOT_Parms
		{
			FAttributeHandle A;
			FAttributeHandle B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventAttributeHandleEqualsNOT_Parms, A), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_A_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventAttributeHandleEqualsNOT_Parms, B), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_B_MetaData)) }; // 4070662230
	void Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeUtils_eventAttributeHandleEqualsNOT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributeUtils_eventAttributeHandleEqualsNOT_Parms), &Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Attribute Handle Equals NOT" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "AttributeHandleEqualsNOT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::AttributeUtils_eventAttributeHandleEqualsNOT_Parms), Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics
	{
		struct AttributeUtils_eventBindAttributeChangedFromAttribute_Parms
		{
			FAttribute Attribute;
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBindAttributeChangedFromAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(nullptr, 0) }; // 3121471449
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBindAttributeChangedFromAttribute_Parms, Delegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::NewProp_Delegate_MetaData)) }; // 3876571378
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Binds an event for whenever the attribute's value changes\n" },
		{ "DisplayName", "Bind Attribute Changed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Binds an event for whenever the attribute's value changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "BindAttributeChangedFromAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::AttributeUtils_eventBindAttributeChangedFromAttribute_Parms), Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics
	{
		struct AttributeUtils_eventBindAttributeChangedFromAttributeByName_Parms
		{
			FAttribute Attribute;
			UObject* Target;
			FName FunctionName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBindAttributeChangedFromAttributeByName_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(nullptr, 0) }; // 3121471449
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBindAttributeChangedFromAttributeByName_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBindAttributeChangedFromAttributeByName_Parms, FunctionName), METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::NewProp_FunctionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::NewProp_FunctionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FunctionName" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "DefaultToSelf", "Target" },
		{ "DisplayName", "Bind Attribute Changed By Name" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "BindAttributeChangedFromAttributeByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::AttributeUtils_eventBindAttributeChangedFromAttributeByName_Parms), Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics
	{
		struct AttributeUtils_eventBindAttributeChangedFromHandle_Parms
		{
			FAttributeHandle Handle;
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBindAttributeChangedFromHandle_Parms, Handle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBindAttributeChangedFromHandle_Parms, Delegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::NewProp_Delegate_MetaData)) }; // 3876571378
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Binds an event for whenever the attribute's value changes. From an attribute handle. Only binds if the handle is valid\n" },
		{ "DisplayName", "Bind Attribute Changed (from handle)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Binds an event for whenever the attribute's value changes. From an attribute handle. Only binds if the handle is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "BindAttributeChangedFromHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::AttributeUtils_eventBindAttributeChangedFromHandle_Parms), Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics
	{
		struct AttributeUtils_eventBindAttributeChangedFromHandleByName_Parms
		{
			FAttributeHandle Handle;
			UObject* Target;
			FName FunctionName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBindAttributeChangedFromHandleByName_Parms, Handle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBindAttributeChangedFromHandleByName_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBindAttributeChangedFromHandleByName_Parms, FunctionName), METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::NewProp_FunctionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::NewProp_FunctionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FunctionName" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "DefaultToSelf", "Target" },
		{ "DisplayName", "Bind Attribute Changed By Name (from handle)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "BindAttributeChangedFromHandleByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::AttributeUtils_eventBindAttributeChangedFromHandleByName_Parms), Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics
	{
		struct AttributeUtils_eventBP_GetAttributeComponentAs_Parms
		{
			UObject* Target;
			const TSubclassOf<UAttributesComponent>  Class;
			EStructCastPin OutPin;
			UAttributesComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_GetAttributeComponentAs_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_GetAttributeComponentAs_Parms, Class), Z_Construct_UClass_UAttributesComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_GetAttributeComponentAs_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_GetAttributeComponentAs_Parms, ReturnValue), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_OutPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "DeterminesOutputType", "Class" },
		{ "DisplayName", "Get Attributes Component As" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "BP_GetAttributeComponentAs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::AttributeUtils_eventBP_GetAttributeComponentAs_Parms), Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics
	{
		struct AttributeUtils_eventBP_GetAttributeHandle_Parms
		{
			UObject* Target;
			FName AttributeName;
			EStructCastPin OutPin;
			FAttributeHandle ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_GetAttributeHandle_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_GetAttributeHandle_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::NewProp_AttributeName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_GetAttributeHandle_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_GetAttributeHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::NewProp_OutPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "AttributeName" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "DisplayName", "Get Attribute Handle" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "BP_GetAttributeHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::AttributeUtils_eventBP_GetAttributeHandle_Parms), Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics
	{
		struct AttributeUtils_eventBP_GetAttributesComponent_Parms
		{
			UObject* Target;
			EStructCastPin OutPin;
			UAttributesComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_GetAttributesComponent_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_GetAttributesComponent_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_GetAttributesComponent_Parms, ReturnValue), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::NewProp_OutPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "DisplayName", "Get Attributes Component" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "BP_GetAttributesComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::AttributeUtils_eventBP_GetAttributesComponent_Parms), Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics
	{
		struct AttributeUtils_eventBP_TryApplyEffectToTarget_Parms
		{
			UObject* Target;
			const TSubclassOf<UAttributeEffect>  Effect;
			float Magnitude;
			const AActor* Instigator;
			FPolyStructHandle Context;
			EStructCastPin OutPin;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyEffectToTarget_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyEffectToTarget_Parms, Effect), Z_Construct_UClass_UAttributeEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Magnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyEffectToTarget_Parms, Magnitude), METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Instigator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyEffectToTarget_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Instigator_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyEffectToTarget_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 84488860
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyEffectToTarget_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Context" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Searches the Target for an Attributes Component then calls Try Apply Effect on it\n" },
		{ "DefaultToSelf", "Target" },
		{ "DisplayName", "Try Apply Effect To Target" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "Keywords", "effect,apply,target,attribute" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Searches the Target for an Attributes Component then calls Try Apply Effect on it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "BP_TryApplyEffectToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::AttributeUtils_eventBP_TryApplyEffectToTarget_Parms), Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics
	{
		struct AttributeUtils_eventBP_TryApplyInstantNumericEffectToTarget_Parms
		{
			UObject* Target;
			FName AttributeName;
			float Magnitude;
			EEffectModType ModificationType;
			EEffectRepCond ReplicationCondition;
			const AActor* OptionalInstigator;
			FPolyStructHandle OptionalContext;
			EStructCastPin OutPin;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalInstigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalInstigator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalContext;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyInstantNumericEffectToTarget_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyInstantNumericEffectToTarget_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_Magnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyInstantNumericEffectToTarget_Parms, Magnitude), METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_Magnitude_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ModificationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ModificationType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ModificationType = { "ModificationType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyInstantNumericEffectToTarget_Parms, ModificationType), Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ModificationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ModificationType_MetaData)) }; // 347396436
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ReplicationCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ReplicationCondition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ReplicationCondition = { "ReplicationCondition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyInstantNumericEffectToTarget_Parms, ReplicationCondition), Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ReplicationCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ReplicationCondition_MetaData)) }; // 3222879814
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_OptionalInstigator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_OptionalInstigator = { "OptionalInstigator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyInstantNumericEffectToTarget_Parms, OptionalInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_OptionalInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_OptionalInstigator_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_OptionalContext = { "OptionalContext", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyInstantNumericEffectToTarget_Parms, OptionalContext), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 84488860
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventBP_TryApplyInstantNumericEffectToTarget_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ModificationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ModificationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ReplicationCondition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_ReplicationCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_OptionalInstigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_OptionalContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "AttributeName,OptionalContext" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Searches the Target for an Attributes Component then calls Apply Instant Numeric Effect on it\n" },
		{ "DefaultToSelf", "Target" },
		{ "DisplayName", "Try Apply Instant Numeric Effect To Target" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "Keywords", "effect,apply,target,attribute" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Searches the Target for an Attributes Component then calls Apply Instant Numeric Effect on it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "BP_TryApplyInstantNumericEffectToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::AttributeUtils_eventBP_TryApplyInstantNumericEffectToTarget_Parms), Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics
	{
		struct AttributeUtils_eventConv_AttributeHandleToAttribute_Parms
		{
			FAttributeHandle AttributeHandle;
			FAttribute ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::NewProp_AttributeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::NewProp_AttributeHandle = { "AttributeHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventConv_AttributeHandleToAttribute_Parms, AttributeHandle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::NewProp_AttributeHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::NewProp_AttributeHandle_MetaData)) }; // 4070662230
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventConv_AttributeHandleToAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(nullptr, 0) }; // 3121471449
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::NewProp_AttributeHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Warning: Copies attribute. Not direct reference\n" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Convert Attribute Handle to Attribute" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Warning: Copies attribute. Not direct reference" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "Conv_AttributeHandleToAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::AttributeUtils_eventConv_AttributeHandleToAttribute_Parms), Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics
	{
		struct AttributeUtils_eventConv_AttributeHandleToName_Parms
		{
			FAttributeHandle Handle;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventConv_AttributeHandleToName_Parms, Handle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::NewProp_Handle_MetaData)) }; // 4070662230
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventConv_AttributeHandleToName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Convert Attribute Handle to Name" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "Conv_AttributeHandleToName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::AttributeUtils_eventConv_AttributeHandleToName_Parms), Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics
	{
		struct AttributeUtils_eventConv_AttributeHandleToString_Parms
		{
			FAttributeHandle Handle;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventConv_AttributeHandleToString_Parms, Handle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::NewProp_Handle_MetaData)) }; // 4070662230
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventConv_AttributeHandleToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Convert Attribute Handle to String" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "Conv_AttributeHandleToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::AttributeUtils_eventConv_AttributeHandleToString_Parms), Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics
	{
		struct AttributeUtils_eventConv_AttributeToAttributeHandle_Parms
		{
			FAttribute Attribute;
			FAttributeHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventConv_AttributeToAttributeHandle_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::NewProp_Attribute_MetaData)) }; // 3121471449
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventConv_AttributeToAttributeHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Convert Attribute to Attribute Handle" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "Conv_AttributeToAttributeHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::AttributeUtils_eventConv_AttributeToAttributeHandle_Parms), Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics
	{
		struct AttributeUtils_eventConv_AttributeToName_Parms
		{
			FAttribute Attribute;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventConv_AttributeToName_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::NewProp_Attribute_MetaData)) }; // 3121471449
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventConv_AttributeToName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Convert Attribute to Name" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "Conv_AttributeToName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::AttributeUtils_eventConv_AttributeToName_Parms), Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics
	{
		struct AttributeUtils_eventConv_AttributeToString_Parms
		{
			FAttribute Attribute;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventConv_AttributeToString_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::NewProp_Attribute_MetaData)) }; // 3121471449
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventConv_AttributeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Convert Attribute to String" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "Conv_AttributeToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::AttributeUtils_eventConv_AttributeToString_Parms), Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics
	{
		struct AttributeUtils_eventGetAttribute_Parms
		{
			FAttributeHandle AttributeHandle;
			FAttribute OutAttribute;
			EValidity OutPin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttribute;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::NewProp_AttributeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::NewProp_AttributeHandle = { "AttributeHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventGetAttribute_Parms, AttributeHandle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::NewProp_AttributeHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::NewProp_AttributeHandle_MetaData)) }; // 4070662230
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::NewProp_OutAttribute = { "OutAttribute", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventGetAttribute_Parms, OutAttribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(nullptr, 0) }; // 3121471449
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventGetAttribute_Parms, OutPin), Z_Construct_UEnum_WeaponSystemPlugin_EValidity, METADATA_PARAMS(nullptr, 0) }; // 624064621
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::NewProp_AttributeHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::NewProp_OutAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Gets a copy of the attribute (not sure why this would be useful)\n" },
		{ "DisplayName", "Get Attribute (a copy)" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of the attribute (not sure why this would be useful)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "GetAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::AttributeUtils_eventGetAttribute_Parms), Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_GetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_GetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics
	{
		struct AttributeUtils_eventGetAttributeHandleFromAttribute_Parms
		{
			FAttribute Attribute;
			FAttributeHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventGetAttributeHandleFromAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(nullptr, 0) }; // 3121471449
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventGetAttributeHandleFromAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Get Attribute Handle From Attribute" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "GetAttributeHandleFromAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics::AttributeUtils_eventGetAttributeHandleFromAttribute_Parms), Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics
	{
		struct AttributeUtils_eventGetAttributeName_Parms
		{
			FAttributeHandle AttributeHandle;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeHandle;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::NewProp_AttributeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::NewProp_AttributeHandle = { "AttributeHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventGetAttributeName_Parms, AttributeHandle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::NewProp_AttributeHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::NewProp_AttributeHandle_MetaData)) }; // 4070662230
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventGetAttributeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::NewProp_AttributeHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Gets the name of the attribute being referenced. None if invalid\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Gets the name of the attribute being referenced. None if invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "GetAttributeName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::AttributeUtils_eventGetAttributeName_Parms), Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_GetAttributeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_GetAttributeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics
	{
		struct AttributeUtils_eventGetAttributeValue_Parms
		{
			FAttributeHandle AttributeHandle;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::NewProp_AttributeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::NewProp_AttributeHandle = { "AttributeHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventGetAttributeValue_Parms, AttributeHandle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::NewProp_AttributeHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::NewProp_AttributeHandle_MetaData)) }; // 4070662230
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::NewProp_AttributeHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Gets the value of the Attribute. 0 if invalid reference.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Gets the value of the Attribute. 0 if invalid reference." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "GetAttributeValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::AttributeUtils_eventGetAttributeValue_Parms), Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_GetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_GetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics
	{
		struct AttributeUtils_eventGetOwner_Parms
		{
			FAttributeHandle AttributeHandle;
			UAttributesComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::NewProp_AttributeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::NewProp_AttributeHandle = { "AttributeHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventGetOwner_Parms, AttributeHandle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::NewProp_AttributeHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::NewProp_AttributeHandle_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::NewProp_AttributeHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "GetOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::AttributeUtils_eventGetOwner_Parms), Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics
	{
		struct AttributeUtils_eventHasAttribute_Parms
		{
			const UObject* Target;
			FName AttributeName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventHasAttribute_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventHasAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_AttributeName_MetaData)) };
	void Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeUtils_eventHasAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributeUtils_eventHasAttribute_Parms), &Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "AttributeName" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "HasAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::AttributeUtils_eventHasAttribute_Parms), Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_HasAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_HasAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics
	{
		struct AttributeUtils_eventHasAttributesComponent_Parms
		{
			const UObject* Target;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventHasAttributesComponent_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::NewProp_Target_MetaData)) };
	void Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeUtils_eventHasAttributesComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributeUtils_eventHasAttributesComponent_Parms), &Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "HasAttributesComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::AttributeUtils_eventHasAttributesComponent_Parms), Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics
	{
		struct AttributeUtils_eventSetAttributeValue_Parms
		{
			FAttributeHandle AttributeHandle;
			float NewValue;
			FEffectModContext OptionalModificationContext;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalModificationContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalModificationContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::NewProp_AttributeHandle = { "AttributeHandle", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventSetAttributeValue_Parms, AttributeHandle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventSetAttributeValue_Parms, NewValue), METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::NewProp_NewValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::NewProp_OptionalModificationContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::NewProp_OptionalModificationContext = { "OptionalModificationContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventSetAttributeValue_Parms, OptionalModificationContext), Z_Construct_UScriptStruct_FEffectModContext, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::NewProp_OptionalModificationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::NewProp_OptionalModificationContext_MetaData)) }; // 3878031127
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::NewProp_AttributeHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::NewProp_OptionalModificationContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OptionalModificationContext" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Manually sets the value of the attribute. Not recommended for complex calculations. Use Attribute System for complex calculations\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Manually sets the value of the attribute. Not recommended for complex calculations. Use Attribute System for complex calculations" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "SetAttributeValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::AttributeUtils_eventSetAttributeValue_Parms), Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_SetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_SetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics
	{
		struct AttributeUtils_eventUnbindAllAttributeChanged_Parms
		{
			UObject* Target;
			FAttribute Attribute;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventUnbindAllAttributeChanged_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventUnbindAllAttributeChanged_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(nullptr, 0) }; // 3121471449
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "DefaultToSelf", "Target" },
		{ "DisplayName", "Unbind All Attribute Changed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "UnbindAllAttributeChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics::AttributeUtils_eventUnbindAllAttributeChanged_Parms), Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics
	{
		struct AttributeUtils_eventUnbindAllAttributeChangedFromHandle_Parms
		{
			UObject* Target;
			FAttributeHandle Handle;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventUnbindAllAttributeChangedFromHandle_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeUtils_eventUnbindAllAttributeChangedFromHandle_Parms, Handle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "DefualtToSelf", "Target" },
		{ "DisplayName", "Unbind All Attribute Changed (from handle)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeUtils, nullptr, "UnbindAllAttributeChangedFromHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics::AttributeUtils_eventUnbindAllAttributeChangedFromHandle_Parms), Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeUtils);
	UClass* Z_Construct_UClass_UAttributeUtils_NoRegister()
	{
		return UAttributeUtils::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeUtils_AttributeHandleEquals, "AttributeHandleEquals" }, // 2315473319
		{ &Z_Construct_UFunction_UAttributeUtils_AttributeHandleEqualsNOT, "AttributeHandleEqualsNOT" }, // 2160161741
		{ &Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttribute, "BindAttributeChangedFromAttribute" }, // 3071202528
		{ &Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromAttributeByName, "BindAttributeChangedFromAttributeByName" }, // 2502357778
		{ &Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandle, "BindAttributeChangedFromHandle" }, // 977485851
		{ &Z_Construct_UFunction_UAttributeUtils_BindAttributeChangedFromHandleByName, "BindAttributeChangedFromHandleByName" }, // 3874328347
		{ &Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeComponentAs, "BP_GetAttributeComponentAs" }, // 3052049304
		{ &Z_Construct_UFunction_UAttributeUtils_BP_GetAttributeHandle, "BP_GetAttributeHandle" }, // 3298545948
		{ &Z_Construct_UFunction_UAttributeUtils_BP_GetAttributesComponent, "BP_GetAttributesComponent" }, // 551704239
		{ &Z_Construct_UFunction_UAttributeUtils_BP_TryApplyEffectToTarget, "BP_TryApplyEffectToTarget" }, // 2449862949
		{ &Z_Construct_UFunction_UAttributeUtils_BP_TryApplyInstantNumericEffectToTarget, "BP_TryApplyInstantNumericEffectToTarget" }, // 3647092011
		{ &Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToAttribute, "Conv_AttributeHandleToAttribute" }, // 619971413
		{ &Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToName, "Conv_AttributeHandleToName" }, // 3935383721
		{ &Z_Construct_UFunction_UAttributeUtils_Conv_AttributeHandleToString, "Conv_AttributeHandleToString" }, // 3960148474
		{ &Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToAttributeHandle, "Conv_AttributeToAttributeHandle" }, // 3038704463
		{ &Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToName, "Conv_AttributeToName" }, // 1556254760
		{ &Z_Construct_UFunction_UAttributeUtils_Conv_AttributeToString, "Conv_AttributeToString" }, // 517869361
		{ &Z_Construct_UFunction_UAttributeUtils_GetAttribute, "GetAttribute" }, // 1078434344
		{ &Z_Construct_UFunction_UAttributeUtils_GetAttributeHandleFromAttribute, "GetAttributeHandleFromAttribute" }, // 3416482557
		{ &Z_Construct_UFunction_UAttributeUtils_GetAttributeName, "GetAttributeName" }, // 2089717181
		{ &Z_Construct_UFunction_UAttributeUtils_GetAttributeValue, "GetAttributeValue" }, // 1925879194
		{ &Z_Construct_UFunction_UAttributeUtils_GetOwner, "GetOwner" }, // 3662534086
		{ &Z_Construct_UFunction_UAttributeUtils_HasAttribute, "HasAttribute" }, // 3572121610
		{ &Z_Construct_UFunction_UAttributeUtils_HasAttributesComponent, "HasAttributesComponent" }, // 456525012
		{ &Z_Construct_UFunction_UAttributeUtils_SetAttributeValue, "SetAttributeValue" }, // 3471111021
		{ &Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChanged, "UnbindAllAttributeChanged" }, // 1382479062
		{ &Z_Construct_UFunction_UAttributeUtils_UnbindAllAttributeChangedFromHandle, "UnbindAllAttributeChangedFromHandle" }, // 2678879648
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeUtils_Statics::ClassParams = {
		&UAttributeUtils::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeUtils()
	{
		if (!Z_Registration_Info_UClass_UAttributeUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeUtils.OuterSingleton, Z_Construct_UClass_UAttributeUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeUtils.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UAttributeUtils>()
	{
		return UAttributeUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeUtils);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EValidity_StaticEnum, TEXT("EValidity"), &Z_Registration_Info_UEnum_EValidity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 624064621U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeUtils, UAttributeUtils::StaticClass, TEXT("UAttributeUtils"), &Z_Registration_Info_UClass_UAttributeUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeUtils), 2655957671U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_1768602166(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
