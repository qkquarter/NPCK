// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/NPCK_MoveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCK_MoveComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_UNPCK_MoveComponent();
	NPCK_API UClass* Z_Construct_UClass_UNPCK_MoveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	void UNPCK_MoveComponent::StaticRegisterNativesUNPCK_MoveComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCK_MoveComponent);
	UClass* Z_Construct_UClass_UNPCK_MoveComponent_NoRegister()
	{
		return UNPCK_MoveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNPCK_MoveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouseXY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mouseXY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_moveKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dashKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dashKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNPCK_MoveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_MoveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NPCK_MoveComponent.h" },
		{ "ModuleRelativePath", "Public/NPCK_MoveComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_mouseXY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NPCK_MoveComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_mouseXY = { "mouseXY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_MoveComponent, mouseXY), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_mouseXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_mouseXY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_moveKey_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NPCK_MoveComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_moveKey = { "moveKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_MoveComponent, moveKey), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_moveKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_moveKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_dashKey_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NPCK_MoveComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_dashKey = { "dashKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_MoveComponent, dashKey), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_dashKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_dashKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_jumpKey_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NPCK_MoveComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_jumpKey = { "jumpKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_MoveComponent, jumpKey), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_jumpKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_jumpKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCK_MoveComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_mouseXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_moveKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_dashKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_MoveComponent_Statics::NewProp_jumpKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNPCK_MoveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCK_MoveComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCK_MoveComponent_Statics::ClassParams = {
		&UNPCK_MoveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNPCK_MoveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_MoveComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNPCK_MoveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_MoveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNPCK_MoveComponent()
	{
		if (!Z_Registration_Info_UClass_UNPCK_MoveComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCK_MoveComponent.OuterSingleton, Z_Construct_UClass_UNPCK_MoveComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNPCK_MoveComponent.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<UNPCK_MoveComponent>()
	{
		return UNPCK_MoveComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCK_MoveComponent);
	UNPCK_MoveComponent::~UNPCK_MoveComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_MoveComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_MoveComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNPCK_MoveComponent, UNPCK_MoveComponent::StaticClass, TEXT("UNPCK_MoveComponent"), &Z_Registration_Info_UClass_UNPCK_MoveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCK_MoveComponent), 1781956995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_MoveComponent_h_3318157934(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_MoveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_MoveComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
