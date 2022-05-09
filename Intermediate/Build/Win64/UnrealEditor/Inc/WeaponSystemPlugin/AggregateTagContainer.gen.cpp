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
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAggregateTagContainer();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAggregateTagContainerUtils_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAggregateTagContainerUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
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
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAggregateTagContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::NewProp_OwnedTags_MetaData[] = {
		{ "Category", "AggregateTagContainer" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AggregateTagContainer.h" },
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
			{ "GetNumTags", &UAggregateTagContainerUtils::execGetNumTags },
			{ "HasAll", &UAggregateTagContainerUtils::execHasAll },
			{ "HasAny", &UAggregateTagContainerUtils::execHasAny },
			{ "HasTag", &UAggregateTagContainerUtils::execHasTag },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventAddTag_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(nullptr, 0) }; // 1331765142
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventAppendTags_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(nullptr, 0) }; // 1331765142
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventConv_AggregateTagContainerToGameplayTagContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer_Statics::NewProp_TagContainer_MetaData)) }; // 1331765142
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventConv_AggregateTagContainerToString_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString_Statics::NewProp_TagContainer_MetaData)) }; // 1331765142
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventGetNumTags_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags_Statics::NewProp_TagContainer_MetaData)) }; // 1331765142
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventHasAll_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll_Statics::NewProp_TagContainer_MetaData)) }; // 1331765142
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventHasAny_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny_Statics::NewProp_TagContainer_MetaData)) }; // 1331765142
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventHasTag_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag_Statics::NewProp_TagContainer_MetaData)) }; // 1331765142
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventRemoveTag_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(nullptr, 0) }; // 1331765142
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AggregateTagContainerUtils_eventRemoveTags_Parms, TagContainer), Z_Construct_UScriptStruct_FAggregateTagContainer, METADATA_PARAMS(nullptr, 0) }; // 1331765142
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
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_AddTag, "AddTag" }, // 1572939035
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_AppendTags, "AppendTags" }, // 1632452012
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToGameplayTagContainer, "Conv_AggregateTagContainerToGameplayTagContainer" }, // 585085205
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_Conv_AggregateTagContainerToString, "Conv_AggregateTagContainerToString" }, // 2933784126
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_GetNumTags, "GetNumTags" }, // 1666571780
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_HasAll, "HasAll" }, // 1748978039
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_HasAny, "HasAny" }, // 150040776
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_HasTag, "HasTag" }, // 3813757453
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTag, "RemoveTag" }, // 3740762567
		{ &Z_Construct_UFunction_UAggregateTagContainerUtils_RemoveTags, "RemoveTags" }, // 2183479597
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
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ScriptStructInfo[] = {
		{ FAggregateTagContainer::StaticStruct, Z_Construct_UScriptStruct_FAggregateTagContainer_Statics::NewStructOps, TEXT("AggregateTagContainer"), &Z_Registration_Info_UScriptStruct_AggregateTagContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAggregateTagContainer), 1331765142U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAggregateTagContainerUtils, UAggregateTagContainerUtils::StaticClass, TEXT("UAggregateTagContainerUtils"), &Z_Registration_Info_UClass_UAggregateTagContainerUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAggregateTagContainerUtils), 831365591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_2759909025(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AggregateTagContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
