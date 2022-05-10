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
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAggregateTagValue();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAggregateTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAggregateTagContainerNotify();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAggregateTagContainerUtils_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAggregateTagContainerUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAggregateTagContainerNotifyUtils_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAggregateTagContainerNotifyUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AggregateTagValue;
class UScriptStruct* FAggregateTagValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AggregateTagValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AggregateTagValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAggregateTagValue, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("AggregateTagValue"));
	}
	return Z_Registration_Info_UScriptStruct_AggregateTagValue.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAggregateTagValue>()
{
	return FAggregateTagValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAggregateTagValue_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregateTagValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAggregateTagValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAggregateTagValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregateTagValue_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "AggregateTagValue" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAggregateTagValue_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregateTagValue, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregateTagValue_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateTagValue_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregateTagValue_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "AggregateTagValue" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregateTagValue_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregateTagValue, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregateTagValue_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateTagValue_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAggregateTagValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregateTagValue_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregateTagValue_Statics::NewProp_Count,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAggregateTagValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"AggregateTagValue",
		sizeof(FAggregateTagValue),
		alignof(FAggregateTagValue),
		Z_Construct_UScriptStruct_FAggregateTagValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateTagValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregateTagValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateTagValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAggregateTagValue()
	{
		if (!Z_Registration_Info_UScriptStruct_AggregateTagValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AggregateTagValue.InnerSingleton, Z_Construct_UScriptStruct_FAggregateTagValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AggregateTagValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AggregateTagContainer;
class UScriptStruct* FAggregateTagContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AggregateTagContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AggregateTagContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAggregateTagContainer, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("AggregateTagContainer"));
	}
	return Z_Registration_Info_UScriptStruct_AggregateTagContainer.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAggregateTagContainer>()
{
	return FAggregateTagContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAggregateTagContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnedTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n *\x09""A gameplay tag container with a numeric tag count assigned to each owned tag.\n *\x09""Adding / removing tags will first increment / decrement the count for that tag before removing\n *\x09once the count reaches 0. An example is if you had 2 Item.Pickaxe and 5 of Item.Shovel\n *\x09you will have a count of 7 for GetTagCount(\"Item\") and 0 for GetTagCountExact(\"Item\")\n *\x09(because there are no tags explicitly called just \"Item\"). Supports dynamic Net Serialization.\n *\x09""Contains delegate to bind for when a tag count has changed\n */" },
		{ "DisplayName", "Aggregate Gameplay Tag Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ShortTooltip", "Gameplay Tag Container with a numeric tag counter" },
		{ "ToolTip", "*     A gameplay tag container with a numeric tag count assigned to each owned tag.\n*     Adding / removing tags will first increment / decrement the count for that tag before removing\n*     once the count reaches 0. An example is if you had 2 Item.Pickaxe and 5 of Item.Shovel\n*     you will have a count of 7 for GetTagCount(\"Item\") and 0 for GetTagCountExact(\"Item\")\n*     (because there are no tags explicitly called just \"Item\"). Supports dynamic Net Serialization.\n*     Contains delegate to bind for when a tag count has changed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAggregateTagContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::NewProp_OwnedTags_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AggregateTagContainer" },
		{ "Comment", "// The tags this container owns. By default every tag added\n// in the properties window has a tag count of 1. Currently no way\n// of setting a custom count value in the properties window so use\n// Initialize Container to set the container at Runtime\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "The tags this container owns. By default every tag added\nin the properties window has a tag count of 1. Currently no way\nof setting a custom count value in the properties window so use\nInitialize Container to set the container at Runtime" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::NewProp_OwnedTags = { "OwnedTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAggregateTagContainer, OwnedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::NewProp_OwnedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::NewProp_OwnedTags_MetaData)) }; // 506667518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::NewProp_OwnedTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"AggregateTagContainer",
		sizeof(FAggregateTagContainer),
		alignof(FAggregateTagContainer),
		Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAggregateTagContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_AggregateTagContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AggregateTagContainer.InnerSingleton, Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AggregateTagContainer.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAggregateTagContainerNotify>() == std::is_polymorphic<FAggregateTagContainer>(), "USTRUCT FAggregateTagContainerNotify cannot be polymorphic unless super FAggregateTagContainer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AggregateTagContainerNotify;
class UScriptStruct* FAggregateTagContainerNotify::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AggregateTagContainerNotify.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AggregateTagContainerNotify.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAggregateTagContainerNotify, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("AggregateTagContainerNotify"));
	}
	return Z_Registration_Info_UScriptStruct_AggregateTagContainerNotify.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAggregateTagContainerNotify>()
{
	return FAggregateTagContainerNotify::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAggregateTagContainerNotify_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregateTagContainerNotify_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n *\x09""An Aggregate Tag Container with a delegate for broadcasting changes. Slightly more expensive.\n *\x09""Broadcasts changes on Net Serialized as well. Useful for tracking state\n */" },
		{ "DisplayName", "Aggregate Gameplay Tag Container Notify" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "ToolTip", "*     An Aggregate Tag Container with a delegate for broadcasting changes. Slightly more expensive.\n*     Broadcasts changes on Net Serialized as well. Useful for tracking state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAggregateTagContainerNotify_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAggregateTagContainerNotify>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAggregateTagContainerNotify_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		Z_Construct_UScriptStruct_FAggregateTagContainer,
		&NewStructOps,
		"AggregateTagContainerNotify",
		sizeof(FAggregateTagContainerNotify),
		alignof(FAggregateTagContainerNotify),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAggregateTagContainerNotify_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregateTagContainerNotify_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAggregateTagContainerNotify()
	{
		if (!Z_Registration_Info_UScriptStruct_AggregateTagContainerNotify.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AggregateTagContainerNotify.InnerSingleton, Z_Construct_UScriptStruct_FAggregateTagContainerNotify_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AggregateTagContainerNotify.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics
	{
		struct _Script_WeaponSystemPlugin_eventAggregateContainerChangedUniDelegate_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FGameplayTag Tag;
			int32 CurrentCount;
			int32 OldCount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAggregateContainerChangedUniDelegate_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_TagContainer_MetaData)) }; // 1981050962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAggregateContainerChangedUniDelegate_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_Tag_MetaData)) }; // 802167388
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_CurrentCount = { "CurrentCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAggregateContainerChangedUniDelegate_Parms, CurrentCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAggregateContainerChangedUniDelegate_Parms, OldCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_CurrentCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::NewProp_OldCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin, nullptr, "AggregateContainerChangedUniDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::_Script_WeaponSystemPlugin_eventAggregateContainerChangedUniDelegate_Parms), Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execIsEmpty)
	{
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAggregateTagContainerUtils::IsEmpty(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execHasAll)
	{
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAggregateTagContainerUtils::HasAll(Z_Param_Out_TagContainer,Z_Param_Out_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execHasAny)
	{
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAggregateTagContainerUtils::HasAny(Z_Param_Out_TagContainer,Z_Param_Out_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execHasTag)
	{
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAggregateTagContainerUtils::HasTag(Z_Param_Out_TagContainer,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execGetNumTags)
	{
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_UBOOL(Z_Param_bExact);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAggregateTagContainerUtils::GetNumTags(Z_Param_Out_TagContainer,Z_Param_Out_Tag,Z_Param_bExact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execRemoveTag)
	{
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_UBOOL(Z_Param_bExact);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerUtils::RemoveTag(Z_Param_Out_TagContainer,Z_Param_Out_Tag,Z_Param_Count,Z_Param_bExact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execRemoveTags)
	{
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_UBOOL(Z_Param_bExact);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerUtils::RemoveTags(Z_Param_Out_TagContainer,Z_Param_Out_Tags,Z_Param_Count,Z_Param_bExact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execInitializeContainer)
	{
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_TagContainer);
		P_GET_TARRAY_REF(FAggregateTagValue,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerUtils::InitializeContainer(Z_Param_Out_TagContainer,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execAddTag)
	{
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerUtils::AddTag(Z_Param_Out_TagContainer,Z_Param_Out_Tag,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execAppendTags)
	{
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerUtils::AppendTags(Z_Param_Out_TagContainer,Z_Param_Out_Tags,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execEmpty)
	{
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerUtils::Empty(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execMakeLiteralAggregateTagContainer)
	{
		P_GET_TARRAY_REF(FAggregateTagValue,Z_Param_Out_Values);
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_OutTagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerUtils::MakeLiteralAggregateTagContainer(Z_Param_Out_Values,Z_Param_Out_OutTagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execConv_AggregateTagContainerToString)
	{
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAggregateTagContainerUtils::Conv_AggregateTagContainerToString(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerUtils::execConv_AggregateTagContainerToGameplayTagContainer)
	{
		P_GET_STRUCT_REF(FAggregateTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=UAggregateTagContainerUtils::Conv_AggregateTagContainerToGameplayTagContainer(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	void UAggregateTagContainerUtils::StaticRegisterNativesUAggregateTagContainerUtils()
	{
		UClass* Class = UAggregateTagContainerUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTag", &UAggregateTagContainerUtils::execAddTag },
			{ "AppendTags", &UAggregateTagContainerUtils::execAppendTags },
			{ "Conv_AggregateTagContainerToGameplayTagContainer", &UAggregateTagContainerUtils::execConv_AggregateTagContainerToGameplayTagContainer },
			{ "Conv_AggregateTagContainerToString", &UAggregateTagContainerUtils::execConv_AggregateTagContainerToString },
			{ "Empty", &UAggregateTagContainerUtils::execEmpty },
			{ "GetNumTags", &UAggregateTagContainerUtils::execGetNumTags },
			{ "HasAll", &UAggregateTagContainerUtils::execHasAll },
			{ "HasAny", &UAggregateTagContainerUtils::execHasAny },
			{ "HasTag", &UAggregateTagContainerUtils::execHasTag },
			{ "InitializeContainer", &UAggregateTagContainerUtils::execInitializeContainer },
			{ "IsEmpty", &UAggregateTagContainerUtils::execIsEmpty },
			{ "MakeLiteralAggregateTagContainer", &UAggregateTagContainerUtils::execMakeLiteralAggregateTagContainer },
			{ "RemoveTag", &UAggregateTagContainerUtils::execRemoveTag },
			{ "RemoveTags", &UAggregateTagContainerUtils::execRemoveTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics
	{
		struct AggregateTagContainerUtils_eventAddTag_Parms
		{
			FAggregateTagContainer TagContainer;
			FGameplayTag Tag;
			int32 Count;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventAddTag_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(nullptr, 0) }; // 2135736671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventAddTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventAddTag_Parms, Count), METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "AddTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::AggregateTagContainerUtils_eventAddTag_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics
	{
		struct AggregateTagContainerUtils_eventAppendTags_Parms
		{
			FAggregateTagContainer TagContainer;
			FGameplayTagContainer Tags;
			int32 Count;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventAppendTags_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(nullptr, 0) }; // 2135736671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventAppendTags_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::NewProp_Tags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventAppendTags_Parms, Count), METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tags" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "AppendTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::AggregateTagContainerUtils_eventAppendTags_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics
	{
		struct AggregateTagContainerUtils_eventConv_AggregateTagContainerToGameplayTagContainer_Parms
		{
			FAggregateTagContainer TagContainer;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventConv_AggregateTagContainerToGameplayTagContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_TagContainer_MetaData)) }; // 2135736671
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventConv_AggregateTagContainerToGameplayTagContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 506667518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Aggregate Tags to Tag Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "Conv_AggregateTagContainerToGameplayTagContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::AggregateTagContainerUtils_eventConv_AggregateTagContainerToGameplayTagContainer_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics
	{
		struct AggregateTagContainerUtils_eventConv_AggregateTagContainerToString_Parms
		{
			FAggregateTagContainer TagContainer;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventConv_AggregateTagContainerToString_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::NewProp_TagContainer_MetaData)) }; // 2135736671
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventConv_AggregateTagContainerToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Aggregate Tags to String" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "Conv_AggregateTagContainerToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::AggregateTagContainerUtils_eventConv_AggregateTagContainerToString_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_Empty_Statics
	{
		struct AggregateTagContainerUtils_eventEmpty_Parms
		{
			FAggregateTagContainer TagContainer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_Empty_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventEmpty_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(nullptr, 0) }; // 2135736671
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_Empty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_Empty_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_Empty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "Empty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_Empty_Statics::AggregateTagContainerUtils_eventEmpty_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_Empty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_Empty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_Empty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_Empty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_Empty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_Empty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics
	{
		struct AggregateTagContainerUtils_eventGetNumTags_Parms
		{
			FAggregateTagContainer TagContainer;
			FGameplayTag Tag;
			bool bExact;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExact_MetaData[];
#endif
		static void NewProp_bExact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExact;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventGetNumTags_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_TagContainer_MetaData)) }; // 2135736671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventGetNumTags_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_bExact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_bExact_SetBit(void* Obj)
	{
		((AggregateTagContainerUtils_eventGetNumTags_Parms*)Obj)->bExact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_bExact = { "bExact", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerUtils_eventGetNumTags_Parms), &Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_bExact_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_bExact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_bExact_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventGetNumTags_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_bExact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "CPP_Default_bExact", "false" },
		{ "DisplayName", "Get Tag Count" },
		{ "Keywords", "num,count" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "GetNumTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::AggregateTagContainerUtils_eventGetNumTags_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics
	{
		struct AggregateTagContainerUtils_eventHasAll_Parms
		{
			FAggregateTagContainer TagContainer;
			FGameplayTagContainer Tags;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventHasAll_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_TagContainer_MetaData)) }; // 2135736671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventHasAll_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_Tags_MetaData)) }; // 506667518
	void Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AggregateTagContainerUtils_eventHasAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerUtils_eventHasAll_Parms), &Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tags" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "HasAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::AggregateTagContainerUtils_eventHasAll_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics
	{
		struct AggregateTagContainerUtils_eventHasAny_Parms
		{
			FAggregateTagContainer TagContainer;
			FGameplayTagContainer Tags;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventHasAny_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_TagContainer_MetaData)) }; // 2135736671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventHasAny_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_Tags_MetaData)) }; // 506667518
	void Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AggregateTagContainerUtils_eventHasAny_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerUtils_eventHasAny_Parms), &Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tags" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "HasAny", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::AggregateTagContainerUtils_eventHasAny_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics
	{
		struct AggregateTagContainerUtils_eventHasTag_Parms
		{
			FAggregateTagContainer TagContainer;
			FGameplayTag Tag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventHasTag_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_TagContainer_MetaData)) }; // 2135736671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventHasTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_Tag_MetaData)) }; // 802167388
	void Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AggregateTagContainerUtils_eventHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerUtils_eventHasTag_Parms), &Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "HasTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::AggregateTagContainerUtils_eventHasTag_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics
	{
		struct AggregateTagContainerUtils_eventInitializeContainer_Parms
		{
			FAggregateTagContainer TagContainer;
			TArray<FAggregateTagValue> Values;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventInitializeContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(nullptr, 0) }; // 2135736671
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateTagValue, METADATA_PARAMS(nullptr, 0) }; // 2586575391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventInitializeContainer_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::NewProp_Values_MetaData)) }; // 2586575391
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Values" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "InitializeContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::AggregateTagContainerUtils_eventInitializeContainer_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics
	{
		struct AggregateTagContainerUtils_eventIsEmpty_Parms
		{
			FAggregateTagContainer TagContainer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventIsEmpty_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::NewProp_TagContainer_MetaData)) }; // 2135736671
	void Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AggregateTagContainerUtils_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerUtils_eventIsEmpty_Parms), &Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "IsEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::AggregateTagContainerUtils_eventIsEmpty_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics
	{
		struct AggregateTagContainerUtils_eventMakeLiteralAggregateTagContainer_Parms
		{
			TArray<FAggregateTagValue> Values;
			FAggregateTagContainer OutTagContainer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTagContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateTagValue, METADATA_PARAMS(nullptr, 0) }; // 2586575391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventMakeLiteralAggregateTagContainer_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values_MetaData)) }; // 2586575391
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_OutTagContainer = { "OutTagContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventMakeLiteralAggregateTagContainer_Parms, OutTagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(nullptr, 0) }; // 2135736671
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_OutTagContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Values" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "MakeLiteralAggregateTagContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::AggregateTagContainerUtils_eventMakeLiteralAggregateTagContainer_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics
	{
		struct AggregateTagContainerUtils_eventRemoveTag_Parms
		{
			FAggregateTagContainer TagContainer;
			FGameplayTag Tag;
			int32 Count;
			bool bExact;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExact_MetaData[];
#endif
		static void NewProp_bExact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventRemoveTag_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(nullptr, 0) }; // 2135736671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventRemoveTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventRemoveTag_Parms, Count), METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_bExact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_bExact_SetBit(void* Obj)
	{
		((AggregateTagContainerUtils_eventRemoveTag_Parms*)Obj)->bExact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_bExact = { "bExact", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerUtils_eventRemoveTag_Parms), &Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_bExact_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_bExact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_bExact_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_bExact,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "CPP_Default_bExact", "false" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "RemoveTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::AggregateTagContainerUtils_eventRemoveTag_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics
	{
		struct AggregateTagContainerUtils_eventRemoveTags_Parms
		{
			FAggregateTagContainer TagContainer;
			FGameplayTagContainer Tags;
			int32 Count;
			bool bExact;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExact_MetaData[];
#endif
		static void NewProp_bExact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventRemoveTags_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(nullptr, 0) }; // 2135736671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventRemoveTags_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_Tags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventRemoveTags_Parms, Count), METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_bExact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_bExact_SetBit(void* Obj)
	{
		((AggregateTagContainerUtils_eventRemoveTags_Parms*)Obj)->bExact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_bExact = { "bExact", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerUtils_eventRemoveTags_Parms), &Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_bExact_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_bExact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_bExact_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_bExact,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tags" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container" },
		{ "CPP_Default_bExact", "false" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerUtils, nullptr, "RemoveTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::AggregateTagContainerUtils_eventRemoveTags_Parms), Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAggregateTagContainerUtils);
	UClass* Z_Construct_UClass_UAggregateTagContainerUtils_NoRegister()
	{
		return UAggregateTagContainerUtils::StaticClass();
	}
	struct Z_Construct_UClass_UAggregateTagContainerUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAggregateTagContainerUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAggregateTagContainerUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag, "AddTag" }, // 3375073417
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags, "AppendTags" }, // 3631544529
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer, "Conv_AggregateTagContainerToGameplayTagContainer" }, // 1565694107
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString, "Conv_AggregateTagContainerToString" }, // 4059368616
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_Empty, "Empty" }, // 536274597
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags, "GetNumTags" }, // 3444005365
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll, "HasAll" }, // 4262767938
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny, "HasAny" }, // 3910459158
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag, "HasTag" }, // 1501891920
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_InitializeContainer, "InitializeContainer" }, // 198014628
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_IsEmpty, "IsEmpty" }, // 2917281248
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_MakeLiteralAggregateTagContainer, "MakeLiteralAggregateTagContainer" }, // 2857727056
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag, "RemoveTag" }, // 1918458584
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags, "RemoveTags" }, // 984657043
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAggregateTagContainerUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "Keywords", "aggregate,container,tag,num,count,tags,add,remove" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAggregateTagContainerUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAggregateTagContainerUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAggregateTagContainerUtils_Statics::ClassParams = {
		&UAggregateTagContainerUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAggregateTagContainerUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAggregateTagContainerUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAggregateTagContainerUtils()
	{
		if (!Z_Registration_Info_UClass_UAggregateTagContainerUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAggregateTagContainerUtils.OuterSingleton, Z_Construct_UClass_UAggregateTagContainerUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAggregateTagContainerUtils.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UAggregateTagContainerUtils>()
	{
		return UAggregateTagContainerUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAggregateTagContainerUtils);
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execIsEmpty)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAggregateTagContainerNotifyUtils::IsEmpty(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execHasAll)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAggregateTagContainerNotifyUtils::HasAll(Z_Param_Out_TagContainer,Z_Param_Out_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execHasAny)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAggregateTagContainerNotifyUtils::HasAny(Z_Param_Out_TagContainer,Z_Param_Out_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execHasTag)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAggregateTagContainerNotifyUtils::HasTag(Z_Param_Out_TagContainer,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execGetNumTags)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_UBOOL(Z_Param_bExact);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAggregateTagContainerNotifyUtils::GetNumTags(Z_Param_Out_TagContainer,Z_Param_Out_Tag,Z_Param_bExact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execRemoveTag)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_UBOOL(Z_Param_bExact);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerNotifyUtils::RemoveTag(Z_Param_Out_TagContainer,Z_Param_Out_Tag,Z_Param_Count,Z_Param_bExact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execRemoveTags)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_UBOOL(Z_Param_bExact);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerNotifyUtils::RemoveTags(Z_Param_Out_TagContainer,Z_Param_Out_Tags,Z_Param_Count,Z_Param_bExact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execInitializeContainer)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_GET_TARRAY_REF(FAggregateTagValue,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerNotifyUtils::InitializeContainer(Z_Param_Out_TagContainer,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execAddTag)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerNotifyUtils::AddTag(Z_Param_Out_TagContainer,Z_Param_Out_Tag,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execAppendTags)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerNotifyUtils::AppendTags(Z_Param_Out_TagContainer,Z_Param_Out_Tags,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execEmpty)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerNotifyUtils::Empty(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execMakeLiteralAggregateTagContainer)
	{
		P_GET_TARRAY_REF(FAggregateTagValue,Z_Param_Out_Values);
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_OutTagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerNotifyUtils::MakeLiteralAggregateTagContainer(Z_Param_Out_Values,Z_Param_Out_OutTagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execConv_AggregateTagContainerNotifyToAggregateTagContainer)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAggregateTagContainer*)Z_Param__Result=UAggregateTagContainerNotifyUtils::Conv_AggregateTagContainerNotifyToAggregateTagContainer(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execConv_AggregateTagContainerToString)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAggregateTagContainerNotifyUtils::Conv_AggregateTagContainerToString(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execConv_AggregateTagContainerToGameplayTagContainer)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=UAggregateTagContainerNotifyUtils::Conv_AggregateTagContainerToGameplayTagContainer(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execUnbind)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerNotifyUtils::Unbind(Z_Param_Out_TagContainer,FAggregateContainerChangedUniDelegate(Z_Param_Out_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execUnbindAll)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerNotifyUtils::UnbindAll(Z_Param_Target,Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAggregateTagContainerNotifyUtils::execBindOnChanged)
	{
		P_GET_STRUCT_REF(FAggregateTagContainerNotify,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAggregateTagContainerNotifyUtils::BindOnChanged(Z_Param_Out_TagContainer,Z_Param_Out_Tag,FAggregateContainerChangedUniDelegate(Z_Param_Out_Delegate));
		P_NATIVE_END;
	}
	void UAggregateTagContainerNotifyUtils::StaticRegisterNativesUAggregateTagContainerNotifyUtils()
	{
		UClass* Class = UAggregateTagContainerNotifyUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTag", &UAggregateTagContainerNotifyUtils::execAddTag },
			{ "AppendTags", &UAggregateTagContainerNotifyUtils::execAppendTags },
			{ "BindOnChanged", &UAggregateTagContainerNotifyUtils::execBindOnChanged },
			{ "Conv_AggregateTagContainerNotifyToAggregateTagContainer", &UAggregateTagContainerNotifyUtils::execConv_AggregateTagContainerNotifyToAggregateTagContainer },
			{ "Conv_AggregateTagContainerToGameplayTagContainer", &UAggregateTagContainerNotifyUtils::execConv_AggregateTagContainerToGameplayTagContainer },
			{ "Conv_AggregateTagContainerToString", &UAggregateTagContainerNotifyUtils::execConv_AggregateTagContainerToString },
			{ "Empty", &UAggregateTagContainerNotifyUtils::execEmpty },
			{ "GetNumTags", &UAggregateTagContainerNotifyUtils::execGetNumTags },
			{ "HasAll", &UAggregateTagContainerNotifyUtils::execHasAll },
			{ "HasAny", &UAggregateTagContainerNotifyUtils::execHasAny },
			{ "HasTag", &UAggregateTagContainerNotifyUtils::execHasTag },
			{ "InitializeContainer", &UAggregateTagContainerNotifyUtils::execInitializeContainer },
			{ "IsEmpty", &UAggregateTagContainerNotifyUtils::execIsEmpty },
			{ "MakeLiteralAggregateTagContainer", &UAggregateTagContainerNotifyUtils::execMakeLiteralAggregateTagContainer },
			{ "RemoveTag", &UAggregateTagContainerNotifyUtils::execRemoveTag },
			{ "RemoveTags", &UAggregateTagContainerNotifyUtils::execRemoveTags },
			{ "Unbind", &UAggregateTagContainerNotifyUtils::execUnbind },
			{ "UnbindAll", &UAggregateTagContainerNotifyUtils::execUnbindAll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventAddTag_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FGameplayTag Tag;
			int32 Count;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventAddTag_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(nullptr, 0) }; // 1981050962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventAddTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventAddTag_Parms, Count), METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "AddTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::AggregateTagContainerNotifyUtils_eventAddTag_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventAppendTags_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FGameplayTagContainer Tags;
			int32 Count;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventAppendTags_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(nullptr, 0) }; // 1981050962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventAppendTags_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::NewProp_Tags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventAppendTags_Parms, Count), METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tags" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "AppendTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::AggregateTagContainerNotifyUtils_eventAppendTags_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventBindOnChanged_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FGameplayTag Tag;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventBindOnChanged_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_TagContainer_MetaData)) }; // 1981050962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventBindOnChanged_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventBindOnChanged_Parms, Delegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_Delegate_MetaData)) }; // 1415283655
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "BindOnChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::AggregateTagContainerNotifyUtils_eventBindOnChanged_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventConv_AggregateTagContainerNotifyToAggregateTagContainer_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FAggregateTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventConv_AggregateTagContainerNotifyToAggregateTagContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::NewProp_TagContainer_MetaData)) }; // 1981050962
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventConv_AggregateTagContainerNotifyToAggregateTagContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(nullptr, 0) }; // 2135736671
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Aggregate Tags Notify to Aggregate Tags" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "Conv_AggregateTagContainerNotifyToAggregateTagContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::AggregateTagContainerNotifyUtils_eventConv_AggregateTagContainerNotifyToAggregateTagContainer_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventConv_AggregateTagContainerToGameplayTagContainer_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventConv_AggregateTagContainerToGameplayTagContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_TagContainer_MetaData)) }; // 1981050962
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventConv_AggregateTagContainerToGameplayTagContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 506667518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Aggregate Tags to Tag Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "Conv_AggregateTagContainerToGameplayTagContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::AggregateTagContainerNotifyUtils_eventConv_AggregateTagContainerToGameplayTagContainer_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventConv_AggregateTagContainerToString_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventConv_AggregateTagContainerToString_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::NewProp_TagContainer_MetaData)) }; // 1981050962
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventConv_AggregateTagContainerToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Aggregate Tags to String" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "Conv_AggregateTagContainerToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::AggregateTagContainerNotifyUtils_eventConv_AggregateTagContainerToString_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventEmpty_Parms
		{
			FAggregateTagContainerNotify TagContainer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventEmpty_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(nullptr, 0) }; // 1981050962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "Empty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty_Statics::AggregateTagContainerNotifyUtils_eventEmpty_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventGetNumTags_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FGameplayTag Tag;
			bool bExact;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExact_MetaData[];
#endif
		static void NewProp_bExact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExact;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventGetNumTags_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_TagContainer_MetaData)) }; // 1981050962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventGetNumTags_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_bExact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_bExact_SetBit(void* Obj)
	{
		((AggregateTagContainerNotifyUtils_eventGetNumTags_Parms*)Obj)->bExact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_bExact = { "bExact", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerNotifyUtils_eventGetNumTags_Parms), &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_bExact_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_bExact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_bExact_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventGetNumTags_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_bExact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "CPP_Default_bExact", "false" },
		{ "DisplayName", "Get Tag Count" },
		{ "Keywords", "num,count" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "GetNumTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::AggregateTagContainerNotifyUtils_eventGetNumTags_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventHasAll_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FGameplayTagContainer Tags;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventHasAll_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_TagContainer_MetaData)) }; // 1981050962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventHasAll_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_Tags_MetaData)) }; // 506667518
	void Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AggregateTagContainerNotifyUtils_eventHasAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerNotifyUtils_eventHasAll_Parms), &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tags" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "HasAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::AggregateTagContainerNotifyUtils_eventHasAll_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventHasAny_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FGameplayTagContainer Tags;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventHasAny_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_TagContainer_MetaData)) }; // 1981050962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventHasAny_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_Tags_MetaData)) }; // 506667518
	void Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AggregateTagContainerNotifyUtils_eventHasAny_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerNotifyUtils_eventHasAny_Parms), &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tags" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "HasAny", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::AggregateTagContainerNotifyUtils_eventHasAny_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventHasTag_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FGameplayTag Tag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventHasTag_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_TagContainer_MetaData)) }; // 1981050962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventHasTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_Tag_MetaData)) }; // 802167388
	void Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AggregateTagContainerNotifyUtils_eventHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerNotifyUtils_eventHasTag_Parms), &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "HasTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::AggregateTagContainerNotifyUtils_eventHasTag_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventInitializeContainer_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			TArray<FAggregateTagValue> Values;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventInitializeContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(nullptr, 0) }; // 1981050962
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateTagValue, METADATA_PARAMS(nullptr, 0) }; // 2586575391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventInitializeContainer_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::NewProp_Values_MetaData)) }; // 2586575391
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Values" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "InitializeContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::AggregateTagContainerNotifyUtils_eventInitializeContainer_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventIsEmpty_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventIsEmpty_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::NewProp_TagContainer_MetaData)) }; // 1981050962
	void Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AggregateTagContainerNotifyUtils_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerNotifyUtils_eventIsEmpty_Parms), &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "IsEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::AggregateTagContainerNotifyUtils_eventIsEmpty_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventMakeLiteralAggregateTagContainer_Parms
		{
			TArray<FAggregateTagValue> Values;
			FAggregateTagContainerNotify OutTagContainer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTagContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAggregateTagValue, METADATA_PARAMS(nullptr, 0) }; // 2586575391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventMakeLiteralAggregateTagContainer_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values_MetaData)) }; // 2586575391
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_OutTagContainer = { "OutTagContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventMakeLiteralAggregateTagContainer_Parms, OutTagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(nullptr, 0) }; // 1981050962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::NewProp_OutTagContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Values" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "MakeLiteralAggregateTagContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::AggregateTagContainerNotifyUtils_eventMakeLiteralAggregateTagContainer_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventRemoveTag_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FGameplayTag Tag;
			int32 Count;
			bool bExact;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExact_MetaData[];
#endif
		static void NewProp_bExact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventRemoveTag_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(nullptr, 0) }; // 1981050962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventRemoveTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventRemoveTag_Parms, Count), METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_bExact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_bExact_SetBit(void* Obj)
	{
		((AggregateTagContainerNotifyUtils_eventRemoveTag_Parms*)Obj)->bExact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_bExact = { "bExact", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerNotifyUtils_eventRemoveTag_Parms), &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_bExact_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_bExact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_bExact_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::NewProp_bExact,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "CPP_Default_bExact", "false" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "RemoveTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::AggregateTagContainerNotifyUtils_eventRemoveTag_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventRemoveTags_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FGameplayTagContainer Tags;
			int32 Count;
			bool bExact;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExact_MetaData[];
#endif
		static void NewProp_bExact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventRemoveTags_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(nullptr, 0) }; // 1981050962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventRemoveTags_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_Tags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventRemoveTags_Parms, Count), METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_bExact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_bExact_SetBit(void* Obj)
	{
		((AggregateTagContainerNotifyUtils_eventRemoveTags_Parms*)Obj)->bExact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_bExact = { "bExact", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AggregateTagContainerNotifyUtils_eventRemoveTags_Parms), &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_bExact_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_bExact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_bExact_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::NewProp_bExact,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tags" },
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "CPP_Default_bExact", "false" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "RemoveTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::AggregateTagContainerNotifyUtils_eventRemoveTags_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventUnbind_Parms
		{
			FAggregateTagContainerNotify TagContainer;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventUnbind_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::NewProp_TagContainer_MetaData)) }; // 1981050962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventUnbind_Parms, Delegate), Z_Construct_UDelegateFunction_WeaponSystemPlugin_AggregateContainerChangedUniDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::NewProp_Delegate_MetaData)) }; // 1415283655
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "Unbind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::AggregateTagContainerNotifyUtils_eventUnbind_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics
	{
		struct AggregateTagContainerNotifyUtils_eventUnbindAll_Parms
		{
			UObject* Target;
			FAggregateTagContainerNotify TagContainer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventUnbindAll_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerNotifyUtils_eventUnbindAll_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainerNotify, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::NewProp_TagContainer_MetaData)) }; // 1981050962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Aggregate Tag Container Notify" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAggregateTagContainerNotifyUtils, nullptr, "UnbindAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::AggregateTagContainerNotifyUtils_eventUnbindAll_Parms), Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAggregateTagContainerNotifyUtils);
	UClass* Z_Construct_UClass_UAggregateTagContainerNotifyUtils_NoRegister()
	{
		return UAggregateTagContainerNotifyUtils::StaticClass();
	}
	struct Z_Construct_UClass_UAggregateTagContainerNotifyUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAggregateTagContainerNotifyUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAggregateTagContainerNotifyUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AddTag, "AddTag" }, // 1964264526
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_AppendTags, "AppendTags" }, // 741557419
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_BindOnChanged, "BindOnChanged" }, // 2228406603
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerNotifyToAggregateTagContainer, "Conv_AggregateTagContainerNotifyToAggregateTagContainer" }, // 355977066
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToGameplayTagContainer, "Conv_AggregateTagContainerToGameplayTagContainer" }, // 899088602
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Conv_AggregateTagContainerToString, "Conv_AggregateTagContainerToString" }, // 445904140
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Empty, "Empty" }, // 1685675360
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_GetNumTags, "GetNumTags" }, // 925557574
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAll, "HasAll" }, // 3156849925
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasAny, "HasAny" }, // 3927343237
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_HasTag, "HasTag" }, // 2910034187
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_InitializeContainer, "InitializeContainer" }, // 2026859749
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_IsEmpty, "IsEmpty" }, // 814886893
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_MakeLiteralAggregateTagContainer, "MakeLiteralAggregateTagContainer" }, // 969689477
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTag, "RemoveTag" }, // 525218205
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_RemoveTags, "RemoveTags" }, // 433764
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_Unbind, "Unbind" }, // 1068729966
		{ &Z_Construct_UFunction_UAggregateTagContainerNotifyUtils_UnbindAll, "UnbindAll" }, // 445891295
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAggregateTagContainerNotifyUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
		{ "Keywords", "aggregate,container,tag,num,count,tags,add,remove,notify" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAggregateTagContainerNotifyUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAggregateTagContainerNotifyUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAggregateTagContainerNotifyUtils_Statics::ClassParams = {
		&UAggregateTagContainerNotifyUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAggregateTagContainerNotifyUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAggregateTagContainerNotifyUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAggregateTagContainerNotifyUtils()
	{
		if (!Z_Registration_Info_UClass_UAggregateTagContainerNotifyUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAggregateTagContainerNotifyUtils.OuterSingleton, Z_Construct_UClass_UAggregateTagContainerNotifyUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAggregateTagContainerNotifyUtils.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UAggregateTagContainerNotifyUtils>()
	{
		return UAggregateTagContainerNotifyUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAggregateTagContainerNotifyUtils);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ScriptStructInfo[] = {
		{ FAggregateTagValue::StaticStruct, Z_Construct_UScriptStruct_FAggregateTagValue_Statics::NewStructOps, TEXT("AggregateTagValue"), &Z_Registration_Info_UScriptStruct_AggregateTagValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAggregateTagValue), 2586575391U) },
		{ FAggregateTagContainer::StaticStruct, Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::NewStructOps, TEXT("AggregateTagContainer"), &Z_Registration_Info_UScriptStruct_AggregateTagContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAggregateTagContainer), 2135736671U) },
		{ FAggregateTagContainerNotify::StaticStruct, Z_Construct_UScriptStruct_FAggregateTagContainerNotify_Statics::NewStructOps, TEXT("AggregateTagContainerNotify"), &Z_Registration_Info_UScriptStruct_AggregateTagContainerNotify, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAggregateTagContainerNotify), 1981050962U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAggregateTagContainerUtils, UAggregateTagContainerUtils::StaticClass, TEXT("UAggregateTagContainerUtils"), &Z_Registration_Info_UClass_UAggregateTagContainerUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAggregateTagContainerUtils), 2444772284U) },
		{ Z_Construct_UClass_UAggregateTagContainerNotifyUtils, UAggregateTagContainerNotifyUtils::StaticClass, TEXT("UAggregateTagContainerNotifyUtils"), &Z_Registration_Info_UClass_UAggregateTagContainerNotifyUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAggregateTagContainerNotifyUtils), 560572706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_2873656608(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
