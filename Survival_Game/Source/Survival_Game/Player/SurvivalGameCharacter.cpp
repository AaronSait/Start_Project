// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/Player/SurvivalGameCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Survival_Game/Components/InteractionComponent.h"
#include "Survival_Game/Components/InventoryComponent.h"
#include "Camera/CameraComponent.h"
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

	helmetMesh = CreateDefaultSubobject<USkeletalMeshComponent>("HelmentMesh");
	helmetMesh->SetupAttachment(GetMesh());
	helmetMesh->SetMasterPoseComponent(GetMesh());

	chestMesh = CreateDefaultSubobject<USkeletalMeshComponent>("ChestMesh");
	chestMesh->SetupAttachment(GetMesh());
	chestMesh->SetMasterPoseComponent(GetMesh());

	legsMesh = CreateDefaultSubobject<USkeletalMeshComponent>("LegsMesh");
	legsMesh->SetupAttachment(GetMesh());
	legsMesh->SetMasterPoseComponent(GetMesh());

	vestMesh = CreateDefaultSubobject<USkeletalMeshComponent>("VestMesh");
	vestMesh->SetupAttachment(GetMesh());
	vestMesh->SetMasterPoseComponent(GetMesh());

	feetMesh = CreateDefaultSubobject<USkeletalMeshComponent>("FeetMesh");
	feetMesh->SetupAttachment(GetMesh());
	feetMesh->SetMasterPoseComponent(GetMesh());

	handsMesh = CreateDefaultSubobject<USkeletalMeshComponent>("HandsMesh");
	handsMesh->SetupAttachment(GetMesh());
	handsMesh->SetMasterPoseComponent(GetMesh());

	backpackMesh = CreateDefaultSubobject<USkeletalMeshComponent>("BackpackMesh");
	backpackMesh->SetupAttachment(GetMesh());
	backpackMesh->SetMasterPoseComponent(GetMesh());

	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;
	GetMesh()->SetOwnerNoSee(true);
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
	return false;
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
