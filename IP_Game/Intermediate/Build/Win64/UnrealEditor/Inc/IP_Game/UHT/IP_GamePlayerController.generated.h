// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IP_GamePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IP_GAME_IP_GamePlayerController_generated_h
#error "IP_GamePlayerController.generated.h already included, missing '#pragma once' in IP_GamePlayerController.h"
#endif
#define IP_GAME_IP_GamePlayerController_generated_h

#define FID_IP_Game_Source_IP_Game_IP_GamePlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIP_GamePlayerController(); \
	friend struct Z_Construct_UClass_AIP_GamePlayerController_Statics; \
public: \
	DECLARE_CLASS(AIP_GamePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IP_Game"), NO_API) \
	DECLARE_SERIALIZER(AIP_GamePlayerController)


#define FID_IP_Game_Source_IP_Game_IP_GamePlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIP_GamePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIP_GamePlayerController(AIP_GamePlayerController&&); \
	AIP_GamePlayerController(const AIP_GamePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIP_GamePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIP_GamePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIP_GamePlayerController) \
	NO_API virtual ~AIP_GamePlayerController();


#define FID_IP_Game_Source_IP_Game_IP_GamePlayerController_h_14_PROLOG
#define FID_IP_Game_Source_IP_Game_IP_GamePlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IP_Game_Source_IP_Game_IP_GamePlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_IP_Game_Source_IP_Game_IP_GamePlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IP_GAME_API UClass* StaticClass<class AIP_GamePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IP_Game_Source_IP_Game_IP_GamePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
