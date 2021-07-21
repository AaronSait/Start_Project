// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/Player/SurvivalGameCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Survival_Game/Components/InteractionComponent.h"
#include "Survival_Game/Components/InventoryComponent.h"
#include "Camera/CameraComponent.h"

/////PICKUP INCLUDES
#include "Survival_Game/World/Pickup.h"
#include "Survival_Game/Items/Item.h"
#include "Components/CapsuleComponent.h"

/////EQUIPPIBLE ITEMS INCLUDES
#include "Survival_Game/Items/GearItem.h"
#include "Survival_Game/Items/EquippableItems.h"
#include "Materials/MaterialInstance.h"

/////INGAME UI INCLUDES
#include "Survival_Game/Player/SurvivalPlayerController.h"

// Sets default values
ASurvivalGameCharacter::ASurvivalGameCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	springArm = CreateDefaultSubobject< USpringArmComponent>("SpringArmComponent");
	springArm->SetupAttachment(GetMesh(), FName("CameraSocket"));
	springArm->TargetArmLength = 0.0f;

	camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	camera->SetupAttachment(springArm);
	camera->bUsePawnControlRotation = true;

	helmetMesh = playerMeshes.Add(EEquippableSlot::EIS_Helmet, CreateDefaultSubobject<USkeletalMeshComponent>("HelmentMesh"));
	chestMesh = playerMeshes.Add(EEquippableSlot::EIS_Chest, CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ChestMesh")));
	legsMesh = playerMeshes.Add(EEquippableSlot::EIS_Legs, CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LegsMesh")));
	vestMesh = playerMeshes.Add(EEquippableSlot::EIS_Vest, CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VestMesh")));
	feetMesh = playerMeshes.Add(EEquippableSlot::EIS_Feet, CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FeetMesh")));
	handsMesh = playerMeshes.Add(EEquippableSlot::EIS_Hands, CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandsMesh")));
	backpackMesh = playerMeshes.Add(EEquippableSlot::EIS_Backpack, CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BackpackMesh")));

	for (auto& playerBodyMeshes : playerMeshes)
	{
		USkeletalMeshComponent* meshComponent = playerBodyMeshes.Value;
		meshComponent->SetupAttachment(GetMesh());
		meshComponent->SetMasterPoseComponent(GetMesh());
	}
	playerMeshes.Add(EEquippableSlot::EIS_Head, GetMesh());


	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;
	GetMesh()->SetOwnerNoSee(true);

	if (USkeletalMeshComponent* helmet = *playerMeshes.Find(EEquippableSlot::EIS_Helmet))
	{
		helmet->SetOwnerNoSee(true);
	}

	sprintSpeed = GetCharacterMovement()->MaxWalkSpeed * 1.5f;
	walkSpeed = GetCharacterMovement()->MaxWalkSpeed;

	interactionCheckFrequence = 0.0f;
	interactionCheckDistance = 1000.0f;

	playerInventory = CreateDefaultSubobject<UInventoryComponent>("PlayerInventoy");
	playerInventory->SetCapacity(200);
	playerInventory->SetWeightCapacity(600);
}

// Called when the game starts or when spawned
void ASurvivalGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	for (auto& playerBodyMeshes : playerMeshes)
	{
		nakedMeshes.Add(playerBodyMeshes.Key, playerBodyMeshes.Value->SkeletalMesh);
	}

}

// Called every frame
void ASurvivalGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetWorld()->TimeSince(interactionData.lastInteractionCheckTime) > interactionCheckFrequence)
	{
		PerformInteractionCheck();
	}
}

// Called to bind functionality to input
void ASurvivalGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASurvivalGameCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASurvivalGameCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ASurvivalGameCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ASurvivalGameCharacter::LookUp);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ASurvivalGameCharacter::StartSprinting);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ASurvivalGameCharacter::StopSprinting);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ASurvivalGameCharacter::StartCrouching);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ASurvivalGameCharacter::StopCrouching);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ASurvivalGameCharacter::BeginInteract);
	PlayerInputComponent->BindAction("Interact", IE_Released, this, &ASurvivalGameCharacter::EndInteract);

}

bool ASurvivalGameCharacter::CanSprint() const
{
	return true;
}

void ASurvivalGameCharacter::StartSprinting()
{
	SetSprinting(true);
}

void ASurvivalGameCharacter::StopSprinting()
{
	SetSprinting(false);
}

void ASurvivalGameCharacter::SetSprinting(const bool bNewSprinting)
{
	if (bNewSprinting == bSprinting)
	{
		return;
	}
	bSprinting = bNewSprinting;
	GetCharacterMovement()->MaxWalkSpeed = bSprinting ? sprintSpeed : walkSpeed;

}

void ASurvivalGameCharacter::MoveForward(float val)
{
	if (val != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), val);
	}
}

void ASurvivalGameCharacter::MoveRight(float val)
{
	if (val != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), val);
	}
}

void ASurvivalGameCharacter::LookUp(float val)
{
	if (val != 0.0f)
	{
		AddControllerPitchInput(val);
	}
}

void ASurvivalGameCharacter::Turn(float val)
{
	if (val != 0.0f)
	{
		AddControllerYawInput(val);
	}
}

void ASurvivalGameCharacter::StartCrouching()
{
	Crouch();
}

void ASurvivalGameCharacter::StopCrouching()
{
	UnCrouch();
}

void ASurvivalGameCharacter::PerformInteractionCheck()
{
	if (GetController() == nullptr)
	{
		return;
	}

	interactionData.lastInteractionCheckTime = GetWorld()->GetTimeSeconds();

	FVector eyeLoc;
	FRotator eyeRot;
	GetController()->GetPlayerViewPoint(eyeLoc, eyeRot);

	FVector rayStart = eyeLoc;
	FVector rayEnd = (eyeRot.Vector() * interactionCheckDistance) + rayStart;

	FHitResult  rayHit;

	FCollisionQueryParams quryParams;
	quryParams.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(rayHit, rayStart, rayEnd, ECC_Visibility, quryParams))
	{
		if (rayHit.GetActor())
		{
			if (UInteractionComponent* interactionComponent = Cast< UInteractionComponent>(rayHit.GetActor()->GetComponentByClass(UInteractionComponent::StaticClass())))
			{
				float distance = (rayStart - rayHit.ImpactPoint).Size();
				if (interactionComponent != GetInteractable() && distance <= interactionComponent->interactionDistance)
				{
					FoundNewInteraction(interactionComponent);
				}
				else if (GetInteractable() && distance > interactionComponent->interactionDistance)
				{
					CouldNotFindInteraction();
				}
				return;
			}
		}
	}
	CouldNotFindInteraction();
}

void ASurvivalGameCharacter::CouldNotFindInteraction()
{
	if (GetWorldTimerManager().IsTimerActive(timerHandle_Interact))
	{
		GetWorldTimerManager().ClearTimer(timerHandle_Interact);
	}
	if (UInteractionComponent* interact = GetInteractable())
	{
		interact->EndFocus(this);
		if (interactionData.bInteractHeld)
		{
			EndInteract();
		}
	}
	interactionData.viewedInteractionComponent = nullptr;
}

void ASurvivalGameCharacter::FoundNewInteraction(UInteractionComponent * interactable)
{
	EndInteract();
	if (UInteractionComponent* oldInteractable = GetInteractable())
	{
		oldInteractable->EndFocus(this);
	}
	interactionData.viewedInteractionComponent = interactable;
	interactable->BeginFocus(this);
}

void ASurvivalGameCharacter::BeginInteract()
{
	interactionData.bInteractHeld = true;
	if (UInteractionComponent* interactable = GetInteractable())
	{
		interactable->BeginInteract(this);
		if (FMath::IsNearlyZero(interactable->interactionTime))
		{
			Interact();
		}
		else
		{
			GetWorldTimerManager().SetTimer(timerHandle_Interact, this, &ASurvivalGameCharacter::Interact, interactable->interactionTime, false);
		}
	}
}

void ASurvivalGameCharacter::EndInteract()
{
	interactionData.bInteractHeld = false;
	GetWorldTimerManager().ClearTimer(timerHandle_Interact);
	if (UInteractionComponent* interactable = GetInteractable())
	{
		interactable->EndInteract(this);
	}
}

void ASurvivalGameCharacter::Interact()
{

	GetWorldTimerManager().ClearTimer(timerHandle_Interact);
	if (UInteractionComponent* interactable = GetInteractable())
	{
		interactable->Interact(this);
	}
}

bool ASurvivalGameCharacter::IsInteracting() const
{
	return GetWorldTimerManager().IsTimerActive(timerHandle_Interact);
}

float ASurvivalGameCharacter::GetRemainingInteractionTime() const
{
	return GetWorldTimerManager().GetTimerRemaining(timerHandle_Interact);
}
///////////////	INVENTORY METHDOS////////////////////////
void ASurvivalGameCharacter::UseItem(UItem * item)
{
	if (item)
	{
		if (playerInventory && !playerInventory->FindItem(item))
		{
			return;
		}
		item->OnUse(this);
		item->Use(this);

	}
}

void ASurvivalGameCharacter::DropItem(UItem * item, const int32 quantity)
{

	if (playerInventory && item && playerInventory->FindItem(item))
	{
		const int32 itemQuantity = item->GetQuantity();
		const int32 dropedQuantity = playerInventory->ConsumeItem(item, quantity);

		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;
		spawnParams.bNoFail = true;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		
		FVector spawnLocation = GetActorLocation();
		spawnLocation.Z -= GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
		
		FTransform spawnTransform(GetActorRotation(), spawnLocation);
		
		ensure(pickupClass);

		APickup* pickup = GetWorld()->SpawnActor<APickup>(pickupClass, spawnTransform, spawnParams);
		pickup->InitializePickup(item->GetClass(), dropedQuantity);
		playerInventory->OnInventoryUpdated.Broadcast();
	}
}

//Equippable Methods

bool ASurvivalGameCharacter::EquipItem(UEquippableItems * item)
{
//	if (item)
//	{
		equippedItems.Add(item->slot, item);
		OnEquippedItemChanged.Broadcast(item->slot, item);
		return true;
//	}
//	return false;
}

bool ASurvivalGameCharacter::UnEquipItem(UEquippableItems * item)
{

	if (item)
	{
		if (equippedItems.Contains(item->slot))
		{
			if (item == *equippedItems.Find(item->slot))
			{
				equippedItems.Remove(item->slot);
				OnEquippedItemChanged.Broadcast(item->slot, item);
				return true;
			}
		}
	}
	return false;
}

void ASurvivalGameCharacter::EquipGear(UGearItem * gear)
{
	if (USkeletalMeshComponent* gearMesh = *playerMeshes.Find(gear->slot))
	{
		gearMesh->SetSkeletalMesh(gear->mesh);
		gearMesh->SetMaterial(gearMesh->GetMaterials().Num() - 1, gear->materialInstance);
	}
}

void ASurvivalGameCharacter::UnEquipGear(const EEquippableSlot slot)
{

	if (USkeletalMeshComponent* equippableMesh = *playerMeshes.Find(slot))
	{
		if (USkeletalMesh* bodyMesh = *nakedMeshes.Find(slot))
		{
			equippableMesh->SetSkeletalMesh(bodyMesh);

			for (int32 i = 0; i < bodyMesh->Materials.Num(); ++i)
			{
				if (bodyMesh->Materials.IsValidIndex(i))
				{
					equippableMesh->SetMaterial(i, bodyMesh->Materials[i].MaterialInterface);
				}
			}

		}
		else
		{
			equippableMesh->SetSkeletalMesh(nullptr);
		}

	}
}

USkeletalMeshComponent * ASurvivalGameCharacter::GetSlotSkeletalMeshComponent(const EEquippableSlot slot)
{
	if (playerMeshes.Contains(slot))
	{
		return *playerMeshes.Find(slot);
	}
	return nullptr;
}

void ASurvivalGameCharacter::Restart()
{
	Super::Restart();
	if (ASurvivalPlayerController* PC = Cast<ASurvivalPlayerController>(GetController()))
	{
		PC->ShowIngameUI();
	}
}

