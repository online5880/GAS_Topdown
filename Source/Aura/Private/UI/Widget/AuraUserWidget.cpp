// Copyright mane

#include "UI/Widget/AuraUserWidget.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(AuraUserWidget)

void UAuraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
