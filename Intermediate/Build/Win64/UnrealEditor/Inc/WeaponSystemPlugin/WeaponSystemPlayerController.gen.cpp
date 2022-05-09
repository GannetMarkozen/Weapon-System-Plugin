// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Character/NetworkPrediction/WeaponSystemPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSystemPlayerController() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FNetParams();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponSystemPlayerController_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponSystemPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetParams;
class UScriptStruct* FNetParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetParams, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("NetParams"));
	}
	return Z_Registration_Info_UScriptStruct_NetParams.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FNetParams>()
{
	return FNetParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n *\x09""A struct designed for Net-Serializing any number of parameters for a UFUNCTION.\n *\x09Used in the AWeaponSystemPlayerController for calling RPC's on Objects with no\n *\x09local net connection through the designated Net Owner.\n *\x09NOTE: Very finnicky. Can't seem to copy \"plain-old-data\" values. Works well-enough...\n */" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/NetworkPrediction/WeaponSystemPlayerController.h" },
		{ "ToolTip", "*     A struct designed for Net-Serializing any number of parameters for a UFUNCTION.\n*     Used in the AWeaponSystemPlayerController for calling RPC's on Objects with no\n*     local net connection through the designated Net Owner.\n*     NOTE: Very finnicky. Can't seem to copy \"plain-old-data\" values. Works well-enough..." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetParams>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"NetParams",
		sizeof(FNetParams),
		alignof(FNetParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetParams()
	{
		if (!Z_Registration_Info_UScriptStruct_NetParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetParams.InnerSingleton, Z_Construct_UScriptStruct_FNetParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetParams.InnerSingleton;
	}
	DEFINE_FUNCTION(AWeaponSystemPlayerController::execClient_Unreliable_CallRemoteFunctionOnObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_STRUCT(FNetParams,Z_Param_NetParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_Unreliable_CallRemoteFunctionOnObject_Implementation(Z_Param_Target,Z_Param_NetParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponSystemPlayerController::execClient_Reliable_CallRemoteFunctionOnObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_STRUCT(FNetParams,Z_Param_NetParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_Reliable_CallRemoteFunctionOnObject_Implementation(Z_Param_Target,Z_Param_NetParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponSystemPlayerController::execServer_Unreliable_CallRemoteFunctionOnObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_STRUCT(FNetParams,Z_Param_NetParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_Unreliable_CallRemoteFunctionOnObject_Implementation(Z_Param_Target,Z_Param_NetParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponSystemPlayerController::execServer_Reliable_CallRemoteFunctionOnObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_STRUCT(FNetParams,Z_Param_NetParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_Reliable_CallRemoteFunctionOnObject_Implementation(Z_Param_Target,Z_Param_NetParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponSystemPlayerController::execStaticGetOwningPlayerController)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponSystemPlayerController**)Z_Param__Result=AWeaponSystemPlayerController::StaticGetOwningPlayerController(Z_Param_Target);
		P_NATIVE_END;
	}
	static FName NAME_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject = FName(TEXT("Client_Reliable_CallRemoteFunctionOnObject"));
	void AWeaponSystemPlayerController::Client_Reliable_CallRemoteFunctionOnObject(UObject* Target, FNetParams const& NetParams)
	{
		WeaponSystemPlayerController_eventClient_Reliable_CallRemoteFunctionOnObject_Parms Parms;
		Parms.Target=Target;
		Parms.NetParams=NetParams;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject),&Parms);
	}
	static FName NAME_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject = FName(TEXT("Client_Unreliable_CallRemoteFunctionOnObject"));
	void AWeaponSystemPlayerController::Client_Unreliable_CallRemoteFunctionOnObject(UObject* Target, FNetParams const& NetParams)
	{
		WeaponSystemPlayerController_eventClient_Unreliable_CallRemoteFunctionOnObject_Parms Parms;
		Parms.Target=Target;
		Parms.NetParams=NetParams;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject),&Parms);
	}
	static FName NAME_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject = FName(TEXT("Server_Reliable_CallRemoteFunctionOnObject"));
	void AWeaponSystemPlayerController::Server_Reliable_CallRemoteFunctionOnObject(UObject* Target, FNetParams const& NetParams)
	{
		WeaponSystemPlayerController_eventServer_Reliable_CallRemoteFunctionOnObject_Parms Parms;
		Parms.Target=Target;
		Parms.NetParams=NetParams;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject),&Parms);
	}
	static FName NAME_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject = FName(TEXT("Server_Unreliable_CallRemoteFunctionOnObject"));
	void AWeaponSystemPlayerController::Server_Unreliable_CallRemoteFunctionOnObject(UObject* Target, FNetParams const& NetParams)
	{
		WeaponSystemPlayerController_eventServer_Unreliable_CallRemoteFunctionOnObject_Parms Parms;
		Parms.Target=Target;
		Parms.NetParams=NetParams;
		ProcessEvent(FindFunctionChecked(NAME_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject),&Parms);
	}
	void AWeaponSystemPlayerController::StaticRegisterNativesAWeaponSystemPlayerController()
	{
		UClass* Class = AWeaponSystemPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_Reliable_CallRemoteFunctionOnObject", &AWeaponSystemPlayerController::execClient_Reliable_CallRemoteFunctionOnObject },
			{ "Client_Unreliable_CallRemoteFunctionOnObject", &AWeaponSystemPlayerController::execClient_Unreliable_CallRemoteFunctionOnObject },
			{ "Server_Reliable_CallRemoteFunctionOnObject", &AWeaponSystemPlayerController::execServer_Reliable_CallRemoteFunctionOnObject },
			{ "Server_Unreliable_CallRemoteFunctionOnObject", &AWeaponSystemPlayerController::execServer_Unreliable_CallRemoteFunctionOnObject },
			{ "StaticGetOwningPlayerController", &AWeaponSystemPlayerController::execStaticGetOwningPlayerController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemPlayerController_eventClient_Reliable_CallRemoteFunctionOnObject_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams = { "NetParams", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemPlayerController_eventClient_Reliable_CallRemoteFunctionOnObject_Parms, NetParams), Z_Construct_UScriptStruct_FNetParams, METADATA_PARAMS(Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams_MetaData)) }; // 396133085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/NetworkPrediction/WeaponSystemPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponSystemPlayerController, nullptr, "Client_Reliable_CallRemoteFunctionOnObject", nullptr, nullptr, sizeof(WeaponSystemPlayerController_eventClient_Reliable_CallRemoteFunctionOnObject_Parms), Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemPlayerController_eventClient_Unreliable_CallRemoteFunctionOnObject_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams = { "NetParams", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemPlayerController_eventClient_Unreliable_CallRemoteFunctionOnObject_Parms, NetParams), Z_Construct_UScriptStruct_FNetParams, METADATA_PARAMS(Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams_MetaData)) }; // 396133085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/NetworkPrediction/WeaponSystemPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponSystemPlayerController, nullptr, "Client_Unreliable_CallRemoteFunctionOnObject", nullptr, nullptr, sizeof(WeaponSystemPlayerController_eventClient_Unreliable_CallRemoteFunctionOnObject_Parms), Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemPlayerController_eventServer_Reliable_CallRemoteFunctionOnObject_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams = { "NetParams", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemPlayerController_eventServer_Reliable_CallRemoteFunctionOnObject_Parms, NetParams), Z_Construct_UScriptStruct_FNetParams, METADATA_PARAMS(Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams_MetaData)) }; // 396133085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/NetworkPrediction/WeaponSystemPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponSystemPlayerController, nullptr, "Server_Reliable_CallRemoteFunctionOnObject", nullptr, nullptr, sizeof(WeaponSystemPlayerController_eventServer_Reliable_CallRemoteFunctionOnObject_Parms), Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemPlayerController_eventServer_Unreliable_CallRemoteFunctionOnObject_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams = { "NetParams", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemPlayerController_eventServer_Unreliable_CallRemoteFunctionOnObject_Parms, NetParams), Z_Construct_UScriptStruct_FNetParams, METADATA_PARAMS(Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams_MetaData)) }; // 396133085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::NewProp_NetParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/NetworkPrediction/WeaponSystemPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponSystemPlayerController, nullptr, "Server_Unreliable_CallRemoteFunctionOnObject", nullptr, nullptr, sizeof(WeaponSystemPlayerController_eventServer_Unreliable_CallRemoteFunctionOnObject_Parms), Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics
	{
		struct WeaponSystemPlayerController_eventStaticGetOwningPlayerController_Parms
		{
			AActor* Target;
			AWeaponSystemPlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemPlayerController_eventStaticGetOwningPlayerController_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemPlayerController_eventStaticGetOwningPlayerController_Parms, ReturnValue), Z_Construct_UClass_AWeaponSystemPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Get Owning Player Controller" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/NetworkPrediction/WeaponSystemPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponSystemPlayerController, nullptr, "StaticGetOwningPlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics::WeaponSystemPlayerController_eventStaticGetOwningPlayerController_Parms), Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponSystemPlayerController);
	UClass* Z_Construct_UClass_AWeaponSystemPlayerController_NoRegister()
	{
		return AWeaponSystemPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponSystemPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponSystemPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponSystemPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Reliable_CallRemoteFunctionOnObject, "Client_Reliable_CallRemoteFunctionOnObject" }, // 660875100
		{ &Z_Construct_UFunction_AWeaponSystemPlayerController_Client_Unreliable_CallRemoteFunctionOnObject, "Client_Unreliable_CallRemoteFunctionOnObject" }, // 1894635551
		{ &Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Reliable_CallRemoteFunctionOnObject, "Server_Reliable_CallRemoteFunctionOnObject" }, // 2369561340
		{ &Z_Construct_UFunction_AWeaponSystemPlayerController_Server_Unreliable_CallRemoteFunctionOnObject, "Server_Unreliable_CallRemoteFunctionOnObject" }, // 2822091145
		{ &Z_Construct_UFunction_AWeaponSystemPlayerController_StaticGetOwningPlayerController, "StaticGetOwningPlayerController" }, // 4111674088
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponSystemPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "WeaponSystem/Character/NetworkPrediction/WeaponSystemPlayerController.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/NetworkPrediction/WeaponSystemPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponSystemPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponSystemPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponSystemPlayerController_Statics::ClassParams = {
		&AWeaponSystemPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponSystemPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponSystemPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponSystemPlayerController()
	{
		if (!Z_Registration_Info_UClass_AWeaponSystemPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponSystemPlayerController.OuterSingleton, Z_Construct_UClass_AWeaponSystemPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeaponSystemPlayerController.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<AWeaponSystemPlayerController>()
	{
		return AWeaponSystemPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponSystemPlayerController);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_NetworkPrediction_WeaponSystemPlayerController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_NetworkPrediction_WeaponSystemPlayerController_h_Statics::ScriptStructInfo[] = {
		{ FNetParams::StaticStruct, Z_Construct_UScriptStruct_FNetParams_Statics::NewStructOps, TEXT("NetParams"), &Z_Registration_Info_UScriptStruct_NetParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetParams), 396133085U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_NetworkPrediction_WeaponSystemPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponSystemPlayerController, AWeaponSystemPlayerController::StaticClass, TEXT("AWeaponSystemPlayerController"), &Z_Registration_Info_UClass_AWeaponSystemPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponSystemPlayerController), 2020803977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_NetworkPrediction_WeaponSystemPlayerController_h_381585446(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_NetworkPrediction_WeaponSystemPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_NetworkPrediction_WeaponSystemPlayerController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_NetworkPrediction_WeaponSystemPlayerController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_NetworkPrediction_WeaponSystemPlayerController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
