// Copyright mane

#pragma once

#include "GameFramework/HUD.h"
#include "AuraHUD.generated.h"

class UAuraUserWidget;
/**
 * 
 */
UCLASS()
class AURA_API AAuraHUD : public AHUD
{
	GENERATED_BODY()

public:

	UPROPERTY()
	TObjectPtr<UAuraUserWidget> OverlayWidget;

protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere, Category = "Widgets", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UAuraUserWidget> OverlayWidgetClass;
};
