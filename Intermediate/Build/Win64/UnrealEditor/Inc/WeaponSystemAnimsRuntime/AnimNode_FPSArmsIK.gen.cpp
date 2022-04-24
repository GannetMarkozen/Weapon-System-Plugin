// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemAnimsRuntime/Public/AnimNode_FPSArmsIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_FPSArmsIK() {}
// Cross Module References
	WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FJointClampConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FArmPullbackConfig();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_FPSArmsIK>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_FPSArmsIK cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_FPSArmsIK;
class UScriptStruct* FAnimNode_FPSArmsIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_FPSArmsIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_FPSArmsIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK, Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime(), TEXT("AnimNode_FPSArmsIK"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_FPSArmsIK.OuterSingleton;
}
template<> WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_FPSArmsIK>()
{
	return FAnimNode_FPSArmsIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_FPSArmsIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_BasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_BasePose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHand_MetaData[] = {
		{ "Category", "Bone References" },
		{ "Comment", "//\n// Bone references\n//\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "ToolTip", "Bone references" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, RightHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHand_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHand_MetaData[] = {
		{ "Category", "Bone References" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, Category = \"Right Arm\")\n\x09""FBoneReference RightLowerArm;\n\n\x09UPROPERTY(EditAnywhere, Category = \"Right Arm\")\n\x09""FBoneReference RightUpperArm;*/" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Right Arm\")\n       FBoneReference RightLowerArm;\n\n       UPROPERTY(EditAnywhere, Category = \"Right Arm\")\n       FBoneReference RightUpperArm;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, LeftHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHand_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "Bone References" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, Head), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_Head_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CameraRelativeRotation_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// The aim rotation. The Zero-Rotator being forward\n" },
		{ "DisplayName", "Aim Rotation" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The aim rotation. The Zero-Rotator being forward" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CameraRelativeRotation = { "CameraRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, CameraRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CameraRelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CameraRelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_OriginRelativeTransform_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// The weapon's origin relative to the dominant-hand. This will set the weapon's pivot / translational point.\n" },
		{ "DisplayName", "Weapon Origin Relative to Dominant Hand" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The weapon's origin relative to the dominant-hand. This will set the weapon's pivot / translational point." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_OriginRelativeTransform = { "OriginRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, OriginRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_OriginRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_OriginRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_SightsRelativeTransform_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// The weapon's sights transform relative to the weapon origin transform. Set this if planning on aiming.\n" },
		{ "DisplayName", "Weapon Sights Relative to Weapon Origin" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The weapon's sights transform relative to the weapon origin transform. Set this if planning on aiming." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_SightsRelativeTransform = { "SightsRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, SightsRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_SightsRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_SightsRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_OffsetTransform_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// The offset applied to the arms relative to the weapon. Does affect aiming and does affect joint position.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The offset applied to the arms relative to the weapon. Does affect aiming and does affect joint position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_OffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_OffsetTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CustomWeaponOffsetTransform_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// Custom weapon offset from the base pose. Does not affect aiming or joint position (if you want this to affect joint\n// position apply the same value to the RightJointLocationOffset and LeftJointLocationOffset pins).\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Custom weapon offset from the base pose. Does not affect aiming or joint position (if you want this to affect joint\nposition apply the same value to the RightJointLocationOffset and LeftJointLocationOffset pins)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CustomWeaponOffsetTransform = { "CustomWeaponOffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, CustomWeaponOffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CustomWeaponOffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CustomWeaponOffsetTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightJointClamp_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// Right joint location offset clamping in joint-space (inward horizontal displacement is affected by Min-Value\n// and outward horizontal displacement is affected by Max-Value). Specifying \"Open\" on a range-boundary means that\n// range will not be clamped. \"Inclusive\" and \"Exclusive\" range-boundary specifiers have no difference.\n" },
		{ "DisplayName", "Right Joint Offset Clamp" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Right joint location offset clamping in joint-space (inward horizontal displacement is affected by Min-Value\nand outward horizontal displacement is affected by Max-Value). Specifying \"Open\" on a range-boundary means that\nrange will not be clamped. \"Inclusive\" and \"Exclusive\" range-boundary specifiers have no difference." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightJointClamp = { "RightJointClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, RightJointClamp), Z_Construct_UScriptStruct_FJointClampConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightJointClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightJointClamp_MetaData)) }; // 2408498901
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftJointClamp_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// Left joint location offset clamping in joint-space (inward horizontal displacement is affected by Min-Value\n// and outward horizontal displacement is affected by Max-Value). Specifying \"Open\" on a range-boundary means that\n// range will not be clamped. \"Inclusive\" and \"Exclusive\" range-boundary specifiers have no difference.\n" },
		{ "DisplayName", "Left Joint Offset Clamp" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Left joint location offset clamping in joint-space (inward horizontal displacement is affected by Min-Value\nand outward horizontal displacement is affected by Max-Value). Specifying \"Open\" on a range-boundary means that\nrange will not be clamped. \"Inclusive\" and \"Exclusive\" range-boundary specifiers have no difference." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftJointClamp = { "LeftJointClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, LeftJointClamp), Z_Construct_UScriptStruct_FJointClampConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftJointClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftJointClamp_MetaData)) }; // 2408498901
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightJointLocationOffset_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// Applies an offset onto the right joint (elbow) in weapon space.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Applies an offset onto the right joint (elbow) in weapon space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightJointLocationOffset = { "RightJointLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, RightJointLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightJointLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightJointLocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftJointLocationOffset_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// Applies an offset onto the left joint (elbow) in weapon space.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Applies an offset onto the left joint (elbow) in weapon space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftJointLocationOffset = { "LeftJointLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, LeftJointLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftJointLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftJointLocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHandAdditiveTransform_MetaData[] = {
		{ "Category", "Custom Hand Placement" },
		{ "Comment", "// The additive offset to apply to the right hand on-top of the passed-in animation-pose. Useful\n// for things like fore-grips and re-adjusting the grip. In hand-space.\n// WARNING: Additive still applied during montages. Must reset variable if that is not a desired side-effect.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The additive offset to apply to the right hand on-top of the passed-in animation-pose. Useful\nfor things like fore-grips and re-adjusting the grip. In hand-space.\nWARNING: Additive still applied during montages. Must reset variable if that is not a desired side-effect." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHandAdditiveTransform = { "RightHandAdditiveTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, RightHandAdditiveTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHandAdditiveTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHandAdditiveTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHandAdditiveTransform_MetaData[] = {
		{ "Category", "Custom Hand Placement" },
		{ "Comment", "// The additive offset to apply to the left hand on-top of the passed-in animation-pose. Useful\n// for things like fore-grips and re-adjusting the grip. In hand-space.\n// WARNING: Additive still applied during montages. Must reset variable if that is not a desired side-effect.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The additive offset to apply to the left hand on-top of the passed-in animation-pose. Useful\nfor things like fore-grips and re-adjusting the grip. In hand-space.\nWARNING: Additive still applied during montages. Must reset variable if that is not a desired side-effect." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHandAdditiveTransform = { "LeftHandAdditiveTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, LeftHandAdditiveTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHandAdditiveTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHandAdditiveTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHandAdditiveJointInfluence_MetaData[] = {
		{ "Category", "Custom Hand Placement" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount the hand additive transform affects the joint position.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The amount the hand additive transform affects the joint position." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHandAdditiveJointInfluence = { "RightHandAdditiveJointInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, RightHandAdditiveJointInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHandAdditiveJointInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHandAdditiveJointInfluence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHandAdditiveJointInfluence_MetaData[] = {
		{ "Category", "Custom Hand Placement" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount the hand additive transform affects the joint position.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The amount the hand additive transform affects the joint position." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHandAdditiveJointInfluence = { "LeftHandAdditiveJointInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, LeftHandAdditiveJointInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHandAdditiveJointInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHandAdditiveJointInfluence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_AimingValue_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ClampMin", "0" },
		{ "Comment", "// The aiming weight used to interpolate between aiming and not aiming. 0 when not aiming, 1 when aiming.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The aiming weight used to interpolate between aiming and not aiming. 0 when not aiming, 1 when aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_AimingValue = { "AimingValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, AimingValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_AimingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_AimingValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_AimingJointInfluence_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount aiming offsets the joint positions. 1 making the joint moving one-to-one with the\n// weapon when aiming and 0 making the joints as stationary as possible when aiming.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The amount aiming offsets the joint positions. 1 making the joint moving one-to-one with the\nweapon when aiming and 0 making the joints as stationary as possible when aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_AimingJointInfluence = { "AimingJointInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, AimingJointInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_AimingJointInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_AimingJointInfluence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_WeaponLocationAlpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Weapon location blend weight. Does not affect aiming. Usually should not be modified.\n" },
		{ "DisplayName", "Weapon Location Alpha" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Weapon location blend weight. Does not affect aiming. Usually should not be modified." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_WeaponLocationAlpha = { "WeaponLocationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, WeaponLocationAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_WeaponLocationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_WeaponLocationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_WeaponRotationAlpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Weapon rotation blend weight. Does not affect aiming. Usually should not be modified.\n" },
		{ "DisplayName", "Weapon Rotation Alpha" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Weapon rotation blend weight. Does not affect aiming. Usually should not be modified." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_WeaponRotationAlpha = { "WeaponRotationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, WeaponRotationAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_WeaponRotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_WeaponRotationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmsAlpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The arms blend-weight.\n" },
		{ "DisplayName", "Arms IK Alpha" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The arms blend-weight." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmsAlpha = { "ArmsAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, ArmsAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmsAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmsAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmsJointAlpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The joint clamping blend-weight. Can lower this to make the clamping less abrupt.\n" },
		{ "DisplayName", "Arms Joint Clamping Alpha" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The joint clamping blend-weight. Can lower this to make the clamping less abrupt." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmsJointAlpha = { "ArmsJointAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, ArmsJointAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmsJointAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmsJointAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// This node's blend weight.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "This node's blend weight." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CameraRelativeLocation_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// The camera's relative location to it's attachment onto the head\n" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "ToolTip", "The camera's relative location to it's attachment onto the head" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CameraRelativeLocation = { "CameraRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, CameraRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CameraRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CameraRelativeLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_MeshYawOffset_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "Comment", "// The yaw offset from the forward direction of this mesh. In the case of the Mannequin this is 90 degrees off\n" },
		{ "DisplayName", "Mesh Forward Yaw Offset" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "ToolTip", "The yaw offset from the forward direction of this mesh. In the case of the Mannequin this is 90 degrees off" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_MeshYawOffset = { "MeshYawOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, MeshYawOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_MeshYawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_MeshYawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_bRightHanded_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// Whether or not the weapon is held in the right hand\n" },
		{ "DisplayName", "Is Right Hand Dominant" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "ToolTip", "Whether or not the weapon is held in the right hand" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_bRightHanded_SetBit(void* Obj)
	{
		((FAnimNode_FPSArmsIK*)Obj)->bRightHanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_bRightHanded = { "bRightHanded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_FPSArmsIK), &Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_bRightHanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_bRightHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_bRightHanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_MaxExtension_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// When the dominant arm reaches this extension limit, the weapon will be pulled back so that the arm does not detach from the weapon through over-extension.\n" },
		{ "DisplayName", "Non-Dominant Arm Extension Threshold" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
		{ "ToolTip", "When the dominant arm reaches this extension limit, the weapon will be pulled back so that the arm does not detach from the weapon through over-extension." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_MaxExtension = { "MaxExtension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, MaxExtension), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_MaxExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_MaxExtension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmPullbackConfig_MetaData[] = {
		{ "Category", "Configurations" },
		{ "DisplayName", "Arm Pull-Back Configuration" },
		{ "EditCondition", "MaxExtension < 1" },
		{ "ModuleRelativePath", "Public/AnimNode_FPSArmsIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmPullbackConfig = { "ArmPullbackConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FPSArmsIK, ArmPullbackConfig), Z_Construct_UScriptStruct_FArmPullbackConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmPullbackConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmPullbackConfig_MetaData)) }; // 1062641928
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_BasePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_Head,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CameraRelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_OriginRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_SightsRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_OffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CustomWeaponOffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightJointClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftJointClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightJointLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftJointLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHandAdditiveTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHandAdditiveTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_RightHandAdditiveJointInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_LeftHandAdditiveJointInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_AimingValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_AimingJointInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_WeaponLocationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_WeaponRotationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmsAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmsJointAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_CameraRelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_MeshYawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_bRightHanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_MaxExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewProp_ArmPullbackConfig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_FPSArmsIK",
		sizeof(FAnimNode_FPSArmsIK),
		alignof(FAnimNode_FPSArmsIK),
		Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_FPSArmsIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_FPSArmsIK.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_FPSArmsIK.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimNode_FPSArmsIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimNode_FPSArmsIK_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_FPSArmsIK::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_FPSArmsIK_Statics::NewStructOps, TEXT("AnimNode_FPSArmsIK"), &Z_Registration_Info_UScriptStruct_AnimNode_FPSArmsIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_FPSArmsIK), 1732680555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimNode_FPSArmsIK_h_79822206(TEXT("/Script/WeaponSystemAnimsRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimNode_FPSArmsIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimNode_FPSArmsIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
