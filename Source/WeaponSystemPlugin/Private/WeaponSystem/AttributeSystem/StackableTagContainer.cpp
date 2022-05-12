// Fill out your copyright notice in the Description page of Project Settings.

/*
#include "WeaponSystem/AttributeSystem/StackableTagContainer.h"

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

const TArray<FGameplayTag>& FAggregateGameplayTagContainer::GetContainerTags(const FGameplayTagContainer& Tags)
{
	return reinterpret_cast<const FGameplayTagParentAccessor&>(Tags).ParentTags;
}


void FAggregateGameplayTagContainer::AddTag(const FGameplayTag& Tag, const int32 Count)
{
	if(!Tag.IsValid() || Count <= 0) return;
	FindExactOrAdd(Tag) += Count;

	const auto OldAggrTagCount = AggregateTagCount;
	
	FindAggregateOrAdd(Tag) += Count;
	for(const FGameplayTag& ParentTag : GetParentTags(Tag))
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
		if(!TagCount[i].Tag.IsValid() || TagCount[i].Count <= 0)
		{
			TagCount.RemoveAt(i--);
			continue;
		}

		FindAggregateOrAdd(TagCount[i].Tag) += TagCount[i].Count;
		for(const FGameplayTag& ParentTag : GetParentTags(TagCount[i].Tag))
			FindAggregateOrAdd(ParentTag) += TagCount[i].Count;
	}

	// Call post serialize on tags
	for(Value& Value : TagCount) Value.Tag.PostSerialize(Ar);
	for(Value& AggregateValue : AggregateTagCount) AggregateValue.Tag.PostSerialize(Ar);
}

bool FAggregateGameplayTagContainer::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	Ar << TagCount;

	if(Ar.IsLoading())
	{
		const auto OldAggrTagCount = AggregateTagCount;

		AggregateTagCount.Empty();
		
		for(const Value& ExactValue : TagCount)
		{
			FindAggregateOrAdd(ExactValue.Tag) += ExactValue.Count;
			for(const FGameplayTag& AggregateParentTag : GetParentTags(ExactValue.Tag))
				FindAggregateOrAdd(AggregateParentTag) += ExactValue.Count;
		}

		BroadcastChanges(OldAggrTagCount);
	}

	return bOutSuccess = true;
}

void FAggregateGameplayTagContainer::AppendTags(const FGameplayTagContainer& Tags, const int32 Count)
{
	for(const FGameplayTag& Tag : GetContainerTags(Tags))
		AddTag(Tag, Count);
}

void FAggregateGameplayTagContainer::RemoveTags(const FGameplayTagContainer& Tags, const int32 Count)
{
	for(const FGameplayTag& Tag : GetContainerTags(Tags))
		RemoveTag(Tag, Count);
}

void FAggregateGameplayTagContainer::RemoveTagsExact(const FGameplayTagContainer& Tags, const int32 Count)
{
	for(const FGameplayTag& Tag : GetContainerTags(Tags))
		RemoveTagExact(Tag, Count);
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
	if(!Target || !MemFuncPtr) return;
	Bindings.Add(Binding::MakeUObject(Tag, Target, MemFuncPtr));
}

void FAggregateGameplayTagContainer::BindUFunction(const FGameplayTag& Tag, UObject* Target, const FName& FuncName) const
{
	if(!Target || !FuncName.IsValid()) return;
	Bindings.Add(Binding::MakeUFunction(Tag, Target, FuncName));
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
*/






















