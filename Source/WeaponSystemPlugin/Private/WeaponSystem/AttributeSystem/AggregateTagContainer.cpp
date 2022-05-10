

#include "WeaponSystem/AttributeSystem/AggregateTagContainer.h"

bool FAggregateTagContainer::operator==(const FAggregateTagContainer& Other) const
{
	if(/*OwnedTags != Other.OwnedTags || */TagCount.Num() != Other.TagCount.Num() ||
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
	//OwnedTags.Reset();
	TagCount.Empty();
	ExactTagCount.Empty();
}

void FAggregateTagContainer::InitializeContainer(const TArray<FAggregateTagValue>& Values)
{
	Empty();
	for(const FAggregateTagValue& Value : Values)
		AddTag(Value.Tag, Value.Count);
}


void FAggregateTagContainer::Internal_AddTagToMap(const FGameplayTag& Tag, const int32 Num)
{
	if(!Tag.IsValid() || Num <= 0) return;

	// Exact tag count add
	ExactTagCount.FindOrAdd(Tag) += Num;

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

FString FAggregateTagContainer::ToString(const bool bExact) const
{
	//if(OwnedTags.IsEmpty()) return FString(TEXT("{}"));
	FString String = TEXT("{ ");
	const TMap<FGameplayTag, uint32>& Map = bExact ? ExactTagCount : TagCount;
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

TArray<FGameplayTag> FAggregateTagContainer::GetExactTags() const
{
	TArray<FGameplayTag> ExactTags;
	ExactTagCount.GetKeys(ExactTags);
	return ExactTags;
}

TArray<FGameplayTag> FAggregateTagContainer::GetAllTags() const
{
	TArray<FGameplayTag> Tags;
	TagCount.GetKeys(Tags);
	return Tags;
}

FGameplayTagContainer FAggregateTagContainer::MakeTagContainer() const
{
	FGameplayTagContainer Container;
	TArray<FGameplayTag> ExactTags = GetExactTags();
	for(const FGameplayTag& ExactTag : ExactTags)
	{
		Container.AddTag(ExactTag);
	}
	return Container;
}



/*
bool FAggregateTagContainer::Serialize(FArchive& Ar)
{
	if(Ar.IsSaving())
	{
		TagCount.Empty();
	}
	else if(Ar.IsLoading())
	{
		Empty();
	}
	
	OwnedTags.Serialize(FStructuredArchiveFromArchive(Ar).GetSlot());

	for(TArray<FGameplayTag>::TConstIterator Itr(OwnedTags.CreateConstIterator()); Itr; ++Itr)
	{
		uint32 ExactCount;
		if(Ar.IsSaving())
		{
			uint32* ExactCountPtr = ExactTagCount.Find(*Itr);
			ExactCount = ExactCountPtr ? *ExactCountPtr : ExactTagCount.Add(*Itr, 1);
		}

		Ar << ExactCount;

		if(Ar.IsLoading())
			ExactTagCount.FindOrAdd(*Itr) = ExactCount;

		FGameplayTagContainer ParentTags(*Itr);
		ParentTags.AppendTags(Itr->GetGameplayTagParents());
		for(TArray<FGameplayTag>::TConstIterator ParentItr(ParentTags.CreateConstIterator()); ParentItr; ++ParentItr)
		{
			TagCount.FindOrAdd(*ParentItr) += ExactCount;
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("%s: %s: %s"), *FString(__FUNCTION__), *FString(Ar.IsSaving() ? "SAVING" : "LOADING"), *ToString(false));

	return true;
}
*/

bool FAggregateTagContainer::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	if(Ar.IsLoading())
		Empty();
	
	// Net serialize ExactTagCount map
	TArray<FGameplayTag> ExactTags;
	if(Ar.IsSaving()) ExactTagCount.GetKeys(ExactTags);

	Ar << ExactTags;

	if(Ar.IsLoading()) ExactTagCount.Reserve(ExactTags.Num());

	for(const FGameplayTag& ExactTag : ExactTags)
	{
		uint32 Count;
		if(Ar.IsSaving())
			Count = *ExactTagCount.Find(ExactTag);

		Ar << Count;

		if(Ar.IsLoading())
		{
			ExactTagCount.Add(ExactTag, Count);

			FGameplayTagContainer ParentTags(ExactTag);
			ParentTags.AppendTags(ExactTag.GetGameplayTagParents());
			for(TArray<FGameplayTag>::TConstIterator ParentItr(ParentTags.CreateConstIterator()); ParentItr; ++ParentItr)
			{
				TagCount.FindOrAdd(*ParentItr) += Count;
			}
		}
	}
	
	return true;
}



void FAggregateTagContainer::AddTag(const FGameplayTag& Tag, const int32 Num)
{
	Internal_AddTagToMap(Tag, Num);
}

void FAggregateTagContainer::AppendTags(const FGameplayTagContainer& Tags, const int32 Num)
{
	Internal_AppendTagsToMap(Tags, Num);
}

void FAggregateTagContainer::RemoveTag(const FGameplayTag& Tag, const int32 Num, const bool bExact)
{
	if(!Tag.IsValid() || Num <= 0) return;
	
	if(bExact)
	{
		if(uint32* Count = ExactTagCount.Find(Tag))
		{
			// Decrement count by Num
			*Count -= FMath::Min<uint32>(*Count, Num);
			if(*Count == 0)
			{
				ExactTagCount.Remove(Tag);
				//OwnedTags.RemoveTag(Tag);
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
}

void FAggregateTagContainer::RemoveTags(const FGameplayTagContainer& Tags, const int32 Num, const bool bExact)
{
	for(TArray<FGameplayTag>::TConstIterator Itr(Tags.CreateConstIterator()); Itr; ++Itr)
	{
		RemoveTag(*Itr, Num, bExact);
	}
}

uint32 FAggregateTagContainer::GetTagCount(const FGameplayTag& Tag) const
{
	const uint32* Count = TagCount.Find(Tag);
	return Count ? *Count : 0;
}

uint32 FAggregateTagContainer::GetTagCountExact(const FGameplayTag& Tag) const
{
	const uint32* Count = ExactTagCount.Find(Tag);
	return Count ? *Count : 0;
}






template<typename UserClass>
void FAggregateTagContainerNotify::BindOnChanged(const FGameplayTag& Tag, UserClass* Target, TMemFunPtrType<false, UserClass, void(const FAggregateTagContainer&, const FGameplayTag&, int32, int32)> Function) const
{
	static_assert(TIsDerivedFrom<UserClass, UObject>::Value, TEXT("FAggregateTagContainerNotify::BindOnChanged: UserClass must be derived from UObject"));
	if(!Target) return;
	Bindings.Add({ Tag, CallbackDelegate((UObject*)Target, Function) });
}

void FAggregateTagContainerNotify::BindUFunction(const FGameplayTag& Tag, UObject* Target, const FName& FunctionName) const
{
	if(!Target) return;
	CallbackDelegate Delegate;
	Delegate.BindUFunction(Target, FunctionName);
	Bindings.Add({ Tag, Delegate });
}

void FAggregateTagContainerNotify::BindScriptDelegate(const FGameplayTag& Tag, const FAggregateContainerChangedUniDelegate& Delegate) const
{
	if(!Delegate.IsBound()) return;
	CallbackDelegate Callback;
	Callback.BindUFunction((UObject*)Delegate.GetUObject(), Delegate.GetFunctionName());
	Bindings.Add({ Tag, Callback });
}


void FAggregateTagContainerNotify::RemoveAll(UObject* Target) const
{
	if(!Target) return;
	for(int32 i = 0; i < Bindings.Num(); i++)
	{
		if(Bindings[i].Get<1>().GetUObject() != Target) continue;
		Bindings.RemoveAt(i--);
	}
}

void FAggregateTagContainerNotify::Remove(UObject* Target, const FGameplayTag& Tag) const
{
	if(!Target || !Tag.IsValid()) return;
	for(int32 i = 0; i < Bindings.Num(); i++)
	{
		if(Bindings[i].Get<1>().GetUObject() != Target || !Tag.MatchesTagExact(Bindings[i].Get<0>())) continue;
		Bindings.RemoveAt(i);
		break;
	}
}

void FAggregateTagContainerNotify::RemoveScriptDelegate(const FAggregateContainerChangedUniDelegate& Delegate) const
{
	if(!Delegate.IsBound()) return;
	for(int32 i = 0; i < Bindings.Num(); i++)
	{
		if(Bindings[i].Get<1>().GetUObject() != Delegate.GetUObject()) continue;
		Bindings.RemoveAt(i);
		break;
	}
}




void FAggregateTagContainerNotify::Internal_Broadcast(const FGameplayTag& Tag, const float CurrentValue, const float OldValue) const
{
	for(int32 i = 0; i < Bindings.Num(); i++)
	{
		if(!Bindings[i].Get<1>().IsBound())
		{
			Bindings.RemoveAt(i--);
			continue;
		}

		if(!Tag.MatchesTagExact(Bindings[i].Get<0>())) continue;

		checkf(Bindings[i].Get<1>().IsBound(), TEXT("Delegate is not bound???"));
		Bindings[i].Get<1>().Execute(*this, Tag, CurrentValue, OldValue);
	}
}



void FAggregateTagContainerNotify::Internal_BroadcastChanges(const TMap<FGameplayTag, uint32>& OldTagCount) const
{
	TArray<FGameplayTag> CurrentTags;
	TagCount.GetKeys(CurrentTags);
	for(const FGameplayTag& CurrentTag : CurrentTags)
	{
		const uint32 CurrentCount = TagCount.FindRef(CurrentTag);
		if(const uint32* OldCount = OldTagCount.Find(CurrentTag))
		{
			if(CurrentCount != *OldCount)
			{
				Internal_Broadcast(CurrentTag, CurrentCount, *OldCount);
			}
		}
		else
		{
			Internal_Broadcast(CurrentTag, CurrentCount, 0);
		}
	}

	TArray<FGameplayTag> OldTags;
	OldTagCount.GetKeys(OldTags);
	for(const FGameplayTag& OldTag : OldTags)
	{
		if(TagCount.Find(OldTag)) continue;
		Internal_Broadcast(OldTag, 0, OldTagCount.FindRef(OldTag));
	}
}
































