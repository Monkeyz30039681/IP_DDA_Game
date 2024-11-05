// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IP_GameCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IP_GAME_IP_GameCharacter_generated_h
#error "IP_GameCharacter.generated.h already included, missing '#pragma once' in IP_GameCharacter.h"
#endif
#define IP_GAME_IP_GameCharacter_generated_h

#define FID_IP_Game_Source_IP_Game_IP_GameCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIP_GameCharacter(); \
	friend struct Z_Construct_UClass_AIP_GameCharacter_Statics; \
public: \
	DECLARE_CLASS(AIP_GameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IP_Game"), NO_API) \
	DECLARE_SERIALIZER(AIP_GameCharacter)


#define FID_IP_Game_Source_IP_Game_IP_GameCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIP_GameCharacter(AIP_GameCharacter&&); \
	AIP_GameCharacter(const AIP_GameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIP_GameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIP_GameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIP_GameCharacter) \
	NO_API virtual ~AIP_GameCharacter();


#define FID_IP_Game_Source_IP_Game_IP_GameCharacter_h_19_PROLOG
#define FID_IP_Game_Source_IP_Game_IP_GameCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IP_Game_Source_IP_Game_IP_GameCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_IP_Game_Source_IP_Game_IP_GameCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IP_GAME_API UClass* StaticClass<class AIP_GameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IP_Game_Source_IP_Game_IP_GameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
