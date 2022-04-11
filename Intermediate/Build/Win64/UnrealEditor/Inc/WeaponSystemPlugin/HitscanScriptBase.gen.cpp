// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitscanScriptBase() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UHitscanScriptBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UHitscanScriptBase();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponScript();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRecoilParams();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_USemiAutoHitscanScriptBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_USemiAutoHitscanScriptBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UBurstFireHitscanScriptBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UBurstFireHitscanScriptBase();
// End Cross Module References
	DEFINE_FUNCTION(UHitscanScriptBase::execCalculateSpreadMagnitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateSpreadMagnitude_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHitscanScriptBase::execPlayImpactEffect)
	{
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_Hits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayImpactEffect_Implementation(Z_Param_Out_Hits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHitscanScriptBase::execPlayFiringEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFiringEffect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHitscanScriptBase::execMulti_Hitscan)
	{
		P_GET_TARRAY(FHitResult,Z_Param_Hits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multi_Hitscan_Implementation(Z_Param_Hits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHitscanScriptBase::execServer_Hitscan)
	{
		P_GET_TARRAY(FHitResult,Z_Param_Hits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_Hitscan_Implementation(Z_Param_Hits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHitscanScriptBase::execHitscan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hitscan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHitscanScriptBase::execCanHitscan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanHitscan_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UHitscanScriptBase_CalculateSpreadMagnitude = FName(TEXT("CalculateSpreadMagnitude"));
	float UHitscanScriptBase::CalculateSpreadMagnitude() const
	{
		HitscanScriptBase_eventCalculateSpreadMagnitude_Parms Parms;
		const_cast<UHitscanScriptBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHitscanScriptBase_CalculateSpreadMagnitude),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHitscanScriptBase_CanHitscan = FName(TEXT("CanHitscan"));
	bool UHitscanScriptBase::CanHitscan() const
	{
		HitscanScriptBase_eventCanHitscan_Parms Parms;
		const_cast<UHitscanScriptBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHitscanScriptBase_CanHitscan),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHitscanScriptBase_Multi_Hitscan = FName(TEXT("Multi_Hitscan"));
	void UHitscanScriptBase::Multi_Hitscan(TArray<FHitResult> const& Hits)
	{
		HitscanScriptBase_eventMulti_Hitscan_Parms Parms;
		Parms.Hits=Hits;
		ProcessEvent(FindFunctionChecked(NAME_UHitscanScriptBase_Multi_Hitscan),&Parms);
	}
	static FName NAME_UHitscanScriptBase_PlayFiringEffect = FName(TEXT("PlayFiringEffect"));
	void UHitscanScriptBase::PlayFiringEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHitscanScriptBase_PlayFiringEffect),NULL);
	}
	static FName NAME_UHitscanScriptBase_PlayImpactEffect = FName(TEXT("PlayImpactEffect"));
	void UHitscanScriptBase::PlayImpactEffect(TArray<FHitResult> const& Hits)
	{
		HitscanScriptBase_eventPlayImpactEffect_Parms Parms;
		Parms.Hits=Hits;
		ProcessEvent(FindFunctionChecked(NAME_UHitscanScriptBase_PlayImpactEffect),&Parms);
	}
	static FName NAME_UHitscanScriptBase_Server_Hitscan = FName(TEXT("Server_Hitscan"));
	void UHitscanScriptBase::Server_Hitscan(TArray<FHitResult> const& Hits)
	{
		HitscanScriptBase_eventServer_Hitscan_Parms Parms;
		Parms.Hits=Hits;
		ProcessEvent(FindFunctionChecked(NAME_UHitscanScriptBase_Server_Hitscan),&Parms);
	}
	void UHitscanScriptBase::StaticRegisterNativesUHitscanScriptBase()
	{
		UClass* Class = UHitscanScriptBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateSpreadMagnitude", &UHitscanScriptBase::execCalculateSpreadMagnitude },
			{ "CanHitscan", &UHitscanScriptBase::execCanHitscan },
			{ "Hitscan", &UHitscanScriptBase::execHitscan },
			{ "Multi_Hitscan", &UHitscanScriptBase::execMulti_Hitscan },
			{ "PlayFiringEffect", &UHitscanScriptBase::execPlayFiringEffect },
			{ "PlayImpactEffect", &UHitscanScriptBase::execPlayImpactEffect },
			{ "Server_Hitscan", &UHitscanScriptBase::execServer_Hitscan },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHitscanScriptBase_CalculateSpreadMagnitude_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitscanScriptBase_CalculateSpreadMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitscanScriptBase_eventCalculateSpreadMagnitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitscanScriptBase_CalculateSpreadMagnitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitscanScriptBase_CalculateSpreadMagnitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitscanScriptBase_CalculateSpreadMagnitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Hitscan" },
		{ "Comment", "// Add your own custom calculation for the magnitude of the randomized spread\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
		{ "ToolTip", "Add your own custom calculation for the magnitude of the randomized spread" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitscanScriptBase_CalculateSpreadMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitscanScriptBase, nullptr, "CalculateSpreadMagnitude", nullptr, nullptr, sizeof(HitscanScriptBase_eventCalculateSpreadMagnitude_Parms), Z_Construct_UFunction_UHitscanScriptBase_CalculateSpreadMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_CalculateSpreadMagnitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitscanScriptBase_CalculateSpreadMagnitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_CalculateSpreadMagnitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitscanScriptBase_CalculateSpreadMagnitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitscanScriptBase_CalculateSpreadMagnitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHitscanScriptBase_CanHitscan_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHitscanScriptBase_CanHitscan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HitscanScriptBase_eventCanHitscan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHitscanScriptBase_CanHitscan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HitscanScriptBase_eventCanHitscan_Parms), &Z_Construct_UFunction_UHitscanScriptBase_CanHitscan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitscanScriptBase_CanHitscan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitscanScriptBase_CanHitscan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitscanScriptBase_CanHitscan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Hitscan" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitscanScriptBase_CanHitscan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitscanScriptBase, nullptr, "CanHitscan", nullptr, nullptr, sizeof(HitscanScriptBase_eventCanHitscan_Parms), Z_Construct_UFunction_UHitscanScriptBase_CanHitscan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_CanHitscan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitscanScriptBase_CanHitscan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_CanHitscan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitscanScriptBase_CanHitscan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitscanScriptBase_CanHitscan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHitscanScriptBase_Hitscan_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitscanScriptBase_Hitscan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Hitscan" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitscanScriptBase_Hitscan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitscanScriptBase, nullptr, "Hitscan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitscanScriptBase_Hitscan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_Hitscan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitscanScriptBase_Hitscan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitscanScriptBase_Hitscan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitscanScriptBase_eventMulti_Hitscan_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::NewProp_Hits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::NewProp_Hits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::NewProp_Hits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::NewProp_Hits,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Hitscan" },
		{ "Comment", "// Skips local\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
		{ "ToolTip", "Skips local" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitscanScriptBase, nullptr, "Multi_Hitscan", nullptr, nullptr, sizeof(HitscanScriptBase_eventMulti_Hitscan_Parms), Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHitscanScriptBase_PlayFiringEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitscanScriptBase_PlayFiringEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Hitscan" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitscanScriptBase_PlayFiringEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitscanScriptBase, nullptr, "PlayFiringEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitscanScriptBase_PlayFiringEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_PlayFiringEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitscanScriptBase_PlayFiringEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitscanScriptBase_PlayFiringEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitscanScriptBase_eventPlayImpactEffect_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::NewProp_Hits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::NewProp_Hits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::NewProp_Hits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::NewProp_Hits,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Hitscan" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitscanScriptBase, nullptr, "PlayImpactEffect", nullptr, nullptr, sizeof(HitscanScriptBase_eventPlayImpactEffect_Parms), Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HitscanScriptBase_eventServer_Hitscan_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::NewProp_Hits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::NewProp_Hits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::NewProp_Hits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::NewProp_Hits,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Hitscan" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitscanScriptBase, nullptr, "Server_Hitscan", nullptr, nullptr, sizeof(HitscanScriptBase_eventServer_Hitscan_Parms), Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHitscanScriptBase_NoRegister()
	{
		return UHitscanScriptBase::StaticClass();
	}
	struct Z_Construct_UClass_UHitscanScriptBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumShots_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumShots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiringSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FiringSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletTracer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletTracer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitscanScriptBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeaponScript,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHitscanScriptBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitscanScriptBase_CalculateSpreadMagnitude, "CalculateSpreadMagnitude" }, // 4124194211
		{ &Z_Construct_UFunction_UHitscanScriptBase_CanHitscan, "CanHitscan" }, // 3946574525
		{ &Z_Construct_UFunction_UHitscanScriptBase_Hitscan, "Hitscan" }, // 2506338385
		{ &Z_Construct_UFunction_UHitscanScriptBase_Multi_Hitscan, "Multi_Hitscan" }, // 2713069232
		{ &Z_Construct_UFunction_UHitscanScriptBase_PlayFiringEffect, "PlayFiringEffect" }, // 3839834017
		{ &Z_Construct_UFunction_UHitscanScriptBase_PlayImpactEffect, "PlayImpactEffect" }, // 4241963078
		{ &Z_Construct_UFunction_UHitscanScriptBase_Server_Hitscan, "Server_Hitscan" }, // 228402775
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanScriptBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "Configurations|Firing" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHitscanScriptBase, RateOfFire), METADATA_PARAMS(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_RateOfFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Configurations|Firing" },
		{ "Comment", "// The range the hitscan projectiles travel\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
		{ "ToolTip", "The range the hitscan projectiles travel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHitscanScriptBase, Range), METADATA_PARAMS(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_NumShots_MetaData[] = {
		{ "Category", "Configurations|Firing" },
		{ "Comment", "// Determines the number of shots per hitscan input\n" },
		{ "DisplayName", "Number of Shots" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
		{ "ToolTip", "Determines the number of shots per hitscan input" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_NumShots = { "NumShots", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHitscanScriptBase, NumShots), METADATA_PARAMS(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_NumShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_NumShots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_Spread_MetaData[] = {
		{ "Category", "Configurations|Firing" },
		{ "Comment", "// Determines the randomized spread in-between these values\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
		{ "ToolTip", "Determines the randomized spread in-between these values" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHitscanScriptBase, Spread), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_Spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Configurations|Firing" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHitscanScriptBase, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_CollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_CollisionChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_FiringSound_MetaData[] = {
		{ "Category", "Configurations|Cosmetic" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_FiringSound = { "FiringSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHitscanScriptBase, FiringSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_FiringSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_FiringSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "Configurations|Cosmetic" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHitscanScriptBase, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_MuzzleFlash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_BulletTracer_MetaData[] = {
		{ "Category", "Configurations|Cosmetic" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_BulletTracer = { "BulletTracer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHitscanScriptBase, BulletTracer), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_BulletTracer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_BulletTracer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_RecoilParams_MetaData[] = {
		{ "Category", "Configurations|Cosmetic" },
		{ "DisplayName", "Recoil Parameters" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_RecoilParams = { "RecoilParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHitscanScriptBase, RecoilParams), Z_Construct_UScriptStruct_FRecoilParams, METADATA_PARAMS(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_RecoilParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_RecoilParams_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitscanScriptBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_RateOfFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_NumShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_Spread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_CollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_FiringSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_MuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_BulletTracer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitscanScriptBase_Statics::NewProp_RecoilParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitscanScriptBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitscanScriptBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitscanScriptBase_Statics::ClassParams = {
		&UHitscanScriptBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHitscanScriptBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanScriptBase_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHitscanScriptBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanScriptBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitscanScriptBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHitscanScriptBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHitscanScriptBase, 2425083794);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UHitscanScriptBase>()
	{
		return UHitscanScriptBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHitscanScriptBase(Z_Construct_UClass_UHitscanScriptBase, &UHitscanScriptBase::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UHitscanScriptBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitscanScriptBase);
	DEFINE_FUNCTION(USemiAutoHitscanScriptBase::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USemiAutoHitscanScriptBase::execCanFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USemiAutoHitscanScriptBase::execSetupActivationBinding)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_FiringInput);
		P_GET_PROPERTY(FByteProperty,Z_Param_InputEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupActivationBinding(Z_Param_Out_FiringInput,EInputEvent(Z_Param_InputEvent));
		P_NATIVE_END;
	}
	static FName NAME_USemiAutoHitscanScriptBase_CanFire = FName(TEXT("CanFire"));
	bool USemiAutoHitscanScriptBase::CanFire() const
	{
		SemiAutoHitscanScriptBase_eventCanFire_Parms Parms;
		const_cast<USemiAutoHitscanScriptBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_USemiAutoHitscanScriptBase_CanFire),&Parms);
		return !!Parms.ReturnValue;
	}
	void USemiAutoHitscanScriptBase::StaticRegisterNativesUSemiAutoHitscanScriptBase()
	{
		UClass* Class = USemiAutoHitscanScriptBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanFire", &USemiAutoHitscanScriptBase::execCanFire },
			{ "Fire", &USemiAutoHitscanScriptBase::execFire },
			{ "SetupActivationBinding", &USemiAutoHitscanScriptBase::execSetupActivationBinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SemiAutoHitscanScriptBase_eventCanFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SemiAutoHitscanScriptBase_eventCanFire_Parms), &Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Hitscan" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USemiAutoHitscanScriptBase, nullptr, "CanFire", nullptr, nullptr, sizeof(SemiAutoHitscanScriptBase_eventCanFire_Parms), Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USemiAutoHitscanScriptBase_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USemiAutoHitscanScriptBase_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Hitscan" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USemiAutoHitscanScriptBase_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USemiAutoHitscanScriptBase, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USemiAutoHitscanScriptBase_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USemiAutoHitscanScriptBase_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USemiAutoHitscanScriptBase_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USemiAutoHitscanScriptBase_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics
	{
		struct SemiAutoHitscanScriptBase_eventSetupActivationBinding_Parms
		{
			FName FiringInput;
			TEnumAsByte<EInputEvent> InputEvent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiringInput_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FiringInput;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::NewProp_FiringInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::NewProp_FiringInput = { "FiringInput", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SemiAutoHitscanScriptBase_eventSetupActivationBinding_Parms, FiringInput), METADATA_PARAMS(Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::NewProp_FiringInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::NewProp_FiringInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SemiAutoHitscanScriptBase_eventSetupActivationBinding_Parms, InputEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::NewProp_FiringInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FiringInput" },
		{ "Category", "Script|Hitscan" },
		{ "Comment", "// Binds the input to fire\n" },
		{ "CPP_Default_InputEvent", "IE_Pressed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
		{ "ToolTip", "Binds the input to fire" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USemiAutoHitscanScriptBase, nullptr, "SetupActivationBinding", nullptr, nullptr, sizeof(SemiAutoHitscanScriptBase_eventSetupActivationBinding_Parms), Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USemiAutoHitscanScriptBase_NoRegister()
	{
		return USemiAutoHitscanScriptBase::StaticClass();
	}
	struct Z_Construct_UClass_USemiAutoHitscanScriptBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USemiAutoHitscanScriptBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHitscanScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USemiAutoHitscanScriptBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USemiAutoHitscanScriptBase_CanFire, "CanFire" }, // 1701763096
		{ &Z_Construct_UFunction_USemiAutoHitscanScriptBase_Fire, "Fire" }, // 3754081798
		{ &Z_Construct_UFunction_USemiAutoHitscanScriptBase_SetupActivationBinding, "SetupActivationBinding" }, // 1905778987
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USemiAutoHitscanScriptBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n *\n */" },
		{ "DisplayName", "Semi-Auto Hitscan Script Base" },
		{ "IncludePath", "WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USemiAutoHitscanScriptBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USemiAutoHitscanScriptBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USemiAutoHitscanScriptBase_Statics::ClassParams = {
		&USemiAutoHitscanScriptBase::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USemiAutoHitscanScriptBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USemiAutoHitscanScriptBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USemiAutoHitscanScriptBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USemiAutoHitscanScriptBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USemiAutoHitscanScriptBase, 223462775);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<USemiAutoHitscanScriptBase>()
	{
		return USemiAutoHitscanScriptBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USemiAutoHitscanScriptBase(Z_Construct_UClass_USemiAutoHitscanScriptBase, &USemiAutoHitscanScriptBase::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("USemiAutoHitscanScriptBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USemiAutoHitscanScriptBase);
	DEFINE_FUNCTION(UBurstFireHitscanScriptBase::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBurstFireHitscanScriptBase::execCanFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBurstFireHitscanScriptBase::execSetupActivationBinding)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_FiringInput);
		P_GET_PROPERTY(FByteProperty,Z_Param_InputEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupActivationBinding(Z_Param_Out_FiringInput,EInputEvent(Z_Param_InputEvent));
		P_NATIVE_END;
	}
	static FName NAME_UBurstFireHitscanScriptBase_CanFire = FName(TEXT("CanFire"));
	bool UBurstFireHitscanScriptBase::CanFire() const
	{
		BurstFireHitscanScriptBase_eventCanFire_Parms Parms;
		const_cast<UBurstFireHitscanScriptBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBurstFireHitscanScriptBase_CanFire),&Parms);
		return !!Parms.ReturnValue;
	}
	void UBurstFireHitscanScriptBase::StaticRegisterNativesUBurstFireHitscanScriptBase()
	{
		UClass* Class = UBurstFireHitscanScriptBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanFire", &UBurstFireHitscanScriptBase::execCanFire },
			{ "Fire", &UBurstFireHitscanScriptBase::execFire },
			{ "SetupActivationBinding", &UBurstFireHitscanScriptBase::execSetupActivationBinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BurstFireHitscanScriptBase_eventCanFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BurstFireHitscanScriptBase_eventCanFire_Parms), &Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Hitscan" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBurstFireHitscanScriptBase, nullptr, "CanFire", nullptr, nullptr, sizeof(BurstFireHitscanScriptBase_eventCanFire_Parms), Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBurstFireHitscanScriptBase_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBurstFireHitscanScriptBase_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Hitscan" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBurstFireHitscanScriptBase_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBurstFireHitscanScriptBase, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBurstFireHitscanScriptBase_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBurstFireHitscanScriptBase_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBurstFireHitscanScriptBase_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBurstFireHitscanScriptBase_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics
	{
		struct BurstFireHitscanScriptBase_eventSetupActivationBinding_Parms
		{
			FName FiringInput;
			TEnumAsByte<EInputEvent> InputEvent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiringInput_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FiringInput;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::NewProp_FiringInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::NewProp_FiringInput = { "FiringInput", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BurstFireHitscanScriptBase_eventSetupActivationBinding_Parms, FiringInput), METADATA_PARAMS(Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::NewProp_FiringInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::NewProp_FiringInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BurstFireHitscanScriptBase_eventSetupActivationBinding_Parms, InputEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::NewProp_FiringInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::NewProp_InputEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FiringInput" },
		{ "Category", "Script|Hitscan" },
		{ "Comment", "// Binds the input to fire\n" },
		{ "CPP_Default_InputEvent", "IE_Pressed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
		{ "ToolTip", "Binds the input to fire" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBurstFireHitscanScriptBase, nullptr, "SetupActivationBinding", nullptr, nullptr, sizeof(BurstFireHitscanScriptBase_eventSetupActivationBinding_Parms), Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBurstFireHitscanScriptBase_NoRegister()
	{
		return UBurstFireHitscanScriptBase::StaticClass();
	}
	struct Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurstRateOfFire_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BurstRateOfFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumShotsPerBurst_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumShotsPerBurst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHitscanScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBurstFireHitscanScriptBase_CanFire, "CanFire" }, // 2352773422
		{ &Z_Construct_UFunction_UBurstFireHitscanScriptBase_Fire, "Fire" }, // 132736564
		{ &Z_Construct_UFunction_UBurstFireHitscanScriptBase_SetupActivationBinding, "SetupActivationBinding" }, // 2631051469
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n *\n */" },
		{ "DisplayName", "Burst-Fire Hitscan Script Base" },
		{ "IncludePath", "WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::NewProp_BurstRateOfFire_MetaData[] = {
		{ "Category", "Configurations|Firing" },
		{ "Comment", "// Duration between shots per burst\n" },
		{ "DisplayAfter", "RateOfFire" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
		{ "ToolTip", "Duration between shots per burst" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::NewProp_BurstRateOfFire = { "BurstRateOfFire", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBurstFireHitscanScriptBase, BurstRateOfFire), METADATA_PARAMS(Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::NewProp_BurstRateOfFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::NewProp_BurstRateOfFire_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::NewProp_NumShotsPerBurst_MetaData[] = {
		{ "Category", "Configurations|Firing" },
		{ "Comment", "// Amount of shots per burst\n" },
		{ "DisplayAfter", "BurstRateOfFire" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Scripts/HitscanScriptBase.h" },
		{ "ToolTip", "Amount of shots per burst" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::NewProp_NumShotsPerBurst = { "NumShotsPerBurst", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBurstFireHitscanScriptBase, NumShotsPerBurst), METADATA_PARAMS(Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::NewProp_NumShotsPerBurst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::NewProp_NumShotsPerBurst_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::NewProp_BurstRateOfFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::NewProp_NumShotsPerBurst,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBurstFireHitscanScriptBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::ClassParams = {
		&UBurstFireHitscanScriptBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBurstFireHitscanScriptBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBurstFireHitscanScriptBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBurstFireHitscanScriptBase, 1183611924);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UBurstFireHitscanScriptBase>()
	{
		return UBurstFireHitscanScriptBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBurstFireHitscanScriptBase(Z_Construct_UClass_UBurstFireHitscanScriptBase, &UBurstFireHitscanScriptBase::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UBurstFireHitscanScriptBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBurstFireHitscanScriptBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
