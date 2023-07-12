// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/KYI_DetectionNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKYI_DetectionNode() {}
// Cross Module References
	NPCK_API UClass* Z_Construct_UClass_UKYI_DetectionNode();
	NPCK_API UClass* Z_Construct_UClass_UKYI_DetectionNode_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	void UKYI_DetectionNode::StaticRegisterNativesUKYI_DetectionNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKYI_DetectionNode);
	UClass* Z_Construct_UClass_UKYI_DetectionNode_NoRegister()
	{
		return UKYI_DetectionNode::StaticClass();
	}
	struct Z_Construct_UClass_UKYI_DetectionNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeUse_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_filling_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_filling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_backGround_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_backGround;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKYI_DetectionNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_DetectionNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "KYI_DetectionNode.h" },
		{ "ModuleRelativePath", "Public/KYI_DetectionNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_NodeUse_MetaData[] = {
		{ "Category", "KYI_DetectionNode" },
		{ "ModuleRelativePath", "Public/KYI_DetectionNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_NodeUse = { "NodeUse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_DetectionNode, NodeUse), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_NodeUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_NodeUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_filling_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KYI_DetectionNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KYI_DetectionNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_filling = { "filling", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_DetectionNode, filling), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_filling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_filling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_backGround_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KYI_DetectionNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KYI_DetectionNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_backGround = { "backGround", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_DetectionNode, backGround), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_backGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_backGround_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKYI_DetectionNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_NodeUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_filling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_DetectionNode_Statics::NewProp_backGround,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKYI_DetectionNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKYI_DetectionNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKYI_DetectionNode_Statics::ClassParams = {
		&UKYI_DetectionNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKYI_DetectionNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_DetectionNode_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKYI_DetectionNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_DetectionNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKYI_DetectionNode()
	{
		if (!Z_Registration_Info_UClass_UKYI_DetectionNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKYI_DetectionNode.OuterSingleton, Z_Construct_UClass_UKYI_DetectionNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKYI_DetectionNode.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<UKYI_DetectionNode>()
	{
		return UKYI_DetectionNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKYI_DetectionNode);
	UKYI_DetectionNode::~UKYI_DetectionNode() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_DetectionNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_DetectionNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKYI_DetectionNode, UKYI_DetectionNode::StaticClass, TEXT("UKYI_DetectionNode"), &Z_Registration_Info_UClass_UKYI_DetectionNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKYI_DetectionNode), 3286749888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_DetectionNode_h_221898144(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_DetectionNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_DetectionNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
