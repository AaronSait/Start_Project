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

/////MELEE ATTACK METHODS & BASE ATTACK INCLUDES
#include "Survival_Game/Survival_Game.h"
#include "Kismet/GameplayStatics.h"
#include "Survival_Game/Weapons/MeleeDamageType.h"

////WEAPON INCLUDES
#include "Survival_Game/Items/WeaponItem.h"
#include "Survival_Game/Weapons/weapon.h"


#define LOCTEXT_NAMESPACE "SurvivalGameCharacter"
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

	maxHealth = 100.0f;
	health = maxHealth;

	lootPlayerInteraction = CreateDefaultSubobject<UInteractionComponent>("Loot Player Interaction");
	lootPlayerInteraction->interactionActionText = LOCTEXT("LootPlayerText", "Loot");
	lootPlayerInteraction->interactionNameText = LOCTEXT("LootPlayerName","Player");
	lootPlayerInteraction->SetupAttachment(GetRootComponent());
	lootPlayerInteraction->SetActive(false, true);
	lootPlayerInteraction->bAutoActivate = false;

	meleeAttackDistance = 150.0f;
	meleeAttackDamage = 5.0f;

}

// Called when the game starts or when spawned
void ASurvivalGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	for (auto& playerBodyMeshes : playerMeshes)
	{
		nakedMeshes.Add(playerBodyMeshes.Key, playerBodyMeshes.Value->SkeletalMesh);
	}

	lootPlayerInteraction->OnInteract.AddDynamic(this, &ASurvivalGameCharacter::BeginLootingPlayer);


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
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ASurvivalGameCharacter::StartSprinting);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ASurvivalGameCharacter::StopSprinting);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ASurvivalGameCharacter::StartCrouching);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ASurvivalGameCharacter::StopCrouching);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ASurvivalGameCharacter::BeginInteract);
	PlayerInputComponent->BindAction("Interact", IE_Released, this, &ASurvivalGameCharacter::EndInteract);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ASurvivalGameCharacter::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &ASurvivalGameCharacter::StopFire);

	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ASurvivalGameCharacter::StartReload);

	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &ASurvivalGameCharacter::StatAiming);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &ASurvivalGameCharacter::StopAiming);



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

/////LOOT SYSTEM METHODS

void ASurvivalGameCharacter::SetLootSource(UInventoryComponent * newLootSource)
{
	if (newLootSource && newLootSource->GetOwner())
	{
		newLootSource->GetOwner()->OnDestroyed.AddUniqueDynamic(this, &ASurvivalGameCharacter::OnLootSourceOwnerDestryed);
		if(ASurvivalGameCharacter* character = Cast<ASurvivalGameCharacter>(newLootSource->GetOwner()))
		{
			character->SetLifeSpan(120.0f);
		}
	}
	lootSource = newLootSource;
	LootSource();
}

bool ASurvivalGameCharacter::IsLooting() const
{
	return lootSource != nullptr;
}

void ASurvivalGameCharacter::LootItem(UItem * itemToLoot)
{
	if (playerInventory && lootSource && itemToLoot && lootSource->HasItem(itemToLoot->GetClass(), itemToLoot->GetQuantity()))
	{
		const FItemAddResult addResult = playerInventory->TryAddItem(itemToLoot);
		if (addResult.actualAmountGiven > 0)
		{
			lootSource->ConsumeItem(itemToLoot, addResult.actualAmountGiven);
		}
		else
		{
			if (ASurvivalPlayerController* PC = Cast<ASurvivalPlayerController>(GetController()))
			{
				PC->ShowNotification(addResult.errorText);
			}
		}
		lootSource->OnInventoryUpdated.Broadcast();
		playerInventory->OnInventoryUpdated.Broadcast();
	}
}

void ASurvivalGameCharacter::BeginLootingPlayer(ASurvivalGameCharacter * character)
{
	if (character)
	{
		character->SetLootSource(playerInventory);
	}
}

void ASurvivalGameCharacter::OnLootSourceOwnerDestryed(AActor * destryedActor)
{
	if (lootSource && destryedActor == lootSource->GetOwner())
	{
		SetLootSource(nullptr);
	}
}

void ASurvivalGameCharacter::LootSource()
{
	if (ASurvivalPlayerController* PC = Cast<ASurvivalPlayerController>(GetController()))
	{
		if (lootSource)
		{
			PC->ShowLootMenu(lootSource);
		}
		else
		{
			PC->HideLootMenu();
		}

	}
}

/////HEALTH METHODS

float ASurvivalGameCharacter::ModifyHealth(const float delta)
{
	const float oldHealth = health;
	health = FMath::Clamp<float>(health + delta, 0.0f, maxHealth);
	return health - oldHealth;
}

void ASurvivalGameCharacter::Health(float oldHealth)
{
	OnHealthModified(health - oldHealth);
}

/////DEATH METHODS

void ASurvivalGameCharacter::killedByActor(FDamageEvent const & damageEvent, const AActor * damageCouser)
{
	killer = this;
	Killed();
}

void ASurvivalGameCharacter::killedByPlayer(FDamageEvent const & damageEvent, const AActor * damageCouser, ASurvivalGameCharacter * character)
{
	killer = character;
	Killed();
}

void ASurvivalGameCharacter::Killed()
{
	SetLifeSpan(10.0f);

	GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetMesh()->SetSimulatePhysics(true);
	GetMesh()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
	GetMesh()->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Ignore);
	GetMesh()->SetOwnerNoSee(false);

	springArm->TargetArmLength = 500.0f;
	springArm->AttachToComponent(GetCapsuleComponent(),FAttachmentTransformRules::SnapToTargetIncludingScale);
	bUseControllerRotationPitch = true;

	lootPlayerInteraction->Activate();
	TArray<UEquippableItems*>  equippables;
	equippedItems.GenerateValueArray(equippables);

	for (auto& equippedItem : equippables)
	{
		equippedItem->SetEquipped(false);
	}

	if (ASurvivalPlayerController* PC = Cast<ASurvivalPlayerController>(GetController()))
	{
		PC->ShowDeathMenu();
	}

}

/////MELEE ATTACK METHODS & BASE ATTACK METHODS

void ASurvivalGameCharacter::StartFire()
{
	if (equippedWeapon)
	{
		//equippedWeapon->StartFire();
	}
	else
	{
		BeginMeleeAtack();
	}
}

void ASurvivalGameCharacter::StopFire()
{
	if (equippedWeapon)
	{
		//equippedWeapon->StopFire();
	}
}

void ASurvivalGameCharacter::BeginMeleeAtack()
{
	if (GetWorld()->TimeSince(lastMeleeAttckTime) > meleeAttackMontage->GetPlayLength())
	{
		FHitResult hit;
		FCollisionShape shape = FCollisionShape::MakeSphere(15.0f);

		FVector startTrace = camera->GetComponentLocation();
		FVector endTrace = (camera->GetComponentRotation().Vector() * meleeAttackDistance) + startTrace;

		FCollisionQueryParams qureyParams = FCollisionQueryParams("MelleSweep", false, this);

		if (GetWorld()->SweepSingleByChannel(hit, startTrace, endTrace, FQuat(), COLISION_WEAPON, shape, qureyParams))
		{
			if (ASurvivalGameCharacter* hitPlayer = Cast<ASurvivalGameCharacter>(hit.GetActor()))
			{
				if (ASurvivalPlayerController* PC = Cast<ASurvivalPlayerController>(GetController()))
				{
					PC->OnHitPlayer();
				}
			}
		}
		PlayMeleeFX();
		ProcessMeleeHit(hit);
		lastMeleeAttckTime = GetWorld()->GetTimeSeconds();
	}
}

float ASurvivalGameCharacter::TakeDamage(float damage, FDamageEvent const & damageEvent, AController * eventInstegator, AActor * damageCauser)
{
	Super::TakeDamage(damage, damageEvent, eventInstegator, damageCauser);
	const float damagedDelt = ModifyHealth(-damage);
	if (health <= 0.0f)
	{
		if (ASurvivalGameCharacter* killerCharacter = Cast<ASurvivalGameCharacter>(damageCauser->GetOwner()))
		{
			killedByPlayer(damageEvent, damageCauser, killerCharacter);
		}
		else
		{
			killedByActor(damageEvent, damageCauser);
		}
	}
	return damagedDelt;
}

void ASurvivalGameCharacter::ProcessMeleeHit(const FHitResult & meleeHit)
{
	if (GetWorld()->TimeSince(lastMeleeAttckTime) > meleeAttackMontage->GetPlayLength() && (GetActorLocation() - meleeHit.ImpactPoint).Size() <= meleeAttackDistance)
	{
		PlayMeleeFX();
		UGameplayStatics::ApplyPointDamage(meleeHit.GetActor(), meleeAttackDamage, (meleeHit.TraceStart - meleeHit.TraceEnd).GetSafeNormal(), meleeHit, GetController(), this, UMeleeDamageType::StaticClass());
	}
	lastMeleeAttckTime = GetWorld()->GetTimeSeconds();
}

void ASurvivalGameCharacter::PlayMeleeFX()
{
	PlayAnimMontage(meleeAttackMontage);
}

//////WEAPON ATTACK METHODS

void ASurvivalGameCharacter::StatAiming()
{
	if (CanAim())
	{
		SetAiming(true);
	}
}

void ASurvivalGameCharacter::StopAiming()
{
	SetAiming(false);
}

void ASurvivalGameCharacter::SetAiming(const bool bNewAiming)
{
	if (bIsAiming == bNewAiming)
	{
		return;
	}
	bIsAiming = bNewAiming;
}

bool ASurvivalGameCharacter::CanAim() const
{
	return equippedWeapon != NULL;
}

void ASurvivalGameCharacter::EquippedWeapon()
{
	if (equippedWeapon)
	{
		//equippedWeapon->OnEquip();
	}
}

void ASurvivalGameCharacter::EquipWeapon(UWeaponItem * weaponItem)
{
	if (weaponItem && weaponItem->weaponClass)
	{
		if (equippedWeapon)
		{
			UnEquipWeapon();
		}
		FActorSpawnParameters spawnParams;
		spawnParams.bNoFail = true;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		spawnParams.Owner = spawnParams.Instigator = this;
		if (Aweapon* weapon = GetWorld()->SpawnActor<Aweapon>(weaponItem->weaponClass, spawnParams))
		{
			//weapon->item = weaponItem;
			equippedWeapon = weapon;
			EquippedWeapon();
			//weapon->OnEquip();
		}
	}
}

void ASurvivalGameCharacter::UnEquipWeapon()
{
	if (equippedWeapon)
	{
		//equippedWeapon->OnUnEquip();
		equippedWeapon->Destroy();
		equippedWeapon = nullptr;
		EquippedWeapon();
	}
}

void ASurvivalGameCharacter::StartReload()
{
	if (equippedWeapon)
	{
		//equippedWeapon->StartReload();
	}
}

#undef LOCTEXT_NAMESPACE

