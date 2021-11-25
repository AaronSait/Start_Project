// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/Player/SurvivalPlayerController.h"
#include "Survival_Game/Player/SurvivalGameCharacter.h"
																																					 
void ASurvivalPlayerController::ApplyRecoil(const FVector2D & recoilAmount, const float recoilSpeed, const float recoilResetSpeed, TSubclassOf<class UMatineeCameraShake> shake)
{
	PlayerCameraManager->StartMatineeCameraShake(shake);
	recoilBumpAmount += recoilAmount;
	recoilResetAmount += recoilAmount;
	currentRecoilSpeed = recoilSpeed;
	currentRecoilResetSpeed = recoilResetSpeed;
	lastRecoilTime = GetWorld()->GetTimeSeconds();
}

void ASurvivalPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("Turn", this, &ASurvivalPlayerController::Turn);
	InputComponent->BindAxis("LookUp", this, &ASurvivalPlayerController::LookUp);
}

void ASurvivalPlayerController::Turn(float rate)
{
	if (!FMath::IsNearlyZero(recoilResetAmount.X, 0.01f))
	{
		if (recoilResetAmount.X > 0.0f && rate > 0.0f)
		{
			recoilResetAmount.X = FMath::Max(0.0f, recoilResetAmount.X - rate);
		}
		else if(recoilResetAmount.X < 0.0f && rate < 0.0f)
		{
			recoilResetAmount.X = FMath::Min(0.0f, recoilResetAmount.X - rate);
		}
	}

	if (!FMath::IsNearlyZero(recoilBumpAmount.X, 0.01f))
	{
		FVector2D lastCurrentRecoil = recoilBumpAmount;
		recoilBumpAmount.X = FMath::FInterpTo(recoilBumpAmount.X, 0.0f, GetWorld()->DeltaTimeSeconds, currentRecoilSpeed);

		AddYawInput(lastCurrentRecoil.X - recoilBumpAmount.X);
	}
	FVector2D lastRecoilResetAmount = recoilResetAmount;
	recoilResetAmount.X = FMath::FInterpTo(recoilResetAmount.X, 0.0f, GetWorld()->DeltaTimeSeconds, currentRecoilResetSpeed);
	AddYawInput(lastRecoilResetAmount.X - recoilResetAmount.X);
	AddYawInput(rate);
}

void ASurvivalPlayerController::LookUp(float rate)
{
	if (!FMath::IsNearlyZero(recoilResetAmount.Y, 0.01f))
	{
		if (recoilResetAmount.Y > 0.0f && rate > 0.0f)
		{
			recoilResetAmount.Y = FMath::Max(0.0f, recoilResetAmount.Y - rate);
		}
		else if (recoilResetAmount.Y < 0.0f && rate < 0.0f)
		{
			recoilResetAmount.Y = FMath::Min(0.0f, recoilResetAmount.Y - rate);
		}
	}

	if (!FMath::IsNearlyZero(recoilBumpAmount.X, 0.01f))
	{
		FVector2D lastCurrentRecoil = recoilBumpAmount;
		recoilBumpAmount.Y = FMath::FInterpTo(recoilBumpAmount.Y, 0.0f, GetWorld()->DeltaTimeSeconds, currentRecoilSpeed);

		AddPitchInput(lastCurrentRecoil.X - recoilBumpAmount.X);
	}
	FVector2D lastRecoilResetAmount = recoilResetAmount;
	recoilResetAmount.Y = FMath::FInterpTo(recoilResetAmount.Y, 0.0f, GetWorld()->DeltaTimeSeconds, currentRecoilResetSpeed);
	AddPitchInput(lastRecoilResetAmount.Y - recoilResetAmount.Y);
	AddPitchInput(rate);
}
