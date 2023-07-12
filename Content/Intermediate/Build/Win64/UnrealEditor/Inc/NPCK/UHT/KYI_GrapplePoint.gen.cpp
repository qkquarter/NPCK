// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/KYI_GrapplePoint.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKYI_GrapplePoint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NPCK_API UClass* Z_Construct_UClass_AKYI_GrapplePoint();
	NPCK_API UClass* Z_Construct_UClass_AKYI_GrapplePoint_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_ANPCK_Player_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_UKYI_DetectionNode_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	DEFINE_FUNCTION(AKYI_GrapplePoint::execEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKYI_GrapplePoint::execBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AKYI_GrapplePoint::StaticRegisterNativesAKYI_GrapplePoint()
	{
		UClass* Class = AKYI_GrapplePoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlap", &AKYI_GrapplePoint::execBeginOverlap },
			{ "EndOverlap", &AKYI_GrapplePoint::execEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics
	{
		struct KYI_GrapplePoint_eventBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KYI_GrapplePoint_eventBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KYI_GrapplePoint_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KYI_GrapplePoint_eventBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KYI_GrapplePoint_eventBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((KYI_GrapplePoint_eventBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KYI_GrapplePoint_eventBeginOverlap_Parms), &Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KYI_GrapplePoint_eventBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KYI_GrapplePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKYI_GrapplePoint, nullptr, "BeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::KYI_GrapplePoint_eventBeginOverlap_Parms), Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics
	{
		struct KYI_GrapplePoint_eventEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KYI_GrapplePoint_eventEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KYI_GrapplePoint_eventEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KYI_GrapplePoint_eventEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KYI_GrapplePoint_eventEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KYI_GrapplePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKYI_GrapplePoint, nullptr, "EndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::KYI_GrapplePoint_eventEndOverlap_Parms), Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKYI_GrapplePoint);
	UClass* Z_Construct_UClass_AKYI_GrapplePoint_NoRegister()
	{
		return AKYI_GrapplePoint::StaticClass();
	}
	struct Z_Construct_UClass_AKYI_GrapplePoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_detection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_detection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deactivateZone_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_deactivateZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_landingZone_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_landingZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_widgetComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_widgetComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_widgetRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_widgetRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_used_MetaData[];
#endif
		static void NewProp_used_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_used;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_active_MetaData[];
#endif
		static void NewProp_active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKYI_GrapplePoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKYI_GrapplePoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKYI_GrapplePoint_BeginOverlap, "BeginOverlap" }, // 903706589
		{ &Z_Construct_UFunction_AKYI_GrapplePoint_EndOverlap, "EndOverlap" }, // 3956037358
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKYI_GrapplePoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KYI_GrapplePoint.h" },
		{ "ModuleRelativePath", "Public/KYI_GrapplePoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_detection_MetaData[] = {
		{ "Category", "KYI_GrapplePoint" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KYI_GrapplePoint.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_detection = { "detection", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AKYI_GrapplePoint, detection), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_detection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_detection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_deactivateZone_MetaData[] = {
		{ "Category", "KYI_GrapplePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KYI_GrapplePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_deactivateZone = { "deactivateZone", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AKYI_GrapplePoint, deactivateZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_deactivateZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_deactivateZone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_landingZone_MetaData[] = {
		{ "Category", "KYI_GrapplePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KYI_GrapplePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_landingZone = { "landingZone", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AKYI_GrapplePoint, landingZone), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_landingZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_landingZone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widgetComp_MetaData[] = {
		{ "Category", "KYI_GrapplePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KYI_GrapplePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widgetComp = { "widgetComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AKYI_GrapplePoint, widgetComp), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widgetComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widgetComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widget_MetaData[] = {
		{ "Category", "KYI_GrapplePoint" },
		{ "ModuleRelativePath", "Public/KYI_GrapplePoint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AKYI_GrapplePoint, widget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_playerRef_MetaData[] = {
		{ "Category", "KYI_GrapplePoint" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/KYI_GrapplePoint.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_playerRef = { "playerRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AKYI_GrapplePoint, playerRef), Z_Construct_UClass_ANPCK_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_playerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_playerRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widgetRef_MetaData[] = {
		{ "Category", "KYI_GrapplePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KYI_GrapplePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widgetRef = { "widgetRef", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AKYI_GrapplePoint, widgetRef), Z_Construct_UClass_UKYI_DetectionNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widgetRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widgetRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_used_MetaData[] = {
		{ "Category", "KYI_GrapplePoint" },
		{ "ModuleRelativePath", "Public/KYI_GrapplePoint.h" },
	};
#endif
	void Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_used_SetBit(void* Obj)
	{
		((AKYI_GrapplePoint*)Obj)->used = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_used = { "used", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AKYI_GrapplePoint), &Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_used_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_used_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_used_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_active_MetaData[] = {
		{ "Category", "KYI_GrapplePoint" },
		{ "ModuleRelativePath", "Public/KYI_GrapplePoint.h" },
	};
#endif
	void Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_active_SetBit(void* Obj)
	{
		((AKYI_GrapplePoint*)Obj)->active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AKYI_GrapplePoint), &Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_active_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_active_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_active_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKYI_GrapplePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_detection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_deactivateZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_landingZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widgetComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_playerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_widgetRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_used,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKYI_GrapplePoint_Statics::NewProp_active,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKYI_GrapplePoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKYI_GrapplePoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKYI_GrapplePoint_Statics::ClassParams = {
		&AKYI_GrapplePoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKYI_GrapplePoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKYI_GrapplePoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKYI_GrapplePoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKYI_GrapplePoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKYI_GrapplePoint()
	{
		if (!Z_Registration_Info_UClass_AKYI_GrapplePoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKYI_GrapplePoint.OuterSingleton, Z_Construct_UClass_AKYI_GrapplePoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKYI_GrapplePoint.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<AKYI_GrapplePoint>()
	{
		return AKYI_GrapplePoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKYI_GrapplePoint);
	AKYI_GrapplePoint::~AKYI_GrapplePoint() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_GrapplePoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_GrapplePoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKYI_GrapplePoint, AKYI_GrapplePoint::StaticClass, TEXT("AKYI_GrapplePoint"), &Z_Registration_Info_UClass_AKYI_GrapplePoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKYI_GrapplePoint), 4000428249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_GrapplePoint_h_1367965303(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_GrapplePoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_GrapplePoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
