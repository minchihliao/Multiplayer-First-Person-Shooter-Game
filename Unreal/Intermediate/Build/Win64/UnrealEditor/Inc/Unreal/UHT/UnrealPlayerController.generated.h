// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREAL_UnrealPlayerController_generated_h
#error "UnrealPlayerController.generated.h already included, missing '#pragma once' in UnrealPlayerController.h"
#endif
#define UNREAL_UnrealPlayerController_generated_h

#define FID_Unreal_Source_Unreal_UnrealPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealPlayerController(); \
	friend struct Z_Construct_UClass_AUnrealPlayerController_Statics; \
public: \
	DECLARE_CLASS(AUnrealPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal"), NO_API) \
	DECLARE_SERIALIZER(AUnrealPlayerController)


#define FID_Unreal_Source_Unreal_UnrealPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnrealPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUnrealPlayerController(AUnrealPlayerController&&); \
	AUnrealPlayerController(const AUnrealPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnrealPlayerController) \
	NO_API virtual ~AUnrealPlayerController();


#define FID_Unreal_Source_Unreal_UnrealPlayerController_h_14_PROLOG
#define FID_Unreal_Source_Unreal_UnrealPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Source_Unreal_UnrealPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Source_Unreal_UnrealPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREAL_API UClass* StaticClass<class AUnrealPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Source_Unreal_UnrealPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
