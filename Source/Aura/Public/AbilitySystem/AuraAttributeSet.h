// Copyright Markku Inkinen

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemTestAttributeSet.h"
#include "AuraAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraAttributeSet : public UAbilitySystemTestAttributeSet
{
	GENERATED_BODY()
public:
	UAuraAttributeSet();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_HP, Category = "Vital Attributes")
	FGameplayAttributeData HP;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHP, Category = "Vital Attributes")
	FGameplayAttributeData MaxHP;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Mana, Category = "Vital Attributes") 
	FGameplayAttributeData Mana;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxMana, Category = "Vital Attributes")
	FGameplayAttributeData MaxMana;

	UFUNCTION()
	void OnRep_HP(const FGameplayAttributeData& OldHP) const;

	UFUNCTION()
	void OnRep_MaxHP(const FGameplayAttributeData& OldMaxHP) const;

	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& OldMana) const;

	UFUNCTION()
	void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const;
};
