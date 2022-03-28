// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/Attachments/ForegripAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForegripAttachment() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AForegripAttachment_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AForegripAttachment();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponAttachmentBase();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UPoseableHandComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(AForegripAttachment::execSetHandPlacement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandPlacement();
		P_NATIVE_END;
	}
	void AForegripAttachment::StaticRegisterNativesAForegripAttachment()
	{
		UClass* Class = AForegripAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHandPlacement", &AForegripAttachment::execSetHandPlacement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AForegripAttachment_SetHandPlacement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AForegripAttachment_SetHandPlacement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foregrip" },
		{ "Comment", "// Sets the owning weapon's hand placement offset transform\n// and caches the hand-pose if CacheHandPose == true\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/ForegripAttachment.h" },
		{ "ToolTip", "Sets the owning weapon's hand placement offset transform\nand caches the hand-pose if CacheHandPose == true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AForegripAttachment_SetHandPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AForegripAttachment, nullptr, "SetHandPlacement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AForegripAttachment_SetHandPlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AForegripAttachment_SetHandPlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AForegripAttachment_SetHandPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AForegripAttachment_SetHandPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AForegripAttachment_NoRegister()
	{
		return AForegripAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AForegripAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Foregrip_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Foregrip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandAttachPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandAttachPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomHandName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DomHandName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OffHandName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCachePose_MetaData[];
#endif
		static void NewProp_bCachePose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveCache_MetaData[];
#endif
		static void NewProp_bRemoveCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoseName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CachedPoseName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AForegripAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponAttachmentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AForegripAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AForegripAttachment_SetHandPlacement, "SetHandPlacement" }, // 685097311
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForegripAttachment_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Foregrip Attachment" },
		{ "IncludePath", "WeaponSystem/Weapons/Attachments/ForegripAttachment.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/ForegripAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForegripAttachment_Statics::NewProp_Foregrip_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/ForegripAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AForegripAttachment_Statics::NewProp_Foregrip = { "Foregrip", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AForegripAttachment, Foregrip), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_Foregrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_Foregrip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForegripAttachment_Statics::NewProp_HandAttachPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Effectively USceneComponent but has a spawns a visualization component in the properties-editor.\n" },
		{ "DisplayName", "Hand Attachment Point" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/ForegripAttachment.h" },
		{ "ToolTip", "Effectively USceneComponent but has a spawns a visualization component in the properties-editor." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AForegripAttachment_Statics::NewProp_HandAttachPoint = { "HandAttachPoint", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AForegripAttachment, HandAttachPoint), Z_Construct_UClass_UPoseableHandComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_HandAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_HandAttachPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForegripAttachment_Statics::NewProp_RotOffset_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// Additive offset applied to the hand. \n" },
		{ "DisplayName", "Additive Rotation Offset" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/ForegripAttachment.h" },
		{ "ToolTip", "Additive offset applied to the hand." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AForegripAttachment_Statics::NewProp_RotOffset = { "RotOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AForegripAttachment, RotOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_RotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_RotOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForegripAttachment_Statics::NewProp_DomHandName_MetaData[] = {
		{ "Category", "Configurations" },
		{ "DisplayName", "Dominant-Hand Bone Name" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/ForegripAttachment.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AForegripAttachment_Statics::NewProp_DomHandName = { "DomHandName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AForegripAttachment, DomHandName), METADATA_PARAMS(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_DomHandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_DomHandName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForegripAttachment_Statics::NewProp_OffHandName_MetaData[] = {
		{ "Category", "Configurations" },
		{ "DisplayName", "Off-Hand Bone Name" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/ForegripAttachment.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AForegripAttachment_Statics::NewProp_OffHandName = { "OffHandName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AForegripAttachment, OffHandName), METADATA_PARAMS(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_OffHandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_OffHandName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForegripAttachment_Statics::NewProp_WeaponSocketName_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// Leave as None if the weapon is directly attached to the Dominant-Hand\n" },
		{ "DisplayName", "Weapon-Socket Name" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/ForegripAttachment.h" },
		{ "ToolTip", "Leave as None if the weapon is directly attached to the Dominant-Hand" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AForegripAttachment_Statics::NewProp_WeaponSocketName = { "WeaponSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AForegripAttachment, WeaponSocketName), METADATA_PARAMS(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_WeaponSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_WeaponSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bCachePose_MetaData[] = {
		{ "Category", "Configurations|Animation" },
		{ "Comment", "// Whether or not to cache the pose from the Hand Attachment Point in the Anim Instance for use in animation later.\n" },
		{ "DisplayName", "Cache Hand Pose on Attached" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/ForegripAttachment.h" },
		{ "ToolTip", "Whether or not to cache the pose from the Hand Attachment Point in the Anim Instance for use in animation later." },
	};
#endif
	void Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bCachePose_SetBit(void* Obj)
	{
		((AForegripAttachment*)Obj)->bCachePose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bCachePose = { "bCachePose", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AForegripAttachment), &Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bCachePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bCachePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bCachePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bRemoveCache_MetaData[] = {
		{ "Category", "Configurations|Animation" },
		{ "Comment", "// Whether or not to remove the cached pose when this attachment is removed.\n" },
		{ "DisplayName", "Remove Cached Pose on Removed" },
		{ "EditCondition", "bCachePose" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/ForegripAttachment.h" },
		{ "ToolTip", "Whether or not to remove the cached pose when this attachment is removed." },
	};
#endif
	void Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bRemoveCache_SetBit(void* Obj)
	{
		((AForegripAttachment*)Obj)->bRemoveCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bRemoveCache = { "bRemoveCache", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AForegripAttachment), &Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bRemoveCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bRemoveCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bRemoveCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForegripAttachment_Statics::NewProp_CachedPoseName_MetaData[] = {
		{ "Category", "Configurations|Animation" },
		{ "Comment", "// The name of the cached pose snapshot. Use this to access this pose later\n" },
		{ "DisplayName", "Cached Pose Snapshot Name" },
		{ "EditCondition", "bCachePose" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/ForegripAttachment.h" },
		{ "ToolTip", "The name of the cached pose snapshot. Use this to access this pose later" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AForegripAttachment_Statics::NewProp_CachedPoseName = { "CachedPoseName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AForegripAttachment, CachedPoseName), METADATA_PARAMS(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_CachedPoseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AForegripAttachment_Statics::NewProp_CachedPoseName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AForegripAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForegripAttachment_Statics::NewProp_Foregrip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForegripAttachment_Statics::NewProp_HandAttachPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForegripAttachment_Statics::NewProp_RotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForegripAttachment_Statics::NewProp_DomHandName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForegripAttachment_Statics::NewProp_OffHandName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForegripAttachment_Statics::NewProp_WeaponSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bCachePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForegripAttachment_Statics::NewProp_bRemoveCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForegripAttachment_Statics::NewProp_CachedPoseName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AForegripAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AForegripAttachment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AForegripAttachment_Statics::ClassParams = {
		&AForegripAttachment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AForegripAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AForegripAttachment_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AForegripAttachment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AForegripAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AForegripAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AForegripAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AForegripAttachment, 2102032378);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<AForegripAttachment>()
	{
		return AForegripAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AForegripAttachment(Z_Construct_UClass_AForegripAttachment, &AForegripAttachment::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("AForegripAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AForegripAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
