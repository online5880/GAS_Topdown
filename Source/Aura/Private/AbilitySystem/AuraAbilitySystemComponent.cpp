// Copyright mane

#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(AuraAbilitySystemComponent)

void UAuraAbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &ThisClass::EffectApplied);
}

void UAuraAbilitySystemComponent::EffectApplied(UAuraAbilitySystemComponent* AbilitySystemComponent,
                                                const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
{
	
}
