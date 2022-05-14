

#include "WeaponSystem/AttributeSystem/AggregateTagContainer.h"
#include "GameplayTagsManager.h"

FString FAggregateGameplayTagContainer::ToString(const bool bExact) const
{
	if(IsEmpty()) return FString(TEXT("{}"));
	FString String(TEXT("{ "));
	const TArray<Value>& Values = bExact ? TagCount : AggregateTagCount;
	for(int32 i = 0; i < Values.Num(); i++)
	{
		String += FString::Printf(TEXT("%s(%i)"), *Values[i].Tag.ToString(), Values[i].Count);
		if(i != Values.Num()) String += FString(TEXT(", "));
	}
	String += FString(TEXT(" }"));
	return String;
}

FGameplayTagContainer FAggregateGameplayTagContainer::MakeTagContainer() const
{
	FGameplayTagContainer Container;
	for(const Value& Val : TagCount)
		Container.AddTag(Val.Tag);
	return Container;
}


namespace
{
	struct FGameplayTagParentAccessor : FGameplayTagContainer
    {
    	friend FAggregateGameplayTagContainer;
    };
}

const TArray<FGameplayTag>& FAggregateGameplayTagContainer::GetParentTags(const FGameplayTag& Tag)
{
	return reinterpret_cast<const FGameplayTagParentAccessor*>(UGameplayTagsManager::Get().GetSingleTagContainer(Tag))->ParentTags;
}

const TArray<FGameplayTag>& FAggregateGameplayTagContainer::GetContainerParentTags(const FGameplayTagContainer& Tags)
{
	return reinterpret_cast<const FGameplayTagParentAccessor&>(Tags).ParentTags;
}

const TArray<FGameplayTag>& FAggregateGameplayTagContainer::GetContainerTags(const FGameplayTagContainer& Tags)
{
	return reinterpret_cast<const FGameplayTagParentAccessor&>(Tags).GameplayTags;
}


void FAggregateGameplayTagContainer::AddTag(const FGameplayTag& Tag, const int32 Count)
{
	if(!Tag.IsValid() || Count <= 0) return;
	FindExactOrAdd(Tag) += Count;

	const auto OldAggrTagCount = AggregateTagCount;
	
	FindAggregateOrAdd(Tag) += Count;
	const TArray<FGameplayTag>& ParentTags = GetParentTags(Tag);
	for(const FGameplayTag& ParentTag : ParentTags)
		FindAggregateOrAdd(ParentTag) += Count;

	BroadcastChanges(OldAggrTagCount);
}

void FAggregateGameplayTagContainer::RemoveTag(const FGameplayTag& Tag, const int32 Count)
{
	if(!Tag.IsValid() || Count <= 0) return;
	
	const auto OldAggrTagCount = AggregateTagCount;
	
	for(int32 i = 0; i < TagCount.Num(); i++)
	{
		if(!TagCount[i].Tag.MatchesTag(Tag)) continue;
		
		const int32 CountRemoved = FMath::Min<int32>(Count, TagCount[i].Count);
		if((TagCount[i].Count -= CountRemoved) <= 0)
			TagCount.RemoveAt(i--);

		const TArray<FGameplayTag>& ParentTags = GetParentTags(Tag);
		for(int32 j = 0; j < AggregateTagCount.Num(); j++)
			if((AggregateTagCount[j].Tag.MatchesTagExact(Tag) || ParentTags.Contains(AggregateTagCount[j].Tag)) && (AggregateTagCount[j].Count -= CountRemoved) <= 0)
				AggregateTagCount.RemoveAt(j--);
	}

	BroadcastChanges(OldAggrTagCount);
}

void FAggregateGameplayTagContainer::RemoveTagExact(const FGameplayTag& Tag, const int32 Count)
{
	if(!Tag.IsValid() || Count <= 0) return;

	for(int32 i = 0; i < TagCount.Num(); i++)
	{
		if(!TagCount[i].Tag.MatchesTagExact(Tag)) continue;

		const auto OldAggrTagCount = AggregateTagCount;
		
		const int32 CountRemoved = FMath::Min<int32>(Count, TagCount[i].Count);
		if((TagCount[i].Count -= CountRemoved) <= 0)
			TagCount.RemoveAt(i);

		const TArray<FGameplayTag>& ParentTags = GetParentTags(Tag);
		for(int32 j = 0; j < AggregateTagCount.Num(); j++)
			if((AggregateTagCount[j].Tag.MatchesTagExact(Tag) || ParentTags.Contains(AggregateTagCount[j].Tag)) && (AggregateTagCount[j].Count -= CountRemoved) <= 0)
				AggregateTagCount.RemoveAt(j--);

		BroadcastChanges(OldAggrTagCount);
		break;
	}
}

void FAggregateGameplayTagContainer::PostSerialize(const FArchive& Ar)
{
	if(!Ar.IsLoading()) return;
	AggregateTagCount.Empty();
	for(int32 i = 0; i < TagCount.Num(); i++)
	{
		// Check for invalid value
		if(!TagCount[i].Tag.IsValid() || TagCount[i].Count <= 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("Removed invalid tag at index %i"), i);
			TagCount.RemoveAt(i--);
			continue;
		}

		// Check for duplicate tags
		for(int32 j = 0; j < i; j++)
		{
			if(!TagCount[i].Tag.MatchesTagExact(TagCount[j].Tag)) continue;
			UE_LOG(LogTemp, Warning, TEXT("Removed duplicate tag %s at index %i"), *TagCount[i].Tag.ToString(), i);
			TagCount.RemoveAt(i--);
			goto CONTINUE_LOOP;
		}

		// Add aggregate tags
		FindAggregateOrAdd(TagCount[i].Tag) += TagCount[i].Count;
		const TArray<FGameplayTag>& ParentTags = GetParentTags(TagCount[i].Tag);
		for(const FGameplayTag& ParentTag : ParentTags)
			FindAggregateOrAdd(ParentTag) += TagCount[i].Count;

		CONTINUE_LOOP: continue;// Has to be some code after CONTINUE_LOOP for some reason...
	}

	// Call post serialize on tags
	for(Value& Value : TagCount) Value.Tag.PostSerialize(Ar);
	for(Value& AggregateValue : AggregateTagCount) AggregateValue.Tag.PostSerialize(Ar);
}

bool FAggregateGameplayTagContainer::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	// Serialize exact tag count
	Ar << TagCount;

	// On loaded, set aggregate tags
	if(Ar.IsLoading())
	{
		const auto OldAggrTagCount = AggregateTagCount;

		AggregateTagCount.Empty();
		
		for(const Value& ExactValue : TagCount)
		{
			FindAggregateOrAdd(ExactValue.Tag) += ExactValue.Count;
			const TArray<FGameplayTag>& ParentTags = GetParentTags(ExactValue.Tag);
			for(const FGameplayTag& AggregateParentTag : ParentTags)
				FindAggregateOrAdd(AggregateParentTag) += ExactValue.Count;
		}

		BroadcastChanges(OldAggrTagCount);// Broadcast changes
	}

	return bOutSuccess = true;
}



void FAggregateGameplayTagContainer::AppendTags(const FGameplayTagContainer& Tags, const int32 Count)
{
	if(Tags.IsEmpty() || Count <= 0) return;

	const auto OldAggrTagCount = AggregateTagCount;
	
	for(const FGameplayTag& Tag : GetContainerTags(Tags))
	{
		FindExactOrAdd(Tag) += Count;

		FindAggregateOrAdd(Tag) += Count;
		const TArray<FGameplayTag>& ParentTags = GetParentTags(Tag);
		for(const FGameplayTag& ParentTag : ParentTags)
			FindAggregateOrAdd(ParentTag) += Count;
	}

	BroadcastChanges(OldAggrTagCount);
}

void FAggregateGameplayTagContainer::AppendTags(const TArray<Value>& Tags)
{
	if(Tags.IsEmpty()) return;

	const auto OldAggrTagCount = AggregateTagCount;
	
	for(const Value& Value : Tags)
	{
		const FGameplayTag& Tag = Value.Tag;
		const int32 Count = Value.Count;
		if(!Tag.IsValid() || Count <= 0) continue;
		
		FindExactOrAdd(Tag) += Count;

		FindAggregateOrAdd(Tag) += Count;
		const TArray<FGameplayTag>& ParentTags = GetParentTags(Tag);
		for(const FGameplayTag& ParentTag : ParentTags)
			FindAggregateOrAdd(ParentTag) += Count;
	}

	BroadcastChanges(OldAggrTagCount);
}


void FAggregateGameplayTagContainer::RemoveTags(const FGameplayTagContainer& Tags, const int32 Count)
{
	if(Tags.IsEmpty() || Count <= 0) return;

	const auto OldAggrTagCount = AggregateTagCount;

	for(const FGameplayTag& Tag : GetContainerTags(Tags))
	{
		for(int32 i = 0; i < TagCount.Num(); i++)
		{
			if(!TagCount[i].Tag.MatchesTag(Tag)) continue;
		
			const int32 CountRemoved = FMath::Min<int32>(Count, TagCount[i].Count);
			if((TagCount[i].Count -= CountRemoved) <= 0)
				TagCount.RemoveAt(i--);

			const TArray<FGameplayTag>& ParentTags = GetParentTags(Tag);
			for(int32 j = 0; j < AggregateTagCount.Num(); j++)
				if((AggregateTagCount[j].Tag.MatchesTagExact(Tag) || ParentTags.Contains(AggregateTagCount[j].Tag)) && (AggregateTagCount[j].Count -= CountRemoved) <= 0)
					AggregateTagCount.RemoveAt(j--);
		}
	}

	BroadcastChanges(OldAggrTagCount);
}

void FAggregateGameplayTagContainer::RemoveTagsExact(const FGameplayTagContainer& Tags, const int32 Count)
{
	if(Tags.IsEmpty() || Count <= 0) return;

	const auto OldAggrTagCount = AggregateTagCount;

	for(const FGameplayTag& Tag : GetContainerTags(Tags))
	{
		for(int32 i = 0; i < TagCount.Num(); i++)
		{
			if(!TagCount[i].Tag.MatchesTagExact(Tag)) continue;
		
			const int32 CountRemoved = FMath::Min<int32>(Count, TagCount[i].Count);
			if((TagCount[i].Count -= CountRemoved) <= 0)
				TagCount.RemoveAt(i);

			const TArray<FGameplayTag>& ParentTags = GetParentTags(Tag);
			for(int32 j = 0; j < AggregateTagCount.Num(); j++)
				if((AggregateTagCount[j].Tag.MatchesTagExact(Tag) || ParentTags.Contains(AggregateTagCount[j].Tag)) && (AggregateTagCount[j].Count -= CountRemoved) <= 0)
					AggregateTagCount.RemoveAt(j--);
			break;
		}
	}

	BroadcastChanges(OldAggrTagCount);
}

void FAggregateGameplayTagContainer::RemoveTagsExact(const TArray<Value>& Tags)
{
	if(Tags.IsEmpty()) return;

	const auto OldAggrTagCount = AggregateTagCount;

	for(const Value& Value : Tags)
	{
		const FGameplayTag& Tag = Value.Tag;
		const int32 Count = Value.Count;
		if(!Tag.IsValid() || Count <= 0) continue;
		
		for(int32 i = 0; i < TagCount.Num(); i++)
		{
			if(!TagCount[i].Tag.MatchesTagExact(Tag)) continue;
		
			const int32 CountRemoved = FMath::Min<int32>(Count, TagCount[i].Count);
			if((TagCount[i].Count -= CountRemoved) <= 0)
				TagCount.RemoveAt(i);

			const TArray<FGameplayTag>& ParentTags = GetParentTags(Tag);
			for(int32 j = 0; j < AggregateTagCount.Num(); j++)
				if((AggregateTagCount[j].Tag.MatchesTagExact(Tag) || ParentTags.Contains(AggregateTagCount[j].Tag)) && (AggregateTagCount[j].Count -= CountRemoved) <= 0)
					AggregateTagCount.RemoveAt(j--);
			break;
		}
	}

	BroadcastChanges(OldAggrTagCount);
}

void FAggregateGameplayTagContainer::Empty()
{
	if(IsEmpty()) return;
	const auto OldAggrTagCount = AggregateTagCount;
	
	TagCount.Empty();
	AggregateTagCount.Empty();
	
	BroadcastChanges(OldAggrTagCount);
}


void FAggregateGameplayTagContainer::BroadcastChanges(const TArray<Value>& OldAggregateTagCount) const
{
	for(const Value& CurrentValue : AggregateTagCount)
	{
		// If the Old Value existed and the count has changed, broadcast count change. Else (if Old Value doesn't exist), broadcast current count and the old count as 0
		if(const Value* OldValue = OldAggregateTagCount.FindByPredicate([&CurrentValue](const Value& OldValueItr)->bool{ return CurrentValue.Tag.MatchesTagExact(OldValueItr.Tag); }))
		{
			if(OldValue->Count != CurrentValue.Count)
			{
				BroadcastChange(CurrentValue.Tag, CurrentValue.Count, OldValue->Count);
			}
		}
		else
		{
			BroadcastChange(CurrentValue.Tag, CurrentValue.Count, 0);
		}
	}

	for(const Value& OldValue : OldAggregateTagCount)
	{
		// If current value doesn't exist, broadcast current count as 0 and old value as old count
		if(FindAggregate(OldValue.Tag) != nullptr) continue;
		BroadcastChange(OldValue.Tag, 0, OldValue.Count);
	}
}

void FAggregateGameplayTagContainer::BroadcastChange(const FGameplayTag& Tag, const int32 CurrentCount, const int32 OldCount) const
{
	//if(const Binding* DelegatePtr = Bindings.FindByPredicate([&Tag](const Binding& Binding)->bool{ return Tag.MatchesTagExact(Binding.Tag); }))
	//	DelegatePtr->Delegate.Execute(*this, Tag, CurrentCount, OldCount);
	for(int32 i = 0; i < Bindings.Num(); i++)
	{
		if(!Bindings[i].Delegate.IsBound())
		{
			Bindings.RemoveAt(i--);
		}
		else if(Tag.MatchesTagExact(Bindings[i].Tag))
		{
			Bindings[i].Delegate.Execute(*this, Tag, CurrentCount, OldCount);
		}
	}
}


template<typename UserClass, bool bConst>
void FAggregateGameplayTagContainer::BindUObject(const FGameplayTag& Tag, UserClass* Target, const TMemFunPtrType<bConst, UserClass, void(const ThisStruct&, const FGameplayTag&, int32, int32)> MemFuncPtr) const
{
	if(!Tag.IsValid() || !Target || !MemFuncPtr) return;
	Bindings.Add(Binding::MakeUObject(Tag, Target, MemFuncPtr));
}

void FAggregateGameplayTagContainer::BindUFunction(const FGameplayTag& Tag, UObject* Target, const FName& FuncName) const
{
	if(!Tag.IsValid() || !Target || !FuncName.IsValid()) return;
	Bindings.Add(Binding::MakeUFunction(Tag, Target, FuncName));
}

template<typename FunctorType, typename... Args>
void FAggregateGameplayTagContainer::BindLambda(const FGameplayTag& Tag, FunctorType&& Lambda, Args... Vars) const
{
	if(!Tag.IsValid() || !Lambda) return;
	Bindings.Add(Binding::MakeLambda(Tag, Lambda, Vars...));
}


void FAggregateGameplayTagContainer::UnbindAll(const UObject* Target) const
{
	for(int32 i = 0; i < Bindings.Num(); i++)
	{
		if(Bindings[i].Delegate.GetUObject() != Target) continue;
		Bindings.RemoveAt(i--);
	}
}

void FAggregateGameplayTagContainer::Unbind(const FGameplayTag& Tag, const UObject* Target) const
{
	for(int32 i = 0; i < Bindings.Num(); i++)
	{
		if(Bindings[i].Delegate.GetUObject() != Target || !Bindings[i].Tag.MatchesTagExact(Tag)) continue;
		Bindings.RemoveAt(i);
		break;
	}
}
























/*
bool FAggregateTagContainer::operator==(const FAggregateTagContainer& Other) const
{
	if(TagCount.Num() != Other.TagCount.Num() ||
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
	if(ExactTagCount.IsEmpty()) return FString(TEXT("{}"));
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

bool FAggregateTagContainer::Serialize(FArchive& Ar)
{
	return true;
}

void FAggregateTagContainer::PostSerialize(const FArchive& Ar)
{
	TArray<FGameplayTag> Tags;
	TagCount.GetKeys(Tags);
	for(FGameplayTag& Tag : Tags)
		Tag.PostSerialize(Ar);
}



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

uint32 FAggregateTagContainer::GetTagCount(const FGameplayTag& Tag, const bool bExact) const
{
	const uint32* Count = bExact ? ExactTagCount.Find(Tag) : TagCount.Find(Tag);
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
*/































