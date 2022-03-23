// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/WeaponScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponScript() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponScript_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponScript();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponScriptBase();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_ATrueFPSCharacterBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
// End Cross Module References
	static UEnum* EInputBinding_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EInputBinding"));
		}
		return Singleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EInputBinding>()
	{
		return EInputBinding_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputBinding(EInputBinding_StaticEnum, TEXT("/Script/WeaponSystemPlugin"), TEXT("EInputBinding"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding_Hash() { return 1822433707U; }
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponSystemPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputBinding"), 0, Get_Z_Construct_UEnum_WeaponSystemPlugin_EInputBinding_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInputBinding::PrimaryFire", (int64)EInputBinding::PrimaryFire },
				{ "EInputBinding::SecondaryFire", (int64)EInputBinding::SecondaryFire },
				{ "EInputBinding::Reload", (int64)EInputBinding::Reload },
				{ "EInputBinding::Interact", (int64)EInputBinding::Interact },
				{ "EInputBinding::Inspect", (int64)EInputBinding::Inspect },
				{ "EInputBinding::Jump", (int64)EInputBinding::Jump },
				{ "EInputBinding::CycleSights", (int64)EInputBinding::CycleSights },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
				nullptr,
				"EInputBinding",
				"EInputBinding",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UWeaponScript::execGetOwningCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATrueFPSCharacterBase**)Z_Param__Result=P_THIS->GetOwningCharacter();
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
			ATrueFPSCharacterBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponScript_eventGetOwningCharacter_Parms, ReturnValue), Z_Construct_UClass_ATrueFPSCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponScript, nullptr, "GetOwningCharacter", nullptr, nullptr, sizeof(WeaponScript_eventGetOwningCharacter_Parms), Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponScript_GetOwningCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponScript_GetOwningCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		{ &Z_Construct_UFunction_UWeaponScript_GetOwningCharacter, "GetOwningCharacter" }, // 378705143
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponScript, 3756386227);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UWeaponScript>()
	{
		return UWeaponScript::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponScript(Z_Construct_UClass_UWeaponScript, &UWeaponScript::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UWeaponScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
