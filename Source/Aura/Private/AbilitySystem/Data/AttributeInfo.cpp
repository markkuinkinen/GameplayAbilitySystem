// Copyright Markku Inkinen


#include "AbilitySystem/Data/AttributeInfo.h"

// lookup function
FAuraAttributeInfo UAttributeInfo::FindAttributeInfoForTag(const FGameplayTag& AttributeTag, bool bLogNotFound) const
{
	for (const FAuraAttributeInfo& Info : AttributeInformation)
	{
		if (Info.AttributeTag == AttributeTag)		// Info.AttributeTag.MatchesTagExact(AttributeTag) also works
		{	
			return Info;
		}
	}

	// If we don't get a successful attribute info
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find Info for AttributeTag [%s] on AttributeInfo [%s]."), *AttributeTag.ToString(), *GetNameSafe(this));
	}
	
	return FAuraAttributeInfo();
}
