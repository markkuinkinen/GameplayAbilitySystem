// Copyright Markku Inkinen


#include "AuraAssetManager.h"
#include "AuraGameplayTags.h"


// Returns the engines asset manager
UAuraAssetManager& UAuraAssetManager::Get()
{
	check(GEngine);

	UAuraAssetManager* AuraAssetManager = Cast<UAuraAssetManager>(GEngine->AssetManager);
	return *AuraAssetManager;

	/*
		return *Cast<UAuraAssetManager>(GEngine->AssetManager);   This can also be done
	*/
}

void UAuraAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	FAuraGameplayTags::InitialiseNativeGameplayTags();
}
