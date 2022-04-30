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
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesInterface_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEffectNetPredKey();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributeEffect_NoRegister();
	POLYSTRUCT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStructHandle();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeHandle();
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IAttributesInterface::execGetAttributesComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAttributesComponent**)Z_Param__Result=P_THIS->GetAttributesComponent_Implementation();
		P_NATIVE_END;
	}
	UAttributesComponent* IAttributesInterface::GetAttributesComponent() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAttributesComponent instead.");
		AttributesInterface_eventGetAttributesComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	void UAttributesInterface::StaticRegisterNativesUAttributesInterface()
	{
		UClass* Class = UAttributesInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributesComponent", &IAttributesInterface::execGetAttributesComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesInterface_eventGetAttributesComponent_Parms, ReturnValue), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attributes Interface" },
		{ "Comment", "// Specify what Attributes Component to return\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "Specify what Attributes Component to return" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesInterface, nullptr, "GetAttributesComponent", nullptr, nullptr, sizeof(AttributesInterface_eventGetAttributesComponent_Parms), Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributesInterface);
	UClass* Z_Construct_UClass_UAttributesInterface_NoRegister()
	{
		return UAttributesInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAttributesInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributesInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributesInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent, "GetAttributesComponent" }, // 147168518
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributesInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributesInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAttributesInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributesInterface_Statics::ClassParams = {
		&UAttributesInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributesInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributesInterface()
	{
		if (!Z_Registration_Info_UClass_UAttributesInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributesInterface.OuterSingleton, Z_Construct_UClass_UAttributesInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributesInterface.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UAttributesInterface>()
	{
		return UAttributesInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributesInterface);
	static FName NAME_UAttributesInterface_GetAttributesComponent = FName(TEXT("GetAttributesComponent"));
	UAttributesComponent* IAttributesInterface::Execute_GetAttributesComponent(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAttributesInterface::StaticClass()));
		AttributesInterface_eventGetAttributesComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAttributesInterface_GetAttributesComponent);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IAttributesInterface*)(O->GetNativeInterfaceAddress(UAttributesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAttributesComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectNetPredKey;
class UScriptStruct* FEffectNetPredKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectNetPredKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectNetPredKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectNetPredKey, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EffectNetPredKey"));
	}
	return Z_Registration_Info_UScriptStruct_EffectNetPredKey.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FEffectNetPredKey>()
{
	return FEffectNetPredKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEffectNetPredKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectNetPredKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectNetPredKey, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::NewProp_Key,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"EffectNetPredKey",
		sizeof(FEffectNetPredKey),
		alignof(FEffectNetPredKey),
		Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffectNetPredKey()
	{
		if (!Z_Registration_Info_UScriptStruct_EffectNetPredKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectNetPredKey.InnerSingleton, Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EffectNetPredKey.InnerSingleton;
	}
	DEFINE_FUNCTION(UAttributesComponent::execHasAuthority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAuthority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execClient_Internal_ApplyEffect_Fail)
	{
		P_GET_STRUCT(FAttributeHandle,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CorrectValue);
		P_GET_STRUCT(FEffectNetPredKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_Internal_ApplyEffect_Fail_Implementation(Z_Param_Attribute,Z_Param_CorrectValue,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execClient_Internal_ApplyEffect_Success)
	{
		P_GET_STRUCT(FEffectNetPredKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_Internal_ApplyEffect_Success_Implementation(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execServer_Internal_ApplyEffect_NetPrediction)
	{
		P_GET_OBJECT(UClass,Z_Param_EffectClass);
		P_GET_STRUCT(FAttributeHandle,Z_Param_ModAttribute);
		P_GET_STRUCT(FPolyStructHandle,Z_Param_Context);
		P_GET_STRUCT(FEffectNetPredKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_Internal_ApplyEffect_NetPrediction_Implementation(Z_Param_EffectClass,Z_Param_ModAttribute,Z_Param_Context,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execServer_Internal_ApplyEffect)
	{
		P_GET_OBJECT(UClass,Z_Param_EffectClass);
		P_GET_STRUCT(FAttributeHandle,Z_Param_ModAttribute);
		P_GET_STRUCT(FPolyStructHandle,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_Internal_ApplyEffect_Implementation(Z_Param_EffectClass,Z_Param_ModAttribute,Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execFindAttributeByName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAttributeHandle*)Z_Param__Result=P_THIS->FindAttributeByName(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execRemoveEffectsByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_EffectClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveEffectsByClass(Z_Param_EffectClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributesComponent::execApplyEffect)
	{
		P_GET_OBJECT(UClass,Z_Param_Effect);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyEffect(Z_Param_Effect,Z_Param_Out_Context);
		P_NATIVE_END;
	}
	static FName NAME_UAttributesComponent_BP_OnActiveEffectRemoved = FName(TEXT("BP_OnActiveEffectRemoved"));
	void UAttributesComponent::BP_OnActiveEffectRemoved(UAttributeEffect* ActiveEffect, FAttributeHandle const& Attribute, FPolyStructHandle const& Context, const EEffectRemovalReason Reason)
	{
		AttributesComponent_eventBP_OnActiveEffectRemoved_Parms Parms;
		Parms.ActiveEffect=ActiveEffect;
		Parms.Attribute=Attribute;
		Parms.Context=Context;
		Parms.Reason=Reason;
		ProcessEvent(FindFunctionChecked(NAME_UAttributesComponent_BP_OnActiveEffectRemoved),&Parms);
	}
	static FName NAME_UAttributesComponent_BP_OnEffectApplied = FName(TEXT("BP_OnEffectApplied"));
	void UAttributesComponent::BP_OnEffectApplied(const UAttributeEffect* Effect, FPolyStructHandle& Context) const
	{
		AttributesComponent_eventBP_OnEffectApplied_Parms Parms;
		Parms.Effect=Effect;
		Parms.Context=Context;
		const_cast<UAttributesComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAttributesComponent_BP_OnEffectApplied),&Parms);
		Context=Parms.Context;
	}
	static FName NAME_UAttributesComponent_BP_PreModifyAttribute = FName(TEXT("BP_PreModifyAttribute"));
	void UAttributesComponent::BP_PreModifyAttribute(FAttributeHandle const& Attribute, const UAttributeEffect* Effect, FPolyStructHandle const& Context, const float InValue, float& OutValue)
	{
		AttributesComponent_eventBP_PreModifyAttribute_Parms Parms;
		Parms.Attribute=Attribute;
		Parms.Effect=Effect;
		Parms.Context=Context;
		Parms.InValue=InValue;
		Parms.OutValue=OutValue;
		ProcessEvent(FindFunctionChecked(NAME_UAttributesComponent_BP_PreModifyAttribute),&Parms);
		OutValue=Parms.OutValue;
	}
	static FName NAME_UAttributesComponent_Client_Internal_ApplyEffect_Fail = FName(TEXT("Client_Internal_ApplyEffect_Fail"));
	void UAttributesComponent::Client_Internal_ApplyEffect_Fail(FAttributeHandle const& Attribute, const float CorrectValue, const FEffectNetPredKey Key)
	{
		AttributesComponent_eventClient_Internal_ApplyEffect_Fail_Parms Parms;
		Parms.Attribute=Attribute;
		Parms.CorrectValue=CorrectValue;
		Parms.Key=Key;
		ProcessEvent(FindFunctionChecked(NAME_UAttributesComponent_Client_Internal_ApplyEffect_Fail),&Parms);
	}
	static FName NAME_UAttributesComponent_Client_Internal_ApplyEffect_Success = FName(TEXT("Client_Internal_ApplyEffect_Success"));
	void UAttributesComponent::Client_Internal_ApplyEffect_Success(const FEffectNetPredKey Key)
	{
		AttributesComponent_eventClient_Internal_ApplyEffect_Success_Parms Parms;
		Parms.Key=Key;
		ProcessEvent(FindFunctionChecked(NAME_UAttributesComponent_Client_Internal_ApplyEffect_Success),&Parms);
	}
	static FName NAME_UAttributesComponent_Server_Internal_ApplyEffect = FName(TEXT("Server_Internal_ApplyEffect"));
	void UAttributesComponent::Server_Internal_ApplyEffect(UClass* EffectClass, FAttributeHandle const& ModAttribute, FPolyStructHandle const& Context)
	{
		AttributesComponent_eventServer_Internal_ApplyEffect_Parms Parms;
		Parms.EffectClass=EffectClass;
		Parms.ModAttribute=ModAttribute;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UAttributesComponent_Server_Internal_ApplyEffect),&Parms);
	}
	static FName NAME_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction = FName(TEXT("Server_Internal_ApplyEffect_NetPrediction"));
	void UAttributesComponent::Server_Internal_ApplyEffect_NetPrediction(UClass* EffectClass, FAttributeHandle const& ModAttribute, FPolyStructHandle const& Context, const FEffectNetPredKey Key)
	{
		AttributesComponent_eventServer_Internal_ApplyEffect_NetPrediction_Parms Parms;
		Parms.EffectClass=EffectClass;
		Parms.ModAttribute=ModAttribute;
		Parms.Context=Context;
		Parms.Key=Key;
		ProcessEvent(FindFunctionChecked(NAME_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction),&Parms);
	}
	void UAttributesComponent::StaticRegisterNativesUAttributesComponent()
	{
		UClass* Class = UAttributesComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyEffect", &UAttributesComponent::execApplyEffect },
			{ "Client_Internal_ApplyEffect_Fail", &UAttributesComponent::execClient_Internal_ApplyEffect_Fail },
			{ "Client_Internal_ApplyEffect_Success", &UAttributesComponent::execClient_Internal_ApplyEffect_Success },
			{ "FindAttributeByName", &UAttributesComponent::execFindAttributeByName },
			{ "HasAuthority", &UAttributesComponent::execHasAuthority },
			{ "RemoveEffectsByClass", &UAttributesComponent::execRemoveEffectsByClass },
			{ "Server_Internal_ApplyEffect", &UAttributesComponent::execServer_Internal_ApplyEffect },
			{ "Server_Internal_ApplyEffect_NetPrediction", &UAttributesComponent::execServer_Internal_ApplyEffect_NetPrediction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics
	{
		struct AttributesComponent_eventApplyEffect_Parms
		{
			const TSubclassOf<UAttributeEffect>  Effect;
			FPolyStructHandle Context;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::NewProp_Effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventApplyEffect_Parms, Effect), Z_Construct_UClass_UAttributeEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::NewProp_Effect_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventApplyEffect_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2436832372
	void Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributesComponent_eventApplyEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributesComponent_eventApplyEffect_Parms), &Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Context" },
		{ "Category", "Effect" },
		{ "Comment", "// The context may be altered so it's being passed by reference\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "The context may be altered so it's being passed by reference" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "ApplyEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::AttributesComponent_eventApplyEffect_Parms), Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_ApplyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_ApplyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_ActiveEffect_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_ActiveEffect = { "ActiveEffect", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_OnActiveEffectRemoved_Parms, ActiveEffect), Z_Construct_UClass_UAttributeEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_ActiveEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_ActiveEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_OnActiveEffectRemoved_Parms, Attribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Attribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_OnActiveEffectRemoved_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Context_MetaData)) }; // 2436832372
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_OnActiveEffectRemoved_Parms, Reason), Z_Construct_UEnum_WeaponSystemPlugin_EEffectRemovalReason, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Reason_MetaData)) }; // 3942470696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_ActiveEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Reason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "DisplayName", "On Active Effect Removed" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "BP_OnActiveEffectRemoved", nullptr, nullptr, sizeof(AttributesComponent_eventBP_OnActiveEffectRemoved_Parms), Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::NewProp_Effect_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_OnEffectApplied_Parms, Effect), Z_Construct_UClass_UAttributeEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::NewProp_Effect_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_OnEffectApplied_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2436832372
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "DisplayName", "On Effect Applied" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "BP_OnEffectApplied", nullptr, nullptr, sizeof(AttributesComponent_eventBP_OnEffectApplied_Parms), Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_PreModifyAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Attribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Effect_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_PreModifyAttribute_Parms, Effect), Z_Construct_UClass_UAttributeEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_PreModifyAttribute_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Context_MetaData)) }; // 2436832372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_PreModifyAttribute_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventBP_PreModifyAttribute_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::NewProp_OutValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "Comment", "// Called right before modifying an attribute. Override to clamp or apply resistances, etc.\n// NOTE: the out value is the pending new value for the attribute\n" },
		{ "DisplayName", "Pre-Modify Attribute" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "Called right before modifying an attribute. Override to clamp or apply resistances, etc.\nNOTE: the out value is the pending new value for the attribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "BP_PreModifyAttribute", nullptr, nullptr, sizeof(AttributesComponent_eventBP_PreModifyAttribute_Parms), Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrectValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CorrectValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventClient_Internal_ApplyEffect_Fail_Parms, Attribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_Attribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_CorrectValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_CorrectValue = { "CorrectValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventClient_Internal_ApplyEffect_Fail_Parms, CorrectValue), METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_CorrectValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_CorrectValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventClient_Internal_ApplyEffect_Fail_Parms, Key), Z_Construct_UScriptStruct_FEffectNetPredKey, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_Key_MetaData)) }; // 3574645307
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_CorrectValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "Client_Internal_ApplyEffect_Fail", nullptr, nullptr, sizeof(AttributesComponent_eventClient_Internal_ApplyEffect_Fail_Parms), Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventClient_Internal_ApplyEffect_Success_Parms, Key), Z_Construct_UScriptStruct_FEffectNetPredKey, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics::NewProp_Key_MetaData)) }; // 3574645307
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "Client_Internal_ApplyEffect_Success", nullptr, nullptr, sizeof(AttributesComponent_eventClient_Internal_ApplyEffect_Success_Parms), Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics
	{
		struct AttributesComponent_eventFindAttributeByName_Parms
		{
			FName Name;
			FAttributeHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventFindAttributeByName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventFindAttributeByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Name" },
		{ "Category", "Attributes" },
		{ "Comment", "// Finds the attribute with this name. Returns an empty handle if invalid\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "Finds the attribute with this name. Returns an empty handle if invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "FindAttributeByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::AttributesComponent_eventFindAttributeByName_Parms), Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_FindAttributeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_FindAttributeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics
	{
		struct AttributesComponent_eventHasAuthority_Parms
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
	void Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttributesComponent_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttributesComponent_eventHasAuthority_Parms), &Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "HasAuthority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::AttributesComponent_eventHasAuthority_Parms), Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_HasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_HasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics
	{
		struct AttributesComponent_eventRemoveEffectsByClass_Parms
		{
			const TSubclassOf<UAttributeEffect>  EffectClass;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::NewProp_EffectClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventRemoveEffectsByClass_Parms, EffectClass), Z_Construct_UClass_UAttributeEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::NewProp_EffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::NewProp_EffectClass_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventRemoveEffectsByClass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::NewProp_EffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "Comment", "// Returns number of effects removed\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "Returns number of effects removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "RemoveEffectsByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::AttributesComponent_eventRemoveEffectsByClass_Parms), Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_Internal_ApplyEffect_Parms, EffectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::NewProp_ModAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::NewProp_ModAttribute = { "ModAttribute", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_Internal_ApplyEffect_Parms, ModAttribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::NewProp_ModAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::NewProp_ModAttribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_Internal_ApplyEffect_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::NewProp_Context_MetaData)) }; // 2436832372
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::NewProp_EffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::NewProp_ModAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Applies effect server-side\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "Applies effect server-side" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "Server_Internal_ApplyEffect", nullptr, nullptr, sizeof(AttributesComponent_eventServer_Internal_ApplyEffect_Parms), Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_Internal_ApplyEffect_NetPrediction_Parms, EffectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_ModAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_ModAttribute = { "ModAttribute", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_Internal_ApplyEffect_NetPrediction_Parms, ModAttribute), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_ModAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_ModAttribute_MetaData)) }; // 4070662230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_Internal_ApplyEffect_NetPrediction_Parms, Context), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_Context_MetaData)) }; // 2436832372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttributesComponent_eventServer_Internal_ApplyEffect_NetPrediction_Parms, Key), Z_Construct_UScriptStruct_FEffectNetPredKey, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_Key_MetaData)) }; // 3574645307
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_EffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_ModAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "Server_Internal_ApplyEffect_NetPrediction", nullptr, nullptr, sizeof(AttributesComponent_eventServer_Internal_ApplyEffect_NetPrediction_Parms), Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UAttributesComponent_ApplyEffect, "ApplyEffect" }, // 2801712929
		{ &Z_Construct_UFunction_UAttributesComponent_BP_OnActiveEffectRemoved, "BP_OnActiveEffectRemoved" }, // 2607996732
		{ &Z_Construct_UFunction_UAttributesComponent_BP_OnEffectApplied, "BP_OnEffectApplied" }, // 3239897241
		{ &Z_Construct_UFunction_UAttributesComponent_BP_PreModifyAttribute, "BP_PreModifyAttribute" }, // 2745117937
		{ &Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Fail, "Client_Internal_ApplyEffect_Fail" }, // 2345662464
		{ &Z_Construct_UFunction_UAttributesComponent_Client_Internal_ApplyEffect_Success, "Client_Internal_ApplyEffect_Success" }, // 1817973040
		{ &Z_Construct_UFunction_UAttributesComponent_FindAttributeByName, "FindAttributeByName" }, // 3897539412
		{ &Z_Construct_UFunction_UAttributesComponent_HasAuthority, "HasAuthority" }, // 3489321914
		{ &Z_Construct_UFunction_UAttributesComponent_RemoveEffectsByClass, "RemoveEffectsByClass" }, // 3754622878
		{ &Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect, "Server_Internal_ApplyEffect" }, // 2606925610
		{ &Z_Construct_UFunction_UAttributesComponent_Server_Internal_ApplyEffect_NetPrediction, "Server_Internal_ApplyEffect_NetPrediction" }, // 564197607
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttributesComponent_Statics::NewProp_ActiveEffects_Inner = { "ActiveEffects", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAttributeEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributesComponent_Statics::NewProp_ActiveEffects_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attributes" },
		{ "Comment", "// All active latent-effects. Only has any on the server or on the client for Local-Only / Local-Predicted effects\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/AttributesComponent.h" },
		{ "ToolTip", "All active latent-effects. Only has any on the server or on the client for Local-Only / Local-Predicted effects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributesComponent_Statics::NewProp_ActiveEffects = { "ActiveEffects", nullptr, (EPropertyFlags)0x002008800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributesComponent, ActiveEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributesComponent_Statics::NewProp_ActiveEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponent_Statics::NewProp_ActiveEffects_MetaData)) };
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributesComponent);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ScriptStructInfo[] = {
		{ FEffectNetPredKey::StaticStruct, Z_Construct_UScriptStruct_FEffectNetPredKey_Statics::NewStructOps, TEXT("EffectNetPredKey"), &Z_Registration_Info_UScriptStruct_EffectNetPredKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectNetPredKey), 3574645307U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributesInterface, UAttributesInterface::StaticClass, TEXT("UAttributesInterface"), &Z_Registration_Info_UClass_UAttributesInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributesInterface), 3345539928U) },
		{ Z_Construct_UClass_UAttributesComponent, UAttributesComponent::StaticClass, TEXT("UAttributesComponent"), &Z_Registration_Info_UClass_UAttributesComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributesComponent), 4134391071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_2728392888(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_AttributesComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
