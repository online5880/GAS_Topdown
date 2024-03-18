// Copyright mane

#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(AuraAbilitySystemComponent)

void UAuraAbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &ThisClass::EffectApplied);
}

void UAuraAbilitySystemComponent::EffectApplied(UAbilitySystemComponent* AbilitySystemComponent,
	const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
{
	FGameplayTagContainer TagContainer;
	EffectSpec.GetAllAssetTags(TagContainer);

	for(const FGameplayTag& Tag : TagContainer)
	{
		const FString Msg = FString::Printf(TEXT("Effect Applied: %s"), *Tag.ToString());
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Msg);
	}
}