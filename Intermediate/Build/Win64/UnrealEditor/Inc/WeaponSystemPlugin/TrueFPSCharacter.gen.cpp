// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystemPlugin/Public/WeaponSystem/Character/TrueFPSCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrueFPSCharacter() {}
// Cross Module References
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_ATrueFPSCharacter_NoRegister();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_ATrueFPSCharacter();
	WEAPONSYSTEMPLUGIN_API UClass* Z_Construct_UClass_AShooterCharacterBase();
	UPackage* Z_Construct_UPackage__Script_WeaponSystemPlugin();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ATrueFPSCharacter::StaticRegisterNativesATrueFPSCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrueFPSCharacter);
	UClass* Z_Construct_UClass_ATrueFPSCharacter_NoRegister()
	{
		return ATrueFPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATrueFPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HeadBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrueFPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShooterCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystemPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WeaponSystem/Character/TrueFPSCharacter.h" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacter_Statics::NewProp_ClientMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// The third person mesh that you, as the client, can see\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacter.h" },
		{ "ToolTip", "The third person mesh that you, as the client, can see" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrueFPSCharacter_Statics::NewProp_ClientMesh = { "ClientMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrueFPSCharacter, ClientMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacter_Statics::NewProp_ClientMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacter_Statics::NewProp_ClientMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrueFPSCharacter_Statics::NewProp_HeadBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "// Bones above this bone name will be invisible locally. Meaning that this should either be the neck or head bone name\n" },
		{ "DisplayAfter", "WeaponSocket" },
		{ "ModuleRelativePath", "Public/WeaponSystem/Character/TrueFPSCharacter.h" },
		{ "ToolTip", "Bones above this bone name will be invisible locally. Meaning that this should either be the neck or head bone name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATrueFPSCharacter_Statics::NewProp_HeadBoneName = { "HeadBoneName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrueFPSCharacter, HeadBoneName), METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacter_Statics::NewProp_HeadBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacter_Statics::NewProp_HeadBoneName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrueFPSCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrueFPSCharacter_Statics::NewProp_ClientMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrueFPSCharacter_Statics::NewProp_HeadBoneName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrueFPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrueFPSCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrueFPSCharacter_Statics::ClassParams = {
		&ATrueFPSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATrueFPSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacter_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ATrueFPSCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATrueFPSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrueFPSCharacter()
	{
		if (!Z_Registration_Info_UClass_ATrueFPSCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrueFPSCharacter.OuterSingleton, Z_Construct_UClass_ATrueFPSCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrueFPSCharacter.OuterSingleton;
	}
	template<> WEAPONSYSTEMPLUGIN_API UClass* StaticClass<ATrueFPSCharacter>()
	{
		return ATrueFPSCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrueFPSCharacter);
	struct Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrueFPSCharacter, ATrueFPSCharacter::StaticClass, TEXT("ATrueFPSCharacter"), &Z_Registration_Info_UClass_ATrueFPSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrueFPSCharacter), 1950735630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacter_h_1135875904(TEXT("/Script/WeaponSystemPlugin"),
		Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimeShooter_Plugins_WeaponSystemPlugin_Source_WeaponSystemPlugin_Public_WeaponSystem_Character_TrueFPSCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
