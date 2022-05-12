// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PolyStructUncooked/Public/Nodes/BPNode_MakePolyStructHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPNode_MakePolyStructHandle() {}
// Cross Module References
	POLYSTRUCTUNCOOKED_API UClass* Z_Construct_UClass_UBPNode_MakePolyStructHandle_NoRegister();
	POLYSTRUCTUNCOOKED_API UClass* Z_Construct_UClass_UBPNode_MakePolyStructHandle();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_PolyStructUncooked();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
// End Cross Module References
	void UBPNode_MakePolyStructHandle::StaticRegisterNativesUBPNode_MakePolyStructHandle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBPNode_MakePolyStructHandle);
	UClass* Z_Construct_UClass_UBPNode_MakePolyStructHandle_NoRegister()
	{
		return UBPNode_MakePolyStructHandle::StaticClass();
	}
	struct Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInputs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_PolyStructUncooked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/BPNode_MakePolyStructHandle.h" },
		{ "ModuleRelativePath", "Public/Nodes/BPNode_MakePolyStructHandle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::NewProp_NumInputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/BPNode_MakePolyStructHandle.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::NewProp_NumInputs = { "NumInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBPNode_MakePolyStructHandle, NumInputs), METADATA_PARAMS(Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::NewProp_NumInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::NewProp_NumInputs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::NewProp_NumInputs,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UBPNode_MakePolyStructHandle, IK2Node_AddPinInterface), false },  // 1388788643
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPNode_MakePolyStructHandle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::ClassParams = {
		&UBPNode_MakePolyStructHandle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPNode_MakePolyStructHandle()
	{
		if (!Z_Registration_Info_UClass_UBPNode_MakePolyStructHandle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPNode_MakePolyStructHandle.OuterSingleton, Z_Construct_UClass_UBPNode_MakePolyStructHandle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBPNode_MakePolyStructHandle.OuterSingleton;
	}
	template<> POLYSTRUCTUNCOOKED_API UClass* StaticClass<UBPNode_MakePolyStructHandle>()
	{
		return UBPNode_MakePolyStructHandle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPNode_MakePolyStructHandle);
	struct Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_BPNode_MakePolyStructHandle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_BPNode_MakePolyStructHandle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBPNode_MakePolyStructHandle, UBPNode_MakePolyStructHandle::StaticClass, TEXT("UBPNode_MakePolyStructHandle"), &Z_Registration_Info_UClass_UBPNode_MakePolyStructHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPNode_MakePolyStructHandle), 1841802893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_BPNode_MakePolyStructHandle_h_2378224391(TEXT("/Script/PolyStructUncooked"),
		Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_BPNode_MakePolyStructHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_PolyStructUncooked_Public_Nodes_BPNode_MakePolyStructHandle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
