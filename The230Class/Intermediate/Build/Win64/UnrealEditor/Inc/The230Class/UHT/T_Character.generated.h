// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "T_Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THE230CLASS_T_Character_generated_h
#error "T_Character.generated.h already included, missing '#pragma once' in T_Character.h"
#endif
#define THE230CLASS_T_Character_generated_h

#define FID_The230Class_Source_The230Class_T_Character_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT_Character(); \
	friend struct Z_Construct_UClass_AT_Character_Statics; \
public: \
	DECLARE_CLASS(AT_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The230Class"), NO_API) \
	DECLARE_SERIALIZER(AT_Character)


#define FID_The230Class_Source_The230Class_T_Character_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AT_Character(AT_Character&&); \
	AT_Character(const AT_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AT_Character) \
	NO_API virtual ~AT_Character();


#define FID_The230Class_Source_The230Class_T_Character_h_7_PROLOG
#define FID_The230Class_Source_The230Class_T_Character_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The230Class_Source_The230Class_T_Character_h_10_INCLASS_NO_PURE_DECLS \
	FID_The230Class_Source_The230Class_T_Character_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE230CLASS_API UClass* StaticClass<class AT_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The230Class_Source_The230Class_T_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
