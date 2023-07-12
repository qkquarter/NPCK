// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/KYI_GrappleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKYI_GrappleComponent() {}
// Cross Module References
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_AKYI_GrapplePoint_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_ANPCK_Player_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_UKYI_GrappleComponent();
	NPCK_API UClass* Z_Construct_UClass_UKYI_GrappleComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	void UKYI_GrappleComponent::StaticRegisterNativesUKYI_GrappleComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKYI_GrappleComponent);
	UClass* Z_Construct_UClass_UKYI_GrappleComponent_NoRegister()
	{
		return UKYI_GrappleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKYI_GrappleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kunai_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_kunai;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rope_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grappleSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grappleSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grappleAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grappleAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_grapple_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_grapple;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_airSpeedCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_airSpeedCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groundSpeedCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_groundSpeedCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_airHeightOffsetCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_airHeightOffsetCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groundHeightOffsetCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_groundHeightOffsetCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_airRopeLength_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_airRopeLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groundRopeLength_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_groundRopeLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_airRopePosition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_airRopePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groundRopePosition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_groundRopePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grapplePointRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grapplePointRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentGrapplePoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentGrapplePoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_detectedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_detectedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startingPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_startingPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grapplingPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_grapplingPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_highestDotProduct_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_highestDotProduct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_detectionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_detectionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grappleThrowDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_grappleThrowDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_montagePosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_montagePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ropeBaseLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ropeBaseLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movingWithGrapple_MetaData[];
#endif
		static void NewProp_movingWithGrapple_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_movingWithGrapple;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inGrapplingAnimation_MetaData[];
#endif
		static void NewProp_inGrapplingAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inGrapplingAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKYI_GrappleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "KYI_GrappleComponent.h" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_player_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "//\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
		{ "ToolTip", "\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, player), Z_Construct_UClass_ANPCK_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_kunai_MetaData[] = {
		{ "Category", "Caching" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_kunai = { "kunai", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, kunai), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_kunai_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_kunai_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_rope_MetaData[] = {
		{ "Category", "Caching" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_rope = { "rope", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, rope), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_rope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_rope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_characMesh_MetaData[] = {
		{ "Category", "Caching" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_characMesh = { "characMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, characMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_characMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_characMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_jumpSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "//\xc8\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
		{ "ToolTip", "\xc8\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_jumpSound = { "jumpSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, jumpSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_jumpSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_jumpSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleSound = { "grappleSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, grappleSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "//\xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleAnim = { "grappleAnim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, grappleAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_IA_grapple_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd\xef\xbf\xbd\xc3\xb8\xef\xbf\xbd \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd\xef\xbf\xbd\xc3\xb8\xef\xbf\xbd \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_IA_grapple = { "IA_grapple", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, IA_grapple), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_IA_grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_IA_grapple_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airSpeedCurve_MetaData[] = {
		{ "Category", "Grappling Movement" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airSpeedCurve = { "airSpeedCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, airSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundSpeedCurve_MetaData[] = {
		{ "Category", "Grappling Movement" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundSpeedCurve = { "groundSpeedCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, groundSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airHeightOffsetCurve_MetaData[] = {
		{ "Category", "Grappling Movement" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airHeightOffsetCurve = { "airHeightOffsetCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, airHeightOffsetCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airHeightOffsetCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airHeightOffsetCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundHeightOffsetCurve_MetaData[] = {
		{ "Category", "Grappling Movement" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundHeightOffsetCurve = { "groundHeightOffsetCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, groundHeightOffsetCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundHeightOffsetCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundHeightOffsetCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airRopeLength_MetaData[] = {
		{ "Category", "Rope Control" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airRopeLength = { "airRopeLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, airRopeLength), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airRopeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airRopeLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundRopeLength_MetaData[] = {
		{ "Category", "Rope Control" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundRopeLength = { "groundRopeLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, groundRopeLength), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundRopeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundRopeLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airRopePosition_MetaData[] = {
		{ "Category", "Rope Control" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airRopePosition = { "airRopePosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, airRopePosition), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airRopePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airRopePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundRopePosition_MetaData[] = {
		{ "Category", "Rope Control" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundRopePosition = { "groundRopePosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, groundRopePosition), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundRopePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundRopePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grapplePointRef_MetaData[] = {
		{ "Category", "Reference" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grapplePointRef = { "grapplePointRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, grapplePointRef), Z_Construct_UClass_AKYI_GrapplePoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grapplePointRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grapplePointRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_currentGrapplePoint_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_currentGrapplePoint = { "currentGrapplePoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, currentGrapplePoint), Z_Construct_UClass_AKYI_GrapplePoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_currentGrapplePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_currentGrapplePoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_detectedActor_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_detectedActor = { "detectedActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, detectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_detectedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_detectedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_startingPosition_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_startingPosition = { "startingPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, startingPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_startingPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_startingPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grapplingPosition_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grapplingPosition = { "grapplingPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, grapplingPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grapplingPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grapplingPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_highestDotProduct_MetaData[] = {
		{ "Category", "KYI_GrappleComponent" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_highestDotProduct = { "highestDotProduct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, highestDotProduct), METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_highestDotProduct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_highestDotProduct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_detectionRadius_MetaData[] = {
		{ "Category", "KYI_GrappleComponent" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_detectionRadius = { "detectionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, detectionRadius), METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_detectionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_detectionRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleThrowDistance_MetaData[] = {
		{ "Category", "KYI_GrappleComponent" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleThrowDistance = { "grappleThrowDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, grappleThrowDistance), METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleThrowDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleThrowDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_montagePosition_MetaData[] = {
		{ "Category", "KYI_GrappleComponent" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_montagePosition = { "montagePosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, montagePosition), METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_montagePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_montagePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_ropeBaseLength_MetaData[] = {
		{ "Category", "KYI_GrappleComponent" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_ropeBaseLength = { "ropeBaseLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKYI_GrappleComponent, ropeBaseLength), METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_ropeBaseLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_ropeBaseLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_movingWithGrapple_MetaData[] = {
		{ "Category", "KYI_GrappleComponent" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_movingWithGrapple_SetBit(void* Obj)
	{
		((UKYI_GrappleComponent*)Obj)->movingWithGrapple = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_movingWithGrapple = { "movingWithGrapple", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UKYI_GrappleComponent), &Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_movingWithGrapple_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_movingWithGrapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_movingWithGrapple_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_inGrapplingAnimation_MetaData[] = {
		{ "Category", "KYI_GrappleComponent" },
		{ "ModuleRelativePath", "Public/KYI_GrappleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_inGrapplingAnimation_SetBit(void* Obj)
	{
		((UKYI_GrappleComponent*)Obj)->inGrapplingAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_inGrapplingAnimation = { "inGrapplingAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UKYI_GrappleComponent), &Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_inGrapplingAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_inGrapplingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_inGrapplingAnimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKYI_GrappleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_kunai,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_rope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_characMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_jumpSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_IA_grapple,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airSpeedCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundSpeedCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airHeightOffsetCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundHeightOffsetCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airRopeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundRopeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_airRopePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_groundRopePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grapplePointRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_currentGrapplePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_detectedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_startingPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grapplingPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_highestDotProduct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_detectionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_grappleThrowDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_montagePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_ropeBaseLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_movingWithGrapple,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKYI_GrappleComponent_Statics::NewProp_inGrapplingAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKYI_GrappleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKYI_GrappleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKYI_GrappleComponent_Statics::ClassParams = {
		&UKYI_GrappleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKYI_GrappleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKYI_GrappleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKYI_GrappleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKYI_GrappleComponent()
	{
		if (!Z_Registration_Info_UClass_UKYI_GrappleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKYI_GrappleComponent.OuterSingleton, Z_Construct_UClass_UKYI_GrappleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKYI_GrappleComponent.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<UKYI_GrappleComponent>()
	{
		return UKYI_GrappleComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKYI_GrappleComponent);
	UKYI_GrappleComponent::~UKYI_GrappleComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_GrappleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_GrappleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKYI_GrappleComponent, UKYI_GrappleComponent::StaticClass, TEXT("UKYI_GrappleComponent"), &Z_Registration_Info_UClass_UKYI_GrappleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKYI_GrappleComponent), 1450862317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_GrappleComponent_h_830641763(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_GrappleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_KYI_GrappleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
