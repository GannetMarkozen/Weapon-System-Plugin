// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponAttachmentPoint() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponAttachmentPoint_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponAttachmentPoint();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVisualizationSceneComponent();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponAttachmentBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UWeaponAttachmentPoint::execSetAttachment)
	{
		P_GET_OBJECT(AWeaponAttachmentBase,Z_Param_NewAttachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachment(Z_Param_NewAttachment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponAttachmentPoint::execDestroyAttachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyAttachment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponAttachmentPoint::execSpawnAttachment)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AWeaponAttachmentBase> ,Z_Param_Out_AttachmentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponAttachmentBase**)Z_Param__Result=P_THIS->SpawnAttachment(Z_Param_Out_AttachmentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponAttachmentPoint::execHasAuthority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAuthority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponAttachmentPoint::execOnRep_Attachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Attachment();
		P_NATIVE_END;
	}
	static FName NAME_UWeaponAttachmentPoint_AttachmentChanged = FName(TEXT("AttachmentChanged"));
	void UWeaponAttachmentPoint::AttachmentChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWeaponAttachmentPoint_AttachmentChanged),NULL);
	}
	void UWeaponAttachmentPoint::StaticRegisterNativesUWeaponAttachmentPoint()
	{
		UClass* Class = UWeaponAttachmentPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyAttachment", &UWeaponAttachmentPoint::execDestroyAttachment },
			{ "HasAuthority", &UWeaponAttachmentPoint::execHasAuthority },
			{ "OnRep_Attachment", &UWeaponAttachmentPoint::execOnRep_Attachment },
			{ "SetAttachment", &UWeaponAttachmentPoint::execSetAttachment },
			{ "SpawnAttachment", &UWeaponAttachmentPoint::execSpawnAttachment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponAttachmentPoint_AttachmentChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentPoint_AttachmentChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentPoint_AttachmentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentPoint, nullptr, "AttachmentChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentPoint_AttachmentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentPoint_AttachmentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponAttachmentPoint_AttachmentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentPoint_AttachmentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponAttachmentPoint_DestroyAttachment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentPoint_DestroyAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "Comment", "// Destroys the current attachment at this attachment point.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h" },
		{ "ToolTip", "Destroys the current attachment at this attachment point." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentPoint_DestroyAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentPoint, nullptr, "DestroyAttachment", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentPoint_DestroyAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentPoint_DestroyAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponAttachmentPoint_DestroyAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentPoint_DestroyAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority_Statics
	{
		struct WeaponAttachmentPoint_eventHasAuthority_Parms
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
	void Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponAttachmentPoint_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponAttachmentPoint_eventHasAuthority_Parms), &Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentPoint, nullptr, "HasAuthority", nullptr, nullptr, sizeof(WeaponAttachmentPoint_eventHasAuthority_Parms), Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponAttachmentPoint_OnRep_Attachment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentPoint_OnRep_Attachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentPoint_OnRep_Attachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentPoint, nullptr, "OnRep_Attachment", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentPoint_OnRep_Attachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentPoint_OnRep_Attachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponAttachmentPoint_OnRep_Attachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentPoint_OnRep_Attachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponAttachmentPoint_SetAttachment_Statics
	{
		struct WeaponAttachmentPoint_eventSetAttachment_Parms
		{
			AWeaponAttachmentBase* NewAttachment;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAttachment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponAttachmentPoint_SetAttachment_Statics::NewProp_NewAttachment = { "NewAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentPoint_eventSetAttachment_Parms, NewAttachment), Z_Construct_UClass_AWeaponAttachmentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttachmentPoint_SetAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentPoint_SetAttachment_Statics::NewProp_NewAttachment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentPoint_SetAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "Comment", "// Sets the new attachment on the Server and calls it's OnRep function. New Attachment may be invalid.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h" },
		{ "ToolTip", "Sets the new attachment on the Server and calls it's OnRep function. New Attachment may be invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentPoint_SetAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentPoint, nullptr, "SetAttachment", nullptr, nullptr, sizeof(WeaponAttachmentPoint_eventSetAttachment_Parms), Z_Construct_UFunction_UWeaponAttachmentPoint_SetAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentPoint_SetAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentPoint_SetAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentPoint_SetAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponAttachmentPoint_SetAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentPoint_SetAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics
	{
		struct WeaponAttachmentPoint_eventSpawnAttachment_Parms
		{
			const TSubclassOf<AWeaponAttachmentBase>  AttachmentClass;
			AWeaponAttachmentBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::NewProp_AttachmentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::NewProp_AttachmentClass = { "AttachmentClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentPoint_eventSpawnAttachment_Parms, AttachmentClass), Z_Construct_UClass_AWeaponAttachmentBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::NewProp_AttachmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::NewProp_AttachmentClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentPoint_eventSpawnAttachment_Parms, ReturnValue), Z_Construct_UClass_AWeaponAttachmentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::NewProp_AttachmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "AttachmentClass" },
		{ "Category", "Attachment" },
		{ "Comment", "// Spawns and sets attachment reference. Returns null if attachment is already set or if parameters are invalid.\n" },
		{ "DeterminesOutputType", "AttachmentClass" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h" },
		{ "ToolTip", "Spawns and sets attachment reference. Returns null if attachment is already set or if parameters are invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentPoint, nullptr, "SpawnAttachment", nullptr, nullptr, sizeof(WeaponAttachmentPoint_eventSpawnAttachment_Parms), Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponAttachmentPoint_NoRegister()
	{
		return UWeaponAttachmentPoint::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponAttachmentPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttachment_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttachment;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedAttachments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedAttachments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedAttachments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attachment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attachment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponAttachmentPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVisualizationSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponAttachmentPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponAttachmentPoint_AttachmentChanged, "AttachmentChanged" }, // 769149609
		{ &Z_Construct_UFunction_UWeaponAttachmentPoint_DestroyAttachment, "DestroyAttachment" }, // 2801928684
		{ &Z_Construct_UFunction_UWeaponAttachmentPoint_HasAuthority, "HasAuthority" }, // 1007779335
		{ &Z_Construct_UFunction_UWeaponAttachmentPoint_OnRep_Attachment, "OnRep_Attachment" }, // 20453604
		{ &Z_Construct_UFunction_UWeaponAttachmentPoint_SetAttachment, "SetAttachment" }, // 2417682681
		{ &Z_Construct_UFunction_UWeaponAttachmentPoint_SpawnAttachment, "SpawnAttachment" }, // 157543105
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponAttachmentPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Component Tick Events Physics Lod Asset User Data Collision Trigger PhysicsVolume" },
		{ "IncludePath", "WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_DefaultAttachment_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_DefaultAttachment = { "DefaultAttachment", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponAttachmentPoint, DefaultAttachment), Z_Construct_UClass_AWeaponAttachmentBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_DefaultAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_DefaultAttachment_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_AllowedAttachments_Inner = { "AllowedAttachments", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWeaponAttachmentBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_AllowedAttachments_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_AllowedAttachments = { "AllowedAttachments", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponAttachmentPoint, AllowedAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_AllowedAttachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_AllowedAttachments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_Attachment_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_Attachment = { "Attachment", "OnRep_Attachment", (EPropertyFlags)0x0020080100000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponAttachmentPoint, Attachment), Z_Construct_UClass_AWeaponAttachmentBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_Attachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_Attachment_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponAttachmentPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_DefaultAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_AllowedAttachments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_AllowedAttachments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentPoint_Statics::NewProp_Attachment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponAttachmentPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponAttachmentPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponAttachmentPoint_Statics::ClassParams = {
		&UWeaponAttachmentPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponAttachmentPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentPoint_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponAttachmentPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponAttachmentPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponAttachmentPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponAttachmentPoint, 1433756802);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UWeaponAttachmentPoint>()
	{
		return UWeaponAttachmentPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponAttachmentPoint(Z_Construct_UClass_UWeaponAttachmentPoint, &UWeaponAttachmentPoint::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UWeaponAttachmentPoint"), false, nullptr, nullptr, nullptr);

	void UWeaponAttachmentPoint::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Attachment(TEXT("Attachment"));

		const bool bIsValid = true
			&& Name_Attachment == ClassReps[(int32)ENetFields_Private::Attachment].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWeaponAttachmentPoint"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponAttachmentPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
