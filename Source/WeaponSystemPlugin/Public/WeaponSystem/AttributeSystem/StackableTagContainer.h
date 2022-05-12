// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
/*
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StackableTagContainer.generated.h"


USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FAggregateGameplayTagValue
{
	GENERATED_BODY()

	FAggregateGameplayTagValue() = default;
	FAggregateGameplayTagValue(const FAggregateGameplayTagValue& Other) : Tag(Other.Tag), Count(Other.Count) {}
	FAggregateGameplayTagValue(const FGameplayTag& Tag, const int32 Count) : Tag(Tag), Count(Count) {}
	FORCEINLINE bool operator==(const FAggregateGameplayTagValue& Other) const { return Tag == Other.Tag && Count == Other.Count; }
	FORCEINLINE bool operator==(const FGameplayTag& InTag) const { return Tag.MatchesTagExact(InTag); }
	FORCEINLINE FAggregateGameplayTagValue& operator+=(const int32 InCount) { Count += InCount; return *this; }
	FORCEINLINE FAggregateGameplayTagValue& operator-=(const int32 InCount) { Count -= InCount; return *this; }
	FORCEINLINE FAggregateGameplayTagValue& operator=(const int32 InCount) { Count = InCount; return *this; }
	FORCEINLINE operator const FGameplayTag&() const { return Tag; }
	FORCEINLINE operator int32() const { return Count; }

	FORCEINLINE friend FArchive& operator<<(FArchive& Ar, FAggregateGameplayTagValue& Value) { Ar << Value.Tag << Value.Count; return Ar; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag Tag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ClampMin = "1"))
	int32 Count = 1;
};

struct WEAPONSYSTEMPLUGIN_API FAggregateDelegate
{
	FAggregateDelegate() = default;
	FAggregateDelegate(const FGameplayTag& Tag)
		: Tag(Tag) {}
	FAggregateDelegate(const FGameplayTag& Tag, const TDelegate<void(const struct FAggregateGameplayTagContainer&, const FGameplayTag&, int32, int32)>& Delegate)
		: Tag(Tag), Delegate(Delegate) {}

	template<typename UserClass, bool bConst>
	FORCEINLINE static FAggregateDelegate MakeUObject(const FGameplayTag& Tag, UserClass* Target,
		const TMemFunPtrType<bConst, UserClass, void(const struct FAggregateGameplayTagContainer&, const FGameplayTag&, int32, int32)> MemFuncPtr)
	{
		FAggregateDelegate Binding(Tag);
		Binding.Delegate.BindUObject(Target, MemFuncPtr);
		return Binding;
	}
	
	FORCEINLINE static FAggregateDelegate MakeUFunction(const FGameplayTag& Tag, UObject* Target, const FName& FuncName)
	{
		TDelegate<void(const struct FAggregateGameplayTagContainer&, const FGameplayTag&, int32, int32)> NewDelegate;
		NewDelegate.BindUFunction(Target, FuncName);
		return FAggregateDelegate(Tag, NewDelegate);
	}
	
	FGameplayTag Tag;
	// OwningContainer, Tag, CurrentCount, OldCount
	TDelegate<void(const struct FAggregateGameplayTagContainer&, const FGameplayTag&, int32, int32)> Delegate;
};


USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FAggregateGameplayTagContainer
{
	GENERATED_BODY()
protected:
	friend class UAggregateGameplayTagContainerUtils;
	typedef FAggregateGameplayTagContainer ThisStruct;
	typedef FAggregateGameplayTagValue Value;
	typedef FAggregateDelegate Binding;
public:	
	
	FAggregateGameplayTagContainer() = default;
	FAggregateGameplayTagContainer(const ThisStruct& Other) : TagCount(Other.TagCount), AggregateTagCount(Other.AggregateTagCount) {}
	FAggregateGameplayTagContainer(ThisStruct&& Other) noexcept : TagCount(MoveTemp(Other.TagCount)), AggregateTagCount(MoveTemp(Other.AggregateTagCount)) {}

	FORCEINLINE ThisStruct& operator=(const ThisStruct& Other) { TagCount = Other.TagCount; AggregateTagCount = Other.AggregateTagCount; return *this; }
	FORCEINLINE bool operator==(const ThisStruct& Other) const { return TagCount == Other.TagCount; }
	
	FORCEINLINE bool IsEmpty() const { return TagCount.IsEmpty(); }
	FORCEINLINE int32 Num() const { return TagCount.Num(); }
	FORCEINLINE bool HasTag(const FGameplayTag& Tag) const { return AggregateTagCount.Contains(Tag); }
	bool HasAny(const FGameplayTagContainer& Tags) const { for(const auto& AggrVal : AggregateTagCount) if(Tags.HasTagExact(AggrVal.Tag)) return true; return false; }
	bool HasAnyExact(const FGameplayTagContainer& Tags) const { for(const auto& Val : TagCount) if(Tags.HasTagExact(Val.Tag)) return true; return false; }
	FORCEINLINE bool HasTagExact(const FGameplayTag& Tag) const { return TagCount.Contains(Tag); }
	FORCEINLINE int32 GetTagCount(const FGameplayTag& Tag) const { const Value* Val = FindAggregate(Tag); return Val ? Val->Count : 0; }
	FORCEINLINE int32 GetTagCountExact(const FGameplayTag& Tag) const { const Value* Val = FindExact(Tag); return Val ? Val->Count : 0; }
	FString ToString(const bool bExact = true) const;
	FGameplayTagContainer MakeTagContainer() const;
	
	void AddTag(const FGameplayTag& Tag, const int32 Count = 1);
	void RemoveTag(const FGameplayTag& Tag, const int32 Count = 1);
	void RemoveTagExact(const FGameplayTag& Tag, const int32 Count = 1);
	void AppendTags(const FGameplayTagContainer& Tags, const int32 Count = 1);
	void RemoveTags(const FGameplayTagContainer& Tags, const int32 Count = 1);
	void RemoveTagsExact(const FGameplayTagContainer& Tags, const int32 Count = 1);

	template<typename UserClass, bool bConst>
	void BindUObject(const FGameplayTag& Tag, UserClass* Target, const TMemFunPtrType<bConst, UserClass, void(const ThisStruct&, const FGameplayTag&, int32, int32)> MemFuncPtr) const;
	void BindUFunction(const FGameplayTag& Tag, UObject* Target, const FName& FuncName) const;
	void UnbindAll(const UObject* Target) const;
	void Unbind(const FGameplayTag& Tag, const UObject* Target) const;

	void PostSerialize(const FArchive& Ar);
	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);
	
protected:
	FORCEINLINE Value& FindExactOrAdd(const FGameplayTag& Tag) { Value* ValuePtr = FindExact(Tag); return ValuePtr ? *ValuePtr : TagCount.Add_GetRef(Value(Tag, 0)); }
	FORCEINLINE Value& FindAggregateOrAdd(const FGameplayTag& Tag) { Value* ValuePtr = FindAggregate(Tag); return ValuePtr ? *ValuePtr : AggregateTagCount.Add_GetRef(Value(Tag, 0)); }
	FORCEINLINE Value* FindExact(const FGameplayTag& Tag) { return TagCount.FindByPredicate([&Tag](const Value& Value)->bool{ return Tag.MatchesTagExact(Value.Tag); }); }
	FORCEINLINE const Value* FindExact(const FGameplayTag& Tag) const { return TagCount.FindByPredicate([&Tag](const Value& Value)->bool{ return Tag.MatchesTagExact(Value.Tag); }); }
	FORCEINLINE Value* FindAggregate(const FGameplayTag& Tag) { return AggregateTagCount.FindByPredicate([&Tag](const Value& Value)->bool{ return Tag.MatchesTagExact(Value.Tag); }); }
	FORCEINLINE const Value* FindAggregate(const FGameplayTag& Tag) const { return AggregateTagCount.FindByPredicate([&Tag](const Value& Value)->bool{ return Tag.MatchesTagExact(Value.Tag); }); }
	
	
	void BroadcastChange(const FGameplayTag& Tag, const int32 CurrentCount, const int32 OldCount) const;
	void BroadcastChanges(const TArray<Value>& OldAggregateTagCount) const;
	
	static const TArray<FGameplayTag>& GetParentTags(const FGameplayTag& Tag);
	static const TArray<FGameplayTag>& GetContainerTags(const FGameplayTagContainer& Tags);
	
	//void Internal_RemoveTag(Value& ExactValue, Value& AggregateValue, const int32 Count);

	// Exact gameplay tags with a count
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"))
	TArray<FAggregateGameplayTagValue> TagCount;

	// Cached tags of aggregated tag count values from
	// tag count child tags. For faster searches
	UPROPERTY(Transient)
	TArray<FAggregateGameplayTagValue> AggregateTagCount;

	// Binding bindings for changed event
	mutable TArray<FAggregateDelegate> Bindings;
};

template<>
struct TStructOpsTypeTraits<FAggregateGameplayTagContainer> : TStructOpsTypeTraitsBase2<FAggregateGameplayTagContainer>
{
	enum
	{
		WithCopy = true,
		WithPostSerialize = true,
		WithNetSerializer = true,
		WithIdenticalViaEquality = true,
	};
};


DECLARE_DYNAMIC_DELEGATE_FourParams(FAggregateDynamicDelegate, const FAggregateGameplayTagContainer&, Container, const FGameplayTag&, Tag, int32, CurrentCount, int32, OldCount);

UCLASS(meta=(Keywords="aggregate,tag,container,add,count,num"))
class WEAPONSYSTEMPLUGIN_API UAggregateGameplayTagContainerUtils final : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Aggregate Tag Container to String"), Category = "Weapon System Function Library|Aggregate Container")
	static FString Conv_AggregateGameplayTagContainerToString(const FAggregateGameplayTagContainer& Container) { return Container.ToString(); }

	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Aggregate Container")
	static FString GetAggregateTagCountDebugString(const FAggregateGameplayTagContainer& Container) { return Container.ToString(false); }

	// Adds a specific tag to the container by the count amount
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Container")
	static void AddTag(UPARAM(ref) FAggregateGameplayTagContainer& Container, const FGameplayTag& Tag, const int32 Count = 1) { Container.AddTag(Tag, Count); }

	// Removes all derived tags from the container by the count amount, if they exist
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Container")
	static void RemoveTag(UPARAM(ref) FAggregateGameplayTagContainer& Container, const FGameplayTag& Tag, const int32 Count = 1) { Container.RemoveTag(Tag, Count); }

	// Removes a specific tag from the container by the count amount, if it exists
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Container")
	static void RemoveTagExact(UPARAM(ref) FAggregateGameplayTagContainer& Container, const FGameplayTag& Tag, const int32 Count = 1) { Container.RemoveTagExact(Tag, Count); }

	// Bind an event that's called whenever the tag count for the specified tag changes (aggregated from child tags, not exact)
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Container")
	static void BindTagCountChanged(const FAggregateGameplayTagContainer& Container, const FGameplayTag& Tag, const FAggregateDynamicDelegate& Delegate) { Container.BindUFunction(Tag, (UObject*)Delegate.GetUObject(), Delegate.GetFunctionName()); }
	
	UFUNCTION(BlueprintCallable, Meta = (DefaultToSelf = "Target"), Category = "Weapon System Function Library|Aggregate Container")
	static void UnbindAll(const FAggregateGameplayTagContainer& Container, const UObject* Target) { Container.UnbindAll(Target); }
	
	UFUNCTION(BlueprintCallable, Meta = (DefaultToSelf = "Target", AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Container")
	static void Unbind(const FAggregateGameplayTagContainer& Container, const FGameplayTag& Tag, const UObject* Target) { Container.Unbind(Tag, Target); }

	// Get the number of tags derived from the tag parameter
	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Container")
	static int32 GetTagCount(const FAggregateGameplayTagContainer& Container, const FGameplayTag& Tag) { return Container.GetTagCount(Tag); }

	// Get the number of tags that exactly match the tag parameter
	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Container")
	static int32 GetTagCountExact(const FAggregateGameplayTagContainer& Container, const FGameplayTag& Tag) { return Container.GetTagCountExact(Tag); }
};
*/











