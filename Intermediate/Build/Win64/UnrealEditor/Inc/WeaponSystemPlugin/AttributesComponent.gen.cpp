// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/AttributeSystem/AttributesComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributesComponent() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAttributesComponent::execOnRep_ActiveEffects)
	{
		P_GET_TARRAY_REF(UEffect*,Z_Param_Out_OldActiveEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ActiveEffects(Z_Param_Out_OldActiveEffects);
		P_NATIVE_END;
	}
	void UAttributesComponent::StaticRegisterNativesUAttributesComponent()
	{
		UClass* Class = UAttributesComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ActiveEffects", &UAttributesComponent::execOnRep_ActiveEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics
	{
		struct AttributesComponent_eventOnRep_ActiveEffects_Parms
		{
			TArray<UEffect*> OldActiveEffects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldActiveEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldActiveEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OldActiveEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::NewProp_OldActiveEffects_Inner = { "OldActiveEffects", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::NewProp_OldActiveEffects_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::NewProp_OldActiveEffects = { "OldActiveEffects", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventOnRep_ActiveEffects_Parms, OldActiveEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::NewProp_OldActiveEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::NewProp_OldActiveEffects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::NewProp_OldActiveEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::NewProp_OldActiveEffects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "OnRep_ActiveEffects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::AttributesComponent_eventOnRep_ActiveEffects_Parms), Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributesComponent);
	UClass* Z_Construct_UClass_UAttributesComponent_NoRegister()
	{
		return UAttributesComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAttributesComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributesComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributesComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributesComponent_OnRep_ActiveEffects, "OnRep_ActiveEffects" }, // 1219708445
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributesComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttributesComponent_Statics::NewProp_ActiveEffects_Inner = { "ActiveEffects", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributesComponent_Statics::NewProp_ActiveEffects_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attributes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributesComponent_Statics::NewProp_ActiveEffects = { "ActiveEffects", "OnRep_ActiveEffects", (EPropertyFlags)0x002008810002083d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributesComponent, ActiveEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributesComponent_Statics::NewProp_ActiveEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponent_Statics::NewProp_ActiveEffects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributesComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesComponent_Statics::NewProp_ActiveEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesComponent_Statics::NewProp_ActiveEffects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributesComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributesComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributesComponent_Statics::ClassParams = {
		&UAttributesComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributesComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributesComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributesComponent()
	{
		if (!Z_Registration_Info_UClass_UAttributesComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributesComponent.OuterSingleton, Z_Construct_UClass_UAttributesComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributesComponent.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UAttributesComponent>()
	{
		return UAttributesComponent::StaticClass();
	}

	void UAttributesComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ActiveEffects(TEXT("ActiveEffects"));

		const bool bIsValid = true
			&& Name_ActiveEffects == ClassReps[(int32)ENetFields_Private::ActiveEffects].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAttributesComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributesComponent);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributesComponent, UAttributesComponent::StaticClass, TEXT("UAttributesComponent"), &Z_Registration_Info_UClass_UAttributesComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributesComponent), 3814956210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_4030224518(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
