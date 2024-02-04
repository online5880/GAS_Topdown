// Copyright mane
#include "Character/AuraCharacterBase.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(AuraCharacterBase)

AAuraCharacterBase::AAuraCharacterBase()
{
 
	PrimaryActorTick.bCanEverTick = true;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(),FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}
