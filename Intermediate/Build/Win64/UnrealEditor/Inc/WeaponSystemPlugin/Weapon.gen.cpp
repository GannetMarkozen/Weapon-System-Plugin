// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Weapons/Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimProperties();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeapon();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AWeaponBase();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_ATrueFPSCharacterBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimProperties;
class UScriptStruct* FAnimProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimProperties, Z_Construct_UPackage__Script_WeaponSystemPlugin(), TEXT("AnimProperties"));
	}
	return Z_Registration_Info_UScriptStruct_AnimProperties.OuterSingleton;
}
template<> WEAPONSYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAnimProperties>()
{
	return FAnimProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPose_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomOffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOffsetTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Animation Properties" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_AnimPose_MetaData[] = {
		{ "Category", "AnimProperties" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_AnimPose = { "AnimPose", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimProperties, AnimPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_AnimPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_AnimPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_WeightScale_MetaData[] = {
		{ "Category", "AnimProperties" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_WeightScale = { "WeightScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimProperties, WeightScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_WeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_WeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_CustomOffsetTransform_MetaData[] = {
		{ "Category", "AnimProperties" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_CustomOffsetTransform = { "CustomOffsetTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimProperties, CustomOffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_CustomOffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_CustomOffsetTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_AnimPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_WeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimProperties_Statics::NewProp_CustomOffsetTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
		nullptr,
		&NewStructOps,
		"AnimProperties",
		sizeof(FAnimProperties),
		alignof(FAnimProperties),
		Z_Construct_UScriptStruct_FAnimProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimProperties.InnerSingleton, Z_Construct_UScriptStruct_FAnimProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimProperties.InnerSingleton;
	}
	DEFINE_FUNCTION(AWeapon::execGetOrientationWorldTransform)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AimingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetOrientationWorldTransform(Z_Param_AimingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execGetOrientationRelativeTransform)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AimingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetOrientationRelativeTransform_Implementation(Z_Param_AimingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execGetOriginWorldTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetOriginWorldTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execGetOriginRelativeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetOriginRelativeTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execGetMuzzleWorldTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetMuzzleWorldTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execGetSightsWorldTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSightsWorldTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execGetDefaultSightsRelativeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetDefaultSightsRelativeTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execGetAnimationVariablesOnTick)
	{
		P_GET_OBJECT(ATrueFPSCharacterBase,Z_Param_Character);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutOrientationRelativeTransform);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutSightsRelativeTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAnimationVariablesOnTick(Z_Param_Character,Z_Param_Out_OutOrientationRelativeTransform,Z_Param_Out_OutSightsRelativeTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execGetAnimationVariablesOnEquipped)
	{
		P_GET_OBJECT_REF(UAnimSequence,Z_Param_Out_OutAnimPose);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutWeightScale);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutCustomOffsetTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAnimationVariablesOnEquipped(Z_Param_Out_OutAnimPose,Z_Param_Out_OutWeightScale,Z_Param_Out_OutCustomOffsetTransform);
		P_NATIVE_END;
	}
	static FName NAME_AWeapon_GetDefaultSightsRelativeTransform = FName(TEXT("GetDefaultSightsRelativeTransform"));
	FTransform AWeapon::GetDefaultSightsRelativeTransform() const
	{
		Weapon_eventGetDefaultSightsRelativeTransform_Parms Parms;
		const_cast<AWeapon*>(this)->ProcessEvent(FindFunctionChecked(NAME_AWeapon_GetDefaultSightsRelativeTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AWeapon_GetMuzzleWorldTransform = FName(TEXT("GetMuzzleWorldTransform"));
	FTransform AWeapon::GetMuzzleWorldTransform() const
	{
		Weapon_eventGetMuzzleWorldTransform_Parms Parms;
		const_cast<AWeapon*>(this)->ProcessEvent(FindFunctionChecked(NAME_AWeapon_GetMuzzleWorldTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AWeapon_GetOrientationRelativeTransform = FName(TEXT("GetOrientationRelativeTransform"));
	FTransform AWeapon::GetOrientationRelativeTransform(const float AimingValue) const
	{
		Weapon_eventGetOrientationRelativeTransform_Parms Parms;
		Parms.AimingValue=AimingValue;
		const_cast<AWeapon*>(this)->ProcessEvent(FindFunctionChecked(NAME_AWeapon_GetOrientationRelativeTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AWeapon_GetOriginRelativeTransform = FName(TEXT("GetOriginRelativeTransform"));
	FTransform AWeapon::GetOriginRelativeTransform() const
	{
		Weapon_eventGetOriginRelativeTransform_Parms Parms;
		const_cast<AWeapon*>(this)->ProcessEvent(FindFunctionChecked(NAME_AWeapon_GetOriginRelativeTransform),&Parms);
		return Parms.ReturnValue;
	}
	void AWeapon::StaticRegisterNativesAWeapon()
	{
		UClass* Class = AWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationVariablesOnEquipped", &AWeapon::execGetAnimationVariablesOnEquipped },
			{ "GetAnimationVariablesOnTick", &AWeapon::execGetAnimationVariablesOnTick },
			{ "GetDefaultSightsRelativeTransform", &AWeapon::execGetDefaultSightsRelativeTransform },
			{ "GetMuzzleWorldTransform", &AWeapon::execGetMuzzleWorldTransform },
			{ "GetOrientationRelativeTransform", &AWeapon::execGetOrientationRelativeTransform },
			{ "GetOrientationWorldTransform", &AWeapon::execGetOrientationWorldTransform },
			{ "GetOriginRelativeTransform", &AWeapon::execGetOriginRelativeTransform },
			{ "GetOriginWorldTransform", &AWeapon::execGetOriginWorldTransform },
			{ "GetSightsWorldTransform", &AWeapon::execGetSightsWorldTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics
	{
		struct Weapon_eventGetAnimationVariablesOnEquipped_Parms
		{
			UAnimSequence* OutAnimPose;
			float OutWeightScale;
			FTransform OutCustomOffsetTransform;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAnimPose;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutWeightScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCustomOffsetTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::NewProp_OutAnimPose = { "OutAnimPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetAnimationVariablesOnEquipped_Parms, OutAnimPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::NewProp_OutWeightScale = { "OutWeightScale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetAnimationVariablesOnEquipped_Parms, OutWeightScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::NewProp_OutCustomOffsetTransform = { "OutCustomOffsetTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetAnimationVariablesOnEquipped_Parms, OutCustomOffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::NewProp_OutAnimPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::NewProp_OutWeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::NewProp_OutCustomOffsetTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon|Anim" },
		{ "DisplayName", "Get Animation Variables (On Equipped)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetAnimationVariablesOnEquipped", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::Weapon_eventGetAnimationVariablesOnEquipped_Parms), Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics
	{
		struct Weapon_eventGetAnimationVariablesOnTick_Parms
		{
			const ATrueFPSCharacterBase* Character;
			FTransform OutOrientationRelativeTransform;
			FTransform OutSightsRelativeTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutOrientationRelativeTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSightsRelativeTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetAnimationVariablesOnTick_Parms, Character), Z_Construct_UClass_ATrueFPSCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::NewProp_Character_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::NewProp_OutOrientationRelativeTransform = { "OutOrientationRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetAnimationVariablesOnTick_Parms, OutOrientationRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::NewProp_OutSightsRelativeTransform = { "OutSightsRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetAnimationVariablesOnTick_Parms, OutSightsRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::NewProp_OutOrientationRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::NewProp_OutSightsRelativeTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon|Anim" },
		{ "DisplayName", "Get Animation Variables (On Tick)" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetAnimationVariablesOnTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::Weapon_eventGetAnimationVariablesOnTick_Parms), Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_GetDefaultSightsRelativeTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_GetDefaultSightsRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetDefaultSightsRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetDefaultSightsRelativeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetDefaultSightsRelativeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetDefaultSightsRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// Gets the relative transform of the default sights on the weapon. Default sights\n// usually being a mesh socket but this can be overridden.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
		{ "ToolTip", "Gets the relative transform of the default sights on the weapon. Default sights\nusually being a mesh socket but this can be overridden." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetDefaultSightsRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetDefaultSightsRelativeTransform", nullptr, nullptr, sizeof(Weapon_eventGetDefaultSightsRelativeTransform_Parms), Z_Construct_UFunction_AWeapon_GetDefaultSightsRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetDefaultSightsRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetDefaultSightsRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetDefaultSightsRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_GetDefaultSightsRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GetDefaultSightsRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_GetMuzzleWorldTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_GetMuzzleWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetMuzzleWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetMuzzleWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetMuzzleWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetMuzzleWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// Overridable function that returns the muzzle transform in world-space\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
		{ "ToolTip", "Overridable function that returns the muzzle transform in world-space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetMuzzleWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetMuzzleWorldTransform", nullptr, nullptr, sizeof(Weapon_eventGetMuzzleWorldTransform_Parms), Z_Construct_UFunction_AWeapon_GetMuzzleWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetMuzzleWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetMuzzleWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetMuzzleWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_GetMuzzleWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GetMuzzleWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::NewProp_AimingValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::NewProp_AimingValue = { "AimingValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetOrientationRelativeTransform_Parms, AimingValue), METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::NewProp_AimingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::NewProp_AimingValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetOrientationRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::NewProp_AimingValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// Returns the orientation of the weapon in actor-space based on the sights and origin transform blended\n// by the aiming value. Can be overriden to return whatever. This default implementation\n// lerps the pivot-point by the sights transform to allow dynamic sights changing without\n// changing the weapon offset relative to the viewport.\n" },
		{ "CPP_Default_AimingValue", "0.000000" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
		{ "ToolTip", "Returns the orientation of the weapon in actor-space based on the sights and origin transform blended\nby the aiming value. Can be overriden to return whatever. This default implementation\nlerps the pivot-point by the sights transform to allow dynamic sights changing without\nchanging the weapon offset relative to the viewport." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetOrientationRelativeTransform", nullptr, nullptr, sizeof(Weapon_eventGetOrientationRelativeTransform_Parms), Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics
	{
		struct Weapon_eventGetOrientationWorldTransform_Parms
		{
			float AimingValue;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::NewProp_AimingValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::NewProp_AimingValue = { "AimingValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetOrientationWorldTransform_Parms, AimingValue), METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::NewProp_AimingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::NewProp_AimingValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetOrientationWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::NewProp_AimingValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// Returns the orientation of the weapon in world-space based on the sights rotation\n// and the origin location. Can be overriden to return whatever by overriding Get Orientation Relative Transform.\n// This default implementation allows the pivot point to rotate by the aim rotation\n" },
		{ "CPP_Default_AimingValue", "0.000000" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
		{ "ToolTip", "Returns the orientation of the weapon in world-space based on the sights rotation\nand the origin location. Can be overriden to return whatever by overriding Get Orientation Relative Transform.\nThis default implementation allows the pivot point to rotate by the aim rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetOrientationWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::Weapon_eventGetOrientationWorldTransform_Parms), Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_GetOriginRelativeTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_GetOriginRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetOriginRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetOriginRelativeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetOriginRelativeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetOriginRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// Gets the origin of this weapon relative to the weapon's mesh. This can be an empty transform.\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
		{ "ToolTip", "Gets the origin of this weapon relative to the weapon's mesh. This can be an empty transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetOriginRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetOriginRelativeTransform", nullptr, nullptr, sizeof(Weapon_eventGetOriginRelativeTransform_Parms), Z_Construct_UFunction_AWeapon_GetOriginRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetOriginRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetOriginRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetOriginRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_GetOriginRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GetOriginRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_GetOriginWorldTransform_Statics
	{
		struct Weapon_eventGetOriginWorldTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_GetOriginWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetOriginWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetOriginWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetOriginWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetOriginWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// The origin transform in world-space\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
		{ "ToolTip", "The origin transform in world-space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetOriginWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetOriginWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeapon_GetOriginWorldTransform_Statics::Weapon_eventGetOriginWorldTransform_Parms), Z_Construct_UFunction_AWeapon_GetOriginWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetOriginWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetOriginWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetOriginWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_GetOriginWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GetOriginWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_GetSightsWorldTransform_Statics
	{
		struct Weapon_eventGetSightsWorldTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_GetSightsWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetSightsWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetSightsWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetSightsWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetSightsWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetSightsWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetSightsWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeapon_GetSightsWorldTransform_Statics::Weapon_eventGetSightsWorldTransform_Parms), Z_Construct_UFunction_AWeapon_GetSightsWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetSightsWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetSightsWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetSightsWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_GetSightsWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GetSightsWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocationPlacement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocationPlacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotationPlacement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotationPlacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimProps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnequipMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnequipMontage;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOriginWidget_MetaData[];
#endif
		static void NewProp_bShowOriginWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOriginWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginVisualizationMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginVisualizationMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandAdditiveTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffHandAdditiveTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightsRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SightsRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAimOffset_MetaData[];
#endif
		static void NewProp_bShowAimOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAimOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimOffsetMesh;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnEquipped, "GetAnimationVariablesOnEquipped" }, // 62387622
		{ &Z_Construct_UFunction_AWeapon_GetAnimationVariablesOnTick, "GetAnimationVariablesOnTick" }, // 1354772808
		{ &Z_Construct_UFunction_AWeapon_GetDefaultSightsRelativeTransform, "GetDefaultSightsRelativeTransform" }, // 1661377035
		{ &Z_Construct_UFunction_AWeapon_GetMuzzleWorldTransform, "GetMuzzleWorldTransform" }, // 515345508
		{ &Z_Construct_UFunction_AWeapon_GetOrientationRelativeTransform, "GetOrientationRelativeTransform" }, // 3683212745
		{ &Z_Construct_UFunction_AWeapon_GetOrientationWorldTransform, "GetOrientationWorldTransform" }, // 3543415173
		{ &Z_Construct_UFunction_AWeapon_GetOriginRelativeTransform, "GetOriginRelativeTransform" }, // 4264359726
		{ &Z_Construct_UFunction_AWeapon_GetOriginWorldTransform, "GetOriginWorldTransform" }, // 2502887743
		{ &Z_Construct_UFunction_AWeapon_GetSightsWorldTransform, "GetSightsWorldTransform" }, // 1832428968
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponSystem/Weapons/Weapon.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_OwningCharacter_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, OwningCharacter), Z_Construct_UClass_ATrueFPSCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_OwningCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_OwningCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_RelativeLocationPlacement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Configurations|Placement" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_RelativeLocationPlacement = { "RelativeLocationPlacement", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, RelativeLocationPlacement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_RelativeLocationPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_RelativeLocationPlacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_RelativeRotationPlacement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Configurations|Placement" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_RelativeRotationPlacement = { "RelativeRotationPlacement", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, RelativeRotationPlacement), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_RelativeRotationPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_RelativeRotationPlacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_AnimProps_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Configurations|Anim" },
		{ "DisplayName", "Animation Properties" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AnimProps = { "AnimProps", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, AnimProps), Z_Construct_UScriptStruct_FAnimProperties, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_AnimProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_AnimProps_MetaData)) }; // 1163227068
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_OriginRelativeTransform_MetaData[] = {
		{ "ALlowPrivateAccess", "true" },
		{ "Category", "Configurations|Anim" },
		{ "Comment", "// The pivot point of the weapon in procedural animations\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
		{ "ToolTip", "The pivot point of the weapon in procedural animations" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_OriginRelativeTransform = { "OriginRelativeTransform", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, OriginRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_OriginRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_OriginRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_EquipMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Configurations|Anim" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_EquipMontage = { "EquipMontage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, EquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_EquipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_EquipMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_UnequipMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Configurations|Anim" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_UnequipMontage = { "UnequipMontage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, UnequipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_UnequipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_UnequipMontage_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_bShowOriginWidget_MetaData[] = {
		{ "Category", "Configurations|Anim|Weapon Origin Visualizer" },
		{ "Comment", "// Whether or not to show the visual-representation of the Origin Transform\n" },
		{ "DisplayAfter", "OriginRelativeTransform" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
		{ "ToolTip", "Whether or not to show the visual-representation of the Origin Transform" },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_bShowOriginWidget_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->bShowOriginWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bShowOriginWidget = { "bShowOriginWidget", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bShowOriginWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_bShowOriginWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_bShowOriginWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_OriginVisualizationMesh_MetaData[] = {
		{ "Category", "Configurations|Anim|Weapon Origin Visualizer" },
		{ "Comment", "// Setting this will override the default origin widget mesh\n" },
		{ "DisplayAfter", "bShowOriginWidget" },
		{ "EditCondition", "bShowOriginWidget" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
		{ "ToolTip", "Setting this will override the default origin widget mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_OriginVisualizationMesh = { "OriginVisualizationMesh", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, OriginVisualizationMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_OriginVisualizationMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_OriginVisualizationMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_OffHandAdditiveTransform_MetaData[] = {
		{ "Category", "Anim" },
		{ "Comment", "// The offset applied to the Off-Hand\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
		{ "ToolTip", "The offset applied to the Off-Hand" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_OffHandAdditiveTransform = { "OffHandAdditiveTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, OffHandAdditiveTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_OffHandAdditiveTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_OffHandAdditiveTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_SightsRelativeTransform_MetaData[] = {
		{ "Category", "Anim" },
		{ "Comment", "// The sights transform relative to the weapon actor transform\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
		{ "ToolTip", "The sights transform relative to the weapon actor transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_SightsRelativeTransform = { "SightsRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, SightsRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_SightsRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_SightsRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_AimOffset_MetaData[] = {
		{ "Category", "Configurations|Anim|Aiming" },
		{ "Comment", "// Defines the distance the sights origin is from the camera\n" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
		{ "ToolTip", "Defines the distance the sights origin is from the camera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AimOffset = { "AimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, AimOffset), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_AimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_AimOffset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_bShowAimOffset_MetaData[] = {
		{ "Category", "Configurations|Anim|Aiming|Visualization" },
		{ "DisplayName", "Show Aim Offset Visualization Mesh" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_bShowAimOffset_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->bShowAimOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bShowAimOffset = { "bShowAimOffset", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bShowAimOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_bShowAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_bShowAimOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_AimOffsetMesh_MetaData[] = {
		{ "Category", "Configurations|Anim|Aiming|Visualization" },
		{ "DisplayName", "Aim Offset Visualization Mesh" },
		{ "EditCondition", "bShowAimOffset" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Weapons/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AimOffsetMesh = { "AimOffsetMesh", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, AimOffsetMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_AimOffsetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_AimOffsetMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_OwningCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_RelativeLocationPlacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_RelativeRotationPlacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AnimProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_OriginRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_EquipMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_UnequipMontage,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bShowOriginWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_OriginVisualizationMesh,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_OffHandAdditiveTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_SightsRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AimOffset,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bShowAimOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AimOffsetMesh,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
		&AWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon()
	{
		if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<AWeapon>()
	{
		return AWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_Statics::ScriptStructInfo[] = {
		{ FAnimProperties::StaticStruct, Z_Construct_UScriptStruct_FAnimProperties_Statics::NewStructOps, TEXT("AnimProperties"), &Z_Registration_Info_UScriptStruct_AnimProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimProperties), 1163227068U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 2737542880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_3434847209(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Weapons_Weapon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
