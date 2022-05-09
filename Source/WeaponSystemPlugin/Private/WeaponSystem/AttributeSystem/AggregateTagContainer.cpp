

#include "WeaponSystem/AttributeSystem/AggregateTagContainer.h"

bool FAggregateTagContainer::operator==(const FAggregateTagContainer& Other) const
{
	if(OwnedTags != Other.OwnedTags || TagCount.Num() != Other.TagCount.Num() ||
		ExactTagCount.Num() != Other.ExactTagCount.Num()) return false;
	
	TArray<FGameplayTag> Keys;
	TagCount.GetKeys(Keys);
	for(const FGameplayTag& Key : Keys)
	{
		const uint32* OtherCount = Other.TagCount.Find(Key);
		if(!OtherCount || *TagCount.Find(Key) != *OtherCount) return false;
	}
	return true;
}

void FAggregateTagContainer::Empty()
{
	OwnedTags.Reset();
	TagCount.Empty();
	ExactTagCount.Empty();
}


void FAggregateTagContainer::Internal_AddTagToMap(const FGameplayTag& Tag, const int32 Num)
{
	if(!Tag.IsValid() || Num <= 0) return;

	// Exact tag count add
	if(uint32* Count = ExactTagCount.Find(Tag))
	{
		*Count += Num;
	}
	else
	{
		ExactTagCount.Add(Tag, Num);
	}

	// All tag count add
	FGameplayTagContainer Tags(Tag);
	Tags.AppendTags(Tag.GetGameplayTagParents());
	for(TArray<FGameplayTag>::TConstIterator Itr(Tags.CreateConstIterator()); Itr; ++Itr)
		TagCount.FindOrAdd(*Itr) += Num;
}

void FAggregateTagContainer::Internal_AppendTagsToMap(const FGameplayTagContainer& Tags, const int32 Num)
{
	for(TArray<FGameplayTag>::TConstIterator Itr(Tags.CreateConstIterator()); Itr; ++Itr)
	{
		Internal_AddTagToMap(*Itr, Num);
	}
}

FString FAggregateTagContainer::ToString(const bool bExactTags) const
{
	if(OwnedTags.IsEmpty()) return FString(TEXT("{}"));
	FString String = TEXT("{ ");
	const TMap<FGameplayTag, uint32>& Map = bExactTags ? ExactTagCount : TagCount;
	TArray<FGameplayTag> Tags;
	Map.GetKeys(Tags);
	for(int32 i = 0; i < Tags.Num(); i++)
	{
		const uint32* Count = Map.Find(Tags[i]);
		String.Append(FString::Printf(TEXT("%s(%i)"), *Tags[i].ToString(), Count ? (int32)*Count : INDEX_NONE));
		if(i != Tags.Num() - 1) String += TEXT(", ");// If not at end, add ", "
	}
	String += TEXT(" }");
	return String;
}


bool FAggregateTagContainer::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	if(Ar.IsLoading())
		Empty();
	
	OwnedTags.NetSerialize(Ar, Map, bOutSuccess);

	// Net serialize TagCount map
	TArray<FGameplayTag> Keys;
	if(Ar.IsSaving()) TagCount.GetKeys(Keys);

	Ar << Keys;

	if(Ar.IsLoading()) TagCount.Reserve(Keys.Num());
	
	for(const FGameplayTag& Key : Keys)
	{
		uint32 Count;
		if(Ar.IsSaving()) Count = *TagCount.Find(Key);

		Ar << Count;

		if(Ar.IsLoading()) TagCount.Add(Key, Count);
	}

	// Net serialize ExactTagCount map
	TArray<FGameplayTag> ExactKeys;
	if(Ar.IsSaving()) ExactTagCount.GetKeys(ExactKeys);

	Ar << ExactKeys;

	if(Ar.IsLoading()) ExactTagCount.Reserve(ExactKeys.Num());

	for(const FGameplayTag& ExactKey : ExactKeys)
	{
		uint32 Count;
		if(Ar.IsSaving()) Count = *ExactTagCount.Find(ExactKey);

		Ar << Count;

		if(Ar.IsLoading()) ExactTagCount.Add(ExactKey, Count);
	}
	
	return true;
}



void FAggregateTagContainer::AddTag(const FGameplayTag& Tag, const int32 Num)
{
	OwnedTags.AddTag(Tag);
	Internal_AddTagToMap(Tag, Num);
}

void FAggregateTagContainer::AppendTags(const FGameplayTagContainer& Tags, const int32 Num)
{
	OwnedTags.AppendTags(Tags);
	Internal_AppendTagsToMap(Tags, Num);
}

void FAggregateTagContainer::RemoveTag(const FGameplayTag& Tag, const int32 Num, const bool bExact)
{
	if(!Tag.IsValid() || Num <= 0) return;
	
	if(bExact)
	{
		if(uint32* Count = ExactTagCount.Find(Tag))
		{
			*Count -= FMath::Min<uint32>(*Count, Num);
			if(*Count == 0)
			{
				ExactTagCount.Remove(Tag);
				OwnedTags.RemoveTag(Tag);
			}

			TArray<FGameplayTag> Tags;
			TagCount.GetKeys(Tags);
			for(const FGameplayTag& ChildTag : Tags)
			{
				if(!ChildTag.MatchesTag(Tag)) continue;
				uint32& ChildCount = *TagCount.Find(ChildTag);
				ChildCount -= FMath::Min<uint32>(ChildCount, Num);
				if(ChildCount == 0)
				{
					TagCount.Remove(Tag);
				}
			}
		}
	}
	else
	{
		TArray<FGameplayTag> ExactTags;
		ExactTagCount.GetKeys(ExactTags);
		for(const FGameplayTag& ExactTag : ExactTags)
		{
			if(!ExactTag.MatchesTag(Tag)) continue;
			uint32& Count = *ExactTagCount.Find(ExactTag);
			Count -= FMath::Min<uint32>(Count, Num);
			if(Count == 0)
			{
				ExactTagCount.Remove(ExactTag);
				OwnedTags.RemoveTag(ExactTag);
			}

			TArray<FGameplayTag> Tags;
			TagCount.GetKeys(Tags);
			for(const FGameplayTag& ChildTag : Tags)
			{
				if(!ChildTag.MatchesTag(ExactTag)) continue;
				uint32& ChildCount = *TagCount.Find(ChildTag);
				ChildCount -= FMath::Min<uint32>(ChildCount, Num);
				if(ChildCount == 0)
				{
					TagCount.Remove(ChildTag);
				}
			}
		}
	}

	

	
	/*
	// Exact tag count remove
	if(uint32* Count = ExactTagCount.Find(Tag))
	{
		*Count -= FMath::Min<uint32>(*Count, Num);
		if(*Count == 0)
		{
			ExactTagCount.Remove(Tag);
			OwnedTags.RemoveTag(Tag);
		}
	}
	else if(bExact) return;// Only remove parents if found exact tag
	
	// All tag count remove
	FGameplayTagContainer Tags(Tag);
	Tags.AppendTags(Tag.GetGameplayTagParents());
	for(TArray<FGameplayTag>::TConstIterator Itr(Tags.CreateConstIterator()); Itr; ++Itr)
	{
		uint32* Count = TagCount.Find(*Itr);
		if(!Count) continue;
		
		*Count -= FMath::Min<uint32>(*Count, Num);
		if(*Count == 0)
		{
			TagCount.Remove(Tag);
		}
	}*/
}

void FAggregateTagContainer::RemoveTags(const FGameplayTagContainer& Tags, const int32 Num, const bool bExact)
{
	//OwnedTags.RemoveTags(Tags);
	//Internal_RemoveTagsFromMap(Tags);
	for(TArray<FGameplayTag>::TConstIterator Itr(Tags.CreateConstIterator()); Itr; ++Itr)
	{
		RemoveTag(*Itr, Num, bExact);
	}
}

uint32 FAggregateTagContainer::GetNumTags(const FGameplayTag& Tag) const
{
	const uint32* Count = TagCount.Find(Tag);
	return Count ? *Count : 0;
}

uint32 FAggregateTagContainer::GetNumTagsExact(const FGameplayTag& Tag) const
{
	const uint32* Count = ExactTagCount.Find(Tag);
	return Count ? *Count : 0;
}





void UAggregateTagContainerUtils::SetValue(FAggregateTagContainer& TagContainer, const TArray<FAggregateTagValue>& Values)
{
	TagContainer.Empty();
	for(const FAggregateTagValue& Value : Values)
		TagContainer.AddTag(Value.Tag, Value.Count);
}







