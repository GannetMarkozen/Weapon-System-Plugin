// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PolyStruct/Public/Polymorphic/PolymorphicStructFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolymorphicStructFunctionLibrary() {}
// Cross Module References
	POLYSTRUCT_API UEnum* Z_Construct_UEnum_PolyStruct_EStructCastPin();
	UPackage* Z_Construct_UPackage__Script_PolyStruct();
	POLYSTRUCT_API UClass* Z_Construct_UClass_UPolyStructFunctionLibrary_NoRegister();
	POLYSTRUCT_API UClass* Z_Construct_UClass_UPolyStructFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	POLYSTRUCT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStructHandle();
	POLYSTRUCT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	POLYSTRUCT_API UClass* Z_Construct_UClass_UPolyStructHack_NoRegister();
	POLYSTRUCT_API UClass* Z_Construct_UClass_UPolyStructHack();
// End Cross Module References
	static_assert(!int64(EStructCastPin::Success)||!int64(EStructCastPin::Fail), "'EStructCastPin' does not have a 0 entry!(This is a problem when the enum is initalized by default)");
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStructCastPin;
	static UEnum* EStructCastPin_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStructCastPin.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStructCastPin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PolyStruct_EStructCastPin, Z_Construct_UPackage__Script_PolyStruct(), TEXT("EStructCastPin"));
		}
		return Z_Registration_Info_UEnum_EStructCastPin.OuterSingleton;
	}
	template<> POLYSTRUCT_API UEnum* StaticEnum<EStructCastPin>()
	{
		return EStructCastPin_StaticEnum();
	}
	struct Z_Construct_UEnum_PolyStruct_EStructCastPin_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PolyStruct_EStructCastPin_Statics::Enumerators[] = {
		{ "EStructCastPin::Success", (int64)EStructCastPin::Success },
		{ "EStructCastPin::Fail", (int64)EStructCastPin::Fail },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PolyStruct_EStructCastPin_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "Fail.Comment", "/**\n * \n */" },
		{ "Fail.Name", "EStructCastPin::Fail" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "Success.Comment", "/**\n * \n */" },
		{ "Success.Name", "EStructCastPin::Success" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PolyStruct_EStructCastPin_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PolyStruct,
		nullptr,
		"EStructCastPin",
		"EStructCastPin",
		Z_Construct_UEnum_PolyStruct_EStructCastPin_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PolyStruct_EStructCastPin_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PolyStruct_EStructCastPin_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PolyStruct_EStructCastPin_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PolyStruct_EStructCastPin()
	{
		if (!Z_Registration_Info_UEnum_EStructCastPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStructCastPin.InnerSingleton, Z_Construct_UEnum_PolyStruct_EStructCastPin_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStructCastPin.InnerSingleton;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execMakeDefaultPolyStructHandle)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_OutPolyStructHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::MakeDefaultPolyStructHandle(Z_Param_Out_OutPolyStructHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execToArray)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_GET_TARRAY_REF(FPolyStruct,Z_Param_Out_OutPolyStructs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::ToArray(Z_Param_Out_PolyStructHandle,Z_Param_Out_OutPolyStructs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execConv_PolyStructHandleToPolyStruct)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPolyStruct*)Z_Param__Result=UPolyStructFunctionLibrary::Conv_PolyStructHandleToPolyStruct(Z_Param_Out_PolyStructHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execLength)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPolyStructFunctionLibrary::Length(Z_Param_Out_PolyStructHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execIsEmpty)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPolyStructFunctionLibrary::IsEmpty(Z_Param_Out_PolyStructHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execEmptyPolyStructHandle)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::EmptyPolyStructHandle(Z_Param_Out_PolyStructHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execGetAtIndex)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_OutPolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::GetAtIndex(Z_Param_Out_PolyStructHandle,Z_Param_Index,Z_Param_Out_OutPolyStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execRemoveItem)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::RemoveItem(Z_Param_Out_PolyStructHandle,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execAppendFromPolyHandle)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_OutPolyStructHandle);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_InPolyStructHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::AppendFromPolyHandle(Z_Param_Out_OutPolyStructHandle,Z_Param_Out_InPolyStructHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execAppendFromPolyArray)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_GET_TARRAY_REF(FPolyStruct,Z_Param_Out_PolyStructs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::AppendFromPolyArray(Z_Param_Out_PolyStructHandle,Z_Param_Out_PolyStructs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execAdd)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPolyStructFunctionLibrary::Add(Z_Param_Out_PolyStructHandle,Z_Param_Out_PolyStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execMakePolyStructHandleFromArray)
	{
		P_GET_TARRAY_REF(FPolyStruct,Z_Param_Out_PolyStructs);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::MakePolyStructHandleFromArray(Z_Param_Out_PolyStructs,Z_Param_Out_PolyStructHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execConv_PolyStructToPolyStructHandle)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPolyStructHandle*)Z_Param__Result=UPolyStructFunctionLibrary::Conv_PolyStructToPolyStructHandle(Z_Param_Out_PolyStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execEqualsNOT)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_A);
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPolyStructFunctionLibrary::EqualsNOT(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execEquals)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_A);
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPolyStructFunctionLibrary::Equals(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execGetStructSize)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPolyStructFunctionLibrary::GetStructSize(Z_Param_Out_PolyStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execGetType)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptStruct**)Z_Param__Result=UPolyStructFunctionLibrary::GetType(Z_Param_Out_PolyStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execIsAWithExecs)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_GET_OBJECT(UScriptStruct,Z_Param_StructType);
		P_GET_ENUM_REF(EStructCastPin,Z_Param_Out_OutPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::IsAWithExecs(Z_Param_Out_PolyStruct,Z_Param_StructType,(EStructCastPin&)(Z_Param_Out_OutPin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execIsA)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_GET_OBJECT(UScriptStruct,Z_Param_StructType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPolyStructFunctionLibrary::IsA(Z_Param_Out_PolyStruct,Z_Param_StructType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execIsValidWithExecs)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_GET_ENUM_REF(EStructCastPin,Z_Param_Out_OutPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::IsValidWithExecs(Z_Param_Out_PolyStruct,(EStructCastPin&)(Z_Param_Out_OutPin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execIsValid)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPolyStructFunctionLibrary::IsValid(Z_Param_Out_PolyStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execEmptyPolyStruct)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::EmptyPolyStruct(Z_Param_Out_PolyStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execConv_PolyStructToBool)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPolyStructFunctionLibrary::Conv_PolyStructToBool(Z_Param_Out_PolyStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execConv_PolyStructToString)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPolyStructFunctionLibrary::Conv_PolyStructToString(Z_Param_Out_PolyStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execConv_PolyStructToName)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UPolyStructFunctionLibrary::Conv_PolyStructToName(Z_Param_Out_PolyStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execConv_PolyStructToScriptStruct)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptStruct**)Z_Param__Result=UPolyStructFunctionLibrary::Conv_PolyStructToScriptStruct(Z_Param_Out_PolyStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execMakePolyStructAndInitializeAs)
	{
		P_GET_OBJECT(UScriptStruct,Z_Param_StructType);
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::MakePolyStructAndInitializeAs(Z_Param_StructType,Z_Param_Out_PolyStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execSetAs)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_GET_OBJECT(UScriptStruct,Z_Param_StructType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::SetAs(Z_Param_Out_PolyStruct,Z_Param_StructType);
		P_NATIVE_END;
	}
	void UPolyStructFunctionLibrary::StaticRegisterNativesUPolyStructFunctionLibrary()
	{
		UClass* Class = UPolyStructFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &UPolyStructFunctionLibrary::execAdd },
			{ "AddStruct", &UPolyStructFunctionLibrary::execAddStruct },
			{ "AppendFromPolyArray", &UPolyStructFunctionLibrary::execAppendFromPolyArray },
			{ "AppendFromPolyHandle", &UPolyStructFunctionLibrary::execAppendFromPolyHandle },
			{ "Conv_PolyStructHandleToPolyStruct", &UPolyStructFunctionLibrary::execConv_PolyStructHandleToPolyStruct },
			{ "Conv_PolyStructToBool", &UPolyStructFunctionLibrary::execConv_PolyStructToBool },
			{ "Conv_PolyStructToName", &UPolyStructFunctionLibrary::execConv_PolyStructToName },
			{ "Conv_PolyStructToPolyStructHandle", &UPolyStructFunctionLibrary::execConv_PolyStructToPolyStructHandle },
			{ "Conv_PolyStructToScriptStruct", &UPolyStructFunctionLibrary::execConv_PolyStructToScriptStruct },
			{ "Conv_PolyStructToString", &UPolyStructFunctionLibrary::execConv_PolyStructToString },
			{ "EmptyPolyStruct", &UPolyStructFunctionLibrary::execEmptyPolyStruct },
			{ "EmptyPolyStructHandle", &UPolyStructFunctionLibrary::execEmptyPolyStructHandle },
			{ "Equals", &UPolyStructFunctionLibrary::execEquals },
			{ "EqualsNOT", &UPolyStructFunctionLibrary::execEqualsNOT },
			{ "ExtractArray", &UPolyStructFunctionLibrary::execExtractArray },
			{ "ExtractAt", &UPolyStructFunctionLibrary::execExtractAt },
			{ "ExtractStruct", &UPolyStructFunctionLibrary::execExtractStruct },
			{ "ExtractStructUnchecked", &UPolyStructFunctionLibrary::execExtractStructUnchecked },
			{ "GetAny", &UPolyStructFunctionLibrary::execGetAny },
			{ "GetArray", &UPolyStructFunctionLibrary::execGetArray },
			{ "GetAt", &UPolyStructFunctionLibrary::execGetAt },
			{ "GetAtIndex", &UPolyStructFunctionLibrary::execGetAtIndex },
			{ "GetCopy", &UPolyStructFunctionLibrary::execGetCopy },
			{ "GetStructSize", &UPolyStructFunctionLibrary::execGetStructSize },
			{ "GetType", &UPolyStructFunctionLibrary::execGetType },
			{ "InsertStructAt", &UPolyStructFunctionLibrary::execInsertStructAt },
			{ "Internal_AddStruct", &UPolyStructFunctionLibrary::execInternal_AddStruct },
			{ "IsA", &UPolyStructFunctionLibrary::execIsA },
			{ "IsAWithExecs", &UPolyStructFunctionLibrary::execIsAWithExecs },
			{ "IsEmpty", &UPolyStructFunctionLibrary::execIsEmpty },
			{ "IsValid", &UPolyStructFunctionLibrary::execIsValid },
			{ "IsValidWithExecs", &UPolyStructFunctionLibrary::execIsValidWithExecs },
			{ "Length", &UPolyStructFunctionLibrary::execLength },
			{ "MakeDefaultCustomStruct", &UPolyStructFunctionLibrary::execMakeDefaultCustomStruct },
			{ "MakeDefaultPolyStructHandle", &UPolyStructFunctionLibrary::execMakeDefaultPolyStructHandle },
			{ "MakePolyStruct", &UPolyStructFunctionLibrary::execMakePolyStruct },
			{ "MakePolyStructAndInitializeAs", &UPolyStructFunctionLibrary::execMakePolyStructAndInitializeAs },
			{ "MakePolyStructHandleFromArray", &UPolyStructFunctionLibrary::execMakePolyStructHandleFromArray },
			{ "RemoveItem", &UPolyStructFunctionLibrary::execRemoveItem },
			{ "SetArrayElementStruct", &UPolyStructFunctionLibrary::execSetArrayElementStruct },
			{ "SetAs", &UPolyStructFunctionLibrary::execSetAs },
			{ "SetPolyStruct", &UPolyStructFunctionLibrary::execSetPolyStruct },
			{ "ToArray", &UPolyStructFunctionLibrary::execToArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics
	{
		struct PolyStructFunctionLibrary_eventAdd_Parms
		{
			FPolyStructHandle PolyStructHandle;
			FPolyStruct PolyStruct;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAdd_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAdd_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAdd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Adds a Poly Struct to the array\n" },
		{ "CompactNodeTitle", "ADD" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Adds a Poly Struct to the array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Add", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::PolyStructFunctionLibrary_eventAdd_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics
	{
		struct PolyStructFunctionLibrary_eventAddStruct_Parms
		{
			FPolyStructHandle PolyStructHandle;
			int32 Struct;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAddStruct_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::NewProp_Struct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAddStruct_Parms, Struct), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::NewProp_Struct_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAddStruct_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Converts the Struct parameter to a Poly Struct and adds it to the Poly Struct Handle array\n" },
		{ "CompactNodeTitle", "ADD" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Add (struct)" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Converts the Struct parameter to a Poly Struct and adds it to the Poly Struct Handle array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "AddStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::PolyStructFunctionLibrary_eventAddStruct_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics
	{
		struct PolyStructFunctionLibrary_eventAppendFromPolyArray_Parms
		{
			FPolyStructHandle PolyStructHandle;
			TArray<FPolyStruct> PolyStructs;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolyStructs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAppendFromPolyArray_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::NewProp_PolyStructs_Inner = { "PolyStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 279423337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::NewProp_PolyStructs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::NewProp_PolyStructs = { "PolyStructs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAppendFromPolyArray_Parms, PolyStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::NewProp_PolyStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::NewProp_PolyStructs_MetaData)) }; // 279423337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::NewProp_PolyStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::NewProp_PolyStructs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Appends Poly Structs to the array\n" },
		{ "CompactNodeTitle", "APPEND" },
		{ "DisplayName", "Append (from poly array)" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Appends Poly Structs to the array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "AppendFromPolyArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::PolyStructFunctionLibrary_eventAppendFromPolyArray_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics
	{
		struct PolyStructFunctionLibrary_eventAppendFromPolyHandle_Parms
		{
			FPolyStructHandle OutPolyStructHandle;
			FPolyStructHandle InPolyStructHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPolyStructHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPolyStructHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPolyStructHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::NewProp_OutPolyStructHandle = { "OutPolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAppendFromPolyHandle_Parms, OutPolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::NewProp_InPolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::NewProp_InPolyStructHandle = { "InPolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAppendFromPolyHandle_Parms, InPolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::NewProp_InPolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::NewProp_InPolyStructHandle_MetaData)) }; // 2519392893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::NewProp_OutPolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::NewProp_InPolyStructHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Appends the elements of the In Poly Struct Handle to the Out Poly Struct Handle\n" },
		{ "CompactNodeTitle", "APPEND" },
		{ "DisplayName", "Append (from poly handle)" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Appends the elements of the In Poly Struct Handle to the Out Poly Struct Handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "AppendFromPolyHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::PolyStructFunctionLibrary_eventAppendFromPolyHandle_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics
	{
		struct PolyStructFunctionLibrary_eventConv_PolyStructHandleToPolyStruct_Parms
		{
			FPolyStructHandle PolyStructHandle;
			FPolyStruct ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStructHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::NewProp_PolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructHandleToPolyStruct_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::NewProp_PolyStructHandle_MetaData)) }; // 2519392893
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructHandleToPolyStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 279423337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Implicit conversion to get the 0th index of the Poly Struct Handle\n" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Implicit conversion to get the 0th index of the Poly Struct Handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Conv_PolyStructHandleToPolyStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::PolyStructFunctionLibrary_eventConv_PolyStructHandleToPolyStruct_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics
	{
		struct PolyStructFunctionLibrary_eventConv_PolyStructToBool_Parms
		{
			FPolyStruct PolyStruct;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToBool_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
	void Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PolyStructFunctionLibrary_eventConv_PolyStructToBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PolyStructFunctionLibrary_eventConv_PolyStructToBool_Parms), &Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Implicit Polymorphic Struct \"Is Valid\" conversion\n" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Implicit Polymorphic Struct \"Is Valid\" conversion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Conv_PolyStructToBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::PolyStructFunctionLibrary_eventConv_PolyStructToBool_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics
	{
		struct PolyStructFunctionLibrary_eventConv_PolyStructToName_Parms
		{
			FPolyStruct PolyStruct;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToName_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Implicit Polymorphic Struct to type name conversion\n" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Implicit Polymorphic Struct to type name conversion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Conv_PolyStructToName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::PolyStructFunctionLibrary_eventConv_PolyStructToName_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics
	{
		struct PolyStructFunctionLibrary_eventConv_PolyStructToPolyStructHandle_Parms
		{
			FPolyStruct PolyStruct;
			FPolyStructHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToPolyStructHandle_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToPolyStructHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Implicit conversion to a Poly Struct Handle that adds this poly struct to the array\n" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Implicit conversion to a Poly Struct Handle that adds this poly struct to the array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Conv_PolyStructToPolyStructHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::PolyStructFunctionLibrary_eventConv_PolyStructToPolyStructHandle_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics
	{
		struct PolyStructFunctionLibrary_eventConv_PolyStructToScriptStruct_Parms
		{
			FPolyStruct PolyStruct;
			UScriptStruct* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToScriptStruct_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToScriptStruct_Parms, ReturnValue), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Implicit Polymorphic Struct to Struct Type conversion\n" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Implicit Polymorphic Struct to Struct Type conversion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Conv_PolyStructToScriptStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::PolyStructFunctionLibrary_eventConv_PolyStructToScriptStruct_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics
	{
		struct PolyStructFunctionLibrary_eventConv_PolyStructToString_Parms
		{
			FPolyStruct PolyStruct;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToString_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Implicit Polymorphic Struct to type string conversion\n" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Implicit Polymorphic Struct to type string conversion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Conv_PolyStructToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::PolyStructFunctionLibrary_eventConv_PolyStructToString_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct_Statics
	{
		struct PolyStructFunctionLibrary_eventEmptyPolyStruct_Parms
		{
			FPolyStruct PolyStruct;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventEmptyPolyStruct_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 279423337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct_Statics::NewProp_PolyStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Empties the data and invalidates the struct\n" },
		{ "CompactNodeTitle", "EMPTY" },
		{ "DisplayName", "Empty (poly struct)" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Empties the data and invalidates the struct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "EmptyPolyStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct_Statics::PolyStructFunctionLibrary_eventEmptyPolyStruct_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle_Statics
	{
		struct PolyStructFunctionLibrary_eventEmptyPolyStructHandle_Parms
		{
			FPolyStructHandle PolyStructHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventEmptyPolyStructHandle_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle_Statics::NewProp_PolyStructHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Empties the array of Poly Structs from the Poly Struct Handle\n" },
		{ "CompactNodeTitle", "EMPTY" },
		{ "DisplayName", "Empty (poly struct handle)" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Empties the array of Poly Structs from the Poly Struct Handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "EmptyPolyStructHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle_Statics::PolyStructFunctionLibrary_eventEmptyPolyStructHandle_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics
	{
		struct PolyStructFunctionLibrary_eventEquals_Parms
		{
			FPolyStruct A;
			FPolyStruct B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventEquals_Parms, A), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_A_MetaData)) }; // 279423337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventEquals_Parms, B), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_B_MetaData)) }; // 279423337
	void Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PolyStructFunctionLibrary_eventEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PolyStructFunctionLibrary_eventEquals_Parms), &Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Returns whether the types are the same\n" },
		{ "CompactNodeTitle", "==" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Returns whether the types are the same" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Equals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::PolyStructFunctionLibrary_eventEquals_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics
	{
		struct PolyStructFunctionLibrary_eventEqualsNOT_Parms
		{
			FPolyStruct A;
			FPolyStruct B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventEqualsNOT_Parms, A), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_A_MetaData)) }; // 279423337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventEqualsNOT_Parms, B), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_B_MetaData)) }; // 279423337
	void Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PolyStructFunctionLibrary_eventEqualsNOT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PolyStructFunctionLibrary_eventEqualsNOT_Parms), &Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Returns whether the types are not the same\n" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Equals NOT" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Returns whether the types are not the same" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "EqualsNOT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::PolyStructFunctionLibrary_eventEqualsNOT_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics
	{
		struct PolyStructFunctionLibrary_eventExtractArray_Parms
		{
			FPolyStructHandle PolyStructHandle;
			TArray<int32> OutArray;
			EStructCastPin OutPin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStructHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_PolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractArray_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_PolyStructHandle_MetaData)) }; // 2519392893
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractArray_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_OutArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::Function_MetaDataParams[] = {
		{ "ArrayParm", "OutArray" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Attempts to extract each Poly Struct and add to the passed in array. Success if extracted any. Use sparingly to avoid casting and copying\n" },
		{ "CompactNodeTitle", "EXTRACT ARRAY" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Attempts to extract each Poly Struct and add to the passed in array. Success if extracted any. Use sparingly to avoid casting and copying" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "ExtractArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::PolyStructFunctionLibrary_eventExtractArray_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics
	{
		struct PolyStructFunctionLibrary_eventExtractAt_Parms
		{
			FPolyStructHandle PolyStructHandle;
			int32 OutStruct;
			int32 Index;
			EStructCastPin OutPin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStructHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_PolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractAt_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_PolyStructHandle_MetaData)) }; // 2519392893
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractAt_Parms, OutStruct), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractAt_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_OutStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Gets the Poly Struct at the given index and attempts to extract the data into the Out Struct parameter\n" },
		{ "CompactNodeTitle", "EXTRACT AT" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Gets the Poly Struct at the given index and attempts to extract the data into the Out Struct parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "ExtractAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::PolyStructFunctionLibrary_eventExtractAt_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics
	{
		struct PolyStructFunctionLibrary_eventExtractStruct_Parms
		{
			FPolyStruct PolyStruct;
			int32 OutStruct;
			EStructCastPin OutPin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutStruct;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractStruct_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractStruct_Parms, OutStruct), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractStruct_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_OutStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Extracts the data into a struct variable. Avoids copying\n" },
		{ "CompactNodeTitle", "EXTRACT" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Extracts the data into a struct variable. Avoids copying" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "ExtractStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::PolyStructFunctionLibrary_eventExtractStruct_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics
	{
		struct PolyStructFunctionLibrary_eventExtractStructUnchecked_Parms
		{
			FPolyStruct PolyStruct;
			int32 OutStruct;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractStructUnchecked_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractStructUnchecked_Parms, OutStruct), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::NewProp_OutStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "CompactNodeTitle", "EXTRACT" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "ExtractStructUnchecked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::PolyStructFunctionLibrary_eventExtractStructUnchecked_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics
	{
		struct PolyStructFunctionLibrary_eventGetAny_Parms
		{
			FPolyStructHandle PolyStructHandle;
			int32 OutStruct;
			int32 OutIndex;
			EStructCastPin OutPin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStructHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutStruct;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::NewProp_PolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetAny_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::NewProp_PolyStructHandle_MetaData)) }; // 2519392893
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetAny_Parms, OutStruct), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetAny_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetAny_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::NewProp_OutStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::NewProp_OutIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Searches the poly struct handle for any struct of the specified type and returns the first valid type along with it's index, (-1 otherwise)\n" },
		{ "CompactNodeTitle", "GET ANY" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Searches the poly struct handle for any struct of the specified type and returns the first valid type along with it's index, (-1 otherwise)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "GetAny", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::PolyStructFunctionLibrary_eventGetAny_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics
	{
		struct PolyStructFunctionLibrary_eventGetArray_Parms
		{
			FPolyStructHandle PolyStructHandle;
			TArray<int32> OutArray;
			EStructCastPin OutPin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStructHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::NewProp_PolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetArray_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::NewProp_PolyStructHandle_MetaData)) }; // 2519392893
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetArray_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::NewProp_OutArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::Function_MetaDataParams[] = {
		{ "ArrayParm", "OutArray" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Casts each Poly Struct and returns all valid casts as an array of Structs. Success if array is not empty. Use sparingly to avoid excessive casting and copying\n" },
		{ "CompactNodeTitle", "GET ARRAY" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Casts each Poly Struct and returns all valid casts as an array of Structs. Success if array is not empty. Use sparingly to avoid excessive casting and copying" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "GetArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::PolyStructFunctionLibrary_eventGetArray_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics
	{
		struct PolyStructFunctionLibrary_eventGetAt_Parms
		{
			FPolyStructHandle PolyStructHandle;
			int32 OutStruct;
			int32 Index;
			EStructCastPin OutPin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStructHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_PolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetAt_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_PolyStructHandle_MetaData)) }; // 2519392893
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetAt_Parms, OutStruct), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetAt_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_OutStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Gets the Poly Struct at the given index and attempts to cast it into the desired type\n" },
		{ "CompactNodeTitle", "GET AT" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Gets the Poly Struct at the given index and attempts to cast it into the desired type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "GetAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::PolyStructFunctionLibrary_eventGetAt_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics
	{
		struct PolyStructFunctionLibrary_eventGetAtIndex_Parms
		{
			FPolyStructHandle PolyStructHandle;
			int32 Index;
			FPolyStruct OutPolyStruct;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStructHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPolyStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::NewProp_PolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetAtIndex_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::NewProp_PolyStructHandle_MetaData)) }; // 2519392893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetAtIndex_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::NewProp_OutPolyStruct = { "OutPolyStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetAtIndex_Parms, OutPolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 279423337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::NewProp_OutPolyStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Gets a copy of the Poly Struct at the given index (if it is a valid index)\n" },
		{ "CompactNodeTitle", "GET" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of the Poly Struct at the given index (if it is a valid index)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "GetAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::PolyStructFunctionLibrary_eventGetAtIndex_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics
	{
		struct PolyStructFunctionLibrary_eventGetCopy_Parms
		{
			FPolyStruct PolyStruct;
			int32 OutStruct;
			EStructCastPin OutPin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutStruct;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetCopy_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetCopy_Parms, OutStruct), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetCopy_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::NewProp_OutStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Ensures the OutStruct parameter will be a valid cast and then extracts the data into the output.\n// Not a true cast as the memory is being copied but this syntactically may make more sense than \"Extract\"\n" },
		{ "CompactNodeTitle", "GET" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Get (copy)" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Ensures the OutStruct parameter will be a valid cast and then extracts the data into the output.\nNot a true cast as the memory is being copied but this syntactically may make more sense than \"Extract\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "GetCopy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::PolyStructFunctionLibrary_eventGetCopy_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics
	{
		struct PolyStructFunctionLibrary_eventGetStructSize_Parms
		{
			FPolyStruct PolyStruct;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetStructSize_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetStructSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Gets the total size of the struct the Polymorphic Struct contains. 0 if uninitialized\n" },
		{ "CompactNodeTitle", "SIZE" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Gets the total size of the struct the Polymorphic Struct contains. 0 if uninitialized" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "GetStructSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::PolyStructFunctionLibrary_eventGetStructSize_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics
	{
		struct PolyStructFunctionLibrary_eventGetType_Parms
		{
			FPolyStruct PolyStruct;
			UScriptStruct* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetType_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetType_Parms, ReturnValue), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "CompactNodeTitle", "TYPE" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "GetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::PolyStructFunctionLibrary_eventGetType_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics
	{
		struct PolyStructFunctionLibrary_eventInsertStructAt_Parms
		{
			FPolyStructHandle PolyStructHandle;
			int32 Struct;
			int32 Index;
			EStructCastPin OutPin;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventInsertStructAt_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_Struct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventInsertStructAt_Parms, Struct), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_Struct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventInsertStructAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventInsertStructAt_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Inserts the struct at the given index\n" },
		{ "CompactNodeTitle", "INSERT" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Insert (struct)" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Inserts the struct at the given index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "InsertStructAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::PolyStructFunctionLibrary_eventInsertStructAt_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics
	{
		struct PolyStructFunctionLibrary_eventInternal_AddStruct_Parms
		{
			FPolyStructHandle PolyStructHandle;
			int32 Struct;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventInternal_AddStruct_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::NewProp_Struct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventInternal_AddStruct_Parms, Struct), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::NewProp_Struct_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::NewProp_Struct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Internal_AddStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::PolyStructFunctionLibrary_eventInternal_AddStruct_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics
	{
		struct PolyStructFunctionLibrary_eventIsA_Parms
		{
			FPolyStruct PolyStruct;
			const UScriptStruct* StructType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StructType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsA_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_StructType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsA_Parms, StructType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_StructType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_StructType_MetaData)) };
	void Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PolyStructFunctionLibrary_eventIsA_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PolyStructFunctionLibrary_eventIsA_Parms), &Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_StructType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Whether the Polymorphic Struct's data is this type\n" },
		{ "CompactNodeTitle", "IS A" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Whether the Polymorphic Struct's data is this type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "IsA", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::PolyStructFunctionLibrary_eventIsA_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics
	{
		struct PolyStructFunctionLibrary_eventIsAWithExecs_Parms
		{
			FPolyStruct PolyStruct;
			const UScriptStruct* StructType;
			EStructCastPin OutPin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StructType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsAWithExecs_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_StructType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsAWithExecs_Parms, StructType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_StructType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_StructType_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsAWithExecs_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_StructType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Whether the Polymorphic Struct's data is this type\n" },
		{ "CompactNodeTitle", "IS A" },
		{ "DisplayName", "Is A (execs)" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Whether the Polymorphic Struct's data is this type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "IsAWithExecs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::PolyStructFunctionLibrary_eventIsAWithExecs_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics
	{
		struct PolyStructFunctionLibrary_eventIsEmpty_Parms
		{
			FPolyStructHandle PolyStructHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStructHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::NewProp_PolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsEmpty_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::NewProp_PolyStructHandle_MetaData)) }; // 2519392893
	void Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PolyStructFunctionLibrary_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PolyStructFunctionLibrary_eventIsEmpty_Parms), &Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Whether there are any Poly Structs in the Poly Struct Handle\n" },
		{ "CompactNodeTitle", "IS EMPTY" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Whether there are any Poly Structs in the Poly Struct Handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "IsEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::PolyStructFunctionLibrary_eventIsEmpty_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics
	{
		struct PolyStructFunctionLibrary_eventIsValid_Parms
		{
			FPolyStruct PolyStruct;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsValid_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
	void Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PolyStructFunctionLibrary_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PolyStructFunctionLibrary_eventIsValid_Parms), &Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Whether or not the Polymorphic Struct contains any data\n" },
		{ "CompactNodeTitle", "IS VALID" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Whether or not the Polymorphic Struct contains any data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::PolyStructFunctionLibrary_eventIsValid_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics
	{
		struct PolyStructFunctionLibrary_eventIsValidWithExecs_Parms
		{
			FPolyStruct PolyStruct;
			EStructCastPin OutPin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsValidWithExecs_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsValidWithExecs_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Whether or not the Polymorphic Struct contains any data\n" },
		{ "CompactNodeTitle", "IS VALID" },
		{ "DisplayName", "Is Valid (execs)" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Whether or not the Polymorphic Struct contains any data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "IsValidWithExecs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::PolyStructFunctionLibrary_eventIsValidWithExecs_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics
	{
		struct PolyStructFunctionLibrary_eventLength_Parms
		{
			FPolyStructHandle PolyStructHandle;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStructHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::NewProp_PolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventLength_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::NewProp_PolyStructHandle_MetaData)) }; // 2519392893
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// The number of Poly Structs in the Poly Struct Container\n" },
		{ "CompactNodeTitle", "LENGTH" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "The number of Poly Structs in the Poly Struct Container" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Length", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::PolyStructFunctionLibrary_eventLength_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Length()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct_Statics
	{
		struct PolyStructFunctionLibrary_eventMakeDefaultCustomStruct_Parms
		{
			int32 OutStruct;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventMakeDefaultCustomStruct_Parms, OutStruct), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct_Statics::NewProp_OutStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct_Statics::Function_MetaDataParams[] = {
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "MakeDefaultCustomStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct_Statics::PolyStructFunctionLibrary_eventMakeDefaultCustomStruct_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle_Statics
	{
		struct PolyStructFunctionLibrary_eventMakeDefaultPolyStructHandle_Parms
		{
			FPolyStructHandle OutPolyStructHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPolyStructHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle_Statics::NewProp_OutPolyStructHandle = { "OutPolyStructHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventMakeDefaultPolyStructHandle_Parms, OutPolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle_Statics::NewProp_OutPolyStructHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "MakeDefaultPolyStructHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle_Statics::PolyStructFunctionLibrary_eventMakeDefaultPolyStructHandle_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics
	{
		struct PolyStructFunctionLibrary_eventMakePolyStruct_Parms
		{
			int32 Struct;
			FPolyStruct PolyStruct;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::NewProp_Struct_MetaData[] = {
		{ "DisplayName", ">>" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventMakePolyStruct_Parms, Struct), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::NewProp_Struct_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventMakePolyStruct_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 279423337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::NewProp_PolyStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Constructs and initializes Polymorphic Struct with the Struct parameter\n" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Make PolyStruct" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Constructs and initializes Polymorphic Struct with the Struct parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "MakePolyStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::PolyStructFunctionLibrary_eventMakePolyStruct_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics
	{
		struct PolyStructFunctionLibrary_eventMakePolyStructAndInitializeAs_Parms
		{
			const UScriptStruct* StructType;
			FPolyStruct PolyStruct;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StructType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::NewProp_StructType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventMakePolyStructAndInitializeAs_Parms, StructType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::NewProp_StructType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::NewProp_StructType_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventMakePolyStructAndInitializeAs_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 279423337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::NewProp_StructType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::NewProp_PolyStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Makes a Polymorphic Struct and initializes it as the Struct Type\n" },
		{ "DisplayName", "Make PolyStruct As" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Makes a Polymorphic Struct and initializes it as the Struct Type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "MakePolyStructAndInitializeAs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::PolyStructFunctionLibrary_eventMakePolyStructAndInitializeAs_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics
	{
		struct PolyStructFunctionLibrary_eventMakePolyStructHandleFromArray_Parms
		{
			TArray<FPolyStruct> PolyStructs;
			FPolyStructHandle PolyStructHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolyStructs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::NewProp_PolyStructs_Inner = { "PolyStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 279423337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::NewProp_PolyStructs_MetaData[] = {
		{ "DisplayName", ">>" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::NewProp_PolyStructs = { "PolyStructs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventMakePolyStructHandleFromArray_Parms, PolyStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::NewProp_PolyStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::NewProp_PolyStructs_MetaData)) }; // 279423337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventMakePolyStructHandleFromArray_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::NewProp_PolyStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::NewProp_PolyStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::NewProp_PolyStructHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Makes a Poly Struct Container and initializes it with an array of Poly Structs\n" },
		{ "DisplayName", "Make PolyStructHandle" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Makes a Poly Struct Container and initializes it with an array of Poly Structs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "MakePolyStructHandleFromArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::PolyStructFunctionLibrary_eventMakePolyStructHandleFromArray_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics
	{
		struct PolyStructFunctionLibrary_eventRemoveItem_Parms
		{
			FPolyStructHandle PolyStructHandle;
			int32 Index;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventRemoveItem_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventRemoveItem_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "CompactNodeTitle", "REMOVE ITEM" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "RemoveItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::PolyStructFunctionLibrary_eventRemoveItem_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics
	{
		struct PolyStructFunctionLibrary_eventSetArrayElementStruct_Parms
		{
			FPolyStructHandle PolyStructHandle;
			int32 Struct;
			int32 Index;
			EStructCastPin OutPin;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventSetArrayElementStruct_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 2519392893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_Struct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventSetArrayElementStruct_Parms, Struct), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_Struct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventSetArrayElementStruct_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventSetArrayElementStruct_Parms, OutPin), Z_Construct_UEnum_PolyStruct_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 2027713322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Sets the the PolyStruct at the given index. Success if valid index\n" },
		{ "CompactNodeTitle", "SET ELEM" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Set Array Element (struct)" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Sets the the PolyStruct at the given index. Success if valid index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "SetArrayElementStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::PolyStructFunctionLibrary_eventSetArrayElementStruct_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics
	{
		struct PolyStructFunctionLibrary_eventSetAs_Parms
		{
			FPolyStruct PolyStruct;
			const UScriptStruct* StructType;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StructType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventSetAs_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 279423337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::NewProp_StructType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventSetAs_Parms, StructType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::NewProp_StructType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::NewProp_StructType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::NewProp_StructType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Empties and re-initializes as the passed in Struct Type\n" },
		{ "CompactNodeTitle", "SET AS" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Empties and re-initializes as the passed in Struct Type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "SetAs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::PolyStructFunctionLibrary_eventSetAs_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics
	{
		struct PolyStructFunctionLibrary_eventSetPolyStruct_Parms
		{
			FPolyStruct PolyStruct;
			int32 Struct;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventSetPolyStruct_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 279423337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::NewProp_Struct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventSetPolyStruct_Parms, Struct), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::NewProp_Struct_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::NewProp_Struct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Empties the Polymorphic Struct then copies the Struct parameter's values into the Polymorphic Struct\n" },
		{ "CompactNodeTitle", "SET" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Empties the Polymorphic Struct then copies the Struct parameter's values into the Polymorphic Struct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "SetPolyStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::PolyStructFunctionLibrary_eventSetPolyStruct_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics
	{
		struct PolyStructFunctionLibrary_eventToArray_Parms
		{
			FPolyStructHandle PolyStructHandle;
			TArray<FPolyStruct> OutPolyStructs;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStructHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStructHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPolyStructs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPolyStructs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_PolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventToArray_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_PolyStructHandle_MetaData)) }; // 2519392893
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_OutPolyStructs_Inner = { "OutPolyStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 279423337
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_OutPolyStructs = { "OutPolyStructs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventToArray_Parms, OutPolyStructs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 279423337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_OutPolyStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_OutPolyStructs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Converts Poly Struct Handle to array of Poly Structs. Use sparingly to avoid copying\n" },
		{ "CompactNodeTitle", "ARRAY" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Converts Poly Struct Handle to array of Poly Structs. Use sparingly to avoid copying" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "ToArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::PolyStructFunctionLibrary_eventToArray_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyStructFunctionLibrary);
	UClass* Z_Construct_UClass_UPolyStructFunctionLibrary_NoRegister()
	{
		return UPolyStructFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPolyStructFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolyStructFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PolyStruct,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPolyStructFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Add, "Add" }, // 3871712283
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct, "AddStruct" }, // 601272174
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyArray, "AppendFromPolyArray" }, // 2204081774
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_AppendFromPolyHandle, "AppendFromPolyHandle" }, // 626702078
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct, "Conv_PolyStructHandleToPolyStruct" }, // 2331716495
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool, "Conv_PolyStructToBool" }, // 3030107439
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName, "Conv_PolyStructToName" }, // 3513879601
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle, "Conv_PolyStructToPolyStructHandle" }, // 2110130837
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct, "Conv_PolyStructToScriptStruct" }, // 2079505749
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString, "Conv_PolyStructToString" }, // 396158339
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStruct, "EmptyPolyStruct" }, // 2919805067
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_EmptyPolyStructHandle, "EmptyPolyStructHandle" }, // 3117310491
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals, "Equals" }, // 3922437934
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT, "EqualsNOT" }, // 2852153251
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray, "ExtractArray" }, // 1206507849
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt, "ExtractAt" }, // 2811256400
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct, "ExtractStruct" }, // 4056357013
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStructUnchecked, "ExtractStructUnchecked" }, // 377352075
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAny, "GetAny" }, // 1433697314
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_GetArray, "GetArray" }, // 484776280
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAt, "GetAt" }, // 1486837532
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_GetAtIndex, "GetAtIndex" }, // 2842227314
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_GetCopy, "GetCopy" }, // 3549196179
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize, "GetStructSize" }, // 3118753075
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType, "GetType" }, // 3037198809
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_InsertStructAt, "InsertStructAt" }, // 1605913459
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Internal_AddStruct, "Internal_AddStruct" }, // 2912131464
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA, "IsA" }, // 377222621
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs, "IsAWithExecs" }, // 3614796335
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty, "IsEmpty" }, // 3271256719
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid, "IsValid" }, // 2507760214
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs, "IsValidWithExecs" }, // 1221767911
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Length, "Length" }, // 3745340551
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultCustomStruct, "MakeDefaultCustomStruct" }, // 2053384709
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_MakeDefaultPolyStructHandle, "MakeDefaultPolyStructHandle" }, // 2818408200
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct, "MakePolyStruct" }, // 2102805028
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs, "MakePolyStructAndInitializeAs" }, // 2591891581
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructHandleFromArray, "MakePolyStructHandleFromArray" }, // 3366380948
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveItem, "RemoveItem" }, // 1827129071
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_SetArrayElementStruct, "SetArrayElementStruct" }, // 2221662004
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs, "SetAs" }, // 1056682027
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct, "SetPolyStruct" }, // 3570526109
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray, "ToArray" }, // 4098377174
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyStructFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Polymorphic Struct Function Library" },
		{ "IncludePath", "Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "Keywords", "poly,struct,handle,get,equals,valid" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolyStructFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyStructFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyStructFunctionLibrary_Statics::ClassParams = {
		&UPolyStructFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPolyStructFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyStructFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolyStructFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UPolyStructFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyStructFunctionLibrary.OuterSingleton, Z_Construct_UClass_UPolyStructFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolyStructFunctionLibrary.OuterSingleton;
	}
	template<> POLYSTRUCT_API UClass* StaticClass<UPolyStructFunctionLibrary>()
	{
		return UPolyStructFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyStructFunctionLibrary);
	DEFINE_FUNCTION(UPolyStructHack::execGetZeroIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPolyStructHack::GetZeroIndex();
		P_NATIVE_END;
	}
	void UPolyStructHack::StaticRegisterNativesUPolyStructHack()
	{
		UClass* Class = UPolyStructHack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ArrayPointToPolyStructHack", &UPolyStructHack::execArrayPointToPolyStructHack },
			{ "ArrayPointToPolyStructHackUndo", &UPolyStructHack::execArrayPointToPolyStructHackUndo },
			{ "CastPolyStruct", &UPolyStructHack::execCastPolyStruct },
			{ "GetZeroIndex", &UPolyStructHack::execGetZeroIndex },
			{ "IsAFromRef", &UPolyStructHack::execIsAFromRef },
			{ "MakeTempArr", &UPolyStructHack::execMakeTempArr },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics
	{
		struct PolyStructHack_eventArrayPointToPolyStructHack_Parms
		{
			FPolyStruct PolyStruct;
			TArray<int32> OutArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructHack_eventArrayPointToPolyStructHack_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 279423337
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructHack_eventArrayPointToPolyStructHack_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::Function_MetaDataParams[] = {
		{ "ArrayParm", "OutArray" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructHack, nullptr, "ArrayPointToPolyStructHack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::PolyStructHack_eventArrayPointToPolyStructHack_Parms), Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics
	{
		struct PolyStructHack_eventArrayPointToPolyStructHackUndo_Parms
		{
			TArray<int32> OutArray;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructHack_eventArrayPointToPolyStructHackUndo_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics::Function_MetaDataParams[] = {
		{ "ArrayParm", "OutArray" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructHack, nullptr, "ArrayPointToPolyStructHackUndo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics::PolyStructHack_eventArrayPointToPolyStructHackUndo_Parms), Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics
	{
		struct PolyStructHack_eventCastPolyStruct_Parms
		{
			FPolyStruct PolyStruct;
			int32 OutStruct;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructHack_eventCastPolyStruct_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 279423337
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructHack_eventCastPolyStruct_Parms, OutStruct), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics::NewProp_OutStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CompactNodeTitle", "CAST" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructHack, nullptr, "CastPolyStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics::PolyStructHack_eventCastPolyStruct_Parms), Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructHack_CastPolyStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructHack_CastPolyStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructHack_GetZeroIndex_Statics
	{
		struct PolyStructHack_eventGetZeroIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructHack_GetZeroIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructHack_eventGetZeroIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructHack_GetZeroIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructHack_GetZeroIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructHack_GetZeroIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructHack_GetZeroIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructHack, nullptr, "GetZeroIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructHack_GetZeroIndex_Statics::PolyStructHack_eventGetZeroIndex_Parms), Z_Construct_UFunction_UPolyStructHack_GetZeroIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_GetZeroIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructHack_GetZeroIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_GetZeroIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructHack_GetZeroIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructHack_GetZeroIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics
	{
		struct PolyStructHack_eventIsAFromRef_Parms
		{
			FPolyStruct PolyStruct;
			int32 Struct;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Struct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructHack_eventIsAFromRef_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_PolyStruct_MetaData)) }; // 279423337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_Struct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructHack_eventIsAFromRef_Parms, Struct), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_Struct_MetaData)) };
	void Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PolyStructHack_eventIsAFromRef_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PolyStructHack_eventIsAFromRef_Parms), &Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructHack, nullptr, "IsAFromRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::PolyStructHack_eventIsAFromRef_Parms), Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructHack_IsAFromRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructHack_IsAFromRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics
	{
		struct PolyStructHack_eventMakeTempArr_Parms
		{
			TArray<int32> OutArray;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructHack_eventMakeTempArr_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics::Function_MetaDataParams[] = {
		{ "ArrayParm", "OutArray" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructHack, nullptr, "MakeTempArr", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics::PolyStructHack_eventMakeTempArr_Parms), Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructHack_MakeTempArr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructHack_MakeTempArr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyStructHack);
	UClass* Z_Construct_UClass_UPolyStructHack_NoRegister()
	{
		return UPolyStructHack::StaticClass();
	}
	struct Z_Construct_UClass_UPolyStructHack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolyStructHack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PolyStruct,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPolyStructHack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHack, "ArrayPointToPolyStructHack" }, // 337059256
		{ &Z_Construct_UFunction_UPolyStructHack_ArrayPointToPolyStructHackUndo, "ArrayPointToPolyStructHackUndo" }, // 972654796
		{ &Z_Construct_UFunction_UPolyStructHack_CastPolyStruct, "CastPolyStruct" }, // 524789580
		{ &Z_Construct_UFunction_UPolyStructHack_GetZeroIndex, "GetZeroIndex" }, // 1178183514
		{ &Z_Construct_UFunction_UPolyStructHack_IsAFromRef, "IsAFromRef" }, // 671036752
		{ &Z_Construct_UFunction_UPolyStructHack_MakeTempArr, "MakeTempArr" }, // 4008087506
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyStructHack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n#undef CONCATE_\n#undef CONCATE\n#undef ALLOW_PRIVATE_ACCESS\n#undef ACCESS_PRIVATE_MEMBER\n*/" },
		{ "IncludePath", "Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Polymorphic/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "#undef CONCATE_\n#undef CONCATE\n#undef ALLOW_PRIVATE_ACCESS\n#undef ACCESS_PRIVATE_MEMBER" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolyStructHack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyStructHack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyStructHack_Statics::ClassParams = {
		&UPolyStructHack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPolyStructHack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyStructHack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolyStructHack()
	{
		if (!Z_Registration_Info_UClass_UPolyStructHack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyStructHack.OuterSingleton, Z_Construct_UClass_UPolyStructHack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolyStructHack.OuterSingleton;
	}
	template<> POLYSTRUCT_API UClass* StaticClass<UPolyStructHack>()
	{
		return UPolyStructHack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyStructHack);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EStructCastPin_StaticEnum, TEXT("EStructCastPin"), &Z_Registration_Info_UEnum_EStructCastPin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2027713322U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPolyStructFunctionLibrary, UPolyStructFunctionLibrary::StaticClass, TEXT("UPolyStructFunctionLibrary"), &Z_Registration_Info_UClass_UPolyStructFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyStructFunctionLibrary), 2636504146U) },
		{ Z_Construct_UClass_UPolyStructHack, UPolyStructHack::StaticClass, TEXT("UPolyStructHack"), &Z_Registration_Info_UClass_UPolyStructHack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyStructHack), 396801935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_2721821253(TEXT("/Script/PolyStruct"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_PolyStruct_Public_Polymorphic_PolymorphicStructFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
