// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseableHandComponent() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_ELateralityMod();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_ELaterality();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UPoseableHandComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UPoseableHandComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
	static UEnum* ELateralityMod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_ELateralityMod, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("ELateralityMod"));
		}
		return Singleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<ELateralityMod>()
	{
		return ELateralityMod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELateralityMod(ELateralityMod_StaticEnum, TEXT("/Script/WeaponSystemPlugin"), TEXT("ELateralityMod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WeaponSystemPlugin_ELateralityMod_Hash() { return 1993364406U; }
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_ELateralityMod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponSystemPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELateralityMod"), 0, Get_Z_Construct_UEnum_WeaponSystemPlugin_ELateralityMod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELateralityMod::Left", (int64)ELateralityMod::Left },
				{ "ELateralityMod::Right", (int64)ELateralityMod::Right },
				{ "ELateralityMod::Both", (int64)ELateralityMod::Both },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Both.Name", "ELateralityMod::Both" },
				{ "Left.Name", "ELateralityMod::Left" },
				{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
				{ "Right.Name", "ELateralityMod::Right" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
				nullptr,
				"ELateralityMod",
				"ELateralityMod",
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
	static UEnum* ELaterality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_ELaterality, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("ELaterality"));
		}
		return Singleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<ELaterality>()
	{
		return ELaterality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELaterality(ELaterality_StaticEnum, TEXT("/Script/WeaponSystemPlugin"), TEXT("ELaterality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WeaponSystemPlugin_ELaterality_Hash() { return 1066734981U; }
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_ELaterality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponSystemPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELaterality"), 0, Get_Z_Construct_UEnum_WeaponSystemPlugin_ELaterality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELaterality::Left", (int64)ELaterality::Left },
				{ "ELaterality::Right", (int64)ELaterality::Right },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//\n//\n//\n" },
				{ "Left.Comment", "//\n//\n//\n" },
				{ "Left.Name", "ELaterality::Left" },
				{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
				{ "Right.Comment", "//\n//\n//\n" },
				{ "Right.Name", "ELaterality::Right" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
				nullptr,
				"ELaterality",
				"ELaterality",
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
	DEFINE_FUNCTION(UPoseableHandComponent::execHasValidCachedPoseSnapshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidCachedPoseSnapshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoseableHandComponent::execGetCachedPoseSnapshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPoseSnapshot*)Z_Param__Result=P_THIS->GetCachedPoseSnapshot();
		P_NATIVE_END;
	}
	void UPoseableHandComponent::StaticRegisterNativesUPoseableHandComponent()
	{
		UClass* Class = UPoseableHandComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCachedPoseSnapshot", &UPoseableHandComponent::execGetCachedPoseSnapshot },
			{ "HasValidCachedPoseSnapshot", &UPoseableHandComponent::execHasValidCachedPoseSnapshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics
	{
		struct PoseableHandComponent_eventGetCachedPoseSnapshot_Parms
		{
			FPoseSnapshot ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoseableHandComponent_eventGetCachedPoseSnapshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Visualization|Animation" },
		{ "Comment", "// Returns an empty pose if invalid\n" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
		{ "ToolTip", "Returns an empty pose if invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableHandComponent, nullptr, "GetCachedPoseSnapshot", nullptr, nullptr, sizeof(PoseableHandComponent_eventGetCachedPoseSnapshot_Parms), Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot_Statics
	{
		struct PoseableHandComponent_eventHasValidCachedPoseSnapshot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PoseableHandComponent_eventHasValidCachedPoseSnapshot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PoseableHandComponent_eventHasValidCachedPoseSnapshot_Parms), &Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Visualization|Animation" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseableHandComponent, nullptr, "HasValidCachedPoseSnapshot", nullptr, nullptr, sizeof(PoseableHandComponent_eventHasValidCachedPoseSnapshot_Parms), Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPoseableHandComponent_NoRegister()
	{
		return UPoseableHandComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPoseableHandComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualizationSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowVisualizationMesh_MetaData[];
#endif
		static void NewProp_bShowVisualizationMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowVisualizationMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisualizationTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPose_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPoseAffectsRoot_MetaData[];
#endif
		static void NewProp_bPoseAffectsRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPoseAffectsRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandSuffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RightHandSuffix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandSuffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LeftHandSuffix;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExtractPoseLaterality_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtractPoseLaterality_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExtractPoseLaterality;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VisualizerLaterality_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizerLaterality_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VisualizerLaterality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCachePose_MetaData[];
#endif
		static void NewProp_bCachePose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachePose;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandToModify_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandToModify_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandToModify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseableHandComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPoseableHandComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoseableHandComponent_GetCachedPoseSnapshot, "GetCachedPoseSnapshot" }, // 961322077
		{ &Z_Construct_UFunction_UPoseableHandComponent_HasValidCachedPoseSnapshot, "HasValidCachedPoseSnapshot" }, // 3756056385
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Component Tick Events Physics Lod Asset User Data Collision Trigger PhysicsVolume" },
		{ "IncludePath", "WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizationSkeletalMesh_MetaData[] = {
		{ "Category", "Visualization" },
		{ "EditCondition", "bShowVisualizationMesh" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizationSkeletalMesh = { "VisualizationSkeletalMesh", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseableHandComponent, VisualizationSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizationSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizationSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bShowVisualizationMesh_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bShowVisualizationMesh_SetBit(void* Obj)
	{
		((UPoseableHandComponent*)Obj)->bShowVisualizationMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bShowVisualizationMesh = { "bShowVisualizationMesh", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPoseableHandComponent), &Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bShowVisualizationMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bShowVisualizationMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bShowVisualizationMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizationTransform_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizationTransform = { "VisualizationTransform", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseableHandComponent, VisualizationTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizationTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizationTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_MeshPose_MetaData[] = {
		{ "Category", "Visualization" },
		{ "DisplayName", "Mesh Animation Pose" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_MeshPose = { "MeshPose", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseableHandComponent, MeshPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_MeshPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_MeshPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Visualization" },
		{ "DisplayName", "Time to Derive Mesh-Pose From" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseableHandComponent, Time), METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bPoseAffectsRoot_MetaData[] = {
		{ "Category", "Visualization" },
		{ "DisplayName", "Mesh Pose Affects Root Visualization" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bPoseAffectsRoot_SetBit(void* Obj)
	{
		((UPoseableHandComponent*)Obj)->bPoseAffectsRoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bPoseAffectsRoot = { "bPoseAffectsRoot", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPoseableHandComponent), &Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bPoseAffectsRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bPoseAffectsRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bPoseAffectsRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_RightHandSuffix_MetaData[] = {
		{ "Category", "Visualization|Animation" },
		{ "Comment", "// Change bone names suffixes. Like on mannequin going from hand_l to hand_r. This is the suffix we want to detect and change\n" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
		{ "ToolTip", "Change bone names suffixes. Like on mannequin going from hand_l to hand_r. This is the suffix we want to detect and change" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_RightHandSuffix = { "RightHandSuffix", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseableHandComponent, RightHandSuffix), METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_RightHandSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_RightHandSuffix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_LeftHandSuffix_MetaData[] = {
		{ "Category", "Visualization|Animation" },
		{ "Comment", "// Change bone names suffixes. Like on mannequin going from hand_l to hand_r. This is the suffix we want to change to\n" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
		{ "ToolTip", "Change bone names suffixes. Like on mannequin going from hand_l to hand_r. This is the suffix we want to change to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_LeftHandSuffix = { "LeftHandSuffix", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseableHandComponent, LeftHandSuffix), METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_LeftHandSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_LeftHandSuffix_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_ExtractPoseLaterality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_ExtractPoseLaterality_MetaData[] = {
		{ "Category", "Visualization|Animation" },
		{ "Comment", "// The laterality of the hand to derive the hand pose from\n" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
		{ "ToolTip", "The laterality of the hand to derive the hand pose from" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_ExtractPoseLaterality = { "ExtractPoseLaterality", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseableHandComponent, ExtractPoseLaterality), Z_Construct_UEnum_WeaponSystemPlugin_ELaterality, METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_ExtractPoseLaterality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_ExtractPoseLaterality_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizerLaterality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizerLaterality_MetaData[] = {
		{ "Category", "Visualization|Animation" },
		{ "Comment", "// Need to know the laterality of the visualizer to do custom calculations for it\n" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
		{ "ToolTip", "Need to know the laterality of the visualizer to do custom calculations for it" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizerLaterality = { "VisualizerLaterality", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseableHandComponent, VisualizerLaterality), Z_Construct_UEnum_WeaponSystemPlugin_ELaterality, METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizerLaterality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizerLaterality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bCachePose_MetaData[] = {
		{ "Category", "Visualization|Animation" },
		{ "Comment", "// Whether or not to create a pose snapshot from this component that can be accessed later on\n" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
		{ "ToolTip", "Whether or not to create a pose snapshot from this component that can be accessed later on" },
	};
#endif
	void Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bCachePose_SetBit(void* Obj)
	{
		((UPoseableHandComponent*)Obj)->bCachePose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bCachePose = { "bCachePose", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPoseableHandComponent), &Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bCachePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bCachePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bCachePose_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_HandToModify_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_HandToModify_MetaData[] = {
		{ "Category", "Visualization|Animation" },
		{ "Comment", "// The hand we want to modify\n" },
		{ "EditCondition", "bCachePose" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
		{ "ToolTip", "The hand we want to modify" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_HandToModify = { "HandToModify", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseableHandComponent, HandToModify), Z_Construct_UEnum_WeaponSystemPlugin_ELateralityMod, METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_HandToModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_HandToModify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Category", "Visualization|Animation" },
		{ "EditCondition", "bCachePose" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Attachments/PoseableHandComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseableHandComponent, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_TargetSkeleton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseableHandComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizationSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bShowVisualizationMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizationTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_MeshPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bPoseAffectsRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_RightHandSuffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_LeftHandSuffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_ExtractPoseLaterality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_ExtractPoseLaterality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizerLaterality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_VisualizerLaterality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_bCachePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_HandToModify_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_HandToModify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseableHandComponent_Statics::NewProp_TargetSkeleton,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseableHandComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseableHandComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseableHandComponent_Statics::ClassParams = {
		&UPoseableHandComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPoseableHandComponent_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::PropPointers), 0),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseableHandComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseableHandComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseableHandComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPoseableHandComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPoseableHandComponent, 930443644);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UPoseableHandComponent>()
	{
		return UPoseableHandComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoseableHandComponent(Z_Construct_UClass_UPoseableHandComponent, &UPoseableHandComponent::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UPoseableHandComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseableHandComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
