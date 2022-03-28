// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Private/WeaponSystem/Weapons/Interfaces.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaces() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UItemInterface_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UItemInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponAttachmentWidgetInterface_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponAttachmentWidgetInterface();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UWeaponAttachmentPoint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IItemInterface::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDescription_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IItemInterface::execGetDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IItemInterface::execGetThumbnail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetThumbnail_Implementation();
		P_NATIVE_END;
	}
	FText IItemInterface::GetDescription() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDescription instead.");
		ItemInterface_eventGetDescription_Parms Parms;
		return Parms.ReturnValue;
	}
	FText IItemInterface::GetDisplayName() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDisplayName instead.");
		ItemInterface_eventGetDisplayName_Parms Parms;
		return Parms.ReturnValue;
	}
	UTexture2D* IItemInterface::GetThumbnail() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetThumbnail instead.");
		ItemInterface_eventGetThumbnail_Parms Parms;
		return Parms.ReturnValue;
	}
	void UItemInterface::StaticRegisterNativesUItemInterface()
	{
		UClass* Class = UItemInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDescription", &IItemInterface::execGetDescription },
			{ "GetDisplayName", &IItemInterface::execGetDisplayName },
			{ "GetThumbnail", &IItemInterface::execGetThumbnail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemInterface_GetDescription_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UItemInterface_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemInterface_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemInterface_GetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemInterface_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemInterface_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item Interface" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Interfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemInterface_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemInterface, nullptr, "GetDescription", nullptr, nullptr, sizeof(ItemInterface_eventGetDescription_Parms), Z_Construct_UFunction_UItemInterface_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInterface_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemInterface_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInterface_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemInterface_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemInterface_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemInterface_GetDisplayName_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UItemInterface_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemInterface_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemInterface_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemInterface_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemInterface_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item Interface" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Interfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemInterface_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemInterface, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(ItemInterface_eventGetDisplayName_Parms), Z_Construct_UFunction_UItemInterface_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInterface_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemInterface_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInterface_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemInterface_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemInterface_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemInterface_GetThumbnail_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemInterface_GetThumbnail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemInterface_eventGetThumbnail_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemInterface_GetThumbnail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemInterface_GetThumbnail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemInterface_GetThumbnail_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item Interface" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Interfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemInterface_GetThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemInterface, nullptr, "GetThumbnail", nullptr, nullptr, sizeof(ItemInterface_eventGetThumbnail_Parms), Z_Construct_UFunction_UItemInterface_GetThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInterface_GetThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemInterface_GetThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInterface_GetThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemInterface_GetThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemInterface_GetThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemInterface_NoRegister()
	{
		return UItemInterface::StaticClass();
	}
	struct Z_Construct_UClass_UItemInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemInterface_GetDescription, "GetDescription" }, // 1755165009
		{ &Z_Construct_UFunction_UItemInterface_GetDisplayName, "GetDisplayName" }, // 5159579
		{ &Z_Construct_UFunction_UItemInterface_GetThumbnail, "GetThumbnail" }, // 2846118221
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Interfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemInterface_Statics::ClassParams = {
		&UItemInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UItemInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemInterface, 3736952299);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UItemInterface>()
	{
		return UItemInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemInterface(Z_Construct_UClass_UItemInterface, &UItemInterface::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UItemInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemInterface);
	static FName NAME_UItemInterface_GetDescription = FName(TEXT("GetDescription"));
	FText IItemInterface::Execute_GetDescription(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemInterface::StaticClass()));
		ItemInterface_eventGetDescription_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UItemInterface_GetDescription);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IItemInterface*)(O->GetNativeInterfaceAddress(UItemInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDescription_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UItemInterface_GetDisplayName = FName(TEXT("GetDisplayName"));
	FText IItemInterface::Execute_GetDisplayName(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemInterface::StaticClass()));
		ItemInterface_eventGetDisplayName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UItemInterface_GetDisplayName);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IItemInterface*)(O->GetNativeInterfaceAddress(UItemInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDisplayName_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UItemInterface_GetThumbnail = FName(TEXT("GetThumbnail"));
	UTexture2D* IItemInterface::Execute_GetThumbnail(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemInterface::StaticClass()));
		ItemInterface_eventGetThumbnail_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UItemInterface_GetThumbnail);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IItemInterface*)(O->GetNativeInterfaceAddress(UItemInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetThumbnail_Implementation();
		}
		return Parms.ReturnValue;
	}
	DEFINE_FUNCTION(IWeaponAttachmentWidgetInterface::execWidgetConstructed)
	{
		P_GET_OBJECT(UWeaponAttachmentPoint,Z_Param_AttachmentPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WidgetConstructed_Implementation(Z_Param_AttachmentPoint);
		P_NATIVE_END;
	}
	void IWeaponAttachmentWidgetInterface::WidgetConstructed(UWeaponAttachmentPoint* AttachmentPoint)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_WidgetConstructed instead.");
	}
	void UWeaponAttachmentWidgetInterface::StaticRegisterNativesUWeaponAttachmentWidgetInterface()
	{
		UClass* Class = UWeaponAttachmentWidgetInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WidgetConstructed", &IWeaponAttachmentWidgetInterface::execWidgetConstructed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics::NewProp_AttachmentPoint_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics::NewProp_AttachmentPoint = { "AttachmentPoint", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentWidgetInterface_eventWidgetConstructed_Parms, AttachmentPoint), Z_Construct_UClass_UWeaponAttachmentPoint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics::NewProp_AttachmentPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics::NewProp_AttachmentPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics::NewProp_AttachmentPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Attachment Widget Interface" },
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Interfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentWidgetInterface, nullptr, "WidgetConstructed", nullptr, nullptr, sizeof(WeaponAttachmentWidgetInterface_eventWidgetConstructed_Parms), Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponAttachmentWidgetInterface_NoRegister()
	{
		return UWeaponAttachmentWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponAttachmentWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponAttachmentWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponAttachmentWidgetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponAttachmentWidgetInterface_WidgetConstructed, "WidgetConstructed" }, // 2587455545
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponAttachmentWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/WeaponSystem/Weapons/Interfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponAttachmentWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWeaponAttachmentWidgetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponAttachmentWidgetInterface_Statics::ClassParams = {
		&UWeaponAttachmentWidgetInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWeaponAttachmentWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponAttachmentWidgetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponAttachmentWidgetInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponAttachmentWidgetInterface, 2564145270);
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UWeaponAttachmentWidgetInterface>()
	{
		return UWeaponAttachmentWidgetInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponAttachmentWidgetInterface(Z_Construct_UClass_UWeaponAttachmentWidgetInterface, &UWeaponAttachmentWidgetInterface::StaticClass, TEXT("/Script/WeaponSystemPlugin"), TEXT("UWeaponAttachmentWidgetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponAttachmentWidgetInterface);
	static FName NAME_UWeaponAttachmentWidgetInterface_WidgetConstructed = FName(TEXT("WidgetConstructed"));
	void IWeaponAttachmentWidgetInterface::Execute_WidgetConstructed(UObject* O, UWeaponAttachmentPoint* AttachmentPoint)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWeaponAttachmentWidgetInterface::StaticClass()));
		WeaponAttachmentWidgetInterface_eventWidgetConstructed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWeaponAttachmentWidgetInterface_WidgetConstructed);
		if (Func)
		{
			Parms.AttachmentPoint=AttachmentPoint;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IWeaponAttachmentWidgetInterface*)(O->GetNativeInterfaceAddress(UWeaponAttachmentWidgetInterface::StaticClass())))
		{
			I->WidgetConstructed_Implementation(AttachmentPoint);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
