// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleAssault/MovingPlaform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlaform() {}
// Cross Module References
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlaform_NoRegister();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlaform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AMovingPlaform::StaticRegisterNativesAMovingPlaform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlaform);
	UClass* Z_Construct_UClass_AMovingPlaform_NoRegister()
	{
		return AMovingPlaform::StaticClass();
	}
	struct Z_Construct_UClass_AMovingPlaform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingPlaform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlaform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlaform.h" },
		{ "ModuleRelativePath", "MovingPlaform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlaform_Statics::NewProp_PlatformVelocity_MetaData[] = {
		{ "Category", "Moving" },
		{ "ModuleRelativePath", "MovingPlaform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlaform_Statics::NewProp_PlatformVelocity = { "PlatformVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlaform, PlatformVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMovingPlaform_Statics::NewProp_PlatformVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlaform_Statics::NewProp_PlatformVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Moving" },
		{ "ModuleRelativePath", "MovingPlaform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlaform, MoveDistance), METADATA_PARAMS(Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MoveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MoveDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlaform_Statics::NewProp_RotationVelocity_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "MovingPlaform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlaform_Statics::NewProp_RotationVelocity = { "RotationVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlaform, RotationVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AMovingPlaform_Statics::NewProp_RotationVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlaform_Statics::NewProp_RotationVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlaform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlaform_Statics::NewProp_PlatformVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MoveDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlaform_Statics::NewProp_RotationVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingPlaform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlaform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlaform_Statics::ClassParams = {
		&AMovingPlaform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingPlaform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlaform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingPlaform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlaform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingPlaform()
	{
		if (!Z_Registration_Info_UClass_AMovingPlaform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlaform.OuterSingleton, Z_Construct_UClass_AMovingPlaform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingPlaform.OuterSingleton;
	}
	template<> OBSTACLEASSAULT_API UClass* StaticClass<AMovingPlaform>()
	{
		return AMovingPlaform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlaform);
	struct Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlaform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlaform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlaform, AMovingPlaform::StaticClass, TEXT("AMovingPlaform"), &Z_Registration_Info_UClass_AMovingPlaform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlaform), 3405139474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlaform_h_90782541(TEXT("/Script/ObstacleAssault"),
		Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlaform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlaform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
