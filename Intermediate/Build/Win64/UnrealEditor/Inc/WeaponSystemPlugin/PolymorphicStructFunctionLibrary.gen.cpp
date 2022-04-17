// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolymorphicStructFunctionLibrary() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UPolyStructFunctionLibrary_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_UPolyStructFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStructHandle();
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPolyStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
// End Cross Module References
	static_assert(!int64(EStructCastPin::Success)||!int64(EStructCastPin::Fail), "'EStructCastPin' does not have a 0 entry!(This is a problem when the enum is initalized by default)");
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStructCastPin;
	static UEnum* EStructCastPin_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStructCastPin.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStructCastPin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("EStructCastPin"));
		}
		return Z_Registration_Info_UEnum_EStructCastPin.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UEnum* StaticEnum<EStructCastPin>()
	{
		return EStructCastPin_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin_Statics::Enumerators[] = {
		{ "EStructCastPin::Success", (int64)EStructCastPin::Success },
		{ "EStructCastPin::Fail", (int64)EStructCastPin::Fail },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "Fail.Comment", "/**\n * \n */" },
		{ "Fail.Name", "EStructCastPin::Fail" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
		{ "Success.Comment", "/**\n * \n */" },
		{ "Success.Name", "EStructCastPin::Success" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		"EStructCastPin",
		"EStructCastPin",
		Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin()
	{
		if (!Z_Registration_Info_UEnum_EStructCastPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStructCastPin.InnerSingleton, Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStructCastPin.InnerSingleton;
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
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execEmpty)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::Empty(Z_Param_Out_PolyStructHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execGet)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_OutPolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::Get(Z_Param_Out_PolyStructHandle,Z_Param_Index,Z_Param_Out_OutPolyStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execRemoveIndex)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::RemoveIndex(Z_Param_Out_PolyStructHandle,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execAppend)
	{
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_GET_TARRAY_REF(FPolyStruct,Z_Param_Out_PolyStructs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::Append(Z_Param_Out_PolyStructHandle,Z_Param_Out_PolyStructs);
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
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execMakePolyStructContainer)
	{
		P_GET_TARRAY_REF(FPolyStruct,Z_Param_Out_PolyStructs);
		P_GET_STRUCT_REF(FPolyStructHandle,Z_Param_Out_PolyStructHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::MakePolyStructContainer(Z_Param_Out_PolyStructs,Z_Param_Out_PolyStructHandle);
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
	DEFINE_FUNCTION(UPolyStructFunctionLibrary::execInvalidate)
	{
		P_GET_STRUCT_REF(FPolyStruct,Z_Param_Out_PolyStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPolyStructFunctionLibrary::Invalidate(Z_Param_Out_PolyStruct);
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
			{ "Append", &UPolyStructFunctionLibrary::execAppend },
			{ "Cast", &UPolyStructFunctionLibrary::execCast },
			{ "CastArray", &UPolyStructFunctionLibrary::execCastArray },
			{ "CastAt", &UPolyStructFunctionLibrary::execCastAt },
			{ "Conv_PolyStructHandleToPolyStruct", &UPolyStructFunctionLibrary::execConv_PolyStructHandleToPolyStruct },
			{ "Conv_PolyStructToBool", &UPolyStructFunctionLibrary::execConv_PolyStructToBool },
			{ "Conv_PolyStructToName", &UPolyStructFunctionLibrary::execConv_PolyStructToName },
			{ "Conv_PolyStructToPolyStructHandle", &UPolyStructFunctionLibrary::execConv_PolyStructToPolyStructHandle },
			{ "Conv_PolyStructToScriptStruct", &UPolyStructFunctionLibrary::execConv_PolyStructToScriptStruct },
			{ "Conv_PolyStructToString", &UPolyStructFunctionLibrary::execConv_PolyStructToString },
			{ "Empty", &UPolyStructFunctionLibrary::execEmpty },
			{ "Equals", &UPolyStructFunctionLibrary::execEquals },
			{ "EqualsNOT", &UPolyStructFunctionLibrary::execEqualsNOT },
			{ "ExtractArray", &UPolyStructFunctionLibrary::execExtractArray },
			{ "ExtractAt", &UPolyStructFunctionLibrary::execExtractAt },
			{ "ExtractStruct", &UPolyStructFunctionLibrary::execExtractStruct },
			{ "Get", &UPolyStructFunctionLibrary::execGet },
			{ "GetStructSize", &UPolyStructFunctionLibrary::execGetStructSize },
			{ "GetType", &UPolyStructFunctionLibrary::execGetType },
			{ "Invalidate", &UPolyStructFunctionLibrary::execInvalidate },
			{ "IsA", &UPolyStructFunctionLibrary::execIsA },
			{ "IsAWithExecs", &UPolyStructFunctionLibrary::execIsAWithExecs },
			{ "IsEmpty", &UPolyStructFunctionLibrary::execIsEmpty },
			{ "IsValid", &UPolyStructFunctionLibrary::execIsValid },
			{ "IsValidWithExecs", &UPolyStructFunctionLibrary::execIsValidWithExecs },
			{ "Length", &UPolyStructFunctionLibrary::execLength },
			{ "MakePolyStruct", &UPolyStructFunctionLibrary::execMakePolyStruct },
			{ "MakePolyStructAndInitializeAs", &UPolyStructFunctionLibrary::execMakePolyStructAndInitializeAs },
			{ "MakePolyStructContainer", &UPolyStructFunctionLibrary::execMakePolyStructContainer },
			{ "RemoveIndex", &UPolyStructFunctionLibrary::execRemoveIndex },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAdd_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 3456734502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAdd_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Add_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAddStruct_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 3456734502
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
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Converts the Struct parameter to a Poly Struct and adds it to the Poly Struct Handle array\n" },
		{ "CompactNodeTitle", "ADD" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Add (struct)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics
	{
		struct PolyStructFunctionLibrary_eventAppend_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAppend_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 3456734502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::NewProp_PolyStructs_Inner = { "PolyStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 61013912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::NewProp_PolyStructs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::NewProp_PolyStructs = { "PolyStructs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventAppend_Parms, PolyStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::NewProp_PolyStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::NewProp_PolyStructs_MetaData)) }; // 61013912
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::NewProp_PolyStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::NewProp_PolyStructs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Appends Poly Structs to the array\n" },
		{ "CompactNodeTitle", "APPEND" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Appends Poly Structs to the array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Append", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::PolyStructFunctionLibrary_eventAppend_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Append()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Append_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics
	{
		struct PolyStructFunctionLibrary_eventCast_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::NewProp_PolyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventCast_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventCast_Parms, OutStruct), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventCast_Parms, OutPin), Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 3136895273
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::NewProp_OutStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Ensures the OutStruct parameter will be a valid cast and then extracts the data into the output. Not a true cast as the memory is being copied but this syntactically may make more sense than \"Extract\"\n" },
		{ "CompactNodeTitle", "CAST" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Ensures the OutStruct parameter will be a valid cast and then extracts the data into the output. Not a true cast as the memory is being copied but this syntactically may make more sense than \"Extract\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Cast", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::PolyStructFunctionLibrary_eventCast_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics
	{
		struct PolyStructFunctionLibrary_eventCastArray_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::NewProp_PolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventCastArray_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::NewProp_PolyStructHandle_MetaData)) }; // 3456734502
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventCastArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventCastArray_Parms, OutPin), Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 3136895273
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::NewProp_OutArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::Function_MetaDataParams[] = {
		{ "ArrayParm", "OutArray" },
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Casts each Poly Struct and returns all valid casts as an array of Structs. Success if array is not empty. Use sparingly to avoid excessive casting and copying\n" },
		{ "CompactNodeTitle", "CAST ARRAY" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Casts each Poly Struct and returns all valid casts as an array of Structs. Success if array is not empty. Use sparingly to avoid excessive casting and copying" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "CastArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::PolyStructFunctionLibrary_eventCastArray_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics
	{
		struct PolyStructFunctionLibrary_eventCastAt_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_PolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventCastAt_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_PolyStructHandle_MetaData)) }; // 3456734502
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventCastAt_Parms, OutStruct), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventCastAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventCastAt_Parms, OutPin), Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 3136895273
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_OutStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Gets the Poly Struct at the given index and attempts to cast it into the desired type\n" },
		{ "CompactNodeTitle", "CAST AT" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Gets the Poly Struct at the given index and attempts to cast it into the desired type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "CastAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::PolyStructFunctionLibrary_eventCastAt_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt_Statics::FuncParams);
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructHandleToPolyStruct_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::NewProp_PolyStructHandle_MetaData)) }; // 3456734502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructHandleToPolyStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToBool_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToName_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToPolyStructHandle_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToPolyStructHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 3456734502
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToScriptStruct_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventConv_PolyStructToString_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty_Statics
	{
		struct PolyStructFunctionLibrary_eventEmpty_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventEmpty_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 3456734502
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty_Statics::NewProp_PolyStructHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Empties the array of Poly Structs from the Poly Struct Handle\n" },
		{ "CompactNodeTitle", "EMPTY" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Empties the array of Poly Structs from the Poly Struct Handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Empty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty_Statics::PolyStructFunctionLibrary_eventEmpty_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty_Statics::FuncParams);
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventEquals_Parms, A), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_A_MetaData)) }; // 61013912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventEquals_Parms, B), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals_Statics::NewProp_B_MetaData)) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventEqualsNOT_Parms, A), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_A_MetaData)) }; // 61013912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventEqualsNOT_Parms, B), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT_Statics::NewProp_B_MetaData)) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractArray_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_PolyStructHandle_MetaData)) }; // 3456734502
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractArray_Parms, OutPin), Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 3136895273
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractAt_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_PolyStructHandle_MetaData)) }; // 3456734502
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractAt_Parms, OutStruct), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractAt_Parms, OutPin), Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 3136895273
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractStruct_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractStruct_Parms, OutStruct), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventExtractStruct_Parms, OutPin), Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 3136895273
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_OutStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_OutPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::NewProp_OutPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Extracts the data into a struct variable. Avoids copying\n" },
		{ "CompactNodeTitle", "EXTRACT" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "OutPin" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics
	{
		struct PolyStructFunctionLibrary_eventGet_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::NewProp_PolyStructHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGet_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::NewProp_PolyStructHandle_MetaData)) }; // 3456734502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGet_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::NewProp_OutPolyStruct = { "OutPolyStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGet_Parms, OutPolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 61013912
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::NewProp_OutPolyStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Gets a copy of the Poly Struct at the given index (if it is a valid index)\n" },
		{ "CompactNodeTitle", "GET" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of the Poly Struct at the given index (if it is a valid index)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Get", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::PolyStructFunctionLibrary_eventGet_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Get_Statics::FuncParams);
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetStructSize_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetType_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventGetType_Parms, ReturnValue), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::NewProp_PolyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "CompactNodeTitle", "TYPE" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate_Statics
	{
		struct PolyStructFunctionLibrary_eventInvalidate_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventInvalidate_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 61013912
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate_Statics::NewProp_PolyStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Empties the data and invalidates the struct\n" },
		{ "CompactNodeTitle", "INVALIDATE" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Empties the data and invalidates the struct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "Invalidate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate_Statics::PolyStructFunctionLibrary_eventInvalidate_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate_Statics::FuncParams);
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsA_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsAWithExecs_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_StructType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsAWithExecs_Parms, StructType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_StructType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_StructType_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsAWithExecs_Parms, OutPin), Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 3136895273
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsEmpty_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty_Statics::NewProp_PolyStructHandle_MetaData)) }; // 3456734502
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsValid_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsValidWithExecs_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_PolyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_PolyStruct_MetaData)) }; // 61013912
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_OutPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs_Statics::NewProp_OutPin = { "OutPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventIsValidWithExecs_Parms, OutPin), Z_Construct_UEnum_WeaponSystemPlugin_EStructCastPin, METADATA_PARAMS(nullptr, 0) }; // 3136895273
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventLength_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_Length_Statics::NewProp_PolyStructHandle_MetaData)) }; // 3456734502
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventMakePolyStruct_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventMakePolyStructAndInitializeAs_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 61013912
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::NewProp_StructType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::NewProp_PolyStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Makes a Polymorphic Struct and initializes it as the Struct Type\n" },
		{ "DisplayName", "Make PolyStruct As" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics
	{
		struct PolyStructFunctionLibrary_eventMakePolyStructContainer_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::NewProp_PolyStructs_Inner = { "PolyStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 61013912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::NewProp_PolyStructs_MetaData[] = {
		{ "DisplayName", ">>" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::NewProp_PolyStructs = { "PolyStructs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventMakePolyStructContainer_Parms, PolyStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::NewProp_PolyStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::NewProp_PolyStructs_MetaData)) }; // 61013912
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventMakePolyStructContainer_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 3456734502
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::NewProp_PolyStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::NewProp_PolyStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::NewProp_PolyStructHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Makes a Poly Struct Container and initializes it with an array of Poly Structs\n" },
		{ "DisplayName", "Make PolyStructHandle" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
		{ "ToolTip", "Makes a Poly Struct Container and initializes it with an array of Poly Structs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "MakePolyStructContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::PolyStructFunctionLibrary_eventMakePolyStructContainer_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics
	{
		struct PolyStructFunctionLibrary_eventRemoveIndex_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventRemoveIndex_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(nullptr, 0) }; // 3456734502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventRemoveIndex_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::NewProp_PolyStructHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "CompactNodeTitle", "REMOVE INDEX" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolyStructFunctionLibrary, nullptr, "RemoveIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::PolyStructFunctionLibrary_eventRemoveIndex_Parms), Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex_Statics::FuncParams);
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventSetAs_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct_Statics::NewProp_PolyStruct = { "PolyStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventSetPolyStruct_Parms, PolyStruct), Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 61013912
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
		{ "Category", "Weapon System Function Library|Polymorphic Struct" },
		{ "Comment", "// Empties the Polymorphic Struct then copies the Struct parameter's values into the Polymorphic Struct\n" },
		{ "CompactNodeTitle", "SET" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_PolyStructHandle = { "PolyStructHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventToArray_Parms, PolyStructHandle), Z_Construct_UScriptStruct_FPolyStructHandle, METADATA_PARAMS(Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_PolyStructHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_PolyStructHandle_MetaData)) }; // 3456734502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_OutPolyStructs_Inner = { "OutPolyStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolyStruct, METADATA_PARAMS(nullptr, 0) }; // 61013912
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray_Statics::NewProp_OutPolyStructs = { "OutPolyStructs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PolyStructFunctionLibrary_eventToArray_Parms, OutPolyStructs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 61013912
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
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPolyStructFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Add, "Add" }, // 4151870242
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_AddStruct, "AddStruct" }, // 2774221554
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Append, "Append" }, // 1945882767
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Cast, "Cast" }, // 979832204
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_CastArray, "CastArray" }, // 3021273381
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_CastAt, "CastAt" }, // 1091020824
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructHandleToPolyStruct, "Conv_PolyStructHandleToPolyStruct" }, // 2269981558
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToBool, "Conv_PolyStructToBool" }, // 3618261153
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToName, "Conv_PolyStructToName" }, // 3502344551
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToPolyStructHandle, "Conv_PolyStructToPolyStructHandle" }, // 4039770534
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToScriptStruct, "Conv_PolyStructToScriptStruct" }, // 2377531170
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Conv_PolyStructToString, "Conv_PolyStructToString" }, // 3162226248
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Empty, "Empty" }, // 2028734617
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Equals, "Equals" }, // 3239661313
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_EqualsNOT, "EqualsNOT" }, // 1333165620
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractArray, "ExtractArray" }, // 3349828750
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractAt, "ExtractAt" }, // 449798477
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_ExtractStruct, "ExtractStruct" }, // 2232283565
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Get, "Get" }, // 1077028524
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_GetStructSize, "GetStructSize" }, // 1314003669
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_GetType, "GetType" }, // 961537257
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Invalidate, "Invalidate" }, // 3386113535
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_IsA, "IsA" }, // 20084385
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_IsAWithExecs, "IsAWithExecs" }, // 399260354
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_IsEmpty, "IsEmpty" }, // 3366836210
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValid, "IsValid" }, // 166833583
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_IsValidWithExecs, "IsValidWithExecs" }, // 2207451504
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_Length, "Length" }, // 1665167519
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStruct, "MakePolyStruct" }, // 2214002735
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructAndInitializeAs, "MakePolyStructAndInitializeAs" }, // 2607246419
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_MakePolyStructContainer, "MakePolyStructContainer" }, // 1742989599
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_RemoveIndex, "RemoveIndex" }, // 2625853551
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_SetAs, "SetAs" }, // 2191679307
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_SetPolyStruct, "SetPolyStruct" }, // 709455131
		{ &Z_Construct_UFunction_UPolyStructFunctionLibrary_ToArray, "ToArray" }, // 490449581
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyStructFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Polymorphic Struct Function Library" },
		{ "IncludePath", "WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Gameplay/PolymorphicStructFunctionLibrary.h" },
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
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<UPolyStructFunctionLibrary>()
	{
		return UPolyStructFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyStructFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_PolymorphicStructFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_PolymorphicStructFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EStructCastPin_StaticEnum, TEXT("EStructCastPin"), &Z_Registration_Info_UEnum_EStructCastPin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3136895273U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_PolymorphicStructFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPolyStructFunctionLibrary, UPolyStructFunctionLibrary::StaticClass, TEXT("UPolyStructFunctionLibrary"), &Z_Registration_Info_UClass_UPolyStructFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyStructFunctionLibrary), 1851720879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_PolymorphicStructFunctionLibrary_h_877290848(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_PolymorphicStructFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_PolymorphicStructFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_PolymorphicStructFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Gameplay_PolymorphicStructFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
