// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/WeaponSystemFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSystemFunctionLibrary() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EBoneSpaceTransform();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_PlaceholderDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponSystemFunctionLibrary_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponSystemFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneSpaceTransform;
	static UEnum* EBoneSpaceTransform_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoneSpaceTransform.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoneSpaceTransform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_EBoneSpaceTransform, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EBoneSpaceTransform"));
		}
		return Z_Registration_Info_UEnum_EBoneSpaceTransform.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EBoneSpaceTransform>()
	{
		return EBoneSpaceTransform_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystemPlugin_EBoneSpaceTransform_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystemPlugin_EBoneSpaceTransform_Statics::Enumerators[] = {
		{ "EBoneSpaceTransform::ParentBoneSpace", (int64)EBoneSpaceTransform::ParentBoneSpace },
		{ "EBoneSpaceTransform::WorldSpace", (int64)EBoneSpaceTransform::WorldSpace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystemPlugin_EBoneSpaceTransform_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/WeaponSystemFunctionLibrary.h" },
		{ "ParentBoneSpace.DisplayName", "Parent Bone-Space" },
		{ "ParentBoneSpace.Name", "EBoneSpaceTransform::ParentBoneSpace" },
		{ "WorldSpace.DisplayName", "World-Space" },
		{ "WorldSpace.Name", "EBoneSpaceTransform::WorldSpace" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystemPlugin_EBoneSpaceTransform_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		"EBoneSpaceTransform",
		"EBoneSpaceTransform",
		Z_Construct_UEnum_WeaponSystemPlugin_EBoneSpaceTransform_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EBoneSpaceTransform_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystemPlugin_EBoneSpaceTransform_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EBoneSpaceTransform_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EBoneSpaceTransform()
	{
		if (!Z_Registration_Info_UEnum_EBoneSpaceTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneSpaceTransform.InnerSingleton, Z_Construct_UEnum_WeaponSystemPlugin_EBoneSpaceTransform_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoneSpaceTransform.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_WeaponSystemPlugin_PlaceholderDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_PlaceholderDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/WeaponSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_PlaceholderDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin, nullptr, "PlaceholderDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_PlaceholderDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_PlaceholderDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_PlaceholderDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystemPlugin_PlaceholderDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWeaponSystemFunctionLibrary::execGetDefaultObject)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UObject> ,Z_Param_Out_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UWeaponSystemFunctionLibrary::GetDefaultObject(Z_Param_Out_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponSystemFunctionLibrary::execGetAnimationSequenceAsPoseSnapshot)
	{
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_OutPoseSnapshot);
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_TargetMesh);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExtractionTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWeaponSystemFunctionLibrary::GetAnimationSequenceAsPoseSnapshot(Z_Param_Out_OutPoseSnapshot,Z_Param_AnimSequence,Z_Param_TargetMesh,Z_Param_ExtractionTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponSystemFunctionLibrary::execGetBoneTransformFromAnimationSequence)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExtractionTime);
		P_GET_ENUM(EBoneSpaceTransform,Z_Param_Space);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UWeaponSystemFunctionLibrary::GetBoneTransformFromAnimationSequence(Z_Param_Out_BoneName,Z_Param_AnimationSequence,Z_Param_ExtractionTime,EBoneSpaceTransform(Z_Param_Space));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponSystemFunctionLibrary::execCachedPoseSnapshotIsValid)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SnapshotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWeaponSystemFunctionLibrary::CachedPoseSnapshotIsValid(Z_Param_AnimInstance,Z_Param_Out_SnapshotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponSystemFunctionLibrary::execRemoveCachedPoseSnapshot)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SnapshotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWeaponSystemFunctionLibrary::RemoveCachedPoseSnapshot(Z_Param_AnimInstance,Z_Param_Out_SnapshotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponSystemFunctionLibrary::execGetCachedPoseSnapshot)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SnapshotName);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPoseSnapshot*)Z_Param__Result=UWeaponSystemFunctionLibrary::GetCachedPoseSnapshot(Z_Param_AnimInstance,Z_Param_Out_SnapshotName,Z_Param_Out_bOutSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponSystemFunctionLibrary::execCachePoseSnapshot)
	{
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_PoseSnapshot);
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SnapshotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWeaponSystemFunctionLibrary::CachePoseSnapshot(Z_Param_Out_PoseSnapshot,Z_Param_AnimInstance,Z_Param_Out_SnapshotName);
		P_NATIVE_END;
	}
	void UWeaponSystemFunctionLibrary::StaticRegisterNativesUWeaponSystemFunctionLibrary()
	{
		UClass* Class = UWeaponSystemFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CachedPoseSnapshotIsValid", &UWeaponSystemFunctionLibrary::execCachedPoseSnapshotIsValid },
			{ "CachePoseSnapshot", &UWeaponSystemFunctionLibrary::execCachePoseSnapshot },
			{ "GetAnimationSequenceAsPoseSnapshot", &UWeaponSystemFunctionLibrary::execGetAnimationSequenceAsPoseSnapshot },
			{ "GetBoneTransformFromAnimationSequence", &UWeaponSystemFunctionLibrary::execGetBoneTransformFromAnimationSequence },
			{ "GetCachedPoseSnapshot", &UWeaponSystemFunctionLibrary::execGetCachedPoseSnapshot },
			{ "GetDefaultObject", &UWeaponSystemFunctionLibrary::execGetDefaultObject },
			{ "RemoveCachedPoseSnapshot", &UWeaponSystemFunctionLibrary::execRemoveCachedPoseSnapshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics
	{
		struct WeaponSystemFunctionLibrary_eventCachedPoseSnapshotIsValid_Parms
		{
			UAnimInstance* AnimInstance;
			FName SnapshotName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventCachedPoseSnapshotIsValid_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::NewProp_SnapshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventCachedPoseSnapshotIsValid_Parms, SnapshotName), METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::NewProp_SnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::NewProp_SnapshotName_MetaData)) };
	void Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponSystemFunctionLibrary_eventCachedPoseSnapshotIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponSystemFunctionLibrary_eventCachedPoseSnapshotIsValid_Parms), &Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::NewProp_SnapshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SnapshotName" },
		{ "Category", "Weapon System Function Library|Animation" },
		{ "Comment", "// WARNING: Do not place in Anim-Graph\n" },
		{ "DefaultToSelf", "AnimInstance" },
		{ "ModuleRelativePath", "Public/WeaponSystem/WeaponSystemFunctionLibrary.h" },
		{ "ToolTip", "WARNING: Do not place in Anim-Graph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponSystemFunctionLibrary, nullptr, "CachedPoseSnapshotIsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::WeaponSystemFunctionLibrary_eventCachedPoseSnapshotIsValid_Parms), Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics
	{
		struct WeaponSystemFunctionLibrary_eventCachePoseSnapshot_Parms
		{
			FPoseSnapshot PoseSnapshot;
			UAnimInstance* AnimInstance;
			FName SnapshotName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseSnapshot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseSnapshot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::NewProp_PoseSnapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::NewProp_PoseSnapshot = { "PoseSnapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventCachePoseSnapshot_Parms, PoseSnapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::NewProp_PoseSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::NewProp_PoseSnapshot_MetaData)) }; // 1666854200
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventCachePoseSnapshot_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::NewProp_SnapshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventCachePoseSnapshot_Parms, SnapshotName), METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::NewProp_SnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::NewProp_SnapshotName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::NewProp_PoseSnapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::NewProp_SnapshotName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SnapshotName" },
		{ "Category", "Weapon System Function Library|Animation" },
		{ "Comment", "// Caches pose snapshot within the passed in AnimInstance that can be accessed within it using the Pose Snapshot node. If a\n// pose snapshot has already been cached with the same name this will override it with the new pose snapshot.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/WeaponSystemFunctionLibrary.h" },
		{ "ToolTip", "Caches pose snapshot within the passed in AnimInstance that can be accessed within it using the Pose Snapshot node. If a\npose snapshot has already been cached with the same name this will override it with the new pose snapshot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponSystemFunctionLibrary, nullptr, "CachePoseSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::WeaponSystemFunctionLibrary_eventCachePoseSnapshot_Parms), Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics
	{
		struct WeaponSystemFunctionLibrary_eventGetAnimationSequenceAsPoseSnapshot_Parms
		{
			FPoseSnapshot OutPoseSnapshot;
			const UAnimSequence* AnimSequence;
			const USkeletalMeshComponent* TargetMesh;
			float ExtractionTime;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoseSnapshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtractionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtractionTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_OutPoseSnapshot = { "OutPoseSnapshot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetAnimationSequenceAsPoseSnapshot_Parms, OutPoseSnapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) }; // 1666854200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetAnimationSequenceAsPoseSnapshot_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_TargetMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetAnimationSequenceAsPoseSnapshot_Parms, TargetMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_TargetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_TargetMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_ExtractionTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_ExtractionTime = { "ExtractionTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetAnimationSequenceAsPoseSnapshot_Parms, ExtractionTime), METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_ExtractionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_ExtractionTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_OutPoseSnapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::NewProp_ExtractionTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Animation" },
		{ "CPP_Default_ExtractionTime", "0.000000" },
		{ "ModuleRelativePath", "Public/WeaponSystem/WeaponSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponSystemFunctionLibrary, nullptr, "GetAnimationSequenceAsPoseSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::WeaponSystemFunctionLibrary_eventGetAnimationSequenceAsPoseSnapshot_Parms), Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics
	{
		struct WeaponSystemFunctionLibrary_eventGetBoneTransformFromAnimationSequence_Parms
		{
			FName BoneName;
			const UAnimSequence* AnimationSequence;
			float ExtractionTime;
			EBoneSpaceTransform Space;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtractionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtractionTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetBoneTransformFromAnimationSequence_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetBoneTransformFromAnimationSequence_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_AnimationSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_ExtractionTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_ExtractionTime = { "ExtractionTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetBoneTransformFromAnimationSequence_Parms, ExtractionTime), METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_ExtractionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_ExtractionTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_Space_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetBoneTransformFromAnimationSequence_Parms, Space), Z_Construct_UEnum_WeaponSystemPlugin_EBoneSpaceTransform, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_Space_MetaData)) }; // 1195272254
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetBoneTransformFromAnimationSequence_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_ExtractionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "BoneName" },
		{ "Category", "Weapon System Function Library|Animation" },
		{ "CPP_Default_ExtractionTime", "0.000000" },
		{ "CPP_Default_Space", "ParentBoneSpace" },
		{ "ModuleRelativePath", "Public/WeaponSystem/WeaponSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponSystemFunctionLibrary, nullptr, "GetBoneTransformFromAnimationSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::WeaponSystemFunctionLibrary_eventGetBoneTransformFromAnimationSequence_Parms), Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics
	{
		struct WeaponSystemFunctionLibrary_eventGetCachedPoseSnapshot_Parms
		{
			UAnimInstance* AnimInstance;
			FName SnapshotName;
			bool bOutSuccess;
			FPoseSnapshot ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetCachedPoseSnapshot_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_SnapshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetCachedPoseSnapshot_Parms, SnapshotName), METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_SnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_SnapshotName_MetaData)) };
	void Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((WeaponSystemFunctionLibrary_eventGetCachedPoseSnapshot_Parms*)Obj)->bOutSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponSystemFunctionLibrary_eventGetCachedPoseSnapshot_Parms), &Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetCachedPoseSnapshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_ReturnValue_MetaData)) }; // 1666854200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_SnapshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_bOutSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SnapshotName" },
		{ "Category", "Weapon System Function Library|Animation" },
		{ "ModuleRelativePath", "Public/WeaponSystem/WeaponSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponSystemFunctionLibrary, nullptr, "GetCachedPoseSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::WeaponSystemFunctionLibrary_eventGetCachedPoseSnapshot_Parms), Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics
	{
		struct WeaponSystemFunctionLibrary_eventGetDefaultObject_Parms
		{
			const TSubclassOf<UObject>  Class;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetDefaultObject_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventGetDefaultObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "AutoCreateRefTerm", "Class" },
		{ "Category", "Weapon System Function Library" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/WeaponSystem/WeaponSystemFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponSystemFunctionLibrary, nullptr, "GetDefaultObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::WeaponSystemFunctionLibrary_eventGetDefaultObject_Parms), Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics
	{
		struct WeaponSystemFunctionLibrary_eventRemoveCachedPoseSnapshot_Parms
		{
			UAnimInstance* AnimInstance;
			FName SnapshotName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventRemoveCachedPoseSnapshot_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::NewProp_SnapshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemFunctionLibrary_eventRemoveCachedPoseSnapshot_Parms, SnapshotName), METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::NewProp_SnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::NewProp_SnapshotName_MetaData)) };
	void Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponSystemFunctionLibrary_eventRemoveCachedPoseSnapshot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponSystemFunctionLibrary_eventRemoveCachedPoseSnapshot_Parms), &Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::NewProp_SnapshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SnapshotName" },
		{ "Category", "Weapon System Function Library|Animation" },
		{ "Comment", "// Returns true if a snapshot under that name exists and was removed.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/WeaponSystemFunctionLibrary.h" },
		{ "ToolTip", "Returns true if a snapshot under that name exists and was removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponSystemFunctionLibrary, nullptr, "RemoveCachedPoseSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::WeaponSystemFunctionLibrary_eventRemoveCachedPoseSnapshot_Parms), Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponSystemFunctionLibrary);
	UClass* Z_Construct_UClass_UWeaponSystemFunctionLibrary_NoRegister()
	{
		return UWeaponSystemFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponSystemFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponSystemFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponSystemFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachedPoseSnapshotIsValid, "CachedPoseSnapshotIsValid" }, // 3782381205
		{ &Z_Construct_UFunction_UWeaponSystemFunctionLibrary_CachePoseSnapshot, "CachePoseSnapshot" }, // 2381678281
		{ &Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetAnimationSequenceAsPoseSnapshot, "GetAnimationSequenceAsPoseSnapshot" }, // 3210586264
		{ &Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetBoneTransformFromAnimationSequence, "GetBoneTransformFromAnimationSequence" }, // 696949727
		{ &Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetCachedPoseSnapshot, "GetCachedPoseSnapshot" }, // 1609293566
		{ &Z_Construct_UFunction_UWeaponSystemFunctionLibrary_GetDefaultObject, "GetDefaultObject" }, // 1531005855
		{ &Z_Construct_UFunction_UWeaponSystemFunctionLibrary_RemoveCachedPoseSnapshot, "RemoveCachedPoseSnapshot" }, // 404287591
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponSystem/WeaponSystemFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/WeaponSystemFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponSystemFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponSystemFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponSystemFunctionLibrary_Statics::ClassParams = {
		&UWeaponSystemFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponSystemFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UWeaponSystemFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponSystemFunctionLibrary.OuterSingleton, Z_Construct_UClass_UWeaponSystemFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeaponSystemFunctionLibrary.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UWeaponSystemFunctionLibrary>()
	{
		return UWeaponSystemFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponSystemFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EBoneSpaceTransform_StaticEnum, TEXT("EBoneSpaceTransform"), &Z_Registration_Info_UEnum_EBoneSpaceTransform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1195272254U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponSystemFunctionLibrary, UWeaponSystemFunctionLibrary::StaticClass, TEXT("UWeaponSystemFunctionLibrary"), &Z_Registration_Info_UClass_UWeaponSystemFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponSystemFunctionLibrary), 2808580965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_2544077722(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_WeaponSystemFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
