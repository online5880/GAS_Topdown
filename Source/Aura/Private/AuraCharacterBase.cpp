#include "AuraCharacterBase.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(AuraCharacterBase)

AAuraCharacterBase::AAuraCharacterBase()
{
 
	PrimaryActorTick.bCanEverTick = true;

}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAuraCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAuraCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

