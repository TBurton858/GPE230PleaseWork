// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The230Class/T_Door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT_Door() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
THE230CLASS_API UClass* Z_Construct_UClass_AT_Door();
THE230CLASS_API UClass* Z_Construct_UClass_AT_Door_NoRegister();
UPackage* Z_Construct_UPackage__Script_The230Class();
// End Cross Module References

// Begin Class AT_Door
void AT_Door::StaticRegisterNativesAT_Door()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT_Door);
UClass* Z_Construct_UClass_AT_Door_NoRegister()
{
	return AT_Door::StaticClass();
}
struct Z_Construct_UClass_AT_Door_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "T_Door.h" },
		{ "ModuleRelativePath", "T_Door.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT_Door>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AT_Door_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_The230Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AT_Door_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AT_Door_Statics::ClassParams = {
	&AT_Door::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AT_Door_Statics::Class_MetaDataParams), Z_Construct_UClass_AT_Door_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AT_Door()
{
	if (!Z_Registration_Info_UClass_AT_Door.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT_Door.OuterSingleton, Z_Construct_UClass_AT_Door_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AT_Door.OuterSingleton;
}
template<> THE230CLASS_API UClass* StaticClass<AT_Door>()
{
	return AT_Door::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AT_Door);
AT_Door::~AT_Door() {}
// End Class AT_Door

// Begin Registration
struct Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Door_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AT_Door, AT_Door::StaticClass, TEXT("AT_Door"), &Z_Registration_Info_UClass_AT_Door, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT_Door), 2276273860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Door_h_4067482448(TEXT("/Script/The230Class"),
	Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Door_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
