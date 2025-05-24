// Copyright Epic Games, Inc. All Rights Reserved.

#include "TaskAssignmentGameMode.h"
#include "TaskAssignmentCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATaskAssignmentGameMode::ATaskAssignmentGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
