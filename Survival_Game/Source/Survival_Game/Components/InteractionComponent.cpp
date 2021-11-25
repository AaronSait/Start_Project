// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/Components/InteractionComponent.h"
#include "Survival_Game/Player/SurvivalGameCharacter.h"
#include "Survival_Game/Widgets/InteractionWidget.h"

UInteractionComponent::UInteractionComponent()
{
	SetComponentTickEnabled(false);
	interactionTime = 0.0f;
	interactionDistance = 200.0f;
	interactionNameText = FText::FromString("interactable Object");
	interactionActionText = FText::FromString("Interact");

	Space = EWidgetSpace::Screen;
	DrawSize = FIntPoint(600, 100);
	bDrawAtDesiredSize = true;

	SetActive(true);
	SetHiddenInGame(true);
}

void UInteractionComponent::Deactivate()
{
	Super::Deactivate();
	EndFocus(characterInteracting);
	EndInteract(characterInteracting);
	characterInteracting = nullptr;
}

bool UInteractionComponent::CanInteract(ASurvivalGameCharacter * character) const
{
	return IsActive() && GetOwner() != nullptr && character != nullptr;
}

void UInteractionComponent::SetInteractionNameText(const FText & newNameText)
{
	interactionNameText = newNameText;
	RefreshWidget();
}

void UInteractionComponent::SetInteractionActionText(const FText & newActionText)
{
	interactionActionText = newActionText;
	RefreshWidget();
}

void UInteractionComponent::RefreshWidget()
{
	if (!bHiddenInGame)
	{
		if (UInteractionWidget* interactionWidget = Cast<UInteractionWidget>(GetUserWidgetObject()))
		{
			interactionWidget->UpdateInteractionWidget(this);
		}
	}
}

void UInteractionComponent::BeginFocus(ASurvivalGameCharacter * character)
{
	if (!IsActive() || !GetOwner() || !character)
	{
		return;
	}
	OnBeginFocuse.Broadcast(character);
	SetHiddenInGame(false);
	for (auto& visualComp : GetOwner()->GetComponentsByClass(UPrimitiveComponent::StaticClass()))
	{
		if (UPrimitiveComponent* prim = Cast< UPrimitiveComponent>(visualComp))
		{
			prim->SetRenderCustomDepth(true);
		}
	}
	RefreshWidget();
}

void UInteractionComponent::EndFocus(ASurvivalGameCharacter * character)
{
	OnEndFocuse.Broadcast(character);
	SetHiddenInGame(true);
	for (auto& visualComp : GetOwner()->GetComponentsByClass(UPrimitiveComponent::StaticClass()))
	{
		if (UPrimitiveComponent* prim = Cast< UPrimitiveComponent>(visualComp))
		{
			prim->SetRenderCustomDepth(false);
		}
	}
	RefreshWidget();
}

void UInteractionComponent::BeginInteract(ASurvivalGameCharacter * character)
{
	if (CanInteract(character))
	{
		characterInteracting = character;
		OnBeginInteract.Broadcast(character);
	}
}

void UInteractionComponent::EndInteract(ASurvivalGameCharacter * character)
{
	characterInteracting = nullptr;
	OnEndInteract.Broadcast(character);
}

void UInteractionComponent::Interact(ASurvivalGameCharacter * character)
{
	if (CanInteract(character))
	{
		OnInteract.Broadcast(character);
	}
}

float UInteractionComponent::GetInteractionPercentage()
{
	if (characterInteracting != nullptr)
	{
		if (characterInteracting->IsInteracting())
		{
			return 1.0f - FMath::Abs(characterInteracting->GetRemainingInteractionTime() / interactionTime);
		}
	}
	return 0.0f;
}
