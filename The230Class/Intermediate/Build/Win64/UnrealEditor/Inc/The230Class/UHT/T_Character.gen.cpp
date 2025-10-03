// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The230Class/T_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT_Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
THE230CLASS_API UClass* Z_Construct_UClass_AT_Character();
THE230CLASS_API UClass* Z_Construct_UClass_AT_Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_The230Class();
// End Cross Module References

// Begin Class AT_Character
void AT_Character::StaticRegisterNativesAT_Character()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT_Character);
UClass* Z_Construct_UClass_AT_Character_NoRegister()
{
	return AT_Character::StaticClass();
}
struct Z_Construct_UClass_AT_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "T_Character.h" },
		{ "ModuleRelativePath", "T_Character.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AT_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_The230Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AT_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AT_Character_Statics::ClassParams = {
	&AT_Character::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AT_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AT_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AT_Character()
{
	if (!Z_Registration_Info_UClass_AT_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT_Character.OuterSingleton, Z_Construct_UClass_AT_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AT_Character.OuterSingleton;
}
template<> THE230CLASS_API UClass* StaticClass<AT_Character>()
{
	return AT_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AT_Character);
AT_Character::~AT_Character() {}
// End Class AT_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AT_Character, AT_Character::StaticClass, TEXT("AT_Character"), &Z_Registration_Info_UClass_AT_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT_Character), 633396095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Character_h_3714315816(TEXT("/Script/The230Class"),
	Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
