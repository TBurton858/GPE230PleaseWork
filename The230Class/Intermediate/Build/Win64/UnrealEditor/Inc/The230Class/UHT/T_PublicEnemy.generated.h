// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "T_PublicEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef THE230CLASS_T_PublicEnemy_generated_h
#error "T_PublicEnemy.generated.h already included, missing '#pragma once' in T_PublicEnemy.h"
#endif
#define THE230CLASS_T_PublicEnemy_generated_h

#define FID_The230Class_Source_The230Class_T_PublicEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAttackPlayer);


#define FID_The230Class_Source_The230Class_T_PublicEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT_PublicEnemy(); \
	friend struct Z_Construct_UClass_AT_PublicEnemy_Statics; \
public: \
	DECLARE_CLASS(AT_PublicEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The230Class"), NO_API) \
	DECLARE_SERIALIZER(AT_PublicEnemy)


#define FID_The230Class_Source_The230Class_T_PublicEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AT_PublicEnemy(AT_PublicEnemy&&); \
	AT_PublicEnemy(const AT_PublicEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT_PublicEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT_PublicEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AT_PublicEnemy) \
	NO_API virtual ~AT_PublicEnemy();


#define FID_The230Class_Source_The230Class_T_PublicEnemy_h_9_PROLOG
#define FID_The230Class_Source_The230Class_T_PublicEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The230Class_Source_The230Class_T_PublicEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The230Class_Source_The230Class_T_PublicEnemy_h_12_INCLASS_NO_PURE_DECLS \
	FID_The230Class_Source_The230Class_T_PublicEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE230CLASS_API UClass* StaticClass<class AT_PublicEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The230Class_Source_The230Class_T_PublicEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
