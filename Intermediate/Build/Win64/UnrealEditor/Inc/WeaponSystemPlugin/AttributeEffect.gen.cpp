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
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeEffectBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeEffectBase();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UScriptBase();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeHandle();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesComponent_NoRegister();
	POLYSTRUCT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStructHandle();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectDuration;
	static UEnum* EEffectDuration_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectDuration.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectDuration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EEffectDuration"));
		}
		return Z_Registration_Info_UEnum_EEffectDuration.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectDuration>()
	{
		return EEffectDuration_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::Enumerators[] = {
		{ "EEffectDuration::Instant", (int64)EEffectDuration::Instant },
		{ "EEffectDuration::ForDuration", (int64)EEffectDuration::ForDuration },
		{ "EEffectDuration::Infinite", (int64)EEffectDuration::Infinite },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Effect Duration" },
		{ "ForDuration.DisplayName", "For-Duration" },
		{ "ForDuration.Name", "EEffectDuration::ForDuration" },
		{ "ForDuration.Tooltip", "This effect will run for it's duration unless manully ended" },
		{ "Infinite.DisplayName", "Infinite" },
		{ "Infinite.Name", "EEffectDuration::Infinite" },
		{ "Infinite.Tooltip", "This effect will run forever until manually ended" },
		{ "Instant.DisplayName", "Instant" },
		{ "Instant.Name", "EEffectDuration::Instant" },
		{ "Instant.Tooltip", "This effect will be instantaneous and have no duration. Will not be instanced" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		"EEffectDuration",
		"EEffectDuration",
		Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration()
	{
		if (!Z_Registration_Info_UEnum_EEffectDuration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectDuration.InnerSingleton, Z_Construct_UEnum_WeaponSystemPlugin_EEffectDuration_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectDuration.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectRepCond;
	static UEnum* EEffectRepCond_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectRepCond.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectRepCond.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EEffectRepCond"));
		}
		return Z_Registration_Info_UEnum_EEffectRepCond.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectRepCond>()
	{
		return EEffectRepCond_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::Enumerators[] = {
		{ "EEffectRepCond::ServerOnly", (int64)EEffectRepCond::ServerOnly },
		{ "EEffectRepCond::LocalOnly", (int64)EEffectRepCond::LocalOnly },
		{ "EEffectRepCond::LocalPredicted", (int64)EEffectRepCond::LocalPredicted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Effect Replication Condition" },
		{ "LocalOnly.DisplayName", "Local-Only" },
		{ "LocalOnly.Name", "EEffectRepCond::LocalOnly" },
		{ "LocalOnly.Tooltip", "This effect will run only locally where it's being called" },
		{ "LocalPredicted.DisplayName", "Local-Predicted" },
		{ "LocalPredicted.Name", "EEffectRepCond::LocalPredicted" },
		{ "LocalPredicted.Tooltip", "This effect will run locally and server-side and attempt to stay in sync (to minimize latency)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ServerOnly.DisplayName", "Server-Only" },
		{ "ServerOnly.Name", "EEffectRepCond::ServerOnly" },
		{ "ServerOnly.Tooltip", "This effect will run only on the server" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		"EEffectRepCond",
		"EEffectRepCond",
		Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond()
	{
		if (!Z_Registration_Info_UEnum_EEffectRepCond.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectRepCond.InnerSingleton, Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectRepCond.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectModType;
	static UEnum* EEffectModType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectModType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectModType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EEffectModType"));
		}
		return Z_Registration_Info_UEnum_EEffectModType.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EEffectModType>()
	{
		return EEffectModType_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::Enumerators[] = {
		{ "EEffectModType::Overriding", (int64)EEffectModType::Overriding },
		{ "EEffectModType::Additive", (int64)EEffectModType::Additive },
		{ "EEffectModType::Multiplicative", (int64)EEffectModType::Multiplicative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::Enum_MetaDataParams[] = {
		{ "Additive.DisplayName", "Additive" },
		{ "Additive.Name", "EEffectModType::Additive" },
		{ "Additive.Tooltip", "Adds to the current attribute value" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "Effect Modifier Type" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "Multiplicative.DisplayName", "Multiplicative" },
		{ "Multiplicative.Name", "EEffectModType::Multiplicative" },
		{ "Multiplicative.Tooltip", "Multiplies the current attribute value" },
		{ "Overriding.DisplayName", "Overriding" },
		{ "Overriding.Name", "EEffectModType::Overriding" },
		{ "Overriding.Tooltip", "Overrides current attribute value with the new one" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		"EEffectModType",
		"EEffectModType",
		Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType()
	{
		if (!Z_Registration_Info_UEnum_EEffectModType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectModType.InnerSingleton, Z_Construct_UEnum_WeaponSystemPlugin_EEffectModType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectModType.InnerSingleton;
	}
	DEFINE_FUNCTION(UAttributeEffectBase::execModifyAttribute)
	{
		P_GET_STRUCT_REF(FAttributeHandle,Z_Param_Out_Attribute);
		P_GET_OBJECT(UAttributesComponent,Z_Param_AttributesComponent);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ModifyAttribute_Implementation(Z_Param_Out_Attribute,Z_Param_AttributesComponent,Z_Param_Out_Context);
		P_NATIVE_END;
	}
	static FName NAME_UAttributeEffectBase_ModifyAttribute = FName(TEXT("ModifyAttribute"));
	float UAttributeEffectBase::ModifyAttribute(FAttributeHandle const& Attribute, const UAttributesComponent* AttributesComponent, FPolyStructHandle& Context)
	{
		AttributeEffectBase_eventModifyAttribute_Parms Parms;
		Parms.Attribute=Attribute;
		Parms.AttributesComponent=AttributesComponent;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UAttributeEffectBase_ModifyAttribute),&Parms);
		Context=Parms.Context;
		return Parms.ReturnValue;
	}
	void UAttributeEffectBase::StaticRegisterNativesUAttributeEffectBase()
	{
		UClass* Class = UAttributeEffectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyAttribute", &UAttributeEffectBase::execModifyAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectBase_eventModifyAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_Attribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_AttributesComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_AttributesComponent = { "AttributesComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectBase_eventModifyAttribute_Parms, AttributesComponent), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_AttributesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_AttributesComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectBase_eventModifyAttribute_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2436832372
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributeEffectBase_eventModifyAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_AttributesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "Comment", "// Called everytime an attribute is to be modified.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ToolTip", "Called everytime an attribute is to be modified." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEffectBase, nullptr, "ModifyAttribute", nullptr, nullptr, sizeof(AttributeEffectBase_eventModifyAttribute_Parms), Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeEffectBase);
	UClass* Z_Construct_UClass_UAttributeEffectBase_NoRegister()
	{
		return UAttributeEffectBase::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeEffectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EffectRepCond_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectRepCond_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectRepCond;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEffectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeEffectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeEffectBase_ModifyAttribute, "ModifyAttribute" }, // 172210366
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffectBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponSystem/AttributeSystem/AttributeEffect.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttributeEffectBase_Statics::NewProp_EffectRepCond_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEffectBase_Statics::NewProp_EffectRepCond_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Effect" },
		{ "DisplayName", "Effect Replication Condition" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributeEffect.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttributeEffectBase_Statics::NewProp_EffectRepCond = { "EffectRepCond", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeEffectBase, EffectRepCond), Z_Construct_UEnum_WeaponSystemPlugin_EEffectRepCond, METADATA_PARAMS(Z_Construct_UClass_UAttributeEffectBase_Statics::NewProp_EffectRepCond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffectBase_Statics::NewProp_EffectRepCond_MetaData)) }; // 4250533942
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeEffectBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffectBase_Statics::NewProp_EffectRepCond_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEffectBase_Statics::NewProp_EffectRepCond,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeEffectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeEffectBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeEffectBase_Statics::ClassParams = {
		&UAttributeEffectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeEffectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffectBase_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeEffectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEffectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeEffectBase()
	{
		if (!Z_Registration_Info_UClass_UAttributeEffectBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeEffectBase.OuterSingleton, Z_Construct_UClass_UAttributeEffectBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeEffectBase.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UAttributeEffectBase>()
	{
		return UAttributeEffectBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeEffectBase);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::EnumInfo[] = {
		{ EEffectDuration_StaticEnum, TEXT("EEffectDuration"), &Z_Registration_Info_UEnum_EEffectDuration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1837612593U) },
		{ EEffectRepCond_StaticEnum, TEXT("EEffectRepCond"), &Z_Registration_Info_UEnum_EEffectRepCond, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4250533942U) },
		{ EEffectModType_StaticEnum, TEXT("EEffectModType"), &Z_Registration_Info_UEnum_EEffectModType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2443595428U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeEffectBase, UAttributeEffectBase::StaticClass, TEXT("UAttributeEffectBase"), &Z_Registration_Info_UClass_UAttributeEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEffectBase), 1230781611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_1917385262(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributeEffect_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
