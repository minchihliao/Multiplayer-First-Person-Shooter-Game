// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREAL_UnrealGameMode_generated_h
#error "UnrealGameMode.generated.h already included, missing '#pragma once' in UnrealGameMode.h"
#endif
#define UNREAL_UnrealGameMode_generated_h

#define FID_Unreal_Source_Unreal_UnrealGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealGameMode(); \
	friend struct Z_Construct_UClass_AUnrealGameMode_Statics; \
public: \
	DECLARE_CLASS(AUnrealGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal"), UNREAL_API) \
	DECLARE_SERIALIZER(AUnrealGameMode)


#define FID_Unreal_Source_Unreal_UnrealGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUnrealGameMode(AUnrealGameMode&&); \
	AUnrealGameMode(const AUnrealGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREAL_API, AUnrealGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealGameMode) \
	UNREAL_API virtual ~AUnrealGameMode();


#define FID_Unreal_Source_Unreal_UnrealGameMode_h_9_PROLOG
#define FID_Unreal_Source_Unreal_UnrealGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Source_Unreal_UnrealGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Source_Unreal_UnrealGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREAL_API UClass* StaticClass<class AUnrealGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Source_Unreal_UnrealGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
