// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREAL_UnrealCharacter_generated_h
#error "UnrealCharacter.generated.h already included, missing '#pragma once' in UnrealCharacter.h"
#endif
#define UNREAL_UnrealCharacter_generated_h

#define FID_Unreal_Source_Unreal_UnrealCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealCharacter(); \
	friend struct Z_Construct_UClass_AUnrealCharacter_Statics; \
public: \
	DECLARE_CLASS(AUnrealCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal"), NO_API) \
	DECLARE_SERIALIZER(AUnrealCharacter)


#define FID_Unreal_Source_Unreal_UnrealCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUnrealCharacter(AUnrealCharacter&&); \
	AUnrealCharacter(const AUnrealCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealCharacter) \
	NO_API virtual ~AUnrealCharacter();


#define FID_Unreal_Source_Unreal_UnrealCharacter_h_19_PROLOG
#define FID_Unreal_Source_Unreal_UnrealCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Source_Unreal_UnrealCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Source_Unreal_UnrealCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREAL_API UClass* StaticClass<class AUnrealCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Source_Unreal_UnrealCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
