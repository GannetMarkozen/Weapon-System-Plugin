// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSystemAnimInstance() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponSystemAnimInstance_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponSystemAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_ATrueFPSCharacterBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWeaponSystemAnimInstance::execOnCharacterLanded)
	{
		P_GET_OBJECT(ATrueFPSCharacterBase,Z_Param_InCharacter);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterLanded(Z_Param_InCharacter,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponSystemAnimInstance::execSetVars)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVars_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponSystemAnimInstance::execCurrentWeaponChanged)
	{
		P_GET_OBJECT(AWeapon,Z_Param_NewWeapon);
		P_GET_OBJECT(AWeapon,Z_Param_OldWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CurrentWeaponChanged_Implementation(Z_Param_NewWeapon,Z_Param_OldWeapon);
		P_NATIVE_END;
	}
	static FName NAME_UWeaponSystemAnimInstance_BP_Init = FName(TEXT("BP_Init"));
	void UWeaponSystemAnimInstance::BP_Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWeaponSystemAnimInstance_BP_Init),NULL);
	}
	static FName NAME_UWeaponSystemAnimInstance_BP_OnCharacterLanded = FName(TEXT("BP_OnCharacterLanded"));
	void UWeaponSystemAnimInstance::BP_OnCharacterLanded(ATrueFPSCharacterBase* InCharacter, FHitResult const& Hit)
	{
		WeaponSystemAnimInstance_eventBP_OnCharacterLanded_Parms Parms;
		Parms.InCharacter=InCharacter;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_UWeaponSystemAnimInstance_BP_OnCharacterLanded),&Parms);
	}
	static FName NAME_UWeaponSystemAnimInstance_CurrentWeaponChanged = FName(TEXT("CurrentWeaponChanged"));
	void UWeaponSystemAnimInstance::CurrentWeaponChanged(AWeapon* NewWeapon, AWeapon* OldWeapon)
	{
		WeaponSystemAnimInstance_eventCurrentWeaponChanged_Parms Parms;
		Parms.NewWeapon=NewWeapon;
		Parms.OldWeapon=OldWeapon;
		ProcessEvent(FindFunctionChecked(NAME_UWeaponSystemAnimInstance_CurrentWeaponChanged),&Parms);
	}
	static FName NAME_UWeaponSystemAnimInstance_SetVars = FName(TEXT("SetVars"));
	void UWeaponSystemAnimInstance::SetVars(const float DeltaTime)
	{
		WeaponSystemAnimInstance_eventSetVars_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UWeaponSystemAnimInstance_SetVars),&Parms);
	}
	void UWeaponSystemAnimInstance::StaticRegisterNativesUWeaponSystemAnimInstance()
	{
		UClass* Class = UWeaponSystemAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CurrentWeaponChanged", &UWeaponSystemAnimInstance::execCurrentWeaponChanged },
			{ "OnCharacterLanded", &UWeaponSystemAnimInstance::execOnCharacterLanded },
			{ "SetVars", &UWeaponSystemAnimInstance::execSetVars },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_Init_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim" },
		{ "DisplayName", "Init" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponSystemAnimInstance, nullptr, "BP_Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemAnimInstance_eventBP_OnCharacterLanded_Parms, InCharacter), Z_Construct_UClass_ATrueFPSCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemAnimInstance_eventBP_OnCharacterLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::NewProp_Hit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::NewProp_InCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim" },
		{ "DisplayName", "On Character Landed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponSystemAnimInstance, nullptr, "BP_OnCharacterLanded", nullptr, nullptr, sizeof(WeaponSystemAnimInstance_eventBP_OnCharacterLanded_Parms), Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWeapon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemAnimInstance_eventCurrentWeaponChanged_Parms, NewWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged_Statics::NewProp_OldWeapon = { "OldWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemAnimInstance_eventCurrentWeaponChanged_Parms, OldWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged_Statics::NewProp_NewWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged_Statics::NewProp_OldWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponSystemAnimInstance, nullptr, "CurrentWeaponChanged", nullptr, nullptr, sizeof(WeaponSystemAnimInstance_eventCurrentWeaponChanged_Parms), Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics
	{
		struct WeaponSystemAnimInstance_eventOnCharacterLanded_Parms
		{
			ATrueFPSCharacterBase* InCharacter;
			FHitResult Hit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemAnimInstance_eventOnCharacterLanded_Parms, InCharacter), Z_Construct_UClass_ATrueFPSCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemAnimInstance_eventOnCharacterLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::NewProp_Hit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::NewProp_InCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponSystemAnimInstance, nullptr, "OnCharacterLanded", nullptr, nullptr, sizeof(WeaponSystemAnimInstance_eventOnCharacterLanded_Parms), Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponSystemAnimInstance_eventSetVars_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics::NewProp_DeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim" },
		{ "DisplayName", "Set Variables" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponSystemAnimInstance, nullptr, "SetVars", nullptr, nullptr, sizeof(WeaponSystemAnimInstance_eventSetVars_Parms), Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponSystemAnimInstance_NoRegister()
	{
		return UWeaponSystemAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponSystemAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCurrentWeaponIsValid_MetaData[];
#endif
		static void NewProp_bCurrentWeaponIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurrentWeaponIsValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPose_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPelvisRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPelvisRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootYawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootYawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTurningInPlace_MetaData[];
#endif
		static void NewProp_bIsTurningInPlace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTurningInPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StationaryYawThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StationaryYawThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StationaryVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StationaryVelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StationaryYawSpeedNormal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StationaryYawSpeedNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StationaryYawAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StationaryYawAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightsRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SightsRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ADSMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ADSMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeightScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentWeightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponCustomOffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentWeaponCustomOffsetTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[];
#endif
		static void NewProp_bIsFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementWeaponSwayProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementWeaponSwayProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulativeRotationInterp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulativeRotationInterp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityInterp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityInterp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedInterp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedInterp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementWeaponSwayProgressTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementWeaponSwayProgressTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastCameraRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastCameraRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleWeaponSwayCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleWeaponSwayCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementWeaponSwayCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementWeaponSwayCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulativeRotationReturnInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulativeRotationReturnInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulativeRotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulativeRotationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonLocalCameraRotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NonLocalCameraRotationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityInterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_Init, "BP_Init" }, // 111791612
		{ &Z_Construct_UFunction_UWeaponSystemAnimInstance_BP_OnCharacterLanded, "BP_OnCharacterLanded" }, // 2566923806
		{ &Z_Construct_UFunction_UWeaponSystemAnimInstance_CurrentWeaponChanged, "CurrentWeaponChanged" }, // 2908937040
		{ &Z_Construct_UFunction_UWeaponSystemAnimInstance_OnCharacterLanded, "OnCharacterLanded" }, // 3335335882
		{ &Z_Construct_UFunction_UWeaponSystemAnimInstance_SetVars, "SetVars" }, // 2542848025
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "Anim" },
		{ "Comment", "/*\n\x09 *\x09REFERENCES\n\x09 */" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
		{ "ToolTip", "*      REFERENCES" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, Character), Z_Construct_UClass_ATrueFPSCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Anim" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, CurrentWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bCurrentWeaponIsValid_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bCurrentWeaponIsValid_SetBit(void* Obj)
	{
		((UWeaponSystemAnimInstance*)Obj)->bCurrentWeaponIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bCurrentWeaponIsValid = { "bCurrentWeaponIsValid", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeaponSystemAnimInstance), &Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bCurrentWeaponIsValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bCurrentWeaponIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bCurrentWeaponIsValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AnimPose_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AnimPose = { "AnimPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, AnimPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AnimPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AnimPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_TargetPelvisRotation_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_TargetPelvisRotation = { "TargetPelvisRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, TargetPelvisRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_TargetPelvisRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_TargetPelvisRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_RootYawOffset_MetaData[] = {
		{ "Category", "Anim|Stationary" },
		{ "Comment", "/*\n\x09 *\x09STATIONARY ANIM \n\x09 */" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
		{ "ToolTip", "*      STATIONARY ANIM" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_RootYawOffset = { "RootYawOffset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, RootYawOffset), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_RootYawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_RootYawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsTurningInPlace_MetaData[] = {
		{ "Category", "Anim|Stationary" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsTurningInPlace_SetBit(void* Obj)
	{
		((UWeaponSystemAnimInstance*)Obj)->bIsTurningInPlace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsTurningInPlace = { "bIsTurningInPlace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeaponSystemAnimInstance), &Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsTurningInPlace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsTurningInPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsTurningInPlace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawThreshold_MetaData[] = {
		{ "Category", "Anim|Stationary" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawThreshold = { "StationaryYawThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, StationaryYawThreshold), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryVelocityThreshold_MetaData[] = {
		{ "Category", "Anim|Stationary" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryVelocityThreshold = { "StationaryVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, StationaryVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawSpeedNormal_MetaData[] = {
		{ "Category", "Anim|Stationary" },
		{ "Comment", "// The current yaw rotation speed of this frame. Multiply play rate based on this value\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
		{ "ToolTip", "The current yaw rotation speed of this frame. Multiply play rate based on this value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawSpeedNormal = { "StationaryYawSpeedNormal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, StationaryYawSpeedNormal), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawSpeedNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawSpeedNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawAmount_MetaData[] = {
		{ "Category", "Anim|Stationary" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawAmount = { "StationaryYawAmount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, StationaryYawAmount), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_SightsRelativeTransform_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "Comment", "/*\n\x09 *\x09IK\n\x09 */// The current weapon sights transform relative to the Dominant-Hand. Used for\n// aiming calculations.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
		{ "ToolTip", "*      IK\n// The current weapon sights transform relative to the Dominant-Hand. Used for\n// aiming calculations." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_SightsRelativeTransform = { "SightsRelativeTransform", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, SightsRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_SightsRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_SightsRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_OriginRelativeTransform_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "Comment", "// The current weapon origin transform relative to the Dominant-Hand.\n// Used for determining the pivot-point / orientation of this weapon.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
		{ "ToolTip", "The current weapon origin transform relative to the Dominant-Hand.\nUsed for determining the pivot-point / orientation of this weapon." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_OriginRelativeTransform = { "OriginRelativeTransform", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, OriginRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_OriginRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_OriginRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_OffsetTransform_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_OffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_OffsetTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_ADSMagnitude_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_ADSMagnitude = { "ADSMagnitude", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, ADSMagnitude), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_ADSMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_ADSMagnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeightScale_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeightScale = { "CurrentWeightScale", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, CurrentWeightScale), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeaponCustomOffsetTransform_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeaponCustomOffsetTransform = { "CurrentWeaponCustomOffsetTransform", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, CurrentWeaponCustomOffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeaponCustomOffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeaponCustomOffsetTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementDirection_MetaData[] = {
		{ "Category", "Anim|Locomotion" },
		{ "Comment", "/*\n\x09 *\x09""BASIC LOCOMOTION\n\x09 */" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
		{ "ToolTip", "*      BASIC LOCOMOTION" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, MovementDirection), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementVelocity_MetaData[] = {
		{ "Category", "Anim|Locomotion" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementVelocity = { "MovementVelocity", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, MovementVelocity), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsFalling_MetaData[] = {
		{ "Category", "Anim|Locomotion" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
	{
		((UWeaponSystemAnimInstance*)Obj)->bIsFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeaponSystemAnimInstance), &Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsFalling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayProgress_MetaData[] = {
		{ "Category", "Anim|Locomotion" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayProgress = { "MovementWeaponSwayProgress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, MovementWeaponSwayProgress), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotation_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "Comment", "/*\n\x09 *\x09""ACCUMULATIVE OFFSETS\n\x09 */" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
		{ "ToolTip", "*      ACCUMULATIVE OFFSETS" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotation = { "AccumulativeRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, AccumulativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationInterp_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationInterp = { "AccumulativeRotationInterp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, AccumulativeRotationInterp), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationInterp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationInterp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityTarget_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityTarget = { "VelocityTarget", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, VelocityTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityInterp_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityInterp = { "VelocityInterp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, VelocityInterp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityInterp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityInterp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementSpeedInterp_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementSpeedInterp = { "MovementSpeedInterp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, MovementSpeedInterp), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementSpeedInterp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementSpeedInterp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayProgressTime_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayProgressTime = { "MovementWeaponSwayProgressTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, MovementWeaponSwayProgressTime), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayProgressTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayProgressTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRotation_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "Comment", "/*\n\x09 *\x09OTHER VARS\n\x09 */// This value should be pre-calculated\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
		{ "ToolTip", "*      OTHER VARS\n// This value should be pre-calculated" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRelativeRotation_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "Comment", "// Relative to the root\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
		{ "ToolTip", "Relative to the root" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRelativeRotation = { "CameraRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, CameraRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRelativeLocation_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "Comment", "// Camera's transform relative to the head\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
		{ "ToolTip", "Camera's transform relative to the head" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRelativeLocation = { "CameraRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, CameraRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRelativeLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_LastVelocity_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_LastVelocity = { "LastVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, LastVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_LastVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_LastVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_LastCameraRotation_MetaData[] = {
		{ "Category", "Anim|IK" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_LastCameraRotation = { "LastCameraRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, LastCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_LastCameraRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_LastCameraRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MaxMoveSpeed_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "/*\n\x09*\x09""CONFIGURATIONS\n\x09*/" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
		{ "ToolTip", "*       CONFIGURATIONS" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MaxMoveSpeed = { "MaxMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, MaxMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MaxMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MaxMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_IdleWeaponSwayCurve_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_IdleWeaponSwayCurve = { "IdleWeaponSwayCurve", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, IdleWeaponSwayCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_IdleWeaponSwayCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_IdleWeaponSwayCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayCurve_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayCurve = { "MovementWeaponSwayCurve", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, MovementWeaponSwayCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationReturnInterpSpeed_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationReturnInterpSpeed = { "AccumulativeRotationReturnInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, AccumulativeRotationReturnInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationReturnInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationReturnInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationInterpSpeed_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationInterpSpeed = { "AccumulativeRotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, AccumulativeRotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_NonLocalCameraRotationInterpSpeed_MetaData[] = {
		{ "Category", "Configurations" },
		{ "Comment", "// The rotation interp speed on non-local players' viewports\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
		{ "ToolTip", "The rotation interp speed on non-local players' viewports" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_NonLocalCameraRotationInterpSpeed = { "NonLocalCameraRotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, NonLocalCameraRotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_NonLocalCameraRotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_NonLocalCameraRotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityInterpSpeed_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/Anim/WeaponSystemAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityInterpSpeed = { "VelocityInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponSystemAnimInstance, VelocityInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityInterpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bCurrentWeaponIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AnimPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_TargetPelvisRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_RootYawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsTurningInPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawSpeedNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_StationaryYawAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_SightsRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_OriginRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_OffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_ADSMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CurrentWeaponCustomOffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_bIsFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationInterp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityInterp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementSpeedInterp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayProgressTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_CameraRelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_LastVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_LastCameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MaxMoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_IdleWeaponSwayCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_MovementWeaponSwayCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationReturnInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_AccumulativeRotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_NonLocalCameraRotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::NewProp_VelocityInterpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponSystemAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::ClassParams = {
		&UWeaponSystemAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponSystemAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponSystemAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponSystemAnimInstance, 337272203);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UWeaponSystemAnimInstance>()
	{
		return UWeaponSystemAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponSystemAnimInstance(Z_Construct_UClass_UWeaponSystemAnimInstance, &UWeaponSystemAnimInstance::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UWeaponSystemAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponSystemAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
