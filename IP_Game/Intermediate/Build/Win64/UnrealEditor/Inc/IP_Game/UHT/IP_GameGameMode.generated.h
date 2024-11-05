// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IP_GameGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IP_GAME_IP_GameGameMode_generated_h
#error "IP_GameGameMode.generated.h already included, missing '#pragma once' in IP_GameGameMode.h"
#endif
#define IP_GAME_IP_GameGameMode_generated_h

#define FID_IP_Game_Source_IP_Game_IP_GameGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIP_GameGameMode(); \
	friend struct Z_Construct_UClass_AIP_GameGameMode_Statics; \
public: \
	DECLARE_CLASS(AIP_GameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IP_Game"), IP_GAME_API) \
	DECLARE_SERIALIZER(AIP_GameGameMode)


#define FID_IP_Game_Source_IP_Game_IP_GameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIP_GameGameMode(AIP_GameGameMode&&); \
	AIP_GameGameMode(const AIP_GameGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IP_GAME_API, AIP_GameGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIP_GameGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIP_GameGameMode) \
	IP_GAME_API virtual ~AIP_GameGameMode();


#define FID_IP_Game_Source_IP_Game_IP_GameGameMode_h_9_PROLOG
#define FID_IP_Game_Source_IP_Game_IP_GameGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IP_Game_Source_IP_Game_IP_GameGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_IP_Game_Source_IP_Game_IP_GameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IP_GAME_API UClass* StaticClass<class AIP_GameGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IP_Game_Source_IP_Game_IP_GameGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
