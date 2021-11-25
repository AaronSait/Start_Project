// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "weapon.generated.h"

class UAnimMontage;
class ASurvivalGameCharacter;
class UAudioComponent;
class UParticleSystemComponent;
class UMatineeCameraShake;
class UForceFeedbackEffect;
class USoundCue;

UENUM(BlueprintType)
enum class EWeaponState : uint8
{
	Idle,
	Firing,
	Reloading,
	Equipping
};

USTRUCT(BlueprintType)
struct FWeaponData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ammo")
	int32 ammoPerClip;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ammo")
		TSubclassOf<class UAmmoItem> ammoClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeponStat")
		float timeBetweenShots;

	FWeaponData()
	{
		ammoPerClip = 20;
		timeBetweenShots = 0.2f;
	}
};

USTRUCT()
struct FWeaponAnim
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Anumation")
		UAnimMontage* pawn;
};

USTRUCT(BlueprintType)
struct FHitScanConfig
{
	GENERATED_BODY()

	FHitScanConfig()
	{
		distance = 10000.0f;
		damage = 25.0f;
		radius = 0.0f;
		damageType = UDamageType::StaticClass();
	}

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Trace Info")
		float distance;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Trace Info")
		float damage;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Trace Info")
		float radius;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Trace Info")
		TSubclassOf<UDamageType> damageType;

	UPROPERTY(EditDefaultsOnly, Category = "Trace Info")
		TMap<FName, float> boneDamageModifiers;
};

UCLASS()
class SURVIVAL_GAME_API Aweapon : public AActor
{
	GENERATED_BODY()

		friend class ASurvivalGameCharacter;

public:
	// Sets default values for this actor's properties
	Aweapon();

	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void Destroyed() override;

	UPROPERTY(EditAnywhere, Category = "Components")
		USkeletalMeshComponent* weaponMesh;

protected:

	void UseClipAmmo();
	void ConsumeAmmo(const int32 amount);
	void ReturnAmmoToInv();

	virtual void OnEquip();
	virtual void OnEquipFinished();
	virtual void OnUnEquip();
	bool IsEquipped() const;
	bool IsAttachedToPawn() const;

	/*
	*	INPUT FUNCTIONS
	*/

	virtual void StartFire();
	virtual void StopFire();
	virtual void StartReload();
	virtual void StopReload();
	virtual void ReloadWeapon();

	bool CanFire() const;
	bool CanReload() const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
		EWeaponState GetCurrentState() const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
		int32 GetCurrentAmmo() const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
		int32 GetCurrentAmmoInClip() const;

	int32 GetAmmoPerClip() const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
		USkeletalMeshComponent* GetWeaponMesh() const;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		class ASurvivalGameCharacter* GetPawnOwner() const;

	void SetPawnOwner(ASurvivalGameCharacter* character);
	float GetEquipStartTime() const;
	float GetEquipedDuration() const;

	UPROPERTY(BlueprintReadOnly)
		class UWeaponItem* item;

	UPROPERTY()
		class ASurvivalGameCharacter* pawnOwner;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config")
		FWeaponData weaponConfig;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config")
		FHitScanConfig hitScanConfig;

	UPROPERTY()
		float timerIntervalAdjustment;

	UPROPERTY(Config)
		bool bAllowAutomaticWeaponCatchup = true;

	UPROPERTY()
		UAudioComponent* fireAC;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		FName muzzleAttachPoint;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		FName attachSocket;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		UParticleSystem* muzzleFX;

	UPROPERTY()
		UParticleSystemComponent* muzzlePSC;

	UPROPERTY()
		UParticleSystemComponent* muzzlePSCSecondary;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		TSubclassOf<UMatineeCameraShake> fireCameraShake;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		float ADSTime; //Aim Down Sight Time (ADSTime)

	UPROPERTY(EditDefaultsOnly, Category = "Recoil")
		class UCurveVector* recoilCurve;

	UPROPERTY(EditDefaultsOnly, Category = "Recoil")
		float recoilSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "Recoil")
		float recoilResetSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		UForceFeedbackEffect* fireForceFeedback;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		USoundCue* fireSound;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		USoundCue* fireLoopSound;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		USoundCue* fireFinishSound;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		USoundCue* outOfAmmoSound;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		USoundCue* reloadSound;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		USoundCue* equipSound;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
		FWeaponAnim reloadAnim;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
		FWeaponAnim equipAnim;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
		FWeaponAnim fireAnim;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
		FWeaponAnim fireAimingAnim;


	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		uint32 bLoopedMuzzleFX : 1;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		uint32 bLoopedFireSound : 1;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
		uint32 bLoopedFireAnim : 1;

	uint32 bPlayingFireAnim : 1;
	uint32 bIsEquipped : 1;
	uint32 bWantsToFire : 1;

	UPROPERTY()
		uint32 bPendingReload : 1;

	uint32 bPendingEquip : 1;
	uint32 bRefiring : 1;

	EWeaponState currentState;

	float lastFireTime;
	float equipStartedTime;
	float equipDuration;

	UPROPERTY()
		int32 currentAmmoInClip;

	UPROPERTY()
		int32 burstCounter;

	FTimerHandle timerHandle_OnEquipFinished;
	FTimerHandle timerHandle_StopReload;
	FTimerHandle timerHandle_ReloadWeapon;
	FTimerHandle timerHandle_HandleFiring;

	UFUNCTION()
		void PawnOwner();

	UFUNCTION()
		void BurstCounter();

	UFUNCTION()
		void Reload();

	virtual void SimulateWeaponFire();
	virtual void StopSimulatingWeaponFire();

	void HandleHit(const FHitResult& hit, class ASurvivalGameCharacter* hitPlayer = nullptr);

	virtual void FireShot();


	void HandleReFiring();
	void HandleFiring();
	virtual void OnBurstStarted();
	virtual void OnBurstFinished();
	void SetWeaponState(EWeaponState newState);
	void DetermineWeaponState();
	void AttachMeshToPawn();

	/*
	 *	WEAPON USAGE HELPER METHODS
	 */

	UAudioComponent* PlayWeaponSound(USoundCue* sound);

	float PlayWeaponAnimation(const FWeaponAnim& animation);
	void StopWeaponAnimation(const FWeaponAnim& animation);

	FVector GetCameraAim() const;
	FHitResult WeaponTrace(const FVector& startTrace, const FVector& endTrace) const;

};
