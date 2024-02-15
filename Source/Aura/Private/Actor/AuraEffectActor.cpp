// Copyright mane

#include "Actor/AuraEffectActor.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Components/SphereComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AuraEffectActor)


AAuraEffectActor::AAuraEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;

	SetRootComponent(CreateDefaultSubobject<USceneComponent>("SceneRoot")); 
}

void AAuraEffectActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAuraEffectActor::ApplyEffectToTarget(AActor* Target, TSubclassOf<UGameplayEffect> GameplayEffectClass)
{
	UAbilitySystemComponent* TargetASC =  UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Target);
	if(TargetASC == nullptr) return;

	check(GameplayEffectClass);
	
	// 이펙트 컨텍스트 핸들을 만든다. (Wrapper)
	FGameplayEffectContextHandle EffectContextHandle = TargetASC->MakeEffectContext();
		
	// 소스 오브젝트를 추가한다.
	EffectContextHandle.AddSourceObject(this);

	// 이펙트 스펙 핸들을 만든다. (Wrapper)
	const FGameplayEffectSpecHandle EffectSpecHandle = TargetASC->MakeOutgoingSpec(GameplayEffectClass, 1.f,EffectContextHandle);

	// 타겟에게 이펙트를 적용한다.
	TargetASC->ApplyGameplayEffectSpecToSelf(*EffectSpecHandle.Data.Get());
}

