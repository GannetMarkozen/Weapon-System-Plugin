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
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeFunctionLibrary_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeHandle();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttribute();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
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
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execUnbindAllAttributeChangedFromHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeFunctionLibrary::UnbindAllAttributeChangedFromHandle(Z_Param_Target,Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execUnbindAllAttributeChanged)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeFunctionLibrary::UnbindAllAttributeChanged(Z_Param_Target,Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execBindAttributeChangedFromHandleByName)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Handle);
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeFunctionLibrary::BindAttributeChangedFromHandleByName(Z_Param_Out_Handle,Z_Param_Target,Z_Param_Out_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execBindAttributeChangedFromAttributeByName)
	{
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeFunctionLibrary::BindAttributeChangedFromAttributeByName(Z_Param_Out_Attribute,Z_Param_Target,Z_Param_Out_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execBindAttributeChangedFromHandle)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Handle);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeFunctionLibrary::BindAttributeChangedFromHandle(Z_Param_Out_Handle,FAttributeValueChangedUniDelegate(Z_Param_Out_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execBindAttributeChangedFromAttribute)
	{
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeFunctionLibrary::BindAttributeChangedFromAttribute(Z_Param_Out_Attribute,FAttributeValueChangedUniDelegate(Z_Param_Out_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execGetAttribute)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_AttributeHandle);
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_OutAttribute);
		P_GET_ENUM_REF(EValidity,Z_Param_Out_OutPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAttributeFunctionLibrary::GetAttribute(Z_Param_Out_AttributeHandle,Z_Param_Out_OutAttribute,(EValidity&)(Z_Param_Out_OutPin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execGetAttributeName)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_AttributeHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAttributeFunctionLibrary::GetAttributeName(Z_Param_Out_AttributeHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execGetAttributeValue)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_AttributeHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAttributeFunctionLibrary::GetAttributeValue(Z_Param_Out_AttributeHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execGetAttributeHandleFromAttribute)
	{
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttributeHandle*)Z_Param__Result=UAttributeFunctionLibrary::GetAttributeHandleFromAttribute(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execAttributeHandleEqualsNOT)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_A);
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAttributeFunctionLibrary::AttributeHandleEqualsNOT(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execAttributeHandleEquals)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_A);
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAttributeFunctionLibrary::AttributeHandleEquals(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execConv_AttributeHandleToName)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAttributeFunctionLibrary::Conv_AttributeHandleToName(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execConv_AttributeHandleToString)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAttributeFunctionLibrary::Conv_AttributeHandleToString(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execConv_AttributeToName)
	{
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAttributeFunctionLibrary::Conv_AttributeToName(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execConv_AttributeToString)
	{
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAttributeFunctionLibrary::Conv_AttributeToString(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execConv_AttributeHandleToAttribute)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_AttributeHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttribute*)Z_Param__Result=UAttributeFunctionLibrary::Conv_AttributeHandleToAttribute(Z_Param_Out_AttributeHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeFunctionLibrary::execConv_AttributeToAttributeHandle)
	{
		P_GET_STRUCT_REF(FAttribute,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttributeHandle*)Z_Param__Result=UAttributeFunctionLibrary::Conv_AttributeToAttributeHandle(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	void UAttributeFunctionLibrary::StaticRegisterNativesUAttributeFunctionLibrary()
	{
		UClass* Class = UAttributeFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttributeHandleEquals", &UAttributeFunctionLibrary::execAttributeHandleEquals },
			{ "AttributeHandleEqualsNOT", &UAttributeFunctionLibrary::execAttributeHandleEqualsNOT },
			{ "BindAttributeChangedFromAttribute", &UAttributeFunctionLibrary::execBindAttributeChangedFromAttribute },
			{ "BindAttributeChangedFromAttributeByName", &UAttributeFunctionLibrary::execBindAttributeChangedFromAttributeByName },
			{ "BindAttributeChangedFromHandle", &UAttributeFunctionLibrary::execBindAttributeChangedFromHandle },
			{ "BindAttributeChangedFromHandleByName", &UAttributeFunctionLibrary::execBindAttributeChangedFromHandleByName },
			{ "Conv_AttributeHandleToAttribute", &UAttributeFunctionLibrary::execConv_AttributeHandleToAttribute },
			{ "Conv_AttributeHandleToName", &UAttributeFunctionLibrary::execConv_AttributeHandleToName },
			{ "Conv_AttributeHandleToString", &UAttributeFunctionLibrary::execConv_AttributeHandleToString },
			{ "Conv_AttributeToAttributeHandle", &UAttributeFunctionLibrary::execConv_AttributeToAttributeHandle },
			{ "Conv_AttributeToName", &UAttributeFunctionLibrary::execConv_AttributeToName },
			{ "Conv_AttributeToString", &UAttributeFunctionLibrary::execConv_AttributeToString },
			{ "GetAttribute", &UAttributeFunctionLibrary::execGetAttribute },
			{ "GetAttributeHandleFromAttribute", &UAttributeFunctionLibrary::execGetAttributeHandleFromAttribute },
			{ "GetAttributeName", &UAttributeFunctionLibrary::execGetAttributeName },
			{ "GetAttributeValue", &UAttributeFunctionLibrary::execGetAttributeValue },
			{ "UnbindAllAttributeChanged", &UAttributeFunctionLibrary::execUnbindAllAttributeChanged },
			{ "UnbindAllAttributeChangedFromHandle", &UAttributeFunctionLibrary::execUnbindAllAttributeChangedFromHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics
	{
		struct AttributeFunctionLibrary_eventAttributeHandleEquals_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventAttributeHandleEquals_Parms, A), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_A_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventAttributeHandleEquals_Parms, B), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_B_MetaData)) }; // 4070662230
	void Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeFunctionLibrary_eventAttributeHandleEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributeFunctionLibrary_eventAttributeHandleEquals_Parms), &Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "==" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "AttributeHandleEquals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::AttributeFunctionLibrary_eventAttributeHandleEquals_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics
	{
		struct AttributeFunctionLibrary_eventAttributeHandleEqualsNOT_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventAttributeHandleEqualsNOT_Parms, A), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_A_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventAttributeHandleEqualsNOT_Parms, B), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_B_MetaData)) }; // 4070662230
	void Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributeFunctionLibrary_eventAttributeHandleEqualsNOT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributeFunctionLibrary_eventAttributeHandleEqualsNOT_Parms), &Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Attribute Handle Equals NOT" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "AttributeHandleEqualsNOT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::AttributeFunctionLibrary_eventAttributeHandleEqualsNOT_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics
	{
		struct AttributeFunctionLibrary_eventBindAttributeChangedFromAttribute_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventBindAttributeChangedFromAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(nullptr, 0) }; // 1994685381
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventBindAttributeChangedFromAttribute_Parms, Delegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::NewProp_Delegate_MetaData)) }; // 951474152
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Binds an event for whenever the attribute's value changes\n" },
		{ "DisplayName", "Bind Attribute Changed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Binds an event for whenever the attribute's value changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "BindAttributeChangedFromAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::AttributeFunctionLibrary_eventBindAttributeChangedFromAttribute_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics
	{
		struct AttributeFunctionLibrary_eventBindAttributeChangedFromAttributeByName_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventBindAttributeChangedFromAttributeByName_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(nullptr, 0) }; // 1994685381
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventBindAttributeChangedFromAttributeByName_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventBindAttributeChangedFromAttributeByName_Parms, FunctionName), METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::NewProp_FunctionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::NewProp_FunctionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FunctionName" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "DefaultToSelf", "Target" },
		{ "DisplayName", "Bind Attribute Changed By Name" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "BindAttributeChangedFromAttributeByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::AttributeFunctionLibrary_eventBindAttributeChangedFromAttributeByName_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics
	{
		struct AttributeFunctionLibrary_eventBindAttributeChangedFromHandle_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventBindAttributeChangedFromHandle_Parms, Handle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventBindAttributeChangedFromHandle_Parms, Delegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::NewProp_Delegate_MetaData)) }; // 951474152
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Binds an event for whenever the attribute's value changes. From an attribute handle. Only binds if the handle is valid\n" },
		{ "DisplayName", "Bind Attribute Changed (from handle)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Binds an event for whenever the attribute's value changes. From an attribute handle. Only binds if the handle is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "BindAttributeChangedFromHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::AttributeFunctionLibrary_eventBindAttributeChangedFromHandle_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics
	{
		struct AttributeFunctionLibrary_eventBindAttributeChangedFromHandleByName_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventBindAttributeChangedFromHandleByName_Parms, Handle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventBindAttributeChangedFromHandleByName_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventBindAttributeChangedFromHandleByName_Parms, FunctionName), METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::NewProp_FunctionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::NewProp_FunctionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FunctionName" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "DefaultToSelf", "Target" },
		{ "DisplayName", "Bind Attribute Changed By Name (from handle)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "BindAttributeChangedFromHandleByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::AttributeFunctionLibrary_eventBindAttributeChangedFromHandleByName_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics
	{
		struct AttributeFunctionLibrary_eventConv_AttributeHandleToAttribute_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::NewProp_AttributeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::NewProp_AttributeHandle = { "AttributeHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventConv_AttributeHandleToAttribute_Parms, AttributeHandle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::NewProp_AttributeHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::NewProp_AttributeHandle_MetaData)) }; // 4070662230
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventConv_AttributeHandleToAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(nullptr, 0) }; // 1994685381
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::NewProp_AttributeHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Warning: Copies attribute. Not direct reference\n" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Convert Attribute Handle to Attribute" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Warning: Copies attribute. Not direct reference" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "Conv_AttributeHandleToAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::AttributeFunctionLibrary_eventConv_AttributeHandleToAttribute_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics
	{
		struct AttributeFunctionLibrary_eventConv_AttributeHandleToName_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventConv_AttributeHandleToName_Parms, Handle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::NewProp_Handle_MetaData)) }; // 4070662230
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventConv_AttributeHandleToName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Convert Attribute Handle to Name" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "Conv_AttributeHandleToName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::AttributeFunctionLibrary_eventConv_AttributeHandleToName_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics
	{
		struct AttributeFunctionLibrary_eventConv_AttributeHandleToString_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventConv_AttributeHandleToString_Parms, Handle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::NewProp_Handle_MetaData)) }; // 4070662230
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventConv_AttributeHandleToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Convert Attribute Handle to String" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "Conv_AttributeHandleToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::AttributeFunctionLibrary_eventConv_AttributeHandleToString_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics
	{
		struct AttributeFunctionLibrary_eventConv_AttributeToAttributeHandle_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventConv_AttributeToAttributeHandle_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::NewProp_Attribute_MetaData)) }; // 1994685381
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventConv_AttributeToAttributeHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Convert Attribute to Attribute Handle" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "Conv_AttributeToAttributeHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::AttributeFunctionLibrary_eventConv_AttributeToAttributeHandle_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics
	{
		struct AttributeFunctionLibrary_eventConv_AttributeToName_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventConv_AttributeToName_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::NewProp_Attribute_MetaData)) }; // 1994685381
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventConv_AttributeToName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Convert Attribute to Name" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "Conv_AttributeToName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::AttributeFunctionLibrary_eventConv_AttributeToName_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics
	{
		struct AttributeFunctionLibrary_eventConv_AttributeToString_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventConv_AttributeToString_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::NewProp_Attribute_MetaData)) }; // 1994685381
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventConv_AttributeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Convert Attribute to String" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "Conv_AttributeToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::AttributeFunctionLibrary_eventConv_AttributeToString_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics
	{
		struct AttributeFunctionLibrary_eventGetAttribute_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::NewProp_AttributeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::NewProp_AttributeHandle = { "AttributeHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventGetAttribute_Parms, AttributeHandle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::NewProp_AttributeHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::NewProp_AttributeHandle_MetaData)) }; // 4070662230
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::NewProp_OutAttribute = { "OutAttribute", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventGetAttribute_Parms, OutAttribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(nullptr, 0) }; // 1994685381
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventGetAttribute_Parms, OutPin), Z_Construct_UEnum_WeaponSystemPlugin_EValidity, METADATA_PARAMS(nullptr, 0) }; // 624064621
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::NewProp_AttributeHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::NewProp_OutAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Gets a copy of the attribute (not sure why this would be useful)\n" },
		{ "DisplayName", "Get Attribute (a copy)" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of the attribute (not sure why this would be useful)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "GetAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::AttributeFunctionLibrary_eventGetAttribute_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics
	{
		struct AttributeFunctionLibrary_eventGetAttributeHandleFromAttribute_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventGetAttributeHandleFromAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(nullptr, 0) }; // 1994685381
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventGetAttributeHandleFromAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Get Attribute Handle From Attribute" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "GetAttributeHandleFromAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics::AttributeFunctionLibrary_eventGetAttributeHandleFromAttribute_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics
	{
		struct AttributeFunctionLibrary_eventGetAttributeName_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::NewProp_AttributeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::NewProp_AttributeHandle = { "AttributeHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventGetAttributeName_Parms, AttributeHandle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::NewProp_AttributeHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::NewProp_AttributeHandle_MetaData)) }; // 4070662230
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventGetAttributeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::NewProp_AttributeHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Gets the name of the attribute being referenced. None if invalid\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Gets the name of the attribute being referenced. None if invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "GetAttributeName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::AttributeFunctionLibrary_eventGetAttributeName_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics
	{
		struct AttributeFunctionLibrary_eventGetAttributeValue_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::NewProp_AttributeHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::NewProp_AttributeHandle = { "AttributeHandle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventGetAttributeValue_Parms, AttributeHandle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::NewProp_AttributeHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::NewProp_AttributeHandle_MetaData)) }; // 4070662230
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::NewProp_AttributeHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "Comment", "// Gets the value of the Attribute. 0 if invalid reference.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ToolTip", "Gets the value of the Attribute. 0 if invalid reference." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "GetAttributeValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::AttributeFunctionLibrary_eventGetAttributeValue_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics
	{
		struct AttributeFunctionLibrary_eventUnbindAllAttributeChanged_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventUnbindAllAttributeChanged_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventUnbindAllAttributeChanged_Parms, Attribute), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(nullptr, 0) }; // 1994685381
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "DefaultToSelf", "Target" },
		{ "DisplayName", "Unbind All Attribute Changed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "UnbindAllAttributeChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics::AttributeFunctionLibrary_eventUnbindAllAttributeChanged_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics
	{
		struct AttributeFunctionLibrary_eventUnbindAllAttributeChangedFromHandle_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventUnbindAllAttributeChangedFromHandle_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeFunctionLibrary_eventUnbindAllAttributeChangedFromHandle_Parms, Handle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Attributes" },
		{ "DefualtToSelf", "Target" },
		{ "DisplayName", "Unbind All Attribute Changed (from handle)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeFunctionLibrary, nullptr, "UnbindAllAttributeChangedFromHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics::AttributeFunctionLibrary_eventUnbindAllAttributeChangedFromHandle_Parms), Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeFunctionLibrary);
	UClass* Z_Construct_UClass_UAttributeFunctionLibrary_NoRegister()
	{
		return UAttributeFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEquals, "AttributeHandleEquals" }, // 3017513187
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_AttributeHandleEqualsNOT, "AttributeHandleEqualsNOT" }, // 3920257234
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttribute, "BindAttributeChangedFromAttribute" }, // 1420692709
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromAttributeByName, "BindAttributeChangedFromAttributeByName" }, // 1938478927
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandle, "BindAttributeChangedFromHandle" }, // 2474125395
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_BindAttributeChangedFromHandleByName, "BindAttributeChangedFromHandleByName" }, // 171107451
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToAttribute, "Conv_AttributeHandleToAttribute" }, // 1413479133
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToName, "Conv_AttributeHandleToName" }, // 3290126000
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeHandleToString, "Conv_AttributeHandleToString" }, // 2053745250
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToAttributeHandle, "Conv_AttributeToAttributeHandle" }, // 2176565132
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToName, "Conv_AttributeToName" }, // 2672997583
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_Conv_AttributeToString, "Conv_AttributeToString" }, // 3533203417
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttribute, "GetAttribute" }, // 1785255361
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeHandleFromAttribute, "GetAttributeHandleFromAttribute" }, // 742680234
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeName, "GetAttributeName" }, // 1952186450
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_GetAttributeValue, "GetAttributeValue" }, // 191700699
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChanged, "UnbindAllAttributeChanged" }, // 3822014280
		{ &Z_Construct_UFunction_UAttributeFunctionLibrary_UnbindAllAttributeChangedFromHandle, "UnbindAllAttributeChangedFromHandle" }, // 2014048475
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeFunctionLibrary_Statics::ClassParams = {
		&UAttributeFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAttributeFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UAttributeFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAttributeFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeFunctionLibrary.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UAttributeFunctionLibrary>()
	{
		return UAttributeFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EValidity_StaticEnum, TEXT("EValidity"), &Z_Registration_Info_UEnum_EValidity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 624064621U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeFunctionLibrary, UAttributeFunctionLibrary::StaticClass, TEXT("UAttributeFunctionLibrary"), &Z_Registration_Info_UClass_UAttributeFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeFunctionLibrary), 3259046133U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_3172185170(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
