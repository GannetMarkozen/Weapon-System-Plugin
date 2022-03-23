// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/Attachments/VisualizationSceneComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualizationSceneComponent() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVisualizationSceneComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVisualizationSceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void UVisualizationSceneComponent::StaticRegisterNativesUVisualizationSceneComponent()
	{
	}
	UClass* Z_Construct_UClass_UVisualizationSceneComponent_NoRegister()
	{
		return UVisualizationSceneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVisualizationSceneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualizationStaticMesh;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisualizationSceneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualizationSceneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n*/" },
		{ "HideCategories", "Component Tick Events Physics Lod Asset User Data Collision Trigger PhysicsVolume" },
		{ "IncludePath", "WeaponSystem/Weapons/Attachments/VisualizationSceneComponent.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/VisualizationSceneComponent.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationStaticMesh_MetaData[] = {
		{ "Category", "Visualization" },
		{ "EditCondition", "VisualizationSkeletalMesh == nullptr && bShowVisualizationMesh" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/VisualizationSceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationStaticMesh = { "VisualizationStaticMesh", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVisualizationSceneComponent, VisualizationStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationSkeletalMesh_MetaData[] = {
		{ "Category", "Visualization" },
		{ "EditCondition", "VisualizationStaticMesh == nullptr && bShowVisualizationMesh" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/VisualizationSceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationSkeletalMesh = { "VisualizationSkeletalMesh", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVisualizationSceneComponent, VisualizationSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_bShowVisualizationMesh_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/VisualizationSceneComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_bShowVisualizationMesh_SetBit(void* Obj)
	{
		((UVisualizationSceneComponent*)Obj)->bShowVisualizationMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_bShowVisualizationMesh = { "bShowVisualizationMesh", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVisualizationSceneComponent), &Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_bShowVisualizationMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_bShowVisualizationMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_bShowVisualizationMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationTransform_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/VisualizationSceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationTransform = { "VisualizationTransform", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVisualizationSceneComponent, VisualizationTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVisualizationSceneComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_bShowVisualizationMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisualizationSceneComponent_Statics::NewProp_VisualizationTransform,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisualizationSceneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualizationSceneComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisualizationSceneComponent_Statics::ClassParams = {
		&UVisualizationSceneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UVisualizationSceneComponent_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UVisualizationSceneComponent_Statics::PropPointers), 0),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVisualizationSceneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualizationSceneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisualizationSceneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVisualizationSceneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVisualizationSceneComponent, 4204661031);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UVisualizationSceneComponent>()
	{
		return UVisualizationSceneComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisualizationSceneComponent(Z_Construct_UClass_UVisualizationSceneComponent, &UVisualizationSceneComponent::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UVisualizationSceneComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualizationSceneComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
