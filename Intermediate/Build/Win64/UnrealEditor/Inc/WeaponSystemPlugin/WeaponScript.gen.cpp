// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/WeaponScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponScript() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponScript_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponScript();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponScriptBase();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AShooterCharacterBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputBinding;
	static UEnum* EInputBinding_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputBinding.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputBinding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EInputBinding"));
		}
		return Z_Registration_Info_UEnum_EInputBinding.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EInputBinding>()
	{
		return EInputBinding_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding_Statics::Enumerators[] = {
		{ "EInputBinding::PrimaryFire", (int64)EInputBinding::PrimaryFire },
		{ "EInputBinding::SecondaryFire", (int64)EInputBinding::SecondaryFire },
		{ "EInputBinding::Reload", (int64)EInputBinding::Reload },
		{ "EInputBinding::Interact", (int64)EInputBinding::Interact },
		{ "EInputBinding::Inspect", (int64)EInputBinding::Inspect },
		{ "EInputBinding::Jump", (int64)EInputBinding::Jump },
		{ "EInputBinding::CycleSights", (int64)EInputBinding::CycleSights },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CycleSights.DisplayName", "Cycle-Sights" },
		{ "CycleSights.Name", "EInputBinding::CycleSights" },
		{ "Inspect.Name", "EInputBinding::Inspect" },
		{ "Interact.Name", "EInputBinding::Interact" },
		{ "Jump.Name", "EInputBinding::Jump" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScript.h" },
		{ "PrimaryFire.DisplayName", "Primary-Fire" },
		{ "PrimaryFire.Name", "EInputBinding::PrimaryFire" },
		{ "Reload.Name", "EInputBinding::Reload" },
		{ "SecondaryFire.DisplayName", "Secondary-Fire" },
		{ "SecondaryFire.Name", "EInputBinding::SecondaryFire" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		"EInputBinding",
		"EInputBinding",
		Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding()
	{
		if (!Z_Registration_Info_UEnum_EInputBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputBinding.InnerSingleton, Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputBinding.InnerSingleton;
	}
	DEFINE_FUNCTION(UWeaponScript::execGetOwningCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AShooterCharacterBase**)Z_Param__Result=P_THIS->GetOwningCharacter();
		P_NATIVE_END;
	}
	void UWeaponScript::StaticRegisterNativesUWeaponScript()
	{
		UClass* Class = UWeaponScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningCharacter", &UWeaponScript::execGetOwningCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics
	{
		struct WeaponScript_eventGetOwningCharacter_Parms
		{
			AShooterCharacterBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScript_eventGetOwningCharacter_Parms, ReturnValue), Z_Construct_UClass_AShooterCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "Comment", "// Returns the OwningWeapon's OwningCharacter if it is valid (may be invalid if owner of inventory possessing us is not a character)\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScript.h" },
		{ "ToolTip", "Returns the OwningWeapon's OwningCharacter if it is valid (may be invalid if owner of inventory possessing us is not a character)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScript, nullptr, "GetOwningCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::WeaponScript_eventGetOwningCharacter_Parms), Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScript_GetOwningCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponScript);
	UClass* Z_Construct_UClass_UWeaponScript_NoRegister()
	{
		return UWeaponScript::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeaponScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponScript_GetOwningCharacter, "GetOwningCharacter" }, // 3419843098
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponScript_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Initializes the OwningWeapon as our weapon class (AWeapon).\n" },
		{ "IncludePath", "WeaponSystem/Weapons/WeaponScript.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScript.h" },
		{ "ToolTip", "Initializes the OwningWeapon as our weapon class (AWeapon)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponScript_Statics::NewProp_OwningWeapon_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/WeaponScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponScript_Statics::NewProp_OwningWeapon = { "OwningWeapon", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponScript, OwningWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponScript_Statics::NewProp_OwningWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponScript_Statics::NewProp_OwningWeapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponScript_Statics::NewProp_OwningWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponScript_Statics::ClassParams = {
		&UWeaponScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponScript_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponScript()
	{
		if (!Z_Registration_Info_UClass_UWeaponScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponScript.OuterSingleton, Z_Construct_UClass_UWeaponScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeaponScript.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UWeaponScript>()
	{
		return UWeaponScript::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponScript);
	struct Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_Statics::EnumInfo[] = {
		{ EInputBinding_StaticEnum, TEXT("EInputBinding"), &Z_Registration_Info_UEnum_EInputBinding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1586908399U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponScript, UWeaponScript::StaticClass, TEXT("UWeaponScript"), &Z_Registration_Info_UClass_UWeaponScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponScript), 3070057216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_2888293192(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_WeaponScript_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
