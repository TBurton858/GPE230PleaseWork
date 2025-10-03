// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "T_GameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THE230CLASS_T_GameMode_generated_h
#error "T_GameMode.generated.h already included, missing '#pragma once' in T_GameMode.h"
#endif
#define THE230CLASS_T_GameMode_generated_h

#define FID_The230Class_Source_The230Class_T_GameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT_GameMode(); \
	friend struct Z_Construct_UClass_AT_GameMode_Statics; \
public: \
	DECLARE_CLASS(AT_GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/The230Class"), NO_API) \
	DECLARE_SERIALIZER(AT_GameMode)


#define FID_The230Class_Source_The230Class_T_GameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT_GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AT_GameMode(AT_GameMode&&); \
	AT_GameMode(const AT_GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT_GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT_GameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT_GameMode) \
	NO_API virtual ~AT_GameMode();


#define FID_The230Class_Source_The230Class_T_GameMode_h_12_PROLOG
#define FID_The230Class_Source_The230Class_T_GameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The230Class_Source_The230Class_T_GameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_The230Class_Source_The230Class_T_GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE230CLASS_API UClass* StaticClass<class AT_GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The230Class_Source_The230Class_T_GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
