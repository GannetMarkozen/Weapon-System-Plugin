// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/Scripts/AimingScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimingScript() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAimingScript_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAimingScript();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponScript();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAimingScript::execMulti_StopAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multi_StopAiming_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimingScript::execServer_StopAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_StopAiming_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimingScript::execClient_StartAimingFailedPrediction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_StartAimingFailedPrediction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimingScript::execMulti_StartAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multi_StartAiming_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimingScript::execServer_StartAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_StartAiming_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimingScript::execAimingComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AimingComplete_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimingScript::execCanAim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAim_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimingScript::execStopAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimingScript::execStartAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimingScript::execSetupActionBinding)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupActionBinding(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	static FName NAME_UAimingScript_AimingComplete = FName(TEXT("AimingComplete"));
	void UAimingScript::AimingComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAimingScript_AimingComplete),NULL);
	}
	static FName NAME_UAimingScript_CanAim = FName(TEXT("CanAim"));
	bool UAimingScript::CanAim() const
	{
		AimingScript_eventCanAim_Parms Parms;
		const_cast<UAimingScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAimingScript_CanAim),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAimingScript_Client_StartAimingFailedPrediction = FName(TEXT("Client_StartAimingFailedPrediction"));
	void UAimingScript::Client_StartAimingFailedPrediction()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAimingScript_Client_StartAimingFailedPrediction),NULL);
	}
	static FName NAME_UAimingScript_Multi_StartAiming = FName(TEXT("Multi_StartAiming"));
	void UAimingScript::Multi_StartAiming()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAimingScript_Multi_StartAiming),NULL);
	}
	static FName NAME_UAimingScript_Multi_StopAiming = FName(TEXT("Multi_StopAiming"));
	void UAimingScript::Multi_StopAiming()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAimingScript_Multi_StopAiming),NULL);
	}
	static FName NAME_UAimingScript_Server_StartAiming = FName(TEXT("Server_StartAiming"));
	void UAimingScript::Server_StartAiming()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAimingScript_Server_StartAiming),NULL);
	}
	static FName NAME_UAimingScript_Server_StopAiming = FName(TEXT("Server_StopAiming"));
	void UAimingScript::Server_StopAiming()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAimingScript_Server_StopAiming),NULL);
	}
	void UAimingScript::StaticRegisterNativesUAimingScript()
	{
		UClass* Class = UAimingScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AimingComplete", &UAimingScript::execAimingComplete },
			{ "CanAim", &UAimingScript::execCanAim },
			{ "Client_StartAimingFailedPrediction", &UAimingScript::execClient_StartAimingFailedPrediction },
			{ "Multi_StartAiming", &UAimingScript::execMulti_StartAiming },
			{ "Multi_StopAiming", &UAimingScript::execMulti_StopAiming },
			{ "Server_StartAiming", &UAimingScript::execServer_StartAiming },
			{ "Server_StopAiming", &UAimingScript::execServer_StopAiming },
			{ "SetupActionBinding", &UAimingScript::execSetupActionBinding },
			{ "StartAiming", &UAimingScript::execStartAiming },
			{ "StopAiming", &UAimingScript::execStopAiming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAimingScript_AimingComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimingScript_AimingComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Aiming" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/AimingScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimingScript_AimingComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimingScript, nullptr, "AimingComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimingScript_AimingComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimingScript_AimingComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimingScript_AimingComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAimingScript_AimingComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimingScript_CanAim_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAimingScript_CanAim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AimingScript_eventCanAim_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAimingScript_CanAim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AimingScript_eventCanAim_Parms), &Z_Construct_UFunction_UAimingScript_CanAim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAimingScript_CanAim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAimingScript_CanAim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimingScript_CanAim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Aiming" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/AimingScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimingScript_CanAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimingScript, nullptr, "CanAim", nullptr, nullptr, sizeof(AimingScript_eventCanAim_Parms), Z_Construct_UFunction_UAimingScript_CanAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimingScript_CanAim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimingScript_CanAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimingScript_CanAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimingScript_CanAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAimingScript_CanAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimingScript_Client_StartAimingFailedPrediction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimingScript_Client_StartAimingFailedPrediction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/AimingScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimingScript_Client_StartAimingFailedPrediction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimingScript, nullptr, "Client_StartAimingFailedPrediction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimingScript_Client_StartAimingFailedPrediction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimingScript_Client_StartAimingFailedPrediction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimingScript_Client_StartAimingFailedPrediction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAimingScript_Client_StartAimingFailedPrediction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimingScript_Multi_StartAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimingScript_Multi_StartAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/AimingScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimingScript_Multi_StartAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimingScript, nullptr, "Multi_StartAiming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimingScript_Multi_StartAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimingScript_Multi_StartAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimingScript_Multi_StartAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAimingScript_Multi_StartAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimingScript_Multi_StopAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimingScript_Multi_StopAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/AimingScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimingScript_Multi_StopAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimingScript, nullptr, "Multi_StopAiming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimingScript_Multi_StopAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimingScript_Multi_StopAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimingScript_Multi_StopAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAimingScript_Multi_StopAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimingScript_Server_StartAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimingScript_Server_StartAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/AimingScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimingScript_Server_StartAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimingScript, nullptr, "Server_StartAiming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimingScript_Server_StartAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimingScript_Server_StartAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimingScript_Server_StartAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAimingScript_Server_StartAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimingScript_Server_StopAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimingScript_Server_StopAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/AimingScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimingScript_Server_StopAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimingScript, nullptr, "Server_StopAiming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimingScript_Server_StopAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimingScript_Server_StopAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimingScript_Server_StopAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAimingScript_Server_StopAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics
	{
		struct AimingScript_eventSetupActionBinding_Parms
		{
			FName Input;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AimingScript_eventSetupActionBinding_Parms, Input), METADATA_PARAMS(Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Input" },
		{ "Category", "Script|Aiming" },
		{ "Comment", "// The input will bind to the Start Aiming and Stop Aiming events\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/AimingScript.h" },
		{ "ToolTip", "The input will bind to the Start Aiming and Stop Aiming events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimingScript, nullptr, "SetupActionBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::AimingScript_eventSetupActionBinding_Parms), Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimingScript_SetupActionBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAimingScript_SetupActionBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimingScript_StartAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimingScript_StartAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Aiming" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/AimingScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimingScript_StartAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimingScript, nullptr, "StartAiming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimingScript_StartAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimingScript_StartAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimingScript_StartAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAimingScript_StartAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimingScript_StopAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimingScript_StopAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Aiming" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/AimingScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimingScript_StopAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimingScript, nullptr, "StopAiming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimingScript_StopAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimingScript_StopAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimingScript_StopAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAimingScript_StopAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAimingScript);
	UClass* Z_Construct_UClass_UAimingScript_NoRegister()
	{
		return UAimingScript::StaticClass();
	}
	struct Z_Construct_UClass_UAimingScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimingCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimingScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeaponScript,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAimingScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAimingScript_AimingComplete, "AimingComplete" }, // 106347172
		{ &Z_Construct_UFunction_UAimingScript_CanAim, "CanAim" }, // 277176896
		{ &Z_Construct_UFunction_UAimingScript_Client_StartAimingFailedPrediction, "Client_StartAimingFailedPrediction" }, // 3716364777
		{ &Z_Construct_UFunction_UAimingScript_Multi_StartAiming, "Multi_StartAiming" }, // 1781642955
		{ &Z_Construct_UFunction_UAimingScript_Multi_StopAiming, "Multi_StopAiming" }, // 641442082
		{ &Z_Construct_UFunction_UAimingScript_Server_StartAiming, "Server_StartAiming" }, // 268617342
		{ &Z_Construct_UFunction_UAimingScript_Server_StopAiming, "Server_StopAiming" }, // 1577048312
		{ &Z_Construct_UFunction_UAimingScript_SetupActionBinding, "SetupActionBinding" }, // 1591900295
		{ &Z_Construct_UFunction_UAimingScript_StartAiming, "StartAiming" }, // 2971421541
		{ &Z_Construct_UFunction_UAimingScript_StopAiming, "StopAiming" }, // 1757230761
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimingScript_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponSystem/Weapons/Scripts/AimingScript.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/AimingScript.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimingScript_Statics::NewProp_AimingCurve_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/AimingScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAimingScript_Statics::NewProp_AimingCurve = { "AimingCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimingScript, AimingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAimingScript_Statics::NewProp_AimingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimingScript_Statics::NewProp_AimingCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimingScript_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/AimingScript.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimingScript_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimingScript, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UAimingScript_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimingScript_Statics::NewProp_PlayRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAimingScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimingScript_Statics::NewProp_AimingCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimingScript_Statics::NewProp_PlayRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimingScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimingScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAimingScript_Statics::ClassParams = {
		&UAimingScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAimingScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAimingScript_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAimingScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimingScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimingScript()
	{
		if (!Z_Registration_Info_UClass_UAimingScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAimingScript.OuterSingleton, Z_Construct_UClass_UAimingScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAimingScript.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UAimingScript>()
	{
		return UAimingScript::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimingScript);
	struct Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAimingScript, UAimingScript::StaticClass, TEXT("UAimingScript"), &Z_Registration_Info_UClass_UAimingScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAimingScript), 1986299768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_3756947759(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Scripts_AimingScript_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
