// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/ReplicatedObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedObject() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UReplicatedObject_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UReplicatedObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UReplicatedObject::execDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Destroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReplicatedObject::execHasAuthority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAuthority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReplicatedObject::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReplicatedObject::execGetWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorld();
		P_NATIVE_END;
	}
	static FName NAME_UReplicatedObject_BP_OnDestroyed = FName(TEXT("BP_OnDestroyed"));
	void UReplicatedObject::BP_OnDestroyed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UReplicatedObject_BP_OnDestroyed),NULL);
	}
	void UReplicatedObject::StaticRegisterNativesUReplicatedObject()
	{
		UClass* Class = UReplicatedObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Destroy", &UReplicatedObject::execDestroy },
			{ "GetOwner", &UReplicatedObject::execGetOwner },
			{ "GetWorld", &UReplicatedObject::execGetWorld },
			{ "HasAuthority", &UReplicatedObject::execHasAuthority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReplicatedObject_BP_OnDestroyed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicatedObject_BP_OnDestroyed_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Destroyed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ReplicatedObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicatedObject_BP_OnDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedObject, nullptr, "BP_OnDestroyed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicatedObject_BP_OnDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedObject_BP_OnDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicatedObject_BP_OnDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplicatedObject_BP_OnDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplicatedObject_Destroy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicatedObject_Destroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/ReplicatedObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicatedObject_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedObject, nullptr, "Destroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicatedObject_Destroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedObject_Destroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicatedObject_Destroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplicatedObject_Destroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplicatedObject_GetOwner_Statics
	{
		struct ReplicatedObject_eventGetOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplicatedObject_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplicatedObject_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplicatedObject_GetOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplicatedObject_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicatedObject_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Override if the outer of this object is not an AActor\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ReplicatedObject.h" },
		{ "ToolTip", "Override if the outer of this object is not an AActor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicatedObject_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedObject, nullptr, "GetOwner", nullptr, nullptr, sizeof(ReplicatedObject_eventGetOwner_Parms), Z_Construct_UFunction_UReplicatedObject_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedObject_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicatedObject_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedObject_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicatedObject_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplicatedObject_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplicatedObject_GetWorld_Statics
	{
		struct ReplicatedObject_eventGetWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplicatedObject_GetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplicatedObject_eventGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplicatedObject_GetWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplicatedObject_GetWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicatedObject_GetWorld_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 *\x09HELPERS\n\x09 */" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ReplicatedObject.h" },
		{ "ToolTip", "*      HELPERS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicatedObject_GetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedObject, nullptr, "GetWorld", nullptr, nullptr, sizeof(ReplicatedObject_eventGetWorld_Parms), Z_Construct_UFunction_UReplicatedObject_GetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedObject_GetWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicatedObject_GetWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedObject_GetWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicatedObject_GetWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplicatedObject_GetWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplicatedObject_HasAuthority_Statics
	{
		struct ReplicatedObject_eventHasAuthority_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReplicatedObject_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReplicatedObject_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplicatedObject_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReplicatedObject_eventHasAuthority_Parms), &Z_Construct_UFunction_UReplicatedObject_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplicatedObject_HasAuthority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplicatedObject_HasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicatedObject_HasAuthority_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Calls GetOwningActor() to check actor's authority. If outer is not AActor\n// override GetOwningActor\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ReplicatedObject.h" },
		{ "ToolTip", "Calls GetOwningActor() to check actor's authority. If outer is not AActor\noverride GetOwningActor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicatedObject_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedObject, nullptr, "HasAuthority", nullptr, nullptr, sizeof(ReplicatedObject_eventHasAuthority_Parms), Z_Construct_UFunction_UReplicatedObject_HasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedObject_HasAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicatedObject_HasAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedObject_HasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicatedObject_HasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplicatedObject_HasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReplicatedObject_NoRegister()
	{
		return UReplicatedObject::StaticClass();
	}
	struct Z_Construct_UClass_UReplicatedObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicatedObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReplicatedObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplicatedObject_BP_OnDestroyed, "BP_OnDestroyed" }, // 4206747397
		{ &Z_Construct_UFunction_UReplicatedObject_Destroy, "Destroy" }, // 420023857
		{ &Z_Construct_UFunction_UReplicatedObject_GetOwner, "GetOwner" }, // 246951230
		{ &Z_Construct_UFunction_UReplicatedObject_GetWorld, "GetWorld" }, // 2708958858
		{ &Z_Construct_UFunction_UReplicatedObject_HasAuthority, "HasAuthority" }, // 2635712284
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponSystem/ReplicatedObject.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/ReplicatedObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicatedObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicatedObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicatedObject_Statics::ClassParams = {
		&UReplicatedObject::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicatedObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicatedObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReplicatedObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReplicatedObject, 2896179393);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UReplicatedObject>()
	{
		return UReplicatedObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReplicatedObject(Z_Construct_UClass_UReplicatedObject, &UReplicatedObject::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UReplicatedObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicatedObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
