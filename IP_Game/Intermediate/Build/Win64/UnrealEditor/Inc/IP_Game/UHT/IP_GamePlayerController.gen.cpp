// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IP_Game/IP_GamePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIP_GamePlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
IP_GAME_API UClass* Z_Construct_UClass_AIP_GamePlayerController();
IP_GAME_API UClass* Z_Construct_UClass_AIP_GamePlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_IP_Game();
// End Cross Module References

// Begin Class AIP_GamePlayerController
void AIP_GamePlayerController::StaticRegisterNativesAIP_GamePlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIP_GamePlayerController);
UClass* Z_Construct_UClass_AIP_GamePlayerController_NoRegister()
{
	return AIP_GamePlayerController::StaticClass();
}
struct Z_Construct_UClass_AIP_GamePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "IP_GamePlayerController.h" },
		{ "ModuleRelativePath", "IP_GamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "IP_GamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIP_GamePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIP_GamePlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIP_GamePlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIP_GamePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIP_GamePlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GamePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIP_GamePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_IP_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GamePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIP_GamePlayerController_Statics::ClassParams = {
	&AIP_GamePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIP_GamePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GamePlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GamePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AIP_GamePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIP_GamePlayerController()
{
	if (!Z_Registration_Info_UClass_AIP_GamePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIP_GamePlayerController.OuterSingleton, Z_Construct_UClass_AIP_GamePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIP_GamePlayerController.OuterSingleton;
}
template<> IP_GAME_API UClass* StaticClass<AIP_GamePlayerController>()
{
	return AIP_GamePlayerController::StaticClass();
}
AIP_GamePlayerController::AIP_GamePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIP_GamePlayerController);
AIP_GamePlayerController::~AIP_GamePlayerController() {}
// End Class AIP_GamePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_IP_Game_Source_IP_Game_IP_GamePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIP_GamePlayerController, AIP_GamePlayerController::StaticClass, TEXT("AIP_GamePlayerController"), &Z_Registration_Info_UClass_AIP_GamePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIP_GamePlayerController), 3655907763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IP_Game_Source_IP_Game_IP_GamePlayerController_h_62745912(TEXT("/Script/IP_Game"),
	Z_CompiledInDeferFile_FID_IP_Game_Source_IP_Game_IP_GamePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IP_Game_Source_IP_Game_IP_GamePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
