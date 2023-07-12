// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/CSC_LockOnComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSC_LockOnComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_UCSC_LockOnComponent();
	NPCK_API UClass* Z_Construct_UClass_UCSC_LockOnComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	DEFINE_FUNCTION(UCSC_LockOnComponent::execToggleLockOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLockOn();
		P_NATIVE_END;
	}
	void UCSC_LockOnComponent::StaticRegisterNativesUCSC_LockOnComponent()
	{
		UClass* Class = UCSC_LockOnComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleLockOn", &UCSC_LockOnComponent::execToggleLockOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCSC_LockOnComponent_ToggleLockOn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSC_LockOnComponent_ToggleLockOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lock On" },
		{ "ModuleRelativePath", "Public/CSC_LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSC_LockOnComponent_ToggleLockOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSC_LockOnComponent, nullptr, "ToggleLockOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSC_LockOnComponent_ToggleLockOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSC_LockOnComponent_ToggleLockOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSC_LockOnComponent_ToggleLockOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCSC_LockOnComponent_ToggleLockOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSC_LockOnComponent);
	UClass* Z_Construct_UClass_UCSC_LockOnComponent_NoRegister()
	{
		return UCSC_LockOnComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCSC_LockOnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockOnInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LockOnInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSC_LockOnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCSC_LockOnComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCSC_LockOnComponent_ToggleLockOn, "ToggleLockOn" }, // 1602248167
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_LockOnComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CSC_LockOnComponent.h" },
		{ "ModuleRelativePath", "Public/CSC_LockOnComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_LockOnComponent_Statics::NewProp_LockOnInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CSC_LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSC_LockOnComponent_Statics::NewProp_LockOnInput = { "LockOnInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSC_LockOnComponent, LockOnInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSC_LockOnComponent_Statics::NewProp_LockOnInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_LockOnComponent_Statics::NewProp_LockOnInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSC_LockOnComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_LockOnComponent_Statics::NewProp_LockOnInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSC_LockOnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSC_LockOnComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSC_LockOnComponent_Statics::ClassParams = {
		&UCSC_LockOnComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCSC_LockOnComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_LockOnComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCSC_LockOnComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_LockOnComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSC_LockOnComponent()
	{
		if (!Z_Registration_Info_UClass_UCSC_LockOnComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSC_LockOnComponent.OuterSingleton, Z_Construct_UClass_UCSC_LockOnComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSC_LockOnComponent.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<UCSC_LockOnComponent>()
	{
		return UCSC_LockOnComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSC_LockOnComponent);
	UCSC_LockOnComponent::~UCSC_LockOnComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_LockOnComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_LockOnComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSC_LockOnComponent, UCSC_LockOnComponent::StaticClass, TEXT("UCSC_LockOnComponent"), &Z_Registration_Info_UClass_UCSC_LockOnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSC_LockOnComponent), 2381560114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_LockOnComponent_h_2671392229(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_LockOnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_LockOnComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
