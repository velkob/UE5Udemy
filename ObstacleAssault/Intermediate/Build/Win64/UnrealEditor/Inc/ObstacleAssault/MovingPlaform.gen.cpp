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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingPlaform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlaform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlaform_Statics::ClassParams = {
		&AMovingPlaform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
		{ Z_Construct_UClass_AMovingPlaform, AMovingPlaform::StaticClass, TEXT("AMovingPlaform"), &Z_Registration_Info_UClass_AMovingPlaform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlaform), 2859054991U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlaform_h_1379671167(TEXT("/Script/ObstacleAssault"),
		Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlaform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlaform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
