// Copyright mane

#pragma once
#include "Character/AuraCharacter.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacter, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();

protected:
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

private:
	UPROPERTY(BlueprintReadOnly, Category = "Highlight", meta = (AllowPrivateAccess = "true"))
	bool bHighlighted = false;
};
