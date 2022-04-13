// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Gameplay/GameplayData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayData() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDataStruct();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDataContainer();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UDataContainerFunctionLibrary_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UDataContainerFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataStruct;
class UScriptStruct* FDataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataStruct, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("DataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_DataStruct.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FDataStruct>()
{
	return FDataStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/GameplayData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"DataStruct",
		sizeof(FDataStruct),
		alignof(FDataStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_DataStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataStruct.InnerSingleton, Z_Construct_UScriptStruct_FDataStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataContainer;
class UScriptStruct* FDataContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataContainer, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("DataContainer"));
	}
	return Z_Registration_Info_UScriptStruct_DataContainer.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FDataContainer>()
{
	return FDataContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/GameplayData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataContainer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"DataContainer",
		sizeof(FDataContainer),
		alignof(FDataContainer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_DataContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataContainer.InnerSingleton, Z_Construct_UScriptStruct_FDataContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataContainer.InnerSingleton;
	}
	DEFINE_FUNCTION(UDataContainerFunctionLibrary::execGetTypeNameAtIndex)
	{
		P_GET_STRUCT_REF(FDataContainer,Z_Param_Out_DataContainer);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UDataContainerFunctionLibrary::GetTypeNameAtIndex(Z_Param_Out_DataContainer,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataContainerFunctionLibrary::execNewDataContainer)
	{
		P_GET_STRUCT_REF(FDataContainer,Z_Param_Out_DataContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataContainerFunctionLibrary::NewDataContainer(Z_Param_Out_DataContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataContainerFunctionLibrary::execIsEmpty)
	{
		P_GET_STRUCT_REF(FDataContainer,Z_Param_Out_DataContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataContainerFunctionLibrary::IsEmpty(Z_Param_Out_DataContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataContainerFunctionLibrary::execGetNumData)
	{
		P_GET_STRUCT_REF(FDataContainer,Z_Param_Out_DataContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDataContainerFunctionLibrary::GetNumData(Z_Param_Out_DataContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataContainerFunctionLibrary::execCopyDataContainer)
	{
		P_GET_STRUCT_REF(FDataContainer,Z_Param_Out_OutDataContainer);
		P_GET_STRUCT_REF(FDataContainer,Z_Param_Out_OtherDataContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataContainerFunctionLibrary::CopyDataContainer(Z_Param_Out_OutDataContainer,Z_Param_Out_OtherDataContainer);
		P_NATIVE_END;
	}
	void UDataContainerFunctionLibrary::StaticRegisterNativesUDataContainerFunctionLibrary()
	{
		UClass* Class = UDataContainerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDataToContainer", &UDataContainerFunctionLibrary::execAddDataToContainer },
			{ "CopyDataContainer", &UDataContainerFunctionLibrary::execCopyDataContainer },
			{ "ExtractDataAt", &UDataContainerFunctionLibrary::execExtractDataAt },
			{ "GetNumData", &UDataContainerFunctionLibrary::execGetNumData },
			{ "GetTypeNameAtIndex", &UDataContainerFunctionLibrary::execGetTypeNameAtIndex },
			{ "IsEmpty", &UDataContainerFunctionLibrary::execIsEmpty },
			{ "NewDataContainer", &UDataContainerFunctionLibrary::execNewDataContainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics
	{
		struct DataContainerFunctionLibrary_eventAddDataToContainer_Parms
		{
			FDataContainer DataContainer;
			int32 Data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::NewProp_DataContainer = { "DataContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventAddDataToContainer_Parms, DataContainer), Z_Construct_UScriptStruct_FDataContainer, METADATA_PARAMS(nullptr, 0) }; // 35568278
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventAddDataToContainer_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::NewProp_DataContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Utility|Data Container" },
		{ "CustomStructureParam", "Data" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/GameplayData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataContainerFunctionLibrary, nullptr, "AddDataToContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::DataContainerFunctionLibrary_eventAddDataToContainer_Parms), Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics
	{
		struct DataContainerFunctionLibrary_eventCopyDataContainer_Parms
		{
			FDataContainer OutDataContainer;
			FDataContainer OtherDataContainer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutDataContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherDataContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherDataContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::NewProp_OutDataContainer = { "OutDataContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventCopyDataContainer_Parms, OutDataContainer), Z_Construct_UScriptStruct_FDataContainer, METADATA_PARAMS(nullptr, 0) }; // 35568278
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::NewProp_OtherDataContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::NewProp_OtherDataContainer = { "OtherDataContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventCopyDataContainer_Parms, OtherDataContainer), Z_Construct_UScriptStruct_FDataContainer, METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::NewProp_OtherDataContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::NewProp_OtherDataContainer_MetaData)) }; // 35568278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::NewProp_OutDataContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::NewProp_OtherDataContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon System Function Library|Data Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/GameplayData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataContainerFunctionLibrary, nullptr, "CopyDataContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::DataContainerFunctionLibrary_eventCopyDataContainer_Parms), Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics
	{
		struct DataContainerFunctionLibrary_eventExtractDataAt_Parms
		{
			int32 OutData;
			FDataContainer DataContainer;
			int32 Index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventExtractDataAt_Parms, OutData), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_DataContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_DataContainer = { "DataContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventExtractDataAt_Parms, DataContainer), Z_Construct_UScriptStruct_FDataContainer, METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_DataContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_DataContainer_MetaData)) }; // 35568278
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventExtractDataAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_Index_MetaData)) };
	void Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataContainerFunctionLibrary_eventExtractDataAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataContainerFunctionLibrary_eventExtractDataAt_Parms), &Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_OutData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_DataContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon System Function Library|Data Container" },
		{ "CustomStructureParam", "OutData" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/GameplayData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataContainerFunctionLibrary, nullptr, "ExtractDataAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::DataContainerFunctionLibrary_eventExtractDataAt_Parms), Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics
	{
		struct DataContainerFunctionLibrary_eventGetNumData_Parms
		{
			FDataContainer DataContainer;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataContainer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::NewProp_DataContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::NewProp_DataContainer = { "DataContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventGetNumData_Parms, DataContainer), Z_Construct_UScriptStruct_FDataContainer, METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::NewProp_DataContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::NewProp_DataContainer_MetaData)) }; // 35568278
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventGetNumData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::NewProp_DataContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon System Function Library|Data Container" },
		{ "Comment", "// Gets the number of data parameters begin held\n" },
		{ "CompactNodeTitle", "Length" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/GameplayData.h" },
		{ "ToolTip", "Gets the number of data parameters begin held" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataContainerFunctionLibrary, nullptr, "GetNumData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::DataContainerFunctionLibrary_eventGetNumData_Parms), Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics
	{
		struct DataContainerFunctionLibrary_eventGetTypeNameAtIndex_Parms
		{
			FDataContainer DataContainer;
			int32 Index;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::NewProp_DataContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::NewProp_DataContainer = { "DataContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventGetTypeNameAtIndex_Parms, DataContainer), Z_Construct_UScriptStruct_FDataContainer, METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::NewProp_DataContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::NewProp_DataContainer_MetaData)) }; // 35568278
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventGetTypeNameAtIndex_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventGetTypeNameAtIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::NewProp_DataContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon System Function Library|Data Container" },
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/GameplayData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataContainerFunctionLibrary, nullptr, "GetTypeNameAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::DataContainerFunctionLibrary_eventGetTypeNameAtIndex_Parms), Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics
	{
		struct DataContainerFunctionLibrary_eventIsEmpty_Parms
		{
			FDataContainer DataContainer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::NewProp_DataContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::NewProp_DataContainer = { "DataContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventIsEmpty_Parms, DataContainer), Z_Construct_UScriptStruct_FDataContainer, METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::NewProp_DataContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::NewProp_DataContainer_MetaData)) }; // 35568278
	void Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataContainerFunctionLibrary_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataContainerFunctionLibrary_eventIsEmpty_Parms), &Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::NewProp_DataContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon System Function Library|Data Container" },
		{ "Comment", "// If the container has any data at all\n" },
		{ "CompactNodeTitle", "Is Empty" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/GameplayData.h" },
		{ "ToolTip", "If the container has any data at all" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataContainerFunctionLibrary, nullptr, "IsEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::DataContainerFunctionLibrary_eventIsEmpty_Parms), Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer_Statics
	{
		struct DataContainerFunctionLibrary_eventNewDataContainer_Parms
		{
			FDataContainer DataContainer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer_Statics::NewProp_DataContainer = { "DataContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataContainerFunctionLibrary_eventNewDataContainer_Parms, DataContainer), Z_Construct_UScriptStruct_FDataContainer, METADATA_PARAMS(nullptr, 0) }; // 35568278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer_Statics::NewProp_DataContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon System Function Library|Data Container" },
		{ "CompactNodeTitle", "New Data Container" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/GameplayData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataContainerFunctionLibrary, nullptr, "NewDataContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer_Statics::DataContainerFunctionLibrary_eventNewDataContainer_Parms), Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataContainerFunctionLibrary);
	UClass* Z_Construct_UClass_UDataContainerFunctionLibrary_NoRegister()
	{
		return UDataContainerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDataContainerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataContainerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataContainerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataContainerFunctionLibrary_AddDataToContainer, "AddDataToContainer" }, // 3236486831
		{ &Z_Construct_UFunction_UDataContainerFunctionLibrary_CopyDataContainer, "CopyDataContainer" }, // 2385317623
		{ &Z_Construct_UFunction_UDataContainerFunctionLibrary_ExtractDataAt, "ExtractDataAt" }, // 2723912231
		{ &Z_Construct_UFunction_UDataContainerFunctionLibrary_GetNumData, "GetNumData" }, // 4252520684
		{ &Z_Construct_UFunction_UDataContainerFunctionLibrary_GetTypeNameAtIndex, "GetTypeNameAtIndex" }, // 2868286149
		{ &Z_Construct_UFunction_UDataContainerFunctionLibrary_IsEmpty, "IsEmpty" }, // 3455005811
		{ &Z_Construct_UFunction_UDataContainerFunctionLibrary_NewDataContainer, "NewDataContainer" }, // 722519694
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataContainerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponSystem/Gameplay/GameplayData.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/GameplayData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataContainerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataContainerFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataContainerFunctionLibrary_Statics::ClassParams = {
		&UDataContainerFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataContainerFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataContainerFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataContainerFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UDataContainerFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataContainerFunctionLibrary.OuterSingleton, Z_Construct_UClass_UDataContainerFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataContainerFunctionLibrary.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UDataContainerFunctionLibrary>()
	{
		return UDataContainerFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataContainerFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_GameplayData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_GameplayData_h_Statics::ScriptStructInfo[] = {
		{ FDataStruct::StaticStruct, Z_Construct_UScriptStruct_FDataStruct_Statics::NewStructOps, TEXT("DataStruct"), &Z_Registration_Info_UScriptStruct_DataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataStruct), 2587656368U) },
		{ FDataContainer::StaticStruct, Z_Construct_UScriptStruct_FDataContainer_Statics::NewStructOps, TEXT("DataContainer"), &Z_Registration_Info_UScriptStruct_DataContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataContainer), 35568278U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_GameplayData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataContainerFunctionLibrary, UDataContainerFunctionLibrary::StaticClass, TEXT("UDataContainerFunctionLibrary"), &Z_Registration_Info_UClass_UDataContainerFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataContainerFunctionLibrary), 1761418926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_GameplayData_h_1307485295(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_GameplayData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_GameplayData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_GameplayData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_GameplayData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
