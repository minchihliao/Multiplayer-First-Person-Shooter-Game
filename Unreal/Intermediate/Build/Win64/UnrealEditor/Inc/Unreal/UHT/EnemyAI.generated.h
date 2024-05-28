// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyAI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREAL_EnemyAI_generated_h
#error "EnemyAI.generated.h already included, missing '#pragma once' in EnemyAI.h"
#endif
#define UNREAL_EnemyAI_generated_h

#define FID_Unreal_Source_Unreal_Public_EnemyAI_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAI(); \
	friend struct Z_Construct_UClass_AEnemyAI_Statics; \
public: \
	DECLARE_CLASS(AEnemyAI, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAI)


#define FID_Unreal_Source_Unreal_Public_EnemyAI_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyAI(AEnemyAI&&); \
	AEnemyAI(const AEnemyAI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAI) \
	NO_API virtual ~AEnemyAI();


#define FID_Unreal_Source_Unreal_Public_EnemyAI_h_9_PROLOG
#define FID_Unreal_Source_Unreal_Public_EnemyAI_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Source_Unreal_Public_EnemyAI_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Source_Unreal_Public_EnemyAI_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREAL_API UClass* StaticClass<class AEnemyAI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Source_Unreal_Public_EnemyAI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
