// Copyright mane

#include "UI/HUD/AuraHUD.h"
#include "UI/Widget/AuraUserWidget.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AuraHUD)

void AAuraHUD::BeginPlay()
{
	Super::BeginPlay();

	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	Widget->AddToViewport();
}
