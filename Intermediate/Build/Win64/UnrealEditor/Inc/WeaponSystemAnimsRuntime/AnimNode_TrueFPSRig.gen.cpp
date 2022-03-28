// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemAnimsRuntime/Public/AnimNode_TrueFPSRig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TrueFPSRig() {}
// Cross Module References
	WEAPONSYSTEMANIMSRUNTIME_API UEnum* Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime();
	WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FJointClampConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneParams();
	WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArmPullbackConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
// End Cross Module References
	static UEnum* EArmPullbackConfig_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig, Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime(), TEXT("EArmPullbackConfig"));
		}
		return Singleton;
	}
	template<> WEAPONSYSTEMANIMSRUNTIME_API UEnum* StaticEnum<EArmPullbackConfig>()
	{
		return EArmPullbackConfig_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EArmPullbackConfig(EArmPullbackConfig_StaticEnum, TEXT("/Script/WeaponSystemAnimsRuntime"), TEXT("EArmPullbackConfig"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig_Hash() { return 1268961793U; }
	UEnum* Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EArmPullbackConfig"), 0, Get_Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EArmPullbackConfig::Enabled", (int64)EArmPullbackConfig::Enabled },
				{ "EArmPullbackConfig::Disabled", (int64)EArmPullbackConfig::Disabled },
				{ "EArmPullbackConfig::AimingValue", (int64)EArmPullbackConfig::AimingValue },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AimingValue.DisplayName", "Based on Aiming Value" },
				{ "AimingValue.Name", "EArmPullbackConfig::AimingValue" },
				{ "BlueprintType", "true" },
				{ "Disabled.DisplayName", "Disabled" },
				{ "Disabled.Name", "EArmPullbackConfig::Disabled" },
				{ "Enabled.DisplayName", "Enabled" },
				{ "Enabled.Name", "EArmPullbackConfig::Enabled" },
				{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime,
				nullptr,
				"EArmPullbackConfig",
				"EArmPullbackConfig",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FAnimNode_TrueFPSRig>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_TrueFPSRig cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FAnimNode_TrueFPSRig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEAPONSYSTEMANIMSRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig, Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime(), TEXT("AnimNode_TrueFPSRig"), sizeof(FAnimNode_TrueFPSRig), Get_Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Hash());
	}
	return Singleton;
}
template<> WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_TrueFPSRig>()
{
	return FAnimNode_TrueFPSRig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_TrueFPSRig(FAnimNode_TrueFPSRig::StaticStruct, TEXT("/Script/WeaponSystemAnimsRuntime"), TEXT("AnimNode_TrueFPSRig"), false, nullptr, nullptr);
static struct FScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFAnimNode_TrueFPSRig
{
	FScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFAnimNode_TrueFPSRig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_TrueFPSRig")),new UScriptStruct::TCppStructOps<FAnimNode_TrueFPSRig>);
	}
} ScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFAnimNode_TrueFPSRig;
	struct Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StableBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StableBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightsRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SightsRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomWeaponOffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomWeaponOffsetTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightJointClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightJointClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftJointClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftJointClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightJointLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightJointLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftJointLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftJointLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandAdditiveTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHandAdditiveTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandAdditiveTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandAdditiveTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandAdditiveJointInfluence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightHandAdditiveJointInfluence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandAdditiveJointInfluence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftHandAdditiveJointInfluence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingJointInfluence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingJointInfluence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponLocationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponLocationAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponRotationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponRotationAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmsAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmsAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmsJointAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmsJointAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpineAlpha;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshYawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshYawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRightHanded_MetaData[];
#endif
		static void NewProp_bRightHanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightHanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxExtension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmPullbackConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArmPullbackConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TrueFPSRig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_BasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_BasePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ReferencePose_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ReferencePose = { "ReferencePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, ReferencePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ReferencePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ReferencePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHand_MetaData[] = {
		{ "Category", "Bone References" },
		{ "Comment", "//\n// Bone references\n//\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "ToolTip", "Bone references" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, RightHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHand_MetaData[] = {
		{ "Category", "Bone References" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, Category = \"Right Arm\")\n\x09""FBoneReference RightLowerArm;\n\n\x09UPROPERTY(EditAnywhere, Category = \"Right Arm\")\n\x09""FBoneReference RightUpperArm;*/" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Right Arm\")\n       FBoneReference RightLowerArm;\n\n       UPROPERTY(EditAnywhere, Category = \"Right Arm\")\n       FBoneReference RightUpperArm;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, LeftHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "Bone References" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, Head), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_StableBone_MetaData[] = {
		{ "Category", "Bone References" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, Category = \"Left Arm\")\n\x09""FBoneReference LeftLowerArm;\n\x09\n\x09UPROPERTY(EditAnywhere, Category = \"Left Arm\")\n\x09""FBoneReference LeftUpperArm;*/// The bone that will remain rotationally-stable (usually pelvis / top spine bone / head).\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Left Arm\")\n       FBoneReference LeftLowerArm;\n\n       UPROPERTY(EditAnywhere, Category = \"Left Arm\")\n       FBoneReference LeftUpperArm;// The bone that will remain rotationally-stable (usually pelvis / top spine bone / head)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_StableBone = { "StableBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, StableBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_StableBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_StableBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CameraRelativeRotation_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// The aim rotation. The Zero-Rotator being forward\n" },
		{ "DisplayName", "Aim Rotation" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The aim rotation. The Zero-Rotator being forward" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CameraRelativeRotation = { "CameraRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, CameraRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CameraRelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CameraRelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_OriginRelativeTransform_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// The weapon's origin relative to the dominant-hand. This will set the weapon's pivot / translational point.\n" },
		{ "DisplayName", "Weapon Origin Relative to Dominant Hand" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The weapon's origin relative to the dominant-hand. This will set the weapon's pivot / translational point." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_OriginRelativeTransform = { "OriginRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, OriginRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_OriginRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_OriginRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SightsRelativeTransform_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// The weapon's sights transform relative to the weapon origin transform. Set this if planning on aiming.\n" },
		{ "DisplayName", "Weapon Sights Relative to Weapon Origin" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The weapon's sights transform relative to the weapon origin transform. Set this if planning on aiming." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SightsRelativeTransform = { "SightsRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, SightsRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SightsRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SightsRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_OffsetTransform_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// The offset applied to the arms relative to the weapon. Does affect aiming and does affect joint position.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The offset applied to the arms relative to the weapon. Does affect aiming and does affect joint position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_OffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_OffsetTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CustomWeaponOffsetTransform_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// Custom weapon offset from the base pose. Does not affect aiming or joint position (if you want this to affect joint\n// position apply the same value to the RightJointLocationOffset and LeftJointLocationOffset pins).\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Custom weapon offset from the base pose. Does not affect aiming or joint position (if you want this to affect joint\nposition apply the same value to the RightJointLocationOffset and LeftJointLocationOffset pins)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CustomWeaponOffsetTransform = { "CustomWeaponOffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, CustomWeaponOffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CustomWeaponOffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CustomWeaponOffsetTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightJointClamp_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// Right joint location offset clamping in joint-space (inward horizontal displacement is affected by Min-Value\n// and outward horizontal displacement is affected by Max-Value). Specifying \"Open\" on a range-boundary means that\n// range will not be clamped. \"Inclusive\" and \"Exclusive\" range-boundary specifiers have no difference.\n" },
		{ "DisplayName", "Right Joint Offset Clamp" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Right joint location offset clamping in joint-space (inward horizontal displacement is affected by Min-Value\nand outward horizontal displacement is affected by Max-Value). Specifying \"Open\" on a range-boundary means that\nrange will not be clamped. \"Inclusive\" and \"Exclusive\" range-boundary specifiers have no difference." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightJointClamp = { "RightJointClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, RightJointClamp), Z_Construct_UScriptStruct_FJointClampConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightJointClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightJointClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftJointClamp_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// Left joint location offset clamping in joint-space (inward horizontal displacement is affected by Min-Value\n// and outward horizontal displacement is affected by Max-Value). Specifying \"Open\" on a range-boundary means that\n// range will not be clamped. \"Inclusive\" and \"Exclusive\" range-boundary specifiers have no difference.\n" },
		{ "DisplayName", "Left Joint Offset Clamp" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Left joint location offset clamping in joint-space (inward horizontal displacement is affected by Min-Value\nand outward horizontal displacement is affected by Max-Value). Specifying \"Open\" on a range-boundary means that\nrange will not be clamped. \"Inclusive\" and \"Exclusive\" range-boundary specifiers have no difference." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftJointClamp = { "LeftJointClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, LeftJointClamp), Z_Construct_UScriptStruct_FJointClampConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftJointClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftJointClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightJointLocationOffset_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// Applies an offset onto the right joint (elbow) in weapon space.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Applies an offset onto the right joint (elbow) in weapon space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightJointLocationOffset = { "RightJointLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, RightJointLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightJointLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightJointLocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftJointLocationOffset_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// Applies an offset onto the left joint (elbow) in weapon space.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Applies an offset onto the left joint (elbow) in weapon space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftJointLocationOffset = { "LeftJointLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, LeftJointLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftJointLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftJointLocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHandAdditiveTransform_MetaData[] = {
		{ "Category", "Custom Hand Placement" },
		{ "Comment", "// The additive offset to apply to the right hand on-top of the passed-in animation-pose. Useful\n// for things like fore-grips and re-adjusting the grip. In hand-space.\n// WARNING: Additive still applied during montages. Must reset variable if that is not a desired side-effect.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The additive offset to apply to the right hand on-top of the passed-in animation-pose. Useful\nfor things like fore-grips and re-adjusting the grip. In hand-space.\nWARNING: Additive still applied during montages. Must reset variable if that is not a desired side-effect." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHandAdditiveTransform = { "RightHandAdditiveTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, RightHandAdditiveTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHandAdditiveTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHandAdditiveTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHandAdditiveTransform_MetaData[] = {
		{ "Category", "Custom Hand Placement" },
		{ "Comment", "// The additive offset to apply to the left hand on-top of the passed-in animation-pose. Useful\n// for things like fore-grips and re-adjusting the grip. In hand-space.\n// WARNING: Additive still applied during montages. Must reset variable if that is not a desired side-effect.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The additive offset to apply to the left hand on-top of the passed-in animation-pose. Useful\nfor things like fore-grips and re-adjusting the grip. In hand-space.\nWARNING: Additive still applied during montages. Must reset variable if that is not a desired side-effect." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHandAdditiveTransform = { "LeftHandAdditiveTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, LeftHandAdditiveTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHandAdditiveTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHandAdditiveTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHandAdditiveJointInfluence_MetaData[] = {
		{ "Category", "Custom Hand Placement" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount the hand additive transform affects the joint position.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The amount the hand additive transform affects the joint position." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHandAdditiveJointInfluence = { "RightHandAdditiveJointInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, RightHandAdditiveJointInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHandAdditiveJointInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHandAdditiveJointInfluence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHandAdditiveJointInfluence_MetaData[] = {
		{ "Category", "Custom Hand Placement" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount the hand additive transform affects the joint position.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The amount the hand additive transform affects the joint position." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHandAdditiveJointInfluence = { "LeftHandAdditiveJointInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, LeftHandAdditiveJointInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHandAdditiveJointInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHandAdditiveJointInfluence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_AimingValue_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ClampMin", "0" },
		{ "Comment", "// The aiming weight used to interpolate between aiming and not aiming. 0 when not aiming, 1 when aiming.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The aiming weight used to interpolate between aiming and not aiming. 0 when not aiming, 1 when aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_AimingValue = { "AimingValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, AimingValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_AimingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_AimingValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_AimingJointInfluence_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount aiming offsets the joint positions. 1 making the joint moving one-to-one with the\n// weapon when aiming and 0 making the joints as stationary as possible when aiming.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The amount aiming offsets the joint positions. 1 making the joint moving one-to-one with the\nweapon when aiming and 0 making the joints as stationary as possible when aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_AimingJointInfluence = { "AimingJointInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, AimingJointInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_AimingJointInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_AimingJointInfluence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_WeaponLocationAlpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Weapon location blend weight. Does not affect aiming. Usually should not be modified.\n" },
		{ "DisplayName", "Weapon Location Alpha" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Weapon location blend weight. Does not affect aiming. Usually should not be modified." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_WeaponLocationAlpha = { "WeaponLocationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, WeaponLocationAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_WeaponLocationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_WeaponLocationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_WeaponRotationAlpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Weapon rotation blend weight. Does not affect aiming. Usually should not be modified.\n" },
		{ "DisplayName", "Weapon Rotation Alpha" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Weapon rotation blend weight. Does not affect aiming. Usually should not be modified." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_WeaponRotationAlpha = { "WeaponRotationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, WeaponRotationAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_WeaponRotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_WeaponRotationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmsAlpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The arms blend-weight.\n" },
		{ "DisplayName", "Arms IK Alpha" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The arms blend-weight." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmsAlpha = { "ArmsAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, ArmsAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmsAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmsAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmsJointAlpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The joint clamping blend-weight. Can lower this to make the clamping less abrupt.\n" },
		{ "DisplayName", "Arms Joint Clamping Alpha" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The joint clamping blend-weight. Can lower this to make the clamping less abrupt." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmsJointAlpha = { "ArmsJointAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, ArmsJointAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmsJointAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmsJointAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SpineAlpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The procedural aim offset spine-bending blend weight. This does not modify the accumulative offset correction and you will still be oriented\n// by the reference pose regardless of this value.\n" },
		{ "DisplayName", "Spine Bend Alpha" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The procedural aim offset spine-bending blend weight. This does not modify the accumulative offset correction and you will still be oriented\nby the reference pose regardless of this value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SpineAlpha = { "SpineAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, SpineAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SpineAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SpineAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// This node's blend weight.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "This node's blend weight." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_Alpha_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SpineBoneParams_Inner = { "SpineBoneParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneParams, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SpineBoneParams_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// All of the spine / neck / head bone names. The top-most bone should be the\n// last bone-name because that will determine the target rotation\n" },
		{ "DisplayName", "Spine To Head Bone Names" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "ToolTip", "All of the spine / neck / head bone names. The top-most bone should be the\nlast bone-name because that will determine the target rotation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SpineBoneParams = { "SpineBoneParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, SpineBoneParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SpineBoneParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SpineBoneParams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CameraRelativeLocation_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// The camera's relative location to it's attachment onto the head\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "ToolTip", "The camera's relative location to it's attachment onto the head" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CameraRelativeLocation = { "CameraRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, CameraRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CameraRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CameraRelativeLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_MeshYawOffset_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "Comment", "// The yaw offset from the forward direction of this mesh. In the case of the Mannequin this is 90 degrees off\n" },
		{ "DisplayName", "Mesh Forward Yaw Offset" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "ToolTip", "The yaw offset from the forward direction of this mesh. In the case of the Mannequin this is 90 degrees off" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_MeshYawOffset = { "MeshYawOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, MeshYawOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_MeshYawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_MeshYawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_bRightHanded_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// Whether or not the weapon is held in the right hand\n" },
		{ "DisplayName", "Is Right Hand Dominant" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "ToolTip", "Whether or not the weapon is held in the right hand" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_bRightHanded_SetBit(void* Obj)
	{
		((FAnimNode_TrueFPSRig*)Obj)->bRightHanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_bRightHanded = { "bRightHanded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_TrueFPSRig), &Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_bRightHanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_bRightHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_bRightHanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_MaxExtension_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// When the dominant arm reaches this extension limit, the weapon will be pulled back so that the arm does not detach from the weapon through over-extension.\n" },
		{ "DisplayName", "Non-Dominant Arm Extension Threshold" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "ToolTip", "When the dominant arm reaches this extension limit, the weapon will be pulled back so that the arm does not detach from the weapon through over-extension." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_MaxExtension = { "MaxExtension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, MaxExtension), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_MaxExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_MaxExtension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmPullbackConfig_MetaData[] = {
		{ "Category", "Configurations" },
		{ "DisplayName", "Arm Pull-Back Configuration" },
		{ "EditCondition", "MaxExtension < 1" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmPullbackConfig = { "ArmPullbackConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSRig, ArmPullbackConfig), Z_Construct_UScriptStruct_FArmPullbackConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmPullbackConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmPullbackConfig_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_BasePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ReferencePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_Head,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_StableBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CameraRelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_OriginRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SightsRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_OffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CustomWeaponOffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightJointClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftJointClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightJointLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftJointLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHandAdditiveTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHandAdditiveTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_RightHandAdditiveJointInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_LeftHandAdditiveJointInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_AimingValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_AimingJointInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_WeaponLocationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_WeaponRotationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmsAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmsJointAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SpineAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SpineBoneParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_SpineBoneParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_CameraRelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_MeshYawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_bRightHanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_MaxExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::NewProp_ArmPullbackConfig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_TrueFPSRig",
		sizeof(FAnimNode_TrueFPSRig),
		alignof(FAnimNode_TrueFPSRig),
		Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_TrueFPSRig"), sizeof(FAnimNode_TrueFPSRig), Get_Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TrueFPSRig_Hash() { return 1707714741U; }
class UScriptStruct* FJointClampConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEAPONSYSTEMANIMSRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FJointClampConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJointClampConfig, Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime(), TEXT("JointClampConfig"), sizeof(FJointClampConfig), Get_Z_Construct_UScriptStruct_FJointClampConfig_Hash());
	}
	return Singleton;
}
template<> WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* StaticStruct<FJointClampConfig>()
{
	return FJointClampConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJointClampConfig(FJointClampConfig::StaticStruct, TEXT("/Script/WeaponSystemAnimsRuntime"), TEXT("JointClampConfig"), false, nullptr, nullptr);
static struct FScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFJointClampConfig
{
	FScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFJointClampConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("JointClampConfig")),new UScriptStruct::TCppStructOps<FJointClampConfig>);
	}
} ScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFJointClampConfig;
	struct Z_Construct_UScriptStruct_FJointClampConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJointClampConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Arm Joint Clamping Configurations" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJointClampConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_HorizontalRange_MetaData[] = {
		{ "Category", "JointClampConfig" },
		{ "DisplayName", "Joint Horizontal Clamp Range" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_HorizontalRange = { "HorizontalRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJointClampConfig, HorizontalRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_HorizontalRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_HorizontalRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_VerticalRange_MetaData[] = {
		{ "Category", "JointClampConfig" },
		{ "DisplayName", "Joint Vertical Clamp Range" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_VerticalRange = { "VerticalRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJointClampConfig, VerticalRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_VerticalRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_VerticalRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJointClampConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_HorizontalRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJointClampConfig_Statics::NewProp_VerticalRange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJointClampConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime,
		nullptr,
		&NewStructOps,
		"JointClampConfig",
		sizeof(FJointClampConfig),
		alignof(FJointClampConfig),
		Z_Construct_UScriptStruct_FJointClampConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJointClampConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJointClampConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJointClampConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJointClampConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJointClampConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JointClampConfig"), sizeof(FJointClampConfig), Get_Z_Construct_UScriptStruct_FJointClampConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJointClampConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJointClampConfig_Hash() { return 4229284973U; }
class UScriptStruct* FArmPullbackConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEAPONSYSTEMANIMSRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FArmPullbackConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArmPullbackConfig, Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime(), TEXT("ArmPullbackConfig"), sizeof(FArmPullbackConfig), Get_Z_Construct_UScriptStruct_FArmPullbackConfig_Hash());
	}
	return Singleton;
}
template<> WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* StaticStruct<FArmPullbackConfig>()
{
	return FArmPullbackConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArmPullbackConfig(FArmPullbackConfig::StaticStruct, TEXT("/Script/WeaponSystemAnimsRuntime"), TEXT("ArmPullbackConfig"), false, nullptr, nullptr);
static struct FScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFArmPullbackConfig
{
	FScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFArmPullbackConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArmPullbackConfig")),new UScriptStruct::TCppStructOps<FArmPullbackConfig>);
	}
} ScriptStruct_WeaponSystemAnimsRuntime_StaticRegisterNativesFArmPullbackConfig;
	struct Z_Construct_UScriptStruct_FArmPullbackConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Config_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmPullbackThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmPullbackThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Arm Pull-Back Configuration" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArmPullbackConfig>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "ArmPullbackConfig" },
		{ "DisplayName", "Arm Pull-Back Configuration" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArmPullbackConfig, Config), Z_Construct_UEnum_WeaponSystemAnimsRuntime_EArmPullbackConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_ArmPullbackThreshold_MetaData[] = {
		{ "Category", "ArmPullbackConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The aiming value that, when exceeded, will disable arm pull-back.\n" },
		{ "DisplayName", "Arm Pull-Back Disabled Threshold" },
		{ "EditCondition", "Config == EArmPullbackConfig::AimingValue" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSRig.h" },
		{ "ToolTip", "The aiming value that, when exceeded, will disable arm pull-back." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_ArmPullbackThreshold = { "ArmPullbackThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArmPullbackConfig, ArmPullbackThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_ArmPullbackThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_ArmPullbackThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::NewProp_ArmPullbackThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime,
		nullptr,
		&NewStructOps,
		"ArmPullbackConfig",
		sizeof(FArmPullbackConfig),
		alignof(FArmPullbackConfig),
		Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArmPullbackConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArmPullbackConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArmPullbackConfig"), sizeof(FArmPullbackConfig), Get_Z_Construct_UScriptStruct_FArmPullbackConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArmPullbackConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArmPullbackConfig_Hash() { return 3660088641U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
