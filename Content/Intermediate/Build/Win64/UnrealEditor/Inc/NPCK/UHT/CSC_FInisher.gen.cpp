// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/CSC_FInisher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSC_FInisher() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_UCSC_Finisher();
	NPCK_API UClass* Z_Construct_UClass_UCSC_Finisher_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_UCSC_PlayerInterFace_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	void UCSC_Finisher::StaticRegisterNativesUCSC_Finisher()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSC_Finisher);
	UClass* Z_Construct_UClass_UCSC_Finisher_NoRegister()
	{
		return UCSC_Finisher::StaticClass();
	}
	struct Z_Construct_UClass_UCSC_Finisher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputFinish_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputFinish;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSC_Finisher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_Finisher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CSC_FInisher.h" },
		{ "ModuleRelativePath", "Public/CSC_FInisher.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_InputFinish_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/CSC_FInisher.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_InputFinish = { "InputFinish", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSC_Finisher, InputFinish), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_InputFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_InputFinish_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_DetectionRange_MetaData[] = {
		{ "Category", "Detection" },
		{ "ModuleRelativePath", "Public/CSC_FInisher.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_DetectionRange = { "DetectionRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSC_Finisher, DetectionRange), METADATA_PARAMS(Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_DetectionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_DetectionRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Finisher" },
		{ "ModuleRelativePath", "Public/CSC_FInisher.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSC_Finisher, TraceDistance), METADATA_PARAMS(Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_TraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_TraceDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Finisher" },
		{ "Comment", "// The radius of the trace\n" },
		{ "ModuleRelativePath", "Public/CSC_FInisher.h" },
		{ "ToolTip", "The radius of the trace" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSC_Finisher, TraceRadius), METADATA_PARAMS(Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_TraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_TraceRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "Category", "Finisher" },
		{ "Comment", "// The object types that the trace can hit\n" },
		{ "ModuleRelativePath", "Public/CSC_FInisher.h" },
		{ "ToolTip", "The object types that the trace can hit" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSC_Finisher, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_ObjectTypes_MetaData)) }; // 3629342158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSC_Finisher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_InputFinish,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_DetectionRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_TraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_TraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_ObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_Finisher_Statics::NewProp_ObjectTypes,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCSC_Finisher_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCSC_PlayerInterFace_NoRegister, (int32)VTABLE_OFFSET(UCSC_Finisher, ICSC_PlayerInterFace), false },  // 1594884316
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSC_Finisher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSC_Finisher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSC_Finisher_Statics::ClassParams = {
		&UCSC_Finisher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSC_Finisher_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_Finisher_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCSC_Finisher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_Finisher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSC_Finisher()
	{
		if (!Z_Registration_Info_UClass_UCSC_Finisher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSC_Finisher.OuterSingleton, Z_Construct_UClass_UCSC_Finisher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSC_Finisher.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<UCSC_Finisher>()
	{
		return UCSC_Finisher::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSC_Finisher);
	UCSC_Finisher::~UCSC_Finisher() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_FInisher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_FInisher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSC_Finisher, UCSC_Finisher::StaticClass, TEXT("UCSC_Finisher"), &Z_Registration_Info_UClass_UCSC_Finisher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSC_Finisher), 3226816155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_FInisher_h_2378651764(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_FInisher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_FInisher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
