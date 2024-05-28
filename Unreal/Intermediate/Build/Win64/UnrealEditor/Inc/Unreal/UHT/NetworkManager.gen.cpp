// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal/Public/NetworkManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UNREAL_API UClass* Z_Construct_UClass_ANetworkManager();
UNREAL_API UClass* Z_Construct_UClass_ANetworkManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal();
// End Cross Module References

// Begin Class ANetworkManager
void ANetworkManager::StaticRegisterNativesANetworkManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkManager);
UClass* Z_Construct_UClass_ANetworkManager_NoRegister()
{
	return ANetworkManager::StaticClass();
}
struct Z_Construct_UClass_ANetworkManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NetworkManager.h" },
		{ "ModuleRelativePath", "Public/NetworkManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANetworkManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkManager_Statics::ClassParams = {
	&ANetworkManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetworkManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetworkManager()
{
	if (!Z_Registration_Info_UClass_ANetworkManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkManager.OuterSingleton, Z_Construct_UClass_ANetworkManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetworkManager.OuterSingleton;
}
template<> UNREAL_API UClass* StaticClass<ANetworkManager>()
{
	return ANetworkManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkManager);
ANetworkManager::~ANetworkManager() {}
// End Class ANetworkManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_Public_NetworkManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkManager, ANetworkManager::StaticClass, TEXT("ANetworkManager"), &Z_Registration_Info_UClass_ANetworkManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkManager), 330722460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_Public_NetworkManager_h_2536807855(TEXT("/Script/Unreal"),
	Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_Public_NetworkManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_Public_NetworkManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
