// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyStruct_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PolyStruct;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PolyStruct()
	{
		if (!Z_Registration_Info_UPackage__Script_PolyStruct.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PolyStruct",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFEE12C49,
				0x167FE8AD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PolyStruct.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PolyStruct.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PolyStruct(Z_Construct_UPackage__Script_PolyStruct, TEXT("/Script/PolyStruct"), Z_Registration_Info_UPackage__Script_PolyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFEE12C49, 0x167FE8AD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS