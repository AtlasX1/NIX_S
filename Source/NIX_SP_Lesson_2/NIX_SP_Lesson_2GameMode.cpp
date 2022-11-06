// Copyright Epic Games, Inc. All Rights Reserved.

#include "NIX_SP_Lesson_2GameMode.h"
#include "NIX_SP_Lesson_2Character.h"
#include "UObject/ConstructorHelpers.h"

ANIX_SP_Lesson_2GameMode::ANIX_SP_Lesson_2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
