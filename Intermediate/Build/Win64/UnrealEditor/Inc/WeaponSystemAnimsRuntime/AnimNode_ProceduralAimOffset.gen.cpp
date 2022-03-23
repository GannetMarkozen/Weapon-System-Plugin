// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemAnimsRuntime/Public/AnimNode_ProceduralAimOffset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ProceduralAimOffset() {}
// Cross Module References
	WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_ProceduralAimOffset>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ProceduralAimOffset cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FAnimNode_ProceduralAimOffset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEAPONSYSTEMANIMSRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset, Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime(), TEXT("AnimNode_ProceduralAimOffset"), sizeof(FAnimNode_ProceduralAimOffset), Get_Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Hash());
	}
	return Singleton;
}
template<> WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_ProceduralAimOffset>()
{
	return FAnimNode_ProceduralAimOffset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ProceduralAimOffset(FAnimNode_ProceduralAimOffset::StaticStruct, TEXT("/Script/WeaponSystemAnimsRuntime"), TEXT("AnimNode_ProceduralAimOffset"), false, nullptr, nullptr);
static struct FScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFAnimNode_ProceduralAimOffset
{
	FScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFAnimNode_ProceduralAimOffset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ProceduralAimOffset")),new UScriptStruct::TCppStructOps<FAnimNode_ProceduralAimOffset>);
	}
} ScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFAnimNode_ProceduralAimOffset;
	struct Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpineBoneParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineBoneParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpineBoneParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReferenceFrameTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/AnimNode_ProceduralAimOffset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ProceduralAimOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "// This is the pose with all the montages and other animations you want\n// applied on-top of the aim offset.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_ProceduralAimOffset.h" },
		{ "ToolTip", "This is the pose with all the montages and other animations you want\napplied on-top of the aim offset." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ProceduralAimOffset, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_BasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_BasePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_ReferencePose_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "// This is the pose that the target pose will be referencing when determining\n// how the accumulative offset is calculated to maintain a forward-facing orientation.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_ProceduralAimOffset.h" },
		{ "ToolTip", "This is the pose that the target pose will be referencing when determining\nhow the accumulative offset is calculated to maintain a forward-facing orientation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_ReferencePose = { "ReferencePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ProceduralAimOffset, ReferencePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_ReferencePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_ReferencePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_CameraRelativeRotation_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// The aim rotation. The Zero-Rotator being forward\n" },
		{ "DisplayName", "Aim Rotation" },
		{ "ModuleRelativePath", "Public/AnimNode_ProceduralAimOffset.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The aim rotation. The Zero-Rotator being forward" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_CameraRelativeRotation = { "CameraRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ProceduralAimOffset, CameraRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_CameraRelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_CameraRelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/AnimNode_ProceduralAimOffset.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ProceduralAimOffset, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_Alpha_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_SpineBoneParams_Inner = { "SpineBoneParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_SpineBoneParams_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// All of the spine / neck / head bone names. The top-most bone should be the\n// last bone-name because that will determine the target rotation\n" },
		{ "DisplayName", "Spine To Head Bone Names" },
		{ "ModuleRelativePath", "Public/AnimNode_ProceduralAimOffset.h" },
		{ "ToolTip", "All of the spine / neck / head bone names. The top-most bone should be the\nlast bone-name because that will determine the target rotation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_SpineBoneParams = { "SpineBoneParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ProceduralAimOffset, SpineBoneParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_SpineBoneParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_SpineBoneParams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_ReferenceFrameTime_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// The time in the Reference Pose we snapshot as our base. Should usually be 0\n" },
		{ "ModuleRelativePath", "Public/AnimNode_ProceduralAimOffset.h" },
		{ "ToolTip", "The time in the Reference Pose we snapshot as our base. Should usually be 0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_ReferenceFrameTime = { "ReferenceFrameTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ProceduralAimOffset, ReferenceFrameTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_ReferenceFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_ReferenceFrameTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_BasePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_ReferencePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_CameraRelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_SpineBoneParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_SpineBoneParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::NewProp_ReferenceFrameTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ProceduralAimOffset",
		sizeof(FAnimNode_ProceduralAimOffset),
		alignof(FAnimNode_ProceduralAimOffset),
		Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ProceduralAimOffset"), sizeof(FAnimNode_ProceduralAimOffset), Get_Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ProceduralAimOffset_Hash() { return 3831584632U; }
class UScriptStruct* FBoneParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEAPONSYSTEMANIMSRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FBoneParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneParams, Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime(), TEXT("BoneParams"), sizeof(FBoneParams), Get_Z_Construct_UScriptStruct_FBoneParams_Hash());
	}
	return Singleton;
}
template<> WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* StaticStruct<FBoneParams>()
{
	return FBoneParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneParams(FBoneParams::StaticStruct, TEXT("/Script/WeaponSystemAnimsRuntime"), TEXT("BoneParams"), false, nullptr, nullptr);
static struct FScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFBoneParams
{
	FScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFBoneParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneParams")),new UScriptStruct::TCppStructOps<FBoneParams>);
	}
} ScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFBoneParams;
	struct Z_Construct_UScriptStruct_FBoneParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_ProceduralAimOffset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneParams_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "BoneParams" },
		{ "ModuleRelativePath", "Public/AnimNode_ProceduralAimOffset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneParams_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneParams, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneParams_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneParams_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneParams_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "BoneParams" },
		{ "ModuleRelativePath", "Public/AnimNode_ProceduralAimOffset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneParams_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneParams, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneParams_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneParams_Statics::NewProp_Weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneParams_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneParams_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime,
		nullptr,
		&NewStructOps,
		"BoneParams",
		sizeof(FBoneParams),
		alignof(FBoneParams),
		Z_Construct_UScriptStruct_FBoneParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneParams"), sizeof(FBoneParams), Get_Z_Construct_UScriptStruct_FBoneParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneParams_Hash() { return 2802698377U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
