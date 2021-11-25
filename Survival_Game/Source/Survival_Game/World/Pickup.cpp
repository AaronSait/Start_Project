// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/World/Pickup.h"
#include "Survival_Game/Player/SurvivalPlayerController.h"
#include "Survival_Game/Player/SurvivalGameCharacter.h"
#include "Survival_Game/Components/InventoryComponent.h"
#include "Survival_Game/Components/InteractionComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Survival_Game/Items/Item.h"

// Sets default values
APickup::APickup()
{

	pickupMesh = CreateDefaultSubobject<UStaticMeshComponent>("pickupMesh");
	pickupMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);

	SetRootComponent(pickupMesh);

	interactionComponent = CreateDefaultSubobject<UInteractionComponent>("pickupInteractionComponent");
	interactionComponent->interactionTime = 0.5f;
	interactionComponent->interactionDistance = 200.0f;
	interactionComponent->interactionNameText = FText::FromString("Pickup");
	interactionComponent->interactionActionText = FText::FromString("Take");
	interactionComponent->OnInteract.AddDynamic(this, &APickup::OnTakePickup);
	interactionComponent->SetupAttachment(pickupMesh);

}

void APickup::InitializePickup(const TSubclassOf<class UItem> itemClsass, const int32 quantity)
{
	if (itemClsass && quantity > 0)
	{
		item = NewObject<UItem>(this, itemClsass);
		item->SetQuantity(quantity);
		pickupMesh->SetStaticMesh(item->pickupMesh);
		interactionComponent->interactionNameText = item->itemDisplayName;
		item->OnItemModified.AddDynamic(this, &APickup::OnItemModified);
	}
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	if (itemTemplate)
	{
		InitializePickup(itemTemplate->GetClass(), itemTemplate->GetQuantity());
		AlignWithGround();
	}	   
}

void APickup::OnItemModified()
{
	if (interactionComponent)
	{
		interactionComponent->RefreshWidget();
	}
}

#if WITH_EDITOR
void APickup::PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent)
{

	Super::PostEditChangeProperty(PropertyChangedEvent);
	FName propertyName = (PropertyChangedEvent.Property != NULL) ? PropertyChangedEvent.Property->GetFName() : NAME_None;

	if (propertyName == GET_MEMBER_NAME_CHECKED(APickup, itemTemplate) && itemTemplate != nullptr)
	{
		pickupMesh->SetStaticMesh(itemTemplate->pickupMesh);
	}

}
#endif


void APickup::OnTakePickup(ASurvivalGameCharacter * taker)
{
	if (!taker)
	{
		return;
	}

	if (!IsPendingKillPending() && item)
	{
		if (UInventoryComponent* playerInventory = taker->playerInventory)
		{
			const FItemAddResult addResult = playerInventory->TryAddItem(item);
			if (addResult.actualAmountGiven < item->GetQuantity())
			{
				item->SetQuantity(item->GetQuantity() - addResult.actualAmountGiven);
			}
			else if (addResult.actualAmountGiven >= item->GetQuantity())
			{
				Destroy();
			}
		}

	}

}