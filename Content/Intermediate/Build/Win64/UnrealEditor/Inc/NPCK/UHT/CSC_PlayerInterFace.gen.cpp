// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/CSC_PlayerInterFace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSC_PlayerInterFace() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NPCK_API UClass* Z_Construct_UClass_UCSC_PlayerInterFace();
	NPCK_API UClass* Z_Construct_UClass_UCSC_PlayerInterFace_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	void UCSC_PlayerInterFace::StaticRegisterNativesUCSC_PlayerInterFace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSC_PlayerInterFace);
	UClass* Z_Construct_UClass_UCSC_PlayerInterFace_NoRegister()
	{
		return UCSC_PlayerInterFace::StaticClass();
	}
	struct Z_Construct_UClass_UCSC_PlayerInterFace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSC_PlayerInterFace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_PlayerInterFace_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSC_PlayerInterFace.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSC_PlayerInterFace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICSC_PlayerInterFace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSC_PlayerInterFace_Statics::ClassParams = {
		&UCSC_PlayerInterFace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCSC_PlayerInterFace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_PlayerInterFace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSC_PlayerInterFace()
	{
		if (!Z_Registration_Info_UClass_UCSC_PlayerInterFace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSC_PlayerInterFace.OuterSingleton, Z_Construct_UClass_UCSC_PlayerInterFace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSC_PlayerInterFace.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<UCSC_PlayerInterFace>()
	{
		return UCSC_PlayerInterFace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSC_PlayerInterFace);
	UCSC_PlayerInterFace::~UCSC_PlayerInterFace() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_PlayerInterFace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_PlayerInterFace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSC_PlayerInterFace, UCSC_PlayerInterFace::StaticClass, TEXT("UCSC_PlayerInterFace"), &Z_Registration_Info_UClass_UCSC_PlayerInterFace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSC_PlayerInterFace), 1594884316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_PlayerInterFace_h_1571235477(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_PlayerInterFace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_PlayerInterFace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
