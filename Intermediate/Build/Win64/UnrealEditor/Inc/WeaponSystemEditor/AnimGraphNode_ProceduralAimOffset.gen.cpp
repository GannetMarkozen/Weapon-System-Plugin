// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemEditor/Source/Public/WeaponSystemEditor/AnimGraphNode_ProceduralAimOffset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_ProceduralAimOffset() {}
// Cross Module References
	WEAPONSYSTEMEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_NoRegister();
	WEAPONSYSTEMEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemEditor();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset();
// End Cross Module References
	void UAnimGraphNode_ProceduralAimOffset::StaticRegisterNativesUAnimGraphNode_ProceduralAimOffset()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_NoRegister()
	{
		return UAnimGraphNode_ProceduralAimOffset::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Source/Public/WeaponSystemEditor/AnimGraphNode_ProceduralAimOffset.h" },
		{ "ModuleRelativePath", "Source/Public/WeaponSystemEditor/AnimGraphNode_ProceduralAimOffset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Source/Public/WeaponSystemEditor/AnimGraphNode_ProceduralAimOffset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_ProceduralAimOffset, Node), Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::NewProp_Node_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_ProceduralAimOffset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::ClassParams = {
		&UAnimGraphNode_ProceduralAimOffset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_ProceduralAimOffset, 2361285125);
	template<> WEAPONSYSTEMEDITOR_API UClass* StaticClass<UAnimGraphNode_ProceduralAimOffset>()
	{
		return UAnimGraphNode_ProceduralAimOffset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_ProceduralAimOffset(Z_Construct_UClass_UAnimGraphNode_ProceduralAimOffset, &UAnimGraphNode_ProceduralAimOffset::StaticClass, TEXT("/Script/WeaponSystemEditor"), TEXT("UAnimGraphNode_ProceduralAimOffset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_ProceduralAimOffset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
