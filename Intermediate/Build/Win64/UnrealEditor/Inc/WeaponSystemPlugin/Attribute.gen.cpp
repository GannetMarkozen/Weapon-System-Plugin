// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/AttributeSystem/Attribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttribute() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesInterface_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAttributesComponent_NoRegister();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeHandle();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAttribute();
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
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/Attribute.h" },
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
		{ &Z_Construct_UFunction_UAttributesInterface_GetAttributesComponent, "GetAttributesComponent" }, // 2755937877
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributesInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/Attribute.h" },
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeHandle;
class UScriptStruct* FAttributeHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeHandle, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("AttributeHandle"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeHandle.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAttributeHandle>()
{
	return FAttributeHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributeHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n *\x09""A handle that carries around an Attribute by weak pointer\n *\x09so it can be referenced elsewhere. Primarily for Blueprint\n *\x09use.\n */" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/Attribute.h" },
		{ "ToolTip", "*     A handle that carries around an Attribute by weak pointer\n*     so it can be referenced elsewhere. Primarily for Blueprint\n*     use." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeHandle_Statics::NewProp_Owner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AttributeHandle" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/Attribute.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAttributeHandle_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeHandle, Owner), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeHandle_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeHandle_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeHandle_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"AttributeHandle",
		sizeof(FAttributeHandle),
		alignof(FAttributeHandle),
		Z_Construct_UScriptStruct_FAttributeHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributeHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeHandle.InnerSingleton, Z_Construct_UScriptStruct_FAttributeHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributeHandle.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_WeaponSystemPlugin_eventAttributeValueChangedDelegate_Parms
		{
			float NewValue;
			float OldValue;
			FAttributeHandle AttributeHandle;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAttributeValueChangedDelegate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAttributeValueChangedDelegate_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::NewProp_AttributeHandle = { "AttributeHandle", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAttributeValueChangedDelegate_Parms, AttributeHandle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::NewProp_OldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::NewProp_AttributeHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n*/" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/Attribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin, nullptr, "AttributeValueChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::_Script_WeaponSystemPlugin_eventAttributeValueChangedDelegate_Parms), Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics
	{
		struct _Script_WeaponSystemPlugin_eventAttributeValueChangedUniDelegate_Parms
		{
			float NewValue;
			float OldValue;
			FAttributeHandle AttributeHandle;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAttributeValueChangedUniDelegate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAttributeValueChangedUniDelegate_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::NewProp_AttributeHandle = { "AttributeHandle", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeaponSystemPlugin_eventAttributeValueChangedUniDelegate_Parms, AttributeHandle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(nullptr, 0) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::NewProp_OldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::NewProp_AttributeHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/Attribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin, nullptr, "AttributeValueChangedUniDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::_Script_WeaponSystemPlugin_eventAttributeValueChangedUniDelegate_Parms), Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystemPlugin_AttributeValueChangedUniDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Attribute;
class UScriptStruct* FAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Attribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Attribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttribute, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("Attribute"));
	}
	return Z_Registration_Info_UScriptStruct_Attribute.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAttribute>()
{
	return FAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/Attribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attribute" },
		{ "Comment", "// The current value of this attribute\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/Attribute.h" },
		{ "ToolTip", "The current value of this attribute" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttribute, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Handle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attributes" },
		{ "Comment", "// A handle that is a reference to this attribute\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/AttributeSystem/Attribute.h" },
		{ "ToolTip", "A handle that is a reference to this attribute" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttribute, Handle), Z_Construct_UScriptStruct_FAttributeHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Handle_MetaData)) }; // 4070662230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_Handle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"Attribute",
		sizeof(FAttribute),
		alignof(FAttribute),
		Z_Construct_UScriptStruct_FAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_Attribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Attribute.InnerSingleton, Z_Construct_UScriptStruct_FAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Attribute.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_Statics::ScriptStructInfo[] = {
		{ FAttributeHandle::StaticStruct, Z_Construct_UScriptStruct_FAttributeHandle_Statics::NewStructOps, TEXT("AttributeHandle"), &Z_Registration_Info_UScriptStruct_AttributeHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeHandle), 4070662230U) },
		{ FAttribute::StaticStruct, Z_Construct_UScriptStruct_FAttribute_Statics::NewStructOps, TEXT("Attribute"), &Z_Registration_Info_UScriptStruct_Attribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttribute), 1994685381U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributesInterface, UAttributesInterface::StaticClass, TEXT("UAttributesInterface"), &Z_Registration_Info_UClass_UAttributesInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributesInterface), 2123240458U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_2337568832(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_AttributeSystem_Attribute_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
