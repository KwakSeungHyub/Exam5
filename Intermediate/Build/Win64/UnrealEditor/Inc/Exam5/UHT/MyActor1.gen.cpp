// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam5/MyActor1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor1() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EXAM5_API UClass* Z_Construct_UClass_AMyActor1();
EXAM5_API UClass* Z_Construct_UClass_AMyActor1_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam5();
// End Cross Module References

// Begin Class AMyActor1
void AMyActor1::StaticRegisterNativesAMyActor1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor1);
UClass* Z_Construct_UClass_AMyActor1_NoRegister()
{
	return AMyActor1::StaticClass();
}
struct Z_Construct_UClass_AMyActor1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor1.h" },
		{ "ModuleRelativePath", "MyActor1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyActor1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor1_Statics::ClassParams = {
	&AMyActor1::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor1_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor1()
{
	if (!Z_Registration_Info_UClass_AMyActor1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor1.OuterSingleton, Z_Construct_UClass_AMyActor1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor1.OuterSingleton;
}
template<> EXAM5_API UClass* StaticClass<AMyActor1>()
{
	return AMyActor1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor1);
AMyActor1::~AMyActor1() {}
// End Class AMyActor1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Exam5_Source_Exam5_MyActor1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor1, AMyActor1::StaticClass, TEXT("AMyActor1"), &Z_Registration_Info_UClass_AMyActor1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor1), 785401345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Exam5_Source_Exam5_MyActor1_h_1819455640(TEXT("/Script/Exam5"),
	Z_CompiledInDeferFile_FID_Exam5_Source_Exam5_MyActor1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Exam5_Source_Exam5_MyActor1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
