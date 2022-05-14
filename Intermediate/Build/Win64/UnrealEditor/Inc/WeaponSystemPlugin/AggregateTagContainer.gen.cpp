// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAggregateTagContainer() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAggregateGameplayTagValue();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAggregateGameplayTagContainer();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAggregateGameplayTagContainerUtils_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAggregateGameplayTagContainerUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AggregateGameplayTagValue;
class UScriptStruct* FAggregateGameplayTagValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AggregateGameplayTagValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AggregateGameplayTagValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAggregateGameplayTagValue, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("AggregateGameplayTagValue"));
	}
	return Z_Registration_Info_UScriptStruct_AggregateGameplayTagValue.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAggregateGameplayTagValue>()
{
	return FAggregateGameplayTagValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAggregateGameplayTagValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "AggregateGameplayTagValue" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregateGameplayTagValue, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "AggregateGameplayTagValue" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregateGameplayTagValue, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::NewProp_Count,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"AggregateGameplayTagValue",
		sizeof(FAggregateGameplayTagValue),
		alignof(FAggregateGameplayTagValue),
		Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAggregateGameplayTagValue()
	{
		if (!Z_Registration_Info_UScriptStruct_AggregateGameplayTagValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AggregateGameplayTagValue.InnerSingleton, Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AggregateGameplayTagValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AggregateGameplayTagContainer;
class UScriptStruct* FAggregateGameplayTagContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AggregateGameplayTagContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AggregateGameplayTagContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("AggregateGameplayTagContainer"));
	}
	return Z_Registration_Info_UScriptStruct_AggregateGameplayTagContainer.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAggregateGameplayTagContainer>()
{
	return FAggregateGameplayTagContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagCount_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagCount_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TagCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AggregateTagCount_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggregateTagCount_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AggregateTagCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n *\x09""A gameplay tag container with an associated tag count. Adding tags will add to the tag count within the container.\n *\x09There is an \"exact tag count\" and an \"aggregate tag count\". The exact tag count refers to the actual number of an\n *\x09""exact tag within the container whereas the aggregate tag count refers to the overall count of exact tags and\n *\x09""derived tags within the container. Like if there was 1 Item.Key and 1 Item.SoupCan, the aggregate tag count for\n *\x09Item would be 2, whereas the exact tag count would be 0 because there are no tags explicitly named Item. But there\n *\x09would be 1 exact tag for either Item.Key or Item.SoupCan. Comes built-in with a delegate for broadcasting specific\n *\x09tag-count changes. Net Serializable.\n */" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ShortTooltip", "Gameplay tag container with a count associated with each gameplay tag" },
		{ "ToolTip", "*     A gameplay tag container with an associated tag count. Adding tags will add to the tag count within the container.\n*     There is an \"exact tag count\" and an \"aggregate tag count\". The exact tag count refers to the actual number of an\n*     exact tag within the container whereas the aggregate tag count refers to the overall count of exact tags and\n*     derived tags within the container. Like if there was 1 Item.Key and 1 Item.SoupCan, the aggregate tag count for\n*     Item would be 2, whereas the exact tag count would be 0 because there are no tags explicitly named Item. But there\n*     would be 1 exact tag for either Item.Key or Item.SoupCan. Comes built-in with a delegate for broadcasting specific\n*     tag-count changes. Net Serializable." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAggregateGameplayTagContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_TagCount_Inner = { "TagCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateGameplayTagValue, METADATA_PARAMS(nullptr, 0) }; // 1448319351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_TagCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AggregateGameplayTagContainer" },
		{ "Comment", "// Exact gameplay tags with a count. Aggregated\n// counts are cached for quick searches\n" },
		{ "DisplayName", "Gameplay Tag Count" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Exact gameplay tags with a count. Aggregated\ncounts are cached for quick searches" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_TagCount = { "TagCount", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregateGameplayTagContainer, TagCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_TagCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_TagCount_MetaData)) }; // 1448319351
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_AggregateTagCount_Inner = { "AggregateTagCount", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateGameplayTagValue, METADATA_PARAMS(nullptr, 0) }; // 1448319351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_AggregateTagCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AggregateGameplayTagContainer" },
		{ "Comment", "// All exact and parent tags with aggregated tag counts.\n// Cached for increased search speed. Not editable\n" },
		{ "DisplayName", "Aggregate Gameplay Tag Count" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "All exact and parent tags with aggregated tag counts.\nCached for increased search speed. Not editable" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_AggregateTagCount = { "AggregateTagCount", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregateGameplayTagContainer, AggregateTagCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_AggregateTagCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_AggregateTagCount_MetaData)) }; // 1448319351
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_TagCount_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_TagCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_AggregateTagCount_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewProp_AggregateTagCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"AggregateGameplayTagContainer",
		sizeof(FAggregateGameplayTagContainer),
		alignof(FAggregateGameplayTagContainer),
		Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAggregateGameplayTagContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_AggregateGameplayTagContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AggregateGameplayTagContainer.InnerSingleton, Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AggregateGameplayTagContainer.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_WeaponSystemPlugin_eventAggregateDynamicDelegate_Parms
		{
			FAggregateGameplayTagContainer Container;
			FGameplayTag Tag;
			int32 CurrentCount;
			int32 OldCount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAggregateDynamicDelegate_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_Container_MetaData)) }; // 3960791148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAggregateDynamicDelegate_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_Tag_MetaData)) }; // 802167388
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_CurrentCount = { "CurrentCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAggregateDynamicDelegate_Parms, CurrentCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAggregateDynamicDelegate_Parms, OldCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_CurrentCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::NewProp_OldCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin, nullptr, "AggregateDynamicDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::_Script_WeaponSystemPlugin_eventAggregateDynamicDelegate_Parms), Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execGetAggregateTagValues)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_TARRAY_REF(FAggregateGameplayTagValue,Z_Param_Out_OutValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::GetAggregateTagValues(Z_Param_Out_Container,Z_Param_Out_OutValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execGetExactTagValues)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_TARRAY_REF(FAggregateGameplayTagValue,Z_Param_Out_OutValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::GetExactTagValues(Z_Param_Out_Container,Z_Param_Out_OutValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execGetTagCountExact)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAggregateGameplayTagContainerUtils::GetTagCountExact(Z_Param_Out_Container,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execGetTagCount)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAggregateGameplayTagContainerUtils::GetTagCount(Z_Param_Out_Container,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execUnbind)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::Unbind(Z_Param_Out_Container,Z_Param_Out_Tag,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execUnbindAll)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::UnbindAll(Z_Param_Out_Container,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execBindTagCountChanged)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::BindTagCountChanged(Z_Param_Out_Container,Z_Param_Out_Tag,FAggregateDynamicDelegate(Z_Param_Out_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execEmpty)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::Empty(Z_Param_Out_Container);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execRemoveTagsExactAll)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::RemoveTagsExactAll(Z_Param_Out_Container,Z_Param_Out_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execRemoveTagsAll)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::RemoveTagsAll(Z_Param_Out_Container,Z_Param_Out_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execRemoveTagExactAll)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::RemoveTagExactAll(Z_Param_Out_Container,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execRemoveTagAll)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::RemoveTagAll(Z_Param_Out_Container,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execRemoveTagsExact)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_TARRAY_REF(FAggregateGameplayTagValue,Z_Param_Out_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::RemoveTagsExact(Z_Param_Out_Container,Z_Param_Out_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execRemoveTagExact)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::RemoveTagExact(Z_Param_Out_Container,Z_Param_Out_Tag,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execRemoveTag)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::RemoveTag(Z_Param_Out_Container,Z_Param_Out_Tag,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execAppendTags)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_TARRAY_REF(FAggregateGameplayTagValue,Z_Param_Out_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::AppendTags(Z_Param_Out_Container,Z_Param_Out_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execAddTag)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::AddTag(Z_Param_Out_Container,Z_Param_Out_Tag,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execMakeAggregateGameplayTagContainer)
	{
		P_GET_TARRAY_REF(FAggregateGameplayTagValue,Z_Param_Out_Values);
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_OutContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateGameplayTagContainerUtils::MakeAggregateGameplayTagContainer(Z_Param_Out_Values,Z_Param_Out_OutContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execConv_AggregateGameplayTagContainerToGameplayTagContainer)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=UAggregateGameplayTagContainerUtils::Conv_AggregateGameplayTagContainerToGameplayTagContainer(Z_Param_Out_Container);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execGetAggregateTagCountDebugString)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAggregateGameplayTagContainerUtils::GetAggregateTagCountDebugString(Z_Param_Out_Container);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateGameplayTagContainerUtils::execConv_AggregateGameplayTagContainerToString)
	{
		P_GET_STRUCT_REF(FAggregateGameplayTagContainer,Z_Param_Out_Container);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAggregateGameplayTagContainerUtils::Conv_AggregateGameplayTagContainerToString(Z_Param_Out_Container);
		P_NATIVE_END;
	}
	void UAggregateGameplayTagContainerUtils::StaticRegisterNativesUAggregateGameplayTagContainerUtils()
	{
		UClass* Class = UAggregateGameplayTagContainerUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTag", &UAggregateGameplayTagContainerUtils::execAddTag },
			{ "AppendTags", &UAggregateGameplayTagContainerUtils::execAppendTags },
			{ "BindTagCountChanged", &UAggregateGameplayTagContainerUtils::execBindTagCountChanged },
			{ "Conv_AggregateGameplayTagContainerToGameplayTagContainer", &UAggregateGameplayTagContainerUtils::execConv_AggregateGameplayTagContainerToGameplayTagContainer },
			{ "Conv_AggregateGameplayTagContainerToString", &UAggregateGameplayTagContainerUtils::execConv_AggregateGameplayTagContainerToString },
			{ "Empty", &UAggregateGameplayTagContainerUtils::execEmpty },
			{ "GetAggregateTagCountDebugString", &UAggregateGameplayTagContainerUtils::execGetAggregateTagCountDebugString },
			{ "GetAggregateTagValues", &UAggregateGameplayTagContainerUtils::execGetAggregateTagValues },
			{ "GetExactTagValues", &UAggregateGameplayTagContainerUtils::execGetExactTagValues },
			{ "GetTagCount", &UAggregateGameplayTagContainerUtils::execGetTagCount },
			{ "GetTagCountExact", &UAggregateGameplayTagContainerUtils::execGetTagCountExact },
			{ "MakeAggregateGameplayTagContainer", &UAggregateGameplayTagContainerUtils::execMakeAggregateGameplayTagContainer },
			{ "RemoveTag", &UAggregateGameplayTagContainerUtils::execRemoveTag },
			{ "RemoveTagAll", &UAggregateGameplayTagContainerUtils::execRemoveTagAll },
			{ "RemoveTagExact", &UAggregateGameplayTagContainerUtils::execRemoveTagExact },
			{ "RemoveTagExactAll", &UAggregateGameplayTagContainerUtils::execRemoveTagExactAll },
			{ "RemoveTagsAll", &UAggregateGameplayTagContainerUtils::execRemoveTagsAll },
			{ "RemoveTagsExact", &UAggregateGameplayTagContainerUtils::execRemoveTagsExact },
			{ "RemoveTagsExactAll", &UAggregateGameplayTagContainerUtils::execRemoveTagsExactAll },
			{ "Unbind", &UAggregateGameplayTagContainerUtils::execUnbind },
			{ "UnbindAll", &UAggregateGameplayTagContainerUtils::execUnbindAll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventAddTag_Parms
		{
			FAggregateGameplayTagContainer Container;
			FGameplayTag Tag;
			int32 Count;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventAddTag_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3960791148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventAddTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventAddTag_Parms, Count), METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Adds a specific tag to the container by the count amount\n" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Adds a specific tag to the container by the count amount" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "AddTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::AggregateGameplayTagContainerUtils_eventAddTag_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventAppendTags_Parms
		{
			FAggregateGameplayTagContainer Container;
			TArray<FAggregateGameplayTagValue> Tags;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventAppendTags_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3960791148
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateGameplayTagValue, METADATA_PARAMS(nullptr, 0) }; // 1448319351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventAppendTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::NewProp_Tags_MetaData)) }; // 1448319351
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::NewProp_Tags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tags" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "AppendTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::AggregateGameplayTagContainerUtils_eventAppendTags_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventBindTagCountChanged_Parms
		{
			FAggregateGameplayTagContainer Container;
			FGameplayTag Tag;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventBindTagCountChanged_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Container_MetaData)) }; // 3960791148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventBindTagCountChanged_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventBindTagCountChanged_Parms, Delegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Delegate_MetaData)) }; // 13607744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Bind an event that's called whenever the tag count for the specified tag changes (aggregated from child tags, not exact)\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Bind an event that's called whenever the tag count for the specified tag changes (aggregated from child tags, not exact)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "BindTagCountChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::AggregateGameplayTagContainerUtils_eventBindTagCountChanged_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventConv_AggregateGameplayTagContainerToGameplayTagContainer_Parms
		{
			FAggregateGameplayTagContainer Container;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventConv_AggregateGameplayTagContainerToGameplayTagContainer_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::NewProp_Container_MetaData)) }; // 3960791148
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventConv_AggregateGameplayTagContainerToGameplayTagContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 506667518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Gameplay Tag Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "Conv_AggregateGameplayTagContainerToGameplayTagContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::AggregateGameplayTagContainerUtils_eventConv_AggregateGameplayTagContainerToGameplayTagContainer_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventConv_AggregateGameplayTagContainerToString_Parms
		{
			FAggregateGameplayTagContainer Container;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventConv_AggregateGameplayTagContainerToString_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::NewProp_Container_MetaData)) }; // 3960791148
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventConv_AggregateGameplayTagContainerToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Get a string of all the exact tag counts\n" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Debug String" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Get a string of all the exact tag counts" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "Conv_AggregateGameplayTagContainerToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::AggregateGameplayTagContainerUtils_eventConv_AggregateGameplayTagContainerToString_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventEmpty_Parms
		{
			FAggregateGameplayTagContainer Container;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventEmpty_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3960791148
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty_Statics::NewProp_Container,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Removes all tags from the container\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Removes all tags from the container" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "Empty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty_Statics::AggregateGameplayTagContainerUtils_eventEmpty_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventGetAggregateTagCountDebugString_Parms
		{
			FAggregateGameplayTagContainer Container;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventGetAggregateTagCountDebugString_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::NewProp_Container_MetaData)) }; // 3960791148
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventGetAggregateTagCountDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Get a string of all aggregated tag counts\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Get a string of all aggregated tag counts" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "GetAggregateTagCountDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::AggregateGameplayTagContainerUtils_eventGetAggregateTagCountDebugString_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventGetAggregateTagValues_Parms
		{
			FAggregateGameplayTagContainer Container;
			TArray<FAggregateGameplayTagValue> OutValues;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventGetAggregateTagValues_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::NewProp_Container_MetaData)) }; // 3960791148
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateGameplayTagValue, METADATA_PARAMS(nullptr, 0) }; // 1448319351
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventGetAggregateTagValues_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1448319351
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::NewProp_OutValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "GetAggregateTagValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::AggregateGameplayTagContainerUtils_eventGetAggregateTagValues_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventGetExactTagValues_Parms
		{
			FAggregateGameplayTagContainer Container;
			TArray<FAggregateGameplayTagValue> OutValues;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventGetExactTagValues_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::NewProp_Container_MetaData)) }; // 3960791148
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateGameplayTagValue, METADATA_PARAMS(nullptr, 0) }; // 1448319351
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventGetExactTagValues_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1448319351
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::NewProp_OutValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "GetExactTagValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::AggregateGameplayTagContainerUtils_eventGetExactTagValues_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventGetTagCount_Parms
		{
			FAggregateGameplayTagContainer Container;
			FGameplayTag Tag;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventGetTagCount_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::NewProp_Container_MetaData)) }; // 3960791148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventGetTagCount_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::NewProp_Tag_MetaData)) }; // 802167388
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventGetTagCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Get the number of tags derived from the tag parameter\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Get the number of tags derived from the tag parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "GetTagCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::AggregateGameplayTagContainerUtils_eventGetTagCount_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventGetTagCountExact_Parms
		{
			FAggregateGameplayTagContainer Container;
			FGameplayTag Tag;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventGetTagCountExact_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::NewProp_Container_MetaData)) }; // 3960791148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventGetTagCountExact_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::NewProp_Tag_MetaData)) }; // 802167388
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventGetTagCountExact_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Get the number of tags that exactly match the tag parameter\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Get the number of tags that exactly match the tag parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "GetTagCountExact", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::AggregateGameplayTagContainerUtils_eventGetTagCountExact_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventMakeAggregateGameplayTagContainer_Parms
		{
			TArray<FAggregateGameplayTagValue> Values;
			FAggregateGameplayTagContainer OutContainer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateGameplayTagValue, METADATA_PARAMS(nullptr, 0) }; // 1448319351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventMakeAggregateGameplayTagContainer_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::NewProp_Values_MetaData)) }; // 1448319351
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::NewProp_OutContainer = { "OutContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventMakeAggregateGameplayTagContainer_Parms, OutContainer), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3960791148
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::NewProp_OutContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "DisplayName", "Make AggregateGameplayTagContainer" },
		{ "Keywords", "aggregate,gameplay,tag,container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "MakeAggregateGameplayTagContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::AggregateGameplayTagContainerUtils_eventMakeAggregateGameplayTagContainer_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventRemoveTag_Parms
		{
			FAggregateGameplayTagContainer Container;
			FGameplayTag Tag;
			int32 Count;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTag_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3960791148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTag_Parms, Count), METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Removes all derived tags from the container by the count amount, if they exist. Remove Tag Exact is more useful in most cases\n" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Removes all derived tags from the container by the count amount, if they exist. Remove Tag Exact is more useful in most cases" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "RemoveTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::AggregateGameplayTagContainerUtils_eventRemoveTag_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventRemoveTagAll_Parms
		{
			FAggregateGameplayTagContainer Container;
			FGameplayTag Tag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTagAll_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3960791148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTagAll_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::NewProp_Tag_MetaData)) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Remove all of the specified tag and it's derived tags\n" },
		{ "DisplayName", "Remove Tag (all)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Remove all of the specified tag and it's derived tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "RemoveTagAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::AggregateGameplayTagContainerUtils_eventRemoveTagAll_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventRemoveTagExact_Parms
		{
			FAggregateGameplayTagContainer Container;
			FGameplayTag Tag;
			int32 Count;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTagExact_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3960791148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTagExact_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTagExact_Parms, Count), METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Removes a specific tag from the container by the count amount, if it exists\n" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Removes a specific tag from the container by the count amount, if it exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "RemoveTagExact", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::AggregateGameplayTagContainerUtils_eventRemoveTagExact_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventRemoveTagExactAll_Parms
		{
			FAggregateGameplayTagContainer Container;
			FGameplayTag Tag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTagExactAll_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3960791148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTagExactAll_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::NewProp_Tag_MetaData)) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Remove all of the specified tag\n" },
		{ "DisplayName", "Remove Tag Exact (all)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Remove all of the specified tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "RemoveTagExactAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::AggregateGameplayTagContainerUtils_eventRemoveTagExactAll_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventRemoveTagsAll_Parms
		{
			FAggregateGameplayTagContainer Container;
			FGameplayTagContainer Tags;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTagsAll_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3960791148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTagsAll_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::NewProp_Tags_MetaData)) }; // 506667518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::NewProp_Tags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tags" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Remove all of the specified tags and their derived tags\n" },
		{ "DisplayName", "Remove Tags (all)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Remove all of the specified tags and their derived tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "RemoveTagsAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::AggregateGameplayTagContainerUtils_eventRemoveTagsAll_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventRemoveTagsExact_Parms
		{
			FAggregateGameplayTagContainer Container;
			TArray<FAggregateGameplayTagValue> Tags;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTagsExact_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3960791148
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateGameplayTagValue, METADATA_PARAMS(nullptr, 0) }; // 1448319351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTagsExact_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::NewProp_Tags_MetaData)) }; // 1448319351
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::NewProp_Tags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tags" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Remove the specified number of exact tags\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Remove the specified number of exact tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "RemoveTagsExact", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::AggregateGameplayTagContainerUtils_eventRemoveTagsExact_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventRemoveTagsExactAll_Parms
		{
			FAggregateGameplayTagContainer Container;
			FGameplayTagContainer Tags;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTagsExactAll_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3960791148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventRemoveTagsExactAll_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::NewProp_Tags_MetaData)) }; // 506667518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::NewProp_Tags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tags" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "Comment", "// Remove all of the specified tags\n" },
		{ "DisplayName", "Remove Tags Exact (all)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "Remove all of the specified tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "RemoveTagsExactAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::AggregateGameplayTagContainerUtils_eventRemoveTagsExactAll_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventUnbind_Parms
		{
			FAggregateGameplayTagContainer Container;
			FGameplayTag Tag;
			const UObject* Target;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventUnbind_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Container_MetaData)) }; // 3960791148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventUnbind_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventUnbind_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "Unbind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::AggregateGameplayTagContainerUtils_eventUnbind_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics
	{
		struct AggregateGameplayTagContainerUtils_eventUnbindAll_Parms
		{
			FAggregateGameplayTagContainer Container;
			const UObject* Target;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventUnbindAll_Parms, Container), Z_Construct_UScriptStruct_FAggregateGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::NewProp_Container_MetaData)) }; // 3960791148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateGameplayTagContainerUtils_eventUnbindAll_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Aggregate Container" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateGameplayTagContainerUtils, nullptr, "UnbindAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::AggregateGameplayTagContainerUtils_eventUnbindAll_Parms), Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAggregateGameplayTagContainerUtils);
	UClass* Z_Construct_UClass_UAggregateGameplayTagContainerUtils_NoRegister()
	{
		return UAggregateGameplayTagContainerUtils::StaticClass();
	}
	struct Z_Construct_UClass_UAggregateGameplayTagContainerUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAggregateGameplayTagContainerUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAggregateGameplayTagContainerUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AddTag, "AddTag" }, // 2576802580
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_AppendTags, "AppendTags" }, // 1916813292
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_BindTagCountChanged, "BindTagCountChanged" }, // 342675204
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToGameplayTagContainer, "Conv_AggregateGameplayTagContainerToGameplayTagContainer" }, // 1619413436
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Conv_AggregateGameplayTagContainerToString, "Conv_AggregateGameplayTagContainerToString" }, // 2639649180
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Empty, "Empty" }, // 4087679595
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagCountDebugString, "GetAggregateTagCountDebugString" }, // 110175944
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetAggregateTagValues, "GetAggregateTagValues" }, // 4063437020
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetExactTagValues, "GetExactTagValues" }, // 3608119495
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCount, "GetTagCount" }, // 3118919839
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_GetTagCountExact, "GetTagCountExact" }, // 1628400250
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_MakeAggregateGameplayTagContainer, "MakeAggregateGameplayTagContainer" }, // 3987966187
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTag, "RemoveTag" }, // 3915542134
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagAll, "RemoveTagAll" }, // 3624366508
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExact, "RemoveTagExact" }, // 1035048094
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagExactAll, "RemoveTagExactAll" }, // 671418332
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsAll, "RemoveTagsAll" }, // 389232987
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExact, "RemoveTagsExact" }, // 222376936
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_RemoveTagsExactAll, "RemoveTagsExactAll" }, // 2374441948
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_Unbind, "Unbind" }, // 2163027089
		{ &Z_Construct_UFunction_UAggregateGameplayTagContainerUtils_UnbindAll, "UnbindAll" }, // 3582789757
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAggregateGameplayTagContainerUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "Keywords", "aggregate,tag,container,add,count,num,gameplay" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAggregateGameplayTagContainerUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAggregateGameplayTagContainerUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAggregateGameplayTagContainerUtils_Statics::ClassParams = {
		&UAggregateGameplayTagContainerUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAggregateGameplayTagContainerUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAggregateGameplayTagContainerUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAggregateGameplayTagContainerUtils()
	{
		if (!Z_Registration_Info_UClass_UAggregateGameplayTagContainerUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAggregateGameplayTagContainerUtils.OuterSingleton, Z_Construct_UClass_UAggregateGameplayTagContainerUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAggregateGameplayTagContainerUtils.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UAggregateGameplayTagContainerUtils>()
	{
		return UAggregateGameplayTagContainerUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAggregateGameplayTagContainerUtils);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ScriptStructInfo[] = {
		{ FAggregateGameplayTagValue::StaticStruct, Z_Construct_UScriptStruct_FAggregateGameplayTagValue_Statics::NewStructOps, TEXT("AggregateGameplayTagValue"), &Z_Registration_Info_UScriptStruct_AggregateGameplayTagValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAggregateGameplayTagValue), 1448319351U) },
		{ FAggregateGameplayTagContainer::StaticStruct, Z_Construct_UScriptStruct_FAggregateGameplayTagContainer_Statics::NewStructOps, TEXT("AggregateGameplayTagContainer"), &Z_Registration_Info_UScriptStruct_AggregateGameplayTagContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAggregateGameplayTagContainer), 3960791148U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAggregateGameplayTagContainerUtils, UAggregateGameplayTagContainerUtils::StaticClass, TEXT("UAggregateGameplayTagContainerUtils"), &Z_Registration_Info_UClass_UAggregateGameplayTagContainerUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAggregateGameplayTagContainerUtils), 4025075062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_3742924664(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
