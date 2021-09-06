// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/Weapons/weapon.h"
#include "Engine.h"
#include "Survival_Game/Player/SurvivalGameCharacter.h"
#include "Survival_Game/Player/SurvivalPlayerController.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/AudioComponent.h"
#include "Survival_Game/Components/InventoryComponent.h"
#include "Curves/CurveVector.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"
#include "Survival_Game/Items/EquippableItems.h"
#include "Survival_Game/Items/AmmoItem.h"
#include "Survival_Game/Items/WeaponItem.h"
#include "Survival_Game/Survival_Game.h"
#include "DrawDebugHelpers.h"

static const FName NAME_MuzzleSocket("Muzzle");

// Sets default values
Aweapon::Aweapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	weaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	weaponMesh->bReceivesDecals = false;
	weaponMesh->SetCollisionObjectType(ECC_WorldDynamic);
	weaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	weaponMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	RootComponent = weaponMesh;

	bLoopedMuzzleFX = false;
	bLoopedFireAnim = false;
	bPlayingFireAnim = false;
	bIsEquipped = false;
	bWantsToFire = false;
	bPendingReload = false;
	bPendingEquip = false;

	currentState = EWeaponState::Idle;
	attachSocket = FName("GripPoint");

	currentAmmoInClip = 0;
	burstCounter = 0;
	lastFireTime = 0.0f;

	ADSTime = 0.5f;
	recoilResetSpeed = 5.0f;
	recoilSpeed = 10.0f;

	PrimaryActorTick.TickGroup = TG_PrePhysics;
}

void Aweapon::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

// Called when the game starts or when spawned
void Aweapon::BeginPlay()
{
	Super::BeginPlay();
	pawnOwner = Cast<ASurvivalGameCharacter>(GetOwner());
}

void Aweapon::Destroyed()
{
	Super::Destroyed();
	StopSimulatingWeaponFire();
}

void Aweapon::UseClipAmmo()
{
	--currentAmmoInClip;
}

void Aweapon::ConsumeAmmo(const int32 amount)
{
	if (pawnOwner)
	{
		if (UInventoryComponent* inv = pawnOwner->playerInventory)
		{
			if (UItem* ammoItem = inv->FindItemByClass(weaponConfig.ammoClass))
			{
				inv->ConsumeItem(ammoItem, amount);
				inv->OnInventoryUpdated.Broadcast();
			}
		}
	}
}

void Aweapon::ReturnAmmoToInv()
{
	if (pawnOwner)
	{
		if (UInventoryComponent* inv = pawnOwner->playerInventory)
		{
			inv->TryAddItemFromClass(weaponConfig.ammoClass, currentAmmoInClip);
			inv->OnInventoryUpdated.Broadcast();

		}
	}
}

void Aweapon::OnEquip()
{
	AttachMeshToPawn();
	bPendingEquip = true;
	DetermineWeaponState();
	OnEquipFinished();StopWeaponAnimation
	if (pawnOwner)
	{
		PlayWeaponSound(equipSound);
	}
}

void Aweapon::OnEquipFinished()
{
	bIsEquipped = true;
	bPendingEquip = false;
	DetermineWeaponState();
	if (pawnOwner && CanReload())
	{
		StartReload();
	}
}

void Aweapon::OnUnEquip()
{

	bIsEquipped = false;
	StopFire();

	if (bPendingReload)
	{
		StopWeaponAnimation(reloadAnim);	
		bPendingReload = false;
		GetWorldTimerManager().ClearTimer(timerHandle_StopReload);
		GetWorldTimerManager().ClearTimer(timerHandle_ReloadWeapon);
	}

	if (bPendingEquip)
	{
		StopWeaponAnimation(equipAnim);
		bPendingEquip = false;
		GetWorldTimerManager().ClearTimer(timerHandle_OnEquipFinished);
	}
	ReturnAmmoToInv();
	DetermineWeaponState();
}

bool Aweapon::IsEquipped() const
{
	return bIsEquipped;
}

bool Aweapon::IsAttachedToPawn() const
{
	return bIsEquipped || bPendingEquip;
}

void Aweapon::StartFire()
{

	UE_LOG(LogTemp, Warning, TEXT("Start Fireing Weapon"));
	if (!bWantsToFire)
	{
		bWantsToFire = true;
		DetermineWeaponState();
	}
}

void Aweapon::StopFire()
{
	if (bWantsToFire)
	{
		bWantsToFire = false;
		DetermineWeaponState();
	}
}

void Aweapon::StartReload()
{
	if (CanReload())
	{

		UE_LOG(LogTemp, Warning, TEXT("Reloading Weapon"));
		bPendingReload = true;
		DetermineWeaponState();
		float animDuration = PlayWeaponAnimation(reloadAnim);
		if (animDuration <= 0.0f)
		{
			animDuration = 0.5f;
		}
		GetWorldTimerManager().SetTimer(timerHandle_StopReload, this, &Aweapon::StopReload, animDuration, false);
		GetWorldTimerManager().SetTimer(timerHandle_ReloadWeapon, this, &Aweapon::ReloadWeapon, FMath::Max(0.1f, animDuration - 0.1f), false);
		if (pawnOwner)
		{
			PlayWeaponSound(reloadSound);
		}
	}
}

void Aweapon::StopReload()
{
	bPendingReload = false;
	DetermineWeaponState();
	StopWeaponAnimation(reloadAnim);
}

void Aweapon::ReloadWeapon()
{
	const int32 clipDelta = FMath::Min(weaponConfig.ammoPerClip - currentAmmoInClip, GetCurrentAmmo());
	if (clipDelta > 0)
	{
		currentAmmoInClip += clipDelta;
		ConsumeAmmo(clipDelta);
	}
}

bool Aweapon::CanFire() const
{
	bool bCanFire;
	if (pawnOwner)
		bCanFire = true;
	bool bStateOkToFire = ((currentState == EWeaponState::Idle) || (currentState == EWeaponState::Firing));
	return (bCanFire == true && bStateOkToFire == true && bPendingReload == false);
}

bool Aweapon::CanReload() const
{
	bool bCanReload;
	if (pawnOwner)
		bCanReload = true;
	bool bGotAmmo = (currentAmmoInClip < weaponConfig.ammoPerClip && GetCurrentAmmo() > 0);
	bool bStateOkToReload = ((currentState == EWeaponState::Idle) || (currentState == EWeaponState::Firing));
	return (bCanReload == true && bStateOkToReload == true && bGotAmmo == true);
}

EWeaponState Aweapon::GetCurrentState() const
{
	return currentState;
}

int32 Aweapon::GetCurrentAmmo() const
{
	if (pawnOwner)
	{
		if (UInventoryComponent* inv = pawnOwner->playerInventory)
		{
			if (UItem* ammo = inv->FindItemByClass(weaponConfig.ammoClass))
			{
				return ammo->GetQuantity();
			}
		}
	}
	return 0;
}

int32 Aweapon::GetCurrentAmmoInClip() const
{
	return currentAmmoInClip;
}

int32 Aweapon::GetAmmoPerClip() const
{
	return weaponConfig.ammoPerClip;
}

USkeletalMeshComponent * Aweapon::GetWeaponMesh() const
{
	return weaponMesh;
}

ASurvivalGameCharacter * Aweapon::GetPawnOwner() const
{
	return pawnOwner;
}

void Aweapon::SetPawnOwner(ASurvivalGameCharacter * character)
{
	if (pawnOwner != character)
	{
		SetInstigator(character);
		pawnOwner = character;
		SetOwner(character);
	}
}

float Aweapon::GetEquipStartTime() const
{
	return equipStartedTime;
}

float Aweapon::GetEquipedDuration() const
{
	return equipDuration;
}

void Aweapon::PawnOwner()
{
}

void Aweapon::BurstCounter()
{
	if (burstCounter > 0)
		SimulateWeaponFire();
	else
		StopSimulatingWeaponFire();
}

void Aweapon::Reload()
{
	if (bPendingReload)
		StartReload();
	else
		StopReload();
}

void Aweapon::SimulateWeaponFire()
{
	if (currentState != EWeaponState::Firing)
		return;

	if (muzzleFX)
	{

		UE_LOG(LogTemp, Warning, TEXT("Starting Weapon FX"));
		if (!bLoopedMuzzleFX || muzzlePSC == NULL)
		{
			if (pawnOwner != NULL)
			{
				AController* PC = pawnOwner->GetController();
				if (PC != NULL)
				{
					weaponMesh->GetSocketLocation(muzzleAttachPoint);
					muzzlePSC = UGameplayStatics::SpawnEmitterAttached(muzzleFX, weaponMesh, muzzleAttachPoint);
					muzzlePSC->bOwnerNoSee = false;
					muzzlePSC->bOnlyOwnerSee = false;
				}
			}
			else
			{
				muzzlePSC = UGameplayStatics::SpawnEmitterAttached(muzzleFX, weaponMesh, muzzleAttachPoint);
			}
		}
	}

	if (!bLoopedFireAnim || !bPlayingFireAnim)
	{
		//FWeaponAnim animToPlay = fireAnim;
		PlayWeaponAnimation(fireAnim);
		bPlayingFireAnim = true;
	}

	if (bLoopedFireSound)
	{
		if (fireAC == NULL)
		{
			fireAC = PlayWeaponSound(fireLoopSound);
		}
	}
	else
	{
		PlayWeaponSound(fireSound);
	}
}

void Aweapon::StopSimulatingWeaponFire()
{
	if (bLoopedMuzzleFX)
	{
		if (muzzlePSC != NULL)
		{
			muzzlePSC->DeactivateSystem();
			muzzlePSC = NULL;
		}
		if (muzzlePSCSecondary != NULL)
		{
			muzzlePSCSecondary->DeactivateSystem();
			muzzlePSCSecondary = NULL;
		}
	}

	if (bLoopedFireAnim && bPlayingFireAnim)
	{
		StopWeaponAnimation(fireAimingAnim);
		StopWeaponAnimation(fireAnim);
		bPlayingFireAnim = false;
	}

	if (fireAC)
	{
		fireAC->FadeOut(0.1f, 0.0f);
		fireAC = NULL;
		PlayWeaponSound(fireFinishSound);
	}
}

void Aweapon::HandleHit(const FHitResult & hit, ASurvivalGameCharacter * hitPlayer)
{

	UE_LOG(LogTemp, Warning, TEXT("handaling Weapon hit"));
	if (pawnOwner)
	{
		float damageMultiplyer = 1.0f;
		for (auto& boneDamgeModifyer : hitScanConfig.boneDamageModifiers)
		{
			damageMultiplyer = boneDamgeModifyer.Value;
			break;
		}

		if (hitPlayer)
		{
			UGameplayStatics::ApplyPointDamage(hitPlayer, hitScanConfig.damage * damageMultiplyer, (hit.TraceStart - hit.TraceEnd).GetSafeNormal(), hit, pawnOwner->GetController(), this, hitScanConfig.damageType);
			if (ASurvivalPlayerController* PC = Cast<ASurvivalPlayerController>(pawnOwner->GetController()))
			{
				PC->OnHitPlayer();
			}
		}
	}
}

void Aweapon::FireShot()
{
	if (pawnOwner)
	{
		if (ASurvivalPlayerController* PC = Cast<ASurvivalPlayerController>(pawnOwner->GetController()))
		{

			UE_LOG(LogTemp, Warning, TEXT("Fireing Shot"));
			if (recoilCurve)
			{
				const FVector2D recoilAmount(recoilCurve->GetVectorValue(FMath::RandRange(0.0f, 1.0f)).X, recoilCurve->GetVectorValue(FMath::RandRange(0.0f, 1.0f)).Y);
				PC->ApplyRecoil(recoilAmount, recoilSpeed, recoilResetSpeed, fireCameraShake);
			}
			FVector camLot;
			FRotator camRot;
			PC->GetPlayerViewPoint(camLot, camRot);

			FHitResult hit;
			FCollisionQueryParams qureParams;
			qureParams.AddIgnoredActor(this);
			qureParams.AddIgnoredActor(pawnOwner);

			FVector fireDir = camRot.Vector();
			FVector traceStart = camLot;
			FVector traceEnd = (fireDir * hitScanConfig.distance) + camLot;

			if (GetWorld()->LineTraceSingleByChannel(hit, traceStart, traceEnd, COLISION_WEAPON, qureParams))
			{
				ASurvivalGameCharacter* hitCharacter = Cast<ASurvivalGameCharacter>(hit.GetActor());
				HandleHit(hit, hitCharacter);
				FColor pointColour = FColor::Red;
				DrawDebugPoint(GetWorld(), hit.ImpactPoint, 5.0f, pointColour, false, 30.0f);
			}
		}		
	}
}

void Aweapon::HandleReFiring()
{
	UWorld* myWorld = GetWorld();
	float slackTimeThisFrame = FMath::Max(0.0f, (myWorld->TimeSeconds - lastFireTime) - weaponConfig.timeBetweenShots);
	if (bAllowAutomaticWeaponCatchup)
	{
		timerIntervalAdjustment -= slackTimeThisFrame;
	}
	HandleFiring();
}

void Aweapon::HandleFiring()
{

	UE_LOG(LogTemp, Warning, TEXT("Handleing Fireing"));
	if ((currentAmmoInClip > 0) && CanFire())
	{
		if (pawnOwner)
		{

			UE_LOG(LogTemp, Warning, TEXT("Handleing Fireing : PawnOwner Successful"));
			FireShot();
			UseClipAmmo();
			burstCounter++;
			BurstCounter();
		}
	}
	else if (CanReload())
	{
		StartReload();
	}
	else if (pawnOwner)
	{
		if (GetCurrentAmmo() == 0 && !bRefiring)
		{
			PlayWeaponSound(outOfAmmoSound);
		}
		if (burstCounter > 0)
		{
			OnBurstFinished();
		}
	}

	if (pawnOwner)
	{
		if (currentAmmoInClip <= 0 && CanReload())
		{
			StartReload();
		}

		bRefiring = (currentState == EWeaponState::Firing && weaponConfig.timeBetweenShots > 0);
		if (bRefiring)
		{
			GetWorldTimerManager().SetTimer(timerHandle_HandleFiring, this, &Aweapon::HandleReFiring, FMath::Max<float>(weaponConfig.timeBetweenShots + timerIntervalAdjustment, SMALL_NUMBER), false);
			timerIntervalAdjustment = 0.0f;
		}
	}
	lastFireTime = GetWorld()->GetTimeSeconds();
}

void Aweapon::OnBurstStarted()
{

	UE_LOG(LogTemp, Warning, TEXT("On BurstStarted"));
	const float gameTime = GetWorld()->GetTimeSeconds();
	if (lastFireTime > 0 && weaponConfig.timeBetweenShots > 0.0f && lastFireTime + weaponConfig.timeBetweenShots > gameTime)
	{
		GetWorldTimerManager().SetTimer(timerHandle_HandleFiring, this, &Aweapon::HandleFiring, lastFireTime + weaponConfig.timeBetweenShots - gameTime, false);
	}
	else
	{
		HandleFiring();
	}
}

void Aweapon::OnBurstFinished()
{
	burstCounter = 0;
	timerIntervalAdjustment = 0.0f;
	bRefiring = false;
	GetWorldTimerManager().ClearTimer(timerHandle_HandleFiring);
}

void Aweapon::SetWeaponState(EWeaponState newState)
{
	const EWeaponState prevState = currentState;
	if (prevState == EWeaponState::Firing && newState != EWeaponState::Firing)
	{
		OnBurstFinished();
	}
	currentState = newState;
	if (prevState != EWeaponState::Firing  && newState == EWeaponState::Firing)
	{
		OnBurstStarted();
	}
}

void Aweapon::DetermineWeaponState()
{

	UE_LOG(LogTemp, Warning, TEXT("DetermineWeaponState"));
	EWeaponState newState = EWeaponState::Idle;
	if (bIsEquipped)
	{
		if (bPendingReload)
		{
			if (CanReload() == false)
			{

				UE_LOG(LogTemp, Warning, TEXT("DetermineWeaponState: IDLE"));
				currentState = newState;
			}
			else
			{
				currentState = EWeaponState::Reloading;

				UE_LOG(LogTemp, Warning, TEXT("DetermineWeaponState: Reloading"));
			}
		}
		else if ((bPendingReload == false) && (bWantsToFire == true) && (CanFire() == true))
		{
			newState = EWeaponState::Firing;
			UE_LOG(LogTemp, Warning, TEXT("DetermineWeaponState: Firing"));
		}
	}
	else if (bPendingEquip)
	{
		newState = EWeaponState::Equipping;
		UE_LOG(LogTemp, Warning, TEXT("DetermineWeaponState: Equipping"));
	}
	SetWeaponState(newState);
}

void Aweapon::AttachMeshToPawn()
{
	if (pawnOwner)
	{
		if (const USkeletalMeshComponent* pawnMesh = pawnOwner->GetMesh())
		{
			AttachToComponent(pawnOwner->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, attachSocket);
		}
	}
}

UAudioComponent * Aweapon::PlayWeaponSound(USoundCue * sound)
{
	UAudioComponent* AC = NULL;
	if (sound && pawnOwner)
	{
		AC = UGameplayStatics::SpawnSoundAttached(sound, pawnOwner->GetRootComponent());
	}
	return AC;
}

float Aweapon::PlayWeaponAnimation(const FWeaponAnim & animation)
{
	float duration = 0.0f;
	if (pawnOwner)
	{
		UAnimMontage* useAnim = animation.pawn;
		if (useAnim != NULL)
		{
			duration = pawnOwner->PlayAnimMontage(useAnim);
		}
	}
	return duration;
}

void Aweapon::StopWeaponAnimation(const FWeaponAnim & animation)
{
	if (pawnOwner)
	{
		UAnimMontage* useAnim = animation.pawn;
		if (useAnim != NULL)
		{
			pawnOwner->StopAnimMontage(useAnim);		
		}
	}
}

FVector Aweapon::GetCameraAim() const
{
	ASurvivalPlayerController*  const PC = GetInstigator() ? Cast <ASurvivalPlayerController>(GetInstigator()->Controller) : NULL;
	FVector finalAim = FVector::ZeroVector;

	if (PC)
	{
		FVector camLot;
		FRotator camRot;
		PC->GetPlayerViewPoint(camLot, camRot);
		finalAim = camRot.Vector();
	}
	else if (GetInstigator())
	{
		finalAim = GetInstigator()->GetBaseAimRotation().Vector();
	}

	return finalAim;
}

FHitResult Aweapon::WeaponTrace(const FVector & startTrace, const FVector & endTrace) const
{
	FCollisionQueryParams traceParams(SCENE_QUERY_STAT(WeaponTrace), true, GetInstigator());
	traceParams.bReturnPhysicalMaterial = true;

	FHitResult hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(hit, startTrace, endTrace, COLISION_WEAPON, traceParams);
	return hit;
}
