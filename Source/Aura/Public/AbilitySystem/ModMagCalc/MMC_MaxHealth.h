// Copyright Markku Inkinen

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_MaxHealth.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UMMC_MaxHealth : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
	
public:
	UMMC_MaxHealth();

	// returns floats of the modifier that we produce
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

	
private:
	// create a variable for the attribute we want to capture
	// struct that defines the captured attribute
	FGameplayEffectAttributeCaptureDefinition VigorDef;
};
