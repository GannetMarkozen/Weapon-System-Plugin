// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/Attachments/SightsAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSightsAttachment() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_ASightsAttachment_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_ASightsAttachment();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponAttachmentBase();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVisualizationSceneComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_USightsAttachmentPoint_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_USightsAttachmentPoint();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponAttachmentPoint();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASightsAttachment::execGetSightsWorldTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSightsWorldTransform_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ASightsAttachment_GetSightsWorldTransform = FName(TEXT("GetSightsWorldTransform"));
	FTransform ASightsAttachment::GetSightsWorldTransform() const
	{
		SightsAttachment_eventGetSightsWorldTransform_Parms Parms;
		const_cast<ASightsAttachment*>(this)->ProcessEvent(FindFunctionChecked(NAME_ASightsAttachment_GetSightsWorldTransform),&Parms);
		return Parms.ReturnValue;
	}
	void ASightsAttachment::StaticRegisterNativesASightsAttachment()
	{
		UClass* Class = ASightsAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSightsWorldTransform", &ASightsAttachment::execGetSightsWorldTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASightsAttachment_GetSightsWorldTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASightsAttachment_GetSightsWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SightsAttachment_eventGetSightsWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASightsAttachment_GetSightsWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASightsAttachment_GetSightsWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASightsAttachment_GetSightsWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sights" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/SightsAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASightsAttachment_GetSightsWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASightsAttachment, nullptr, "GetSightsWorldTransform", nullptr, nullptr, sizeof(SightsAttachment_eventGetSightsWorldTransform_Parms), Z_Construct_UFunction_ASightsAttachment_GetSightsWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASightsAttachment_GetSightsWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASightsAttachment_GetSightsWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASightsAttachment_GetSightsWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASightsAttachment_GetSightsWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASightsAttachment_GetSightsWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASightsAttachment_NoRegister()
	{
		return ASightsAttachment::StaticClass();
	}
	struct Z_Construct_UClass_ASightsAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sights_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightsPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SightsPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASightsAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponAttachmentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASightsAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASightsAttachment_GetSightsWorldTransform, "GetSightsWorldTransform" }, // 26056263
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASightsAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponSystem/Weapons/Attachments/SightsAttachment.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/SightsAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASightsAttachment_Statics::NewProp_Sights_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/SightsAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASightsAttachment_Statics::NewProp_Sights = { "Sights", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASightsAttachment, Sights), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASightsAttachment_Statics::NewProp_Sights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASightsAttachment_Statics::NewProp_Sights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASightsAttachment_Statics::NewProp_SightsPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/SightsAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASightsAttachment_Statics::NewProp_SightsPoint = { "SightsPoint", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASightsAttachment, SightsPoint), Z_Construct_UClass_UVisualizationSceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASightsAttachment_Statics::NewProp_SightsPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASightsAttachment_Statics::NewProp_SightsPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASightsAttachment_Statics::NewProp_AimOffset_MetaData[] = {
		{ "Category", "Sights" },
		{ "Comment", "// The distance applied on-top of the Get Sights World Transform\n// to increase the distance from the camera to the sights when aiming.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/SightsAttachment.h" },
		{ "ToolTip", "The distance applied on-top of the Get Sights World Transform\nto increase the distance from the camera to the sights when aiming." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASightsAttachment_Statics::NewProp_AimOffset = { "AimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASightsAttachment, AimOffset), METADATA_PARAMS(Z_Construct_UClass_ASightsAttachment_Statics::NewProp_AimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASightsAttachment_Statics::NewProp_AimOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASightsAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASightsAttachment_Statics::NewProp_Sights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASightsAttachment_Statics::NewProp_SightsPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASightsAttachment_Statics::NewProp_AimOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASightsAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASightsAttachment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASightsAttachment_Statics::ClassParams = {
		&ASightsAttachment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASightsAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASightsAttachment_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASightsAttachment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASightsAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASightsAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASightsAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASightsAttachment, 1034175452);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<ASightsAttachment>()
	{
		return ASightsAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASightsAttachment(Z_Construct_UClass_ASightsAttachment, &ASightsAttachment::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("ASightsAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASightsAttachment);
	void USightsAttachmentPoint::StaticRegisterNativesUSightsAttachmentPoint()
	{
	}
	UClass* Z_Construct_UClass_USightsAttachmentPoint_NoRegister()
	{
		return USightsAttachmentPoint::StaticClass();
	}
	struct Z_Construct_UClass_USightsAttachmentPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAimOffset_MetaData[];
#endif
		static void NewProp_bShowAimOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAimOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimOffsetMesh;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USightsAttachmentPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeaponAttachmentPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightsAttachmentPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/*\n *\n */// Derived from Weapon Attachment Point. All it does is set the sights attachment\n// to the assigned aim offset value on-spawned\n" },
		{ "HideCategories", "Component Tick Events Physics Lod Asset User Data Collision Trigger PhysicsVolume" },
		{ "IncludePath", "WeaponSystem/Weapons/Attachments/SightsAttachment.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/SightsAttachment.h" },
		{ "ToolTip", "// Derived from Weapon Attachment Point. All it does is set the sights attachment\n// to the assigned aim offset value on-spawned" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_AimOffset_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// Sets the sights Aim Offset variable to this when spawned\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/SightsAttachment.h" },
		{ "ToolTip", "Sets the sights Aim Offset variable to this when spawned" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_AimOffset = { "AimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightsAttachmentPoint, AimOffset), METADATA_PARAMS(Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_AimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_AimOffset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_bShowAimOffset_MetaData[] = {
		{ "Category", "Configurations|Visualizer" },
		{ "DisplayName", "Show Aim Offset Visualization Mesh" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/SightsAttachment.h" },
	};
#endif
	void Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_bShowAimOffset_SetBit(void* Obj)
	{
		((USightsAttachmentPoint*)Obj)->bShowAimOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_bShowAimOffset = { "bShowAimOffset", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USightsAttachmentPoint), &Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_bShowAimOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_bShowAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_bShowAimOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_AimOffsetMesh_MetaData[] = {
		{ "Category", "Configurations|Visualizer" },
		{ "DisplayName", "Aim Offset Visualization Mesh" },
		{ "EditCondition", "bShowAimOffset" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/SightsAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_AimOffsetMesh = { "AimOffsetMesh", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightsAttachmentPoint, AimOffsetMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_AimOffsetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_AimOffsetMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USightsAttachmentPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_AimOffset,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_bShowAimOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightsAttachmentPoint_Statics::NewProp_AimOffsetMesh,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USightsAttachmentPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USightsAttachmentPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USightsAttachmentPoint_Statics::ClassParams = {
		&USightsAttachmentPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USightsAttachmentPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USightsAttachmentPoint_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USightsAttachmentPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USightsAttachmentPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USightsAttachmentPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USightsAttachmentPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USightsAttachmentPoint, 1255576307);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<USightsAttachmentPoint>()
	{
		return USightsAttachmentPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USightsAttachmentPoint(Z_Construct_UClass_USightsAttachmentPoint, &USightsAttachmentPoint::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("USightsAttachmentPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USightsAttachmentPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
