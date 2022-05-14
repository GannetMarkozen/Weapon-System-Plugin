// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetupAttachmentsScriptBase() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_USetupAttachmentsScriptBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_USetupAttachmentsScriptBase();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponScript();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USetupAttachmentsScriptBase::execDestroyAttachmentWidgetsByClass)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UUserWidget> ,Z_Param_Out_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyAttachmentWidgetsByClass(Z_Param_Out_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USetupAttachmentsScriptBase::execSpawnAttachmentWidgets)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UUserWidget> ,Z_Param_Out_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UWidgetComponent*>*)Z_Param__Result=P_THIS->SpawnAttachmentWidgets(Z_Param_Out_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USetupAttachmentsScriptBase::execOnRep_IsAttaching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsAttaching();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USetupAttachmentsScriptBase::execServer_SetupAttachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetupAttachments_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USetupAttachmentsScriptBase::execSetupAttachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupAttachments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USetupAttachmentsScriptBase::execTimelineProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineProgress(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USetupAttachmentsScriptBase::execSetupActivationBinding)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InputName);
		P_GET_PROPERTY(FByteProperty,Z_Param_InputEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupActivationBinding(Z_Param_Out_InputName,EInputEvent(Z_Param_InputEvent));
		P_NATIVE_END;
	}
	static FName NAME_USetupAttachmentsScriptBase_BP_TimelineBeginning = FName(TEXT("BP_TimelineBeginning"));
	void USetupAttachmentsScriptBase::BP_TimelineBeginning()
	{
		ProcessEvent(FindFunctionChecked(NAME_USetupAttachmentsScriptBase_BP_TimelineBeginning),NULL);
	}
	static FName NAME_USetupAttachmentsScriptBase_BP_TimelineEnd = FName(TEXT("BP_TimelineEnd"));
	void USetupAttachmentsScriptBase::BP_TimelineEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_USetupAttachmentsScriptBase_BP_TimelineEnd),NULL);
	}
	static FName NAME_USetupAttachmentsScriptBase_BP_TimelinePlay = FName(TEXT("BP_TimelinePlay"));
	void USetupAttachmentsScriptBase::BP_TimelinePlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_USetupAttachmentsScriptBase_BP_TimelinePlay),NULL);
	}
	static FName NAME_USetupAttachmentsScriptBase_BP_TimelineReverse = FName(TEXT("BP_TimelineReverse"));
	void USetupAttachmentsScriptBase::BP_TimelineReverse()
	{
		ProcessEvent(FindFunctionChecked(NAME_USetupAttachmentsScriptBase_BP_TimelineReverse),NULL);
	}
	static FName NAME_USetupAttachmentsScriptBase_Server_SetupAttachments = FName(TEXT("Server_SetupAttachments"));
	void USetupAttachmentsScriptBase::Server_SetupAttachments()
	{
		ProcessEvent(FindFunctionChecked(NAME_USetupAttachmentsScriptBase_Server_SetupAttachments),NULL);
	}
	void USetupAttachmentsScriptBase::StaticRegisterNativesUSetupAttachmentsScriptBase()
	{
		UClass* Class = USetupAttachmentsScriptBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyAttachmentWidgetsByClass", &USetupAttachmentsScriptBase::execDestroyAttachmentWidgetsByClass },
			{ "OnRep_IsAttaching", &USetupAttachmentsScriptBase::execOnRep_IsAttaching },
			{ "Server_SetupAttachments", &USetupAttachmentsScriptBase::execServer_SetupAttachments },
			{ "SetupActivationBinding", &USetupAttachmentsScriptBase::execSetupActivationBinding },
			{ "SetupAttachments", &USetupAttachmentsScriptBase::execSetupAttachments },
			{ "SpawnAttachmentWidgets", &USetupAttachmentsScriptBase::execSpawnAttachmentWidgets },
			{ "TimelineProgress", &USetupAttachmentsScriptBase::execTimelineProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineBeginning_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineBeginning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Setup Attachments" },
		{ "DisplayName", "Timeline Beginning" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineBeginning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetupAttachmentsScriptBase, nullptr, "BP_TimelineBeginning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineBeginning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineBeginning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineBeginning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineBeginning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Setup Attachments" },
		{ "DisplayName", "Timeline End" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetupAttachmentsScriptBase, nullptr, "BP_TimelineEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelinePlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelinePlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Setup Attachments" },
		{ "DisplayName", "Timeline Play" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelinePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetupAttachmentsScriptBase, nullptr, "BP_TimelinePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelinePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelinePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelinePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelinePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineReverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineReverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Setup Attachments" },
		{ "DisplayName", "Timeline Reverse" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetupAttachmentsScriptBase, nullptr, "BP_TimelineReverse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineReverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineReverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineReverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics
	{
		struct SetupAttachmentsScriptBase_eventDestroyAttachmentWidgetsByClass_Parms
		{
			const TSubclassOf<UUserWidget>  Class;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetupAttachmentsScriptBase_eventDestroyAttachmentWidgetsByClass_Parms, Class), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Class" },
		{ "Category", "Script|Setup Attachments" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetupAttachmentsScriptBase, nullptr, "DestroyAttachmentWidgetsByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::SetupAttachmentsScriptBase_eventDestroyAttachmentWidgetsByClass_Parms), Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USetupAttachmentsScriptBase_OnRep_IsAttaching_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_OnRep_IsAttaching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USetupAttachmentsScriptBase_OnRep_IsAttaching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetupAttachmentsScriptBase, nullptr, "OnRep_IsAttaching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_OnRep_IsAttaching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_OnRep_IsAttaching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetupAttachmentsScriptBase_OnRep_IsAttaching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USetupAttachmentsScriptBase_OnRep_IsAttaching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USetupAttachmentsScriptBase_Server_SetupAttachments_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_Server_SetupAttachments_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USetupAttachmentsScriptBase_Server_SetupAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetupAttachmentsScriptBase, nullptr, "Server_SetupAttachments", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_Server_SetupAttachments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_Server_SetupAttachments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetupAttachmentsScriptBase_Server_SetupAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USetupAttachmentsScriptBase_Server_SetupAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics
	{
		struct SetupAttachmentsScriptBase_eventSetupActivationBinding_Parms
		{
			FName InputName;
			TEnumAsByte<EInputEvent> InputEvent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputEvent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetupAttachmentsScriptBase_eventSetupActivationBinding_Parms, InputName), METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetupAttachmentsScriptBase_eventSetupActivationBinding_Parms, InputEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent_MetaData)) }; // 1054153585
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InputName" },
		{ "Category", "Script|Setup Attachments" },
		{ "Comment", "// Binds input to Setup Attachments\n" },
		{ "CPP_Default_InputEvent", "IE_Pressed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
		{ "ToolTip", "Binds input to Setup Attachments" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetupAttachmentsScriptBase, nullptr, "SetupActivationBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::SetupAttachmentsScriptBase_eventSetupActivationBinding_Parms), Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupAttachments_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupAttachments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Setup Attachments" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetupAttachmentsScriptBase, nullptr, "SetupAttachments", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupAttachments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupAttachments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics
	{
		struct SetupAttachmentsScriptBase_eventSpawnAttachmentWidgets_Parms
		{
			const TSubclassOf<UUserWidget>  Class;
			TArray<UWidgetComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetupAttachmentsScriptBase_eventSpawnAttachmentWidgets_Parms, Class), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetupAttachmentsScriptBase_eventSpawnAttachmentWidgets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Class" },
		{ "Category", "Script|Setup Attachments" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetupAttachmentsScriptBase, nullptr, "SpawnAttachmentWidgets", nullptr, nullptr, sizeof(Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::SetupAttachmentsScriptBase_eventSpawnAttachmentWidgets_Parms), Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics
	{
		struct SetupAttachmentsScriptBase_eventTimelineProgress_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetupAttachmentsScriptBase_eventTimelineProgress_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetupAttachmentsScriptBase, nullptr, "TimelineProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::SetupAttachmentsScriptBase_eventTimelineProgress_Parms), Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USetupAttachmentsScriptBase);
	UClass* Z_Construct_UClass_USetupAttachmentsScriptBase_NoRegister()
	{
		return USetupAttachmentsScriptBase::StaticClass();
	}
	struct Z_Construct_UClass_USetupAttachmentsScriptBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttaching_MetaData[];
#endif
		static void NewProp_bIsAttaching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttaching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoseTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPoseTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeaponScript,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineBeginning, "BP_TimelineBeginning" }, // 2453060250
		{ &Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineEnd, "BP_TimelineEnd" }, // 1627403349
		{ &Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelinePlay, "BP_TimelinePlay" }, // 759679342
		{ &Z_Construct_UFunction_USetupAttachmentsScriptBase_BP_TimelineReverse, "BP_TimelineReverse" }, // 2709056154
		{ &Z_Construct_UFunction_USetupAttachmentsScriptBase_DestroyAttachmentWidgetsByClass, "DestroyAttachmentWidgetsByClass" }, // 3014943119
		{ &Z_Construct_UFunction_USetupAttachmentsScriptBase_OnRep_IsAttaching, "OnRep_IsAttaching" }, // 991814856
		{ &Z_Construct_UFunction_USetupAttachmentsScriptBase_Server_SetupAttachments, "Server_SetupAttachments" }, // 4156151865
		{ &Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupActivationBinding, "SetupActivationBinding" }, // 1947702015
		{ &Z_Construct_UFunction_USetupAttachmentsScriptBase_SetupAttachments, "SetupAttachments" }, // 722589710
		{ &Z_Construct_UFunction_USetupAttachmentsScriptBase_SpawnAttachmentWidgets, "SpawnAttachmentWidgets" }, // 3446699146
		{ &Z_Construct_UFunction_USetupAttachmentsScriptBase_TimelineProgress, "TimelineProgress" }, // 3438140744
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_bIsAttaching_MetaData[] = {
		{ "Category", "Script|Setup Attachments" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	void Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_bIsAttaching_SetBit(void* Obj)
	{
		((USetupAttachmentsScriptBase*)Obj)->bIsAttaching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_bIsAttaching = { "bIsAttaching", "OnRep_IsAttaching", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USetupAttachmentsScriptBase), &Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_bIsAttaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_bIsAttaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_bIsAttaching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetupAttachmentsScriptBase, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_TargetPoseTransform_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_TargetPoseTransform = { "TargetPoseTransform", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetupAttachmentsScriptBase, TargetPoseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_TargetPoseTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_TargetPoseTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetupAttachmentsScriptBase, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetupAttachmentsScriptBase, PlayRate), METADATA_PARAMS(Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_PlayRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_bIsAttaching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_TargetPoseTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::NewProp_PlayRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetupAttachmentsScriptBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::ClassParams = {
		&USetupAttachmentsScriptBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USetupAttachmentsScriptBase()
	{
		if (!Z_Registration_Info_UClass_USetupAttachmentsScriptBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USetupAttachmentsScriptBase.OuterSingleton, Z_Construct_UClass_USetupAttachmentsScriptBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USetupAttachmentsScriptBase.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<USetupAttachmentsScriptBase>()
	{
		return USetupAttachmentsScriptBase::StaticClass();
	}

	void USetupAttachmentsScriptBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsAttaching(TEXT("bIsAttaching"));

		const bool bIsValid = true
			&& Name_bIsAttaching == ClassReps[(int32)ENetFields_Private::bIsAttaching].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USetupAttachmentsScriptBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USetupAttachmentsScriptBase);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USetupAttachmentsScriptBase, USetupAttachmentsScriptBase::StaticClass, TEXT("USetupAttachmentsScriptBase"), &Z_Registration_Info_UClass_USetupAttachmentsScriptBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USetupAttachmentsScriptBase), 2211460510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_4093763626(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_SetupAttachmentsScriptBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
