// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCycleSightsScript() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UCycleSightsScriptBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UCycleSightsScriptBase();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponScript();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_ASightsAttachment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCycleSightsScriptBase::execOnRep_CurrentSights)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentSights_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCycleSightsScriptBase::execServer_CycleSights)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_CycleSights_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCycleSightsScriptBase::execCycleSights)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleSights_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCycleSightsScriptBase::execTimelineProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineProgress_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCycleSightsScriptBase::execSetupActivationBinding)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CycleInput);
		P_GET_PROPERTY(FByteProperty,Z_Param_InputEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupActivationBinding(Z_Param_Out_CycleInput,EInputEvent(Z_Param_InputEvent));
		P_NATIVE_END;
	}
	static FName NAME_UCycleSightsScriptBase_CycleSights = FName(TEXT("CycleSights"));
	void UCycleSightsScriptBase::CycleSights()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCycleSightsScriptBase_CycleSights),NULL);
	}
	static FName NAME_UCycleSightsScriptBase_OnRep_CurrentSights = FName(TEXT("OnRep_CurrentSights"));
	void UCycleSightsScriptBase::OnRep_CurrentSights()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCycleSightsScriptBase_OnRep_CurrentSights),NULL);
	}
	static FName NAME_UCycleSightsScriptBase_Server_CycleSights = FName(TEXT("Server_CycleSights"));
	void UCycleSightsScriptBase::Server_CycleSights()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCycleSightsScriptBase_Server_CycleSights),NULL);
	}
	static FName NAME_UCycleSightsScriptBase_TimelineEnd = FName(TEXT("TimelineEnd"));
	void UCycleSightsScriptBase::TimelineEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCycleSightsScriptBase_TimelineEnd),NULL);
	}
	static FName NAME_UCycleSightsScriptBase_TimelineProgress = FName(TEXT("TimelineProgress"));
	void UCycleSightsScriptBase::TimelineProgress(const float Value)
	{
		CycleSightsScriptBase_eventTimelineProgress_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UCycleSightsScriptBase_TimelineProgress),&Parms);
	}
	static FName NAME_UCycleSightsScriptBase_TimelineStart = FName(TEXT("TimelineStart"));
	void UCycleSightsScriptBase::TimelineStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCycleSightsScriptBase_TimelineStart),NULL);
	}
	void UCycleSightsScriptBase::StaticRegisterNativesUCycleSightsScriptBase()
	{
		UClass* Class = UCycleSightsScriptBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CycleSights", &UCycleSightsScriptBase::execCycleSights },
			{ "OnRep_CurrentSights", &UCycleSightsScriptBase::execOnRep_CurrentSights },
			{ "Server_CycleSights", &UCycleSightsScriptBase::execServer_CycleSights },
			{ "SetupActivationBinding", &UCycleSightsScriptBase::execSetupActivationBinding },
			{ "TimelineProgress", &UCycleSightsScriptBase::execTimelineProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCycleSightsScriptBase_CycleSights_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCycleSightsScriptBase_CycleSights_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Cycle Sights" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCycleSightsScriptBase_CycleSights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCycleSightsScriptBase, nullptr, "CycleSights", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCycleSightsScriptBase_CycleSights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCycleSightsScriptBase_CycleSights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCycleSightsScriptBase_CycleSights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCycleSightsScriptBase_CycleSights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCycleSightsScriptBase_OnRep_CurrentSights_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCycleSightsScriptBase_OnRep_CurrentSights_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Cycle Sights" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCycleSightsScriptBase_OnRep_CurrentSights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCycleSightsScriptBase, nullptr, "OnRep_CurrentSights", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCycleSightsScriptBase_OnRep_CurrentSights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCycleSightsScriptBase_OnRep_CurrentSights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCycleSightsScriptBase_OnRep_CurrentSights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCycleSightsScriptBase_OnRep_CurrentSights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCycleSightsScriptBase_Server_CycleSights_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCycleSightsScriptBase_Server_CycleSights_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCycleSightsScriptBase_Server_CycleSights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCycleSightsScriptBase, nullptr, "Server_CycleSights", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCycleSightsScriptBase_Server_CycleSights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCycleSightsScriptBase_Server_CycleSights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCycleSightsScriptBase_Server_CycleSights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCycleSightsScriptBase_Server_CycleSights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics
	{
		struct CycleSightsScriptBase_eventSetupActivationBinding_Parms
		{
			FName CycleInput;
			TEnumAsByte<EInputEvent> InputEvent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CycleInput_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CycleInput;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::NewProp_CycleInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::NewProp_CycleInput = { "CycleInput", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CycleSightsScriptBase_eventSetupActivationBinding_Parms, CycleInput), METADATA_PARAMS(Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::NewProp_CycleInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::NewProp_CycleInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CycleSightsScriptBase_eventSetupActivationBinding_Parms, InputEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::NewProp_CycleInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "CycleInput" },
		{ "Category", "Script|Cycle Sights" },
		{ "Comment", "// Binds input to the CycleSights function. Should be called on event Setup Input\n" },
		{ "CPP_Default_InputEvent", "IE_Pressed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
		{ "ToolTip", "Binds input to the CycleSights function. Should be called on event Setup Input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCycleSightsScriptBase, nullptr, "SetupActivationBinding", nullptr, nullptr, sizeof(CycleSightsScriptBase_eventSetupActivationBinding_Parms), Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCycleSightsScriptBase_TimelineEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCycleSightsScriptBase_TimelineEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Cycle Sights" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCycleSightsScriptBase_TimelineEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCycleSightsScriptBase, nullptr, "TimelineEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCycleSightsScriptBase_TimelineEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCycleSightsScriptBase_TimelineEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCycleSightsScriptBase_TimelineEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCycleSightsScriptBase_TimelineEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CycleSightsScriptBase_eventTimelineProgress_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Cycle Sights" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCycleSightsScriptBase, nullptr, "TimelineProgress", nullptr, nullptr, sizeof(CycleSightsScriptBase_eventTimelineProgress_Parms), Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCycleSightsScriptBase_TimelineStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCycleSightsScriptBase_TimelineStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Cycle Sights" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCycleSightsScriptBase_TimelineStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCycleSightsScriptBase, nullptr, "TimelineStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCycleSightsScriptBase_TimelineStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCycleSightsScriptBase_TimelineStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCycleSightsScriptBase_TimelineStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCycleSightsScriptBase_TimelineStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCycleSightsScriptBase_NoRegister()
	{
		return UCycleSightsScriptBase::StaticClass();
	}
	struct Z_Construct_UClass_UCycleSightsScriptBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSights_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CycleCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CycleCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCycleSightsScriptBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeaponScript,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCycleSightsScriptBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCycleSightsScriptBase_CycleSights, "CycleSights" }, // 3596047173
		{ &Z_Construct_UFunction_UCycleSightsScriptBase_OnRep_CurrentSights, "OnRep_CurrentSights" }, // 1501701468
		{ &Z_Construct_UFunction_UCycleSightsScriptBase_Server_CycleSights, "Server_CycleSights" }, // 1112637659
		{ &Z_Construct_UFunction_UCycleSightsScriptBase_SetupActivationBinding, "SetupActivationBinding" }, // 1340105259
		{ &Z_Construct_UFunction_UCycleSightsScriptBase_TimelineEnd, "TimelineEnd" }, // 455724068
		{ &Z_Construct_UFunction_UCycleSightsScriptBase_TimelineProgress, "TimelineProgress" }, // 3807500324
		{ &Z_Construct_UFunction_UCycleSightsScriptBase_TimelineStart, "TimelineStart" }, // 4253294064
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCycleSightsScriptBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Cycle-Sights Script Base" },
		{ "IncludePath", "WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_TargetRelativeTransform_MetaData[] = {
		{ "Category", "Script|Cycle Sights" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_TargetRelativeTransform = { "TargetRelativeTransform", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCycleSightsScriptBase, TargetRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_TargetRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_TargetRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_OldRelativeTransform_MetaData[] = {
		{ "Category", "Script|Cycle Sights" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_OldRelativeTransform = { "OldRelativeTransform", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCycleSightsScriptBase, OldRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_OldRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_OldRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_CurrentSights_MetaData[] = {
		{ "Category", "Script|Cycle Sights" },
		{ "Comment", "// Configurations\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
		{ "ToolTip", "Configurations" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_CurrentSights = { "CurrentSights", "OnRep_CurrentSights", (EPropertyFlags)0x0020080100000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCycleSightsScriptBase, CurrentSights), Z_Construct_UClass_ASightsAttachment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_CurrentSights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_CurrentSights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_CycleCurve_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_CycleCurve = { "CycleCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCycleSightsScriptBase, CycleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_CycleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_CycleCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/CycleSightsScript.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCycleSightsScriptBase, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_PlayRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCycleSightsScriptBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_TargetRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_OldRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_CurrentSights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_CycleCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCycleSightsScriptBase_Statics::NewProp_PlayRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCycleSightsScriptBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCycleSightsScriptBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCycleSightsScriptBase_Statics::ClassParams = {
		&UCycleSightsScriptBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCycleSightsScriptBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCycleSightsScriptBase_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCycleSightsScriptBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCycleSightsScriptBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCycleSightsScriptBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCycleSightsScriptBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCycleSightsScriptBase, 2322105723);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UCycleSightsScriptBase>()
	{
		return UCycleSightsScriptBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCycleSightsScriptBase(Z_Construct_UClass_UCycleSightsScriptBase, &UCycleSightsScriptBase::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UCycleSightsScriptBase"), false, nullptr, nullptr, nullptr);

	void UCycleSightsScriptBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentSights(TEXT("CurrentSights"));

		const bool bIsValid = true
			&& Name_CurrentSights == ClassReps[(int32)ENetFields_Private::CurrentSights].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCycleSightsScriptBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCycleSightsScriptBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
