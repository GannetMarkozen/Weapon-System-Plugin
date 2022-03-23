// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemsAnimsUncooked/Public/AnimGraphNode_TrueFPSRig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_TrueFPSRig() {}
// Cross Module References
	WEAPONSYSTEMANIMSUNCOOKED_API UClass* Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_NoRegister();
	WEAPONSYSTEMANIMSUNCOOKED_API UClass* Z_Construct_UClass_UAnimGraphNode_TrueFPSRig();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemAnimsUncooked();
	WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig();
// End Cross Module References
	void UAnimGraphNode_TrueFPSRig::StaticRegisterNativesUAnimGraphNode_TrueFPSRig()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_NoRegister()
	{
		return UAnimGraphNode_TrueFPSRig::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemAnimsUncooked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AnimGraphNode_TrueFPSRig.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_TrueFPSRig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_TrueFPSRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_TrueFPSRig, Node), Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::NewProp_Node_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_TrueFPSRig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::ClassParams = {
		&UAnimGraphNode_TrueFPSRig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_TrueFPSRig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_TrueFPSRig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_TrueFPSRig, 856285770);
	template<> WEAPONSYSTEMANIMSUNCOOKED_API UClass* StaticClass<UAnimGraphNode_TrueFPSRig>()
	{
		return UAnimGraphNode_TrueFPSRig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_TrueFPSRig(Z_Construct_UClass_UAnimGraphNode_TrueFPSRig, &UAnimGraphNode_TrueFPSRig::StaticClass, TEXT("/Script/WeaponSystemAnimsUncooked"), TEXT("UAnimGraphNode_TrueFPSRig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_TrueFPSRig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
