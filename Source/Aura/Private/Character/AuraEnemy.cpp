// Copyright mane
#include "Character/AuraEnemy.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(AuraEnemy)

void AAuraEnemy::HighlightActor()
{
	bHighlighted = true;
}

void AAuraEnemy::UnHighlightActor()
{
	bHighlighted = false;
}
