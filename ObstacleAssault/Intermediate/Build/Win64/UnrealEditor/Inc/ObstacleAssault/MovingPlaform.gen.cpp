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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MyInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyBoolean_MetaData[];
#endif
		static void NewProp_MyBoolean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MyBoolean;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyInt_MetaData[] = {
		{ "Category", "MovingPlaform" },
		{ "ModuleRelativePath", "MovingPlaform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyInt = { "MyInt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlaform, MyInt), METADATA_PARAMS(Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyFloat_MetaData[] = {
		{ "Category", "MovingPlaform" },
		{ "ModuleRelativePath", "MovingPlaform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyFloat = { "MyFloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlaform, MyFloat), METADATA_PARAMS(Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyBoolean_MetaData[] = {
		{ "Category", "MovingPlaform" },
		{ "ModuleRelativePath", "MovingPlaform.h" },
	};
#endif
	void Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyBoolean_SetBit(void* Obj)
	{
		((AMovingPlaform*)Obj)->MyBoolean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyBoolean = { "MyBoolean", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMovingPlaform), &Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyBoolean_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyBoolean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyBoolean_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlaform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlaform_Statics::NewProp_MyBoolean,
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
		{ Z_Construct_UClass_AMovingPlaform, AMovingPlaform::StaticClass, TEXT("AMovingPlaform"), &Z_Registration_Info_UClass_AMovingPlaform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlaform), 1792453472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlaform_h_639597568(TEXT("/Script/ObstacleAssault"),
		Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlaform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlaform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
