// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/ScriptBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptBase() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UScriptBase_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UScriptBase();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UReplicatedObject();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UScriptContainerComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UScriptContainerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FScriptObjectSingle();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FScriptObjectArray();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	DEFINE_FUNCTION(UScriptBase::execCanTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanTick_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UScriptBase_BP_BeginPlay = FName(TEXT("BP_BeginPlay"));
	void UScriptBase::BP_BeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UScriptBase_BP_BeginPlay),NULL);
	}
	static FName NAME_UScriptBase_BP_EndPlay = FName(TEXT("BP_EndPlay"));
	void UScriptBase::BP_EndPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UScriptBase_BP_EndPlay),NULL);
	}
	static FName NAME_UScriptBase_BP_Tick = FName(TEXT("BP_Tick"));
	void UScriptBase::BP_Tick(float DeltaTime)
	{
		ScriptBase_eventBP_Tick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UScriptBase_BP_Tick),&Parms);
	}
	static FName NAME_UScriptBase_CanTick = FName(TEXT("CanTick"));
	bool UScriptBase::CanTick() const
	{
		ScriptBase_eventCanTick_Parms Parms;
		const_cast<UScriptBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UScriptBase_CanTick),&Parms);
		return !!Parms.ReturnValue;
	}
	void UScriptBase::StaticRegisterNativesUScriptBase()
	{
		UClass* Class = UScriptBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanTick", &UScriptBase::execCanTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptBase_BP_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptBase_BP_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "DisplayName", "Begin Play" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptBase_BP_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptBase, nullptr, "BP_BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptBase_BP_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptBase_BP_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptBase_BP_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptBase_BP_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptBase_BP_EndPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptBase_BP_EndPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "DisplayName", "End Play" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptBase_BP_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptBase, nullptr, "BP_EndPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptBase_BP_EndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptBase_BP_EndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptBase_BP_EndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptBase_BP_EndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptBase_BP_Tick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScriptBase_BP_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScriptBase_eventBP_Tick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptBase_BP_Tick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptBase_BP_Tick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptBase_BP_Tick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptBase_BP_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptBase, nullptr, "BP_Tick", nullptr, nullptr, sizeof(ScriptBase_eventBP_Tick_Parms), Z_Construct_UFunction_UScriptBase_BP_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptBase_BP_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptBase_BP_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptBase_BP_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptBase_BP_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptBase_BP_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptBase_CanTick_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScriptBase_CanTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptBase_eventCanTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptBase_CanTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScriptBase_eventCanTick_Parms), &Z_Construct_UFunction_UScriptBase_CanTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptBase_CanTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptBase_CanTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptBase_CanTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptBase_CanTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptBase, nullptr, "CanTick", nullptr, nullptr, sizeof(ScriptBase_eventCanTick_Parms), Z_Construct_UFunction_UScriptBase_CanTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptBase_CanTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptBase_CanTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptBase_CanTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptBase_CanTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptBase_CanTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptBase);
	UClass* Z_Construct_UClass_UScriptBase_NoRegister()
	{
		return UScriptBase::StaticClass();
	}
	struct Z_Construct_UClass_UScriptBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicatedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptBase_BP_BeginPlay, "BP_BeginPlay" }, // 1547059022
		{ &Z_Construct_UFunction_UScriptBase_BP_EndPlay, "BP_EndPlay" }, // 457434502
		{ &Z_Construct_UFunction_UScriptBase_BP_Tick, "BP_Tick" }, // 2901946635
		{ &Z_Construct_UFunction_UScriptBase_CanTick, "CanTick" }, // 2420880468
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WeaponSystem/ScriptBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptBase_Statics::ClassParams = {
		&UScriptBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UScriptBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptBase()
	{
		if (!Z_Registration_Info_UClass_UScriptBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptBase.OuterSingleton, Z_Construct_UClass_UScriptBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptBase.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UScriptBase>()
	{
		return UScriptBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptBase);
	void UScriptContainerComponent::StaticRegisterNativesUScriptContainerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptContainerComponent);
	UClass* Z_Construct_UClass_UScriptContainerComponent_NoRegister()
	{
		return UScriptContainerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UScriptContainerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptContainerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptContainerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/* Automatically calls begin play and replicates Scripts declared in this component.\n * Primarily for Blueprint users. Has not been tested thoroughly...\n */" },
		{ "IncludePath", "WeaponSystem/ScriptBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
		{ "ToolTip", "Automatically calls begin play and replicates Scripts declared in this component.\n* Primarily for Blueprint users. Has not been tested thoroughly..." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptContainerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptContainerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptContainerComponent_Statics::ClassParams = {
		&UScriptContainerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptContainerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptContainerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptContainerComponent()
	{
		if (!Z_Registration_Info_UClass_UScriptContainerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptContainerComponent.OuterSingleton, Z_Construct_UClass_UScriptContainerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptContainerComponent.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UScriptContainerComponent>()
	{
		return UScriptContainerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptContainerComponent);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptObjectSingle;
class UScriptStruct* FScriptObjectSingle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptObjectSingle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptObjectSingle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptObjectSingle, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("ScriptObjectSingle"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptObjectSingle.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FScriptObjectSingle>()
{
	return FScriptObjectSingle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScriptObjectSingle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Script;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptObjectSingle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::NewProp_Script_MetaData[] = {
		{ "Category", "ScriptObjectSingle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScriptObjectSingle, Script), Z_Construct_UClass_UScriptBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::NewProp_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::NewProp_Script_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::NewProp_Script,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"ScriptObjectSingle",
		sizeof(FScriptObjectSingle),
		alignof(FScriptObjectSingle),
		Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptObjectSingle()
	{
		if (!Z_Registration_Info_UScriptStruct_ScriptObjectSingle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptObjectSingle.InnerSingleton, Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScriptObjectSingle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptObjectArray;
class UScriptStruct* FScriptObjectArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptObjectArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptObjectArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptObjectArray, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("ScriptObjectArray"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptObjectArray.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FScriptObjectArray>()
{
	return FScriptObjectArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScriptObjectArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scripts_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Scripts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scripts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Scripts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptObjectArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptObjectArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptObjectArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptObjectArray_Statics::NewProp_Scripts_Inner_MetaData[] = {
		{ "Category", "ScriptObjectArray" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FScriptObjectArray_Statics::NewProp_Scripts_Inner = { "Scripts", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UScriptBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptObjectArray_Statics::NewProp_Scripts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptObjectArray_Statics::NewProp_Scripts_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptObjectArray_Statics::NewProp_Scripts_MetaData[] = {
		{ "Category", "ScriptObjectArray" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FScriptObjectArray_Statics::NewProp_Scripts = { "Scripts", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScriptObjectArray, Scripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptObjectArray_Statics::NewProp_Scripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptObjectArray_Statics::NewProp_Scripts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScriptObjectArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptObjectArray_Statics::NewProp_Scripts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptObjectArray_Statics::NewProp_Scripts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptObjectArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"ScriptObjectArray",
		sizeof(FScriptObjectArray),
		alignof(FScriptObjectArray),
		Z_Construct_UScriptStruct_FScriptObjectArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptObjectArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptObjectArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptObjectArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptObjectArray()
	{
		if (!Z_Registration_Info_UScriptStruct_ScriptObjectArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptObjectArray.InnerSingleton, Z_Construct_UScriptStruct_FScriptObjectArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScriptObjectArray.InnerSingleton;
	}
	DEFINE_FUNCTION(UScriptObjectWrapperFunctionLibrary::execConv_ScriptObjectArrayToScriptBases)
	{
		P_GET_STRUCT_REF(FScriptObjectArray,Z_Param_Out_ScriptWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UScriptBase*>*)Z_Param__Result=UScriptObjectWrapperFunctionLibrary::Conv_ScriptObjectArrayToScriptBases(Z_Param_Out_ScriptWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptObjectWrapperFunctionLibrary::execConv_ScriptObjectSingleToScriptBase)
	{
		P_GET_STRUCT_REF(FScriptObjectSingle,Z_Param_Out_ScriptWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptBase**)Z_Param__Result=UScriptObjectWrapperFunctionLibrary::Conv_ScriptObjectSingleToScriptBase(Z_Param_Out_ScriptWrapper);
		P_NATIVE_END;
	}
	void UScriptObjectWrapperFunctionLibrary::StaticRegisterNativesUScriptObjectWrapperFunctionLibrary()
	{
		UClass* Class = UScriptObjectWrapperFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_ScriptObjectArrayToScriptBases", &UScriptObjectWrapperFunctionLibrary::execConv_ScriptObjectArrayToScriptBases },
			{ "Conv_ScriptObjectSingleToScriptBase", &UScriptObjectWrapperFunctionLibrary::execConv_ScriptObjectSingleToScriptBase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics
	{
		struct ScriptObjectWrapperFunctionLibrary_eventConv_ScriptObjectArrayToScriptBases_Parms
		{
			FScriptObjectArray ScriptWrapper;
			TArray<UScriptBase*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptWrapper_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptWrapper;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::NewProp_ScriptWrapper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::NewProp_ScriptWrapper = { "ScriptWrapper", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScriptObjectWrapperFunctionLibrary_eventConv_ScriptObjectArrayToScriptBases_Parms, ScriptWrapper), Z_Construct_UScriptStruct_FScriptObjectArray, METADATA_PARAMS(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::NewProp_ScriptWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::NewProp_ScriptWrapper_MetaData)) }; // 1384959460
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UScriptBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScriptObjectWrapperFunctionLibrary_eventConv_ScriptObjectArrayToScriptBases_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::NewProp_ScriptWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Script Wrappers" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Script Object Array" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary, nullptr, "Conv_ScriptObjectArrayToScriptBases", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::ScriptObjectWrapperFunctionLibrary_eventConv_ScriptObjectArrayToScriptBases_Parms), Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics
	{
		struct ScriptObjectWrapperFunctionLibrary_eventConv_ScriptObjectSingleToScriptBase_Parms
		{
			FScriptObjectSingle ScriptWrapper;
			UScriptBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptWrapper_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::NewProp_ScriptWrapper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::NewProp_ScriptWrapper = { "ScriptWrapper", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScriptObjectWrapperFunctionLibrary_eventConv_ScriptObjectSingleToScriptBase_Parms, ScriptWrapper), Z_Construct_UScriptStruct_FScriptObjectSingle, METADATA_PARAMS(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::NewProp_ScriptWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::NewProp_ScriptWrapper_MetaData)) }; // 2807208780
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScriptObjectWrapperFunctionLibrary_eventConv_ScriptObjectSingleToScriptBase_Parms, ReturnValue), Z_Construct_UClass_UScriptBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::NewProp_ScriptWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Script Wrappers" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Script Object" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary, nullptr, "Conv_ScriptObjectSingleToScriptBase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::ScriptObjectWrapperFunctionLibrary_eventConv_ScriptObjectSingleToScriptBase_Parms), Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptObjectWrapperFunctionLibrary);
	UClass* Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary_NoRegister()
	{
		return UScriptObjectWrapperFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectArrayToScriptBases, "Conv_ScriptObjectArrayToScriptBases" }, // 510325189
		{ &Z_Construct_UFunction_UScriptObjectWrapperFunctionLibrary_Conv_ScriptObjectSingleToScriptBase, "Conv_ScriptObjectSingleToScriptBase" }, // 1888086620
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponSystem/ScriptBase.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ScriptBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptObjectWrapperFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary_Statics::ClassParams = {
		&UScriptObjectWrapperFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UScriptObjectWrapperFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptObjectWrapperFunctionLibrary.OuterSingleton, Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptObjectWrapperFunctionLibrary.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UScriptObjectWrapperFunctionLibrary>()
	{
		return UScriptObjectWrapperFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptObjectWrapperFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_Statics::ScriptStructInfo[] = {
		{ FScriptObjectSingle::StaticStruct, Z_Construct_UScriptStruct_FScriptObjectSingle_Statics::NewStructOps, TEXT("ScriptObjectSingle"), &Z_Registration_Info_UScriptStruct_ScriptObjectSingle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptObjectSingle), 2807208780U) },
		{ FScriptObjectArray::StaticStruct, Z_Construct_UScriptStruct_FScriptObjectArray_Statics::NewStructOps, TEXT("ScriptObjectArray"), &Z_Registration_Info_UScriptStruct_ScriptObjectArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptObjectArray), 1384959460U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScriptBase, UScriptBase::StaticClass, TEXT("UScriptBase"), &Z_Registration_Info_UClass_UScriptBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptBase), 173249086U) },
		{ Z_Construct_UClass_UScriptContainerComponent, UScriptContainerComponent::StaticClass, TEXT("UScriptContainerComponent"), &Z_Registration_Info_UClass_UScriptContainerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptContainerComponent), 4026788127U) },
		{ Z_Construct_UClass_UScriptObjectWrapperFunctionLibrary, UScriptObjectWrapperFunctionLibrary::StaticClass, TEXT("UScriptObjectWrapperFunctionLibrary"), &Z_Registration_Info_UClass_UScriptObjectWrapperFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptObjectWrapperFunctionLibrary), 3009642483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_1907056982(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeaponSystemExample_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_ScriptBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
