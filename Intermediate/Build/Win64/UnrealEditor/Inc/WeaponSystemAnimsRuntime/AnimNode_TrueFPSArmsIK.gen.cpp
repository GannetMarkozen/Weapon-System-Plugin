// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemAnimsRuntime/Public/AnimNode_TrueFPSArmsIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TrueFPSArmsIK() {}
// Cross Module References
	WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_TrueFPSArmsIK>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_TrueFPSArmsIK cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_TrueFPSArmsIK;
class UScriptStruct* FAnimNode_TrueFPSArmsIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_TrueFPSArmsIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_TrueFPSArmsIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK, Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime(), TEXT("AnimNode_TrueFPSArmsIK"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_TrueFPSArmsIK.OuterSingleton;
}
template<> WEAPONSYSTEMANIMSRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_TrueFPSArmsIK>()
{
	return FAnimNode_TrueFPSArmsIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomWeaponOffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomWeaponOffsetTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandAdditiveTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHandAdditiveTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandAdditiveTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandAdditiveTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightJointLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightJointLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftJointLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftJointLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingJointInfluence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingJointInfluence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIKEnabled_MetaData[];
#endif
		static void NewProp_bIKEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIKEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightLowerArm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightLowerArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightUpperArm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightUpperArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftLowerArm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftLowerArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftUpperArm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftUpperArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StableBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StableBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TrueFPSArmsIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_BasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_BasePose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_ReferencePose_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// The base animation sequence. Will derive the pose from the first frame of the sequence.\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinShownByDefault, DisallowedClasses = \"AnimMontage\"), Category = \"Configurations\")\n//class UAnimSequenceBase* ReferencePose;\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "ToolTip", "The base animation sequence. Will derive the pose from the first frame of the sequence.\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (PinShownByDefault, DisallowedClasses = \"AnimMontage\"), Category = \"Configurations\")\nclass UAnimSequenceBase* ReferencePose;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_ReferencePose = { "ReferencePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, ReferencePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_ReferencePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_ReferencePose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CameraRelativeRotation_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// The aim rotation. The Zero-Rotator being forward\n" },
		{ "DisplayName", "Aim Rotation" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The aim rotation. The Zero-Rotator being forward" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CameraRelativeRotation = { "CameraRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, CameraRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CameraRelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CameraRelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_WeaponRelativeTransform_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// The weapon's origin / sights relative to the dominant-hand.\n" },
		{ "DisplayName", "Weapon Origin Relative to Dominant Hand" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The weapon's origin / sights relative to the dominant-hand." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_WeaponRelativeTransform = { "WeaponRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, WeaponRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_WeaponRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_WeaponRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_OffsetTransform_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// The offset applied to the arms relative to the weapon. Does affect aiming and does affect joint position.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The offset applied to the arms relative to the weapon. Does affect aiming and does affect joint position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_OffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_OffsetTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CustomWeaponOffsetTransform_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// Custom weapon offset from the base pose. Does not affect aiming or joint position (if you want this to affect joint\n// position apply the same value to the RightJointLocationOffset and LeftJointLocationOffset pins).\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Custom weapon offset from the base pose. Does not affect aiming or joint position (if you want this to affect joint\nposition apply the same value to the RightJointLocationOffset and LeftJointLocationOffset pins)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CustomWeaponOffsetTransform = { "CustomWeaponOffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, CustomWeaponOffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CustomWeaponOffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CustomWeaponOffsetTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightHandAdditiveTransform_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightHandAdditiveTransform = { "RightHandAdditiveTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, RightHandAdditiveTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightHandAdditiveTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightHandAdditiveTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftHandAdditiveTransform_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftHandAdditiveTransform = { "LeftHandAdditiveTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, LeftHandAdditiveTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftHandAdditiveTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftHandAdditiveTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightJointLocationOffset_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// Applies an offset onto the right joint (elbow) relative to weapon.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Applies an offset onto the right joint (elbow) relative to weapon." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightJointLocationOffset = { "RightJointLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, RightJointLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightJointLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightJointLocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftJointLocationOffset_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// Applies an offset onto the left joint (elbow) relative to weapon.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Applies an offset onto the left joint (elbow) relative to weapon." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftJointLocationOffset = { "LeftJointLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, LeftJointLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftJointLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftJointLocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimingValue_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The aiming weight used to interpolate between aiming and not aiming. 0 when not aiming, 1 when aiming.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The aiming weight used to interpolate between aiming and not aiming. 0 when not aiming, 1 when aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimingValue = { "AimingValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, AimingValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimingValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimOffset_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// The distance between the sights and the camera when aiming.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The distance between the sights and the camera when aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimOffset = { "AimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, AimOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimingJointInfluence_MetaData[] = {
		{ "Category", "Arms IK" },
		{ "Comment", "// The amount aiming offsets the joint positions. 1 making the joint moving one-to-one with the\n// weapon when aiming and 0 making the joints as stationary as possible when aiming.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The amount aiming offsets the joint positions. 1 making the joint moving one-to-one with the\nweapon when aiming and 0 making the joints as stationary as possible when aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimingJointInfluence = { "AimingJointInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, AimingJointInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimingJointInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimingJointInfluence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bIKEnabled_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayName", "Arms IK Enabled" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bIKEnabled_SetBit(void* Obj)
	{
		((FAnimNode_TrueFPSArmsIK*)Obj)->bIKEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bIKEnabled = { "bIKEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_TrueFPSArmsIK), &Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bIKEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bIKEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bIKEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Whether or not this node does anything\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Whether or not this node does anything" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LocationAlpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// IK arms location blend weight. Does not affect aiming.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "IK arms location blend weight. Does not affect aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LocationAlpha = { "LocationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, LocationAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LocationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LocationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RotationAlpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// IK arms rotation blend weight. Does not affect aiming.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "IK arms rotation blend weight. Does not affect aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, RotationAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RotationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CameraRelativeLocation_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// The camera's relative location to it's attachment onto the head\n" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "ToolTip", "The camera's relative location to it's attachment onto the head" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CameraRelativeLocation = { "CameraRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, CameraRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CameraRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CameraRelativeLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_MeshYawOffset_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "Comment", "// The yaw offset from the forward direction of this mesh. In the case of the Mannequin this is 90 degrees off\n" },
		{ "DisplayName", "Mesh Forward Yaw Offset" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "ToolTip", "The yaw offset from the forward direction of this mesh. In the case of the Mannequin this is 90 degrees off" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_MeshYawOffset = { "MeshYawOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, MeshYawOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_MeshYawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_MeshYawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bRightHanded_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// Whether or not the weapon is held in the right hand\n" },
		{ "DisplayName", "Is Right Hand Dominant" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "ToolTip", "Whether or not the weapon is held in the right hand" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bRightHanded_SetBit(void* Obj)
	{
		((FAnimNode_TrueFPSArmsIK*)Obj)->bRightHanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bRightHanded = { "bRightHanded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_TrueFPSArmsIK), &Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bRightHanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bRightHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bRightHanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_MaxExtension_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// When the dominant arm reaches this extension limit, the weapon will be pulled back so that the arm does not detach from the weapon through over-extension.\n" },
		{ "DisplayName", "Non-Dominant Arm Extension Threshold" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
		{ "ToolTip", "When the dominant arm reaches this extension limit, the weapon will be pulled back so that the arm does not detach from the weapon through over-extension." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_MaxExtension = { "MaxExtension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, MaxExtension), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_MaxExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_MaxExtension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "Head" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, Head), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_Head_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightHand_MetaData[] = {
		{ "Category", "Right Arm" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, RightHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightHand_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightLowerArm_MetaData[] = {
		{ "Category", "Right Arm" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightLowerArm = { "RightLowerArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, RightLowerArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightLowerArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightLowerArm_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightUpperArm_MetaData[] = {
		{ "Category", "Right Arm" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightUpperArm = { "RightUpperArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, RightUpperArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightUpperArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightUpperArm_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftHand_MetaData[] = {
		{ "Category", "Left Arm" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, LeftHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftHand_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftLowerArm_MetaData[] = {
		{ "Category", "Left Arm" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftLowerArm = { "LeftLowerArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, LeftLowerArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftLowerArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftLowerArm_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftUpperArm_MetaData[] = {
		{ "Category", "Left Arm" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftUpperArm = { "LeftUpperArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, LeftUpperArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftUpperArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftUpperArm_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_StableBone_MetaData[] = {
		{ "Category", "Stable Bone" },
		{ "ModuleRelativePath", "Public/AnimNode_TrueFPSArmsIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_StableBone = { "StableBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TrueFPSArmsIK, StableBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_StableBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_StableBone_MetaData)) }; // 831728502
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_BasePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_ReferencePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CameraRelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_WeaponRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_OffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CustomWeaponOffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightHandAdditiveTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftHandAdditiveTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightJointLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftJointLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimingValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_AimingJointInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bIKEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LocationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RotationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_CameraRelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_MeshYawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_bRightHanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_MaxExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_Head,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightLowerArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_RightUpperArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftLowerArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_LeftUpperArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewProp_StableBone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemAnimsRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_TrueFPSArmsIK",
		sizeof(FAnimNode_TrueFPSArmsIK),
		alignof(FAnimNode_TrueFPSArmsIK),
		Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_TrueFPSArmsIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_TrueFPSArmsIK.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_TrueFPSArmsIK.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimNode_TrueFPSArmsIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimNode_TrueFPSArmsIK_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_TrueFPSArmsIK::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_TrueFPSArmsIK_Statics::NewStructOps, TEXT("AnimNode_TrueFPSArmsIK"), &Z_Registration_Info_UScriptStruct_AnimNode_TrueFPSArmsIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_TrueFPSArmsIK), 3192239677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimNode_TrueFPSArmsIK_h_2148032523(TEXT("/Script/WeaponSystemAnimsRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimNode_TrueFPSArmsIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemAnimsRuntime_Public_AnimNode_TrueFPSArmsIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
