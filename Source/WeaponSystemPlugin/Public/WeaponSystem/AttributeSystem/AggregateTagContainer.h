#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AggregateTagContainer.generated.h"


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

	template<typename FunctorType, typename... Args>
	FORCEINLINE static FAggregateDelegate MakeLambda(const FGameplayTag& Tag, FunctorType&& Lambda, Args... Vars)
	{
		TDelegate<void(const FAggregateGameplayTagContainer&, const FGameplayTag&, int32, int32)> NewDelegate;
		NewDelegate.BindLambda<FunctorType, Args...>(Lambda, Vars...);
		return FAggregateDelegate(Tag, NewDelegate);
	}
	
	FORCEINLINE static FAggregateDelegate MakeUFunction(const FGameplayTag& Tag, UObject* Target, const FName& FuncName)
	{
		TDelegate<void(const FAggregateGameplayTagContainer&, const FGameplayTag&, int32, int32)> NewDelegate;
		NewDelegate.BindUFunction(Target, FuncName);
		return FAggregateDelegate(Tag, NewDelegate);
	}
	
	FGameplayTag Tag;
	// OwningContainer, Tag, CurrentCount, OldCount
	TDelegate<void(const struct FAggregateGameplayTagContainer&, const FGameplayTag&, int32, int32)> Delegate;
};

/*
 *	A gameplay tag container with an associated tag count. Adding tags will add to the tag count within the container.
 *	There is an "exact tag count" and an "aggregate tag count". The exact tag count refers to the actual number of an
 *	exact tag within the container whereas the aggregate tag count refers to the overall count of exact tags and
 *	derived tags within the container. Like if there was 1 Item.Key and 1 Item.SoupCan, the aggregate tag count for
 *	Item would be 2, whereas the exact tag count would be 0 because there are no tags explicitly named Item. But there
 *	would be 1 exact tag for either Item.Key or Item.SoupCan. Comes built-in with a delegate for broadcasting specific
 *	tag-count changes. Net Serializable.
 */
USTRUCT(BlueprintType, Meta = (ShortTooltip = "Gameplay tag container with a count associated with each gameplay tag"))
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
	FAggregateGameplayTagContainer(const FGameplayTagContainer& Tags, const int32 Count = 1) { AppendTags(Tags, Count); }
	FAggregateGameplayTagContainer(const TArray<Value>& Tags) { AppendTags(Tags); }

	FORCEINLINE ThisStruct& operator=(const ThisStruct& Other) { TagCount = Other.TagCount; AggregateTagCount = Other.AggregateTagCount; return *this; }
	FORCEINLINE bool operator==(const ThisStruct& Other) const { return TagCount == Other.TagCount; }

	FORCEINLINE const TArray<Value>& GetExactTagValues() const { return TagCount; }
	FORCEINLINE const TArray<Value>& GetAggregateTagValues() const { return AggregateTagCount; }
	FORCEINLINE bool IsEmpty() const { return TagCount.IsEmpty(); }
	FORCEINLINE int32 Num() const { return TagCount.Num(); }
	FORCEINLINE bool HasAny(const FGameplayTagContainer& Tags) const { return AggregateTagCount.FindByPredicate([&Tags](const Value& Value)->bool{ return Tags.HasTagExact(Value.Tag); }) != nullptr; }
	FORCEINLINE bool HasAnyExact(const FGameplayTagContainer& Tags) const { return TagCount.FindByPredicate([&Tags](const Value& Value)->bool{ return Tags.HasTagExact(Value.Tag); }) != nullptr; }
	FORCEINLINE bool HasTag(const FGameplayTag& Tag) const { return AggregateTagCount.Contains(Tag); }
	FORCEINLINE bool HasTagExact(const FGameplayTag& Tag) const { return TagCount.Contains(Tag); }
	FORCEINLINE int32 GetTagCount(const FGameplayTag& Tag) const { const Value* Val = FindAggregate(Tag); return Val ? Val->Count : 0; }
	FORCEINLINE int32 GetTagCountExact(const FGameplayTag& Tag) const { const Value* Val = FindExact(Tag); return Val ? Val->Count : 0; }
	FString ToString(const bool bExact = true) const;
	FGameplayTagContainer MakeTagContainer() const;
	
	void AddTag(const FGameplayTag& Tag, const int32 Count = 1);
	void RemoveTag(const FGameplayTag& Tag, const int32 Count = 1);
	void RemoveTagExact(const FGameplayTag& Tag, const int32 Count = 1);
	void AppendTags(const FGameplayTagContainer& Tags, const int32 Count = 1);
	void AppendTags(const TArray<FAggregateGameplayTagValue>& Tags);
	void RemoveTags(const FGameplayTagContainer& Tags, const int32 Count = 1);
	void RemoveTagsExact(const FGameplayTagContainer& Tags, const int32 Count = 1);
	void RemoveTagsExact(const TArray<FAggregateGameplayTagValue>& Tags);
	void Empty();

	template<typename UserClass, bool bConst>
	void BindUObject(const FGameplayTag& Tag, UserClass* Target, const TMemFunPtrType<bConst, UserClass, void(const ThisStruct&, const FGameplayTag&, int32, int32)> MemFuncPtr) const;
	void BindUFunction(const FGameplayTag& Tag, UObject* Target, const FName& FuncName) const;
	void UnbindAll(const UObject* Target) const;
	void Unbind(const FGameplayTag& Tag, const UObject* Target) const;
	template<typename FunctorType, typename... Args>
	void BindLambda(const FGameplayTag& Tag, FunctorType&& Lambda, Args... Vars) const;
	void PostSerialize(const FArchive& Ar);
	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);
	
	FORCEINLINE void AppendTags(const FAggregateGameplayTagContainer& Other) { AppendTags(Other.TagCount); }
	FORCEINLINE void RemoveTagAll(const FGameplayTag& Tag) { RemoveTag(Tag, INT32_MAX); }
	FORCEINLINE void RemoveTagExactAll(const FGameplayTag& Tag) { RemoveTagExact(Tag, INT32_MAX); }
	FORCEINLINE void RemoveTagsAll(const FGameplayTagContainer& Tags) { RemoveTags(Tags, INT32_MAX); }
	FORCEINLINE void RemoveTagsExactAll(const FGameplayTagContainer& Tags) { RemoveTagsExact(Tags, INT32_MAX); }
	
	FORCEINLINE friend ThisStruct& operator+=(ThisStruct& Container, const Value& Value) { Container.AddTag(Value.Tag, Value.Count); return Container; }
	FORCEINLINE friend ThisStruct& operator+=(ThisStruct& Container, const ThisStruct& Other) { Container.AppendTags(Other); return Container; }
	FORCEINLINE friend ThisStruct& operator+=(ThisStruct& Container, const FGameplayTag& Tag) { Container.AddTag(Tag); return Container; }
	FORCEINLINE friend ThisStruct& operator+=(ThisStruct& Container, const FGameplayTagContainer& Tags) { Container.AppendTags(Tags); return Container; }
	
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
	static const TArray<FGameplayTag>& GetContainerParentTags(const FGameplayTagContainer& Tags);
	static const TArray<FGameplayTag>& GetContainerTags(const FGameplayTagContainer& Tags);

	// Exact gameplay tags with a count. Aggregated
	// counts are cached for quick searches
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true", DisplayName = "Gameplay Tag Count"))
	TArray<FAggregateGameplayTagValue> TagCount;

	// All exact and parent tags with aggregated tag counts.
	// Cached for increased search speed. Not editable
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient, Meta = (AllowPrivateAccess = "true", DisplayName = "Aggregate Gameplay Tag Count"))
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

FORCEINLINE FArchive& operator<<(FArchive& Ar, FAggregateGameplayTagContainer& Container)
{
	if(Ar.IsNetArchive())
	{
		bool bTemp;
		Container.NetSerialize(Ar, nullptr, bTemp);
	}
	else
	{
		static UScriptStruct* ScriptStruct = FAggregateGameplayTagContainer::StaticStruct();
		ScriptStruct->SerializeItem(Ar, &Container, nullptr);
		if(Ar.IsLoading())
			Container.PostSerialize(Ar);
	}
	return Ar;
}




DECLARE_DYNAMIC_DELEGATE_FourParams(FAggregateDynamicDelegate, const FAggregateGameplayTagContainer&, Container, const FGameplayTag&, Tag, int32, CurrentCount, int32, OldCount);

UCLASS(meta=(Keywords="aggregate,tag,container,add,count,num,gameplay"))
class WEAPONSYSTEMPLUGIN_API UAggregateGameplayTagContainerUtils final : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	// Get a string of all the exact tag counts
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "To Debug String"), Category = "Weapon System Function Library|Aggregate Container")
	static FString Conv_AggregateGameplayTagContainerToString(const FAggregateGameplayTagContainer& Container) { return Container.ToString(); }

	// Get a string of all aggregated tag counts
	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Aggregate Container")
	static FString GetAggregateTagCountDebugString(const FAggregateGameplayTagContainer& Container) { return Container.ToString(false); }

	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "To Gameplay Tag Container"), Category = "Weapon System Function Library|Aggregate Container")
	static FGameplayTagContainer Conv_AggregateGameplayTagContainerToGameplayTagContainer(const FAggregateGameplayTagContainer& Container) { return Container.MakeTagContainer(); }

	UFUNCTION(BlueprintPure, Meta = (DisplayName = "Make AggregateGameplayTagContainer", Keywords = "aggregate,gameplay,tag,container"), Category = "Weapon System Function Library|Aggregate Container")
	static void MakeAggregateGameplayTagContainer(const TArray<FAggregateGameplayTagValue>& Values, FAggregateGameplayTagContainer& OutContainer) { OutContainer.AppendTags(Values); }

	// Adds a specific tag to the container by the count amount
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Container")
	static void AddTag(UPARAM(ref) FAggregateGameplayTagContainer& Container, const FGameplayTag& Tag, const int32 Count = 1) { Container.AddTag(Tag, Count); }

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Container")
	static void AppendTags(UPARAM(ref) FAggregateGameplayTagContainer& Container, const TArray<FAggregateGameplayTagValue>& Tags) { Container.AppendTags(Tags); }

	// Removes all derived tags from the container by the count amount, if they exist. Remove Tag Exact is more useful in most cases
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Container")
	static void RemoveTag(UPARAM(ref) FAggregateGameplayTagContainer& Container, const FGameplayTag& Tag, const int32 Count = 1) { Container.RemoveTag(Tag, Count); }

	// Removes a specific tag from the container by the count amount, if it exists
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Container")
	static void RemoveTagExact(UPARAM(ref) FAggregateGameplayTagContainer& Container, const FGameplayTag& Tag, const int32 Count = 1) { Container.RemoveTagExact(Tag, Count); }

	// Remove the specified number of exact tags
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Container")
	static void RemoveTagsExact(UPARAM(ref) FAggregateGameplayTagContainer& Container, const TArray<FAggregateGameplayTagValue>& Tags) { Container.RemoveTagsExact(Tags); }

	// Remove all of the specified tag and it's derived tags
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag", DisplayName = "Remove Tag (all)"), Category = "Weapon System Function Library|Aggregate Container")
	static void RemoveTagAll(UPARAM(ref) FAggregateGameplayTagContainer& Container, const FGameplayTag& Tag) { Container.RemoveTagAll(Tag); }

	// Remove all of the specified tag
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag", DisplayName = "Remove Tag Exact (all)"), Category = "Weapon System Function Library|Aggregate Container")
	static void RemoveTagExactAll(UPARAM(ref) FAggregateGameplayTagContainer& Container, const FGameplayTag& Tag) { Container.RemoveTagExactAll(Tag); }

	// Remove all of the specified tags and their derived tags
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tags", DisplayName = "Remove Tags (all)"), Category = "Weapon System Function Library|Aggregate Container")
	static void RemoveTagsAll(UPARAM(ref) FAggregateGameplayTagContainer& Container, const FGameplayTagContainer& Tags) { Container.RemoveTagsAll(Tags); }

	// Remove all of the specified tags
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tags", DisplayName = "Remove Tags Exact (all)"), Category = "Weapon System Function Library|Aggregate Container")
	static void RemoveTagsExactAll(UPARAM(ref) FAggregateGameplayTagContainer& Container, const FGameplayTagContainer& Tags) { Container.RemoveTagsExactAll(Tags); }

	// Removes all tags from the container
	UFUNCTION(BlueprintCallable, Category = "Weapon System Function Library|Aggregate Container")
	static void Empty(UPARAM(ref) FAggregateGameplayTagContainer& Container) { Container.Empty(); }

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

	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Aggregate Container")
	static void GetExactTagValues(const FAggregateGameplayTagContainer& Container, TArray<FAggregateGameplayTagValue>& OutValues) { OutValues = Container.GetExactTagValues(); }

	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Aggregate Container")
	static void GetAggregateTagValues(const FAggregateGameplayTagContainer& Container, TArray<FAggregateGameplayTagValue>& OutValues) { OutValues = Container.GetAggregateTagValues(); }
};













/*
USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FAggregateTagValue
{
	GENERATED_BODY()

	FAggregateTagValue() = default;
	FAggregateTagValue(const FGameplayTag& Tag, const int32 Count)
		: Tag(Tag), Count(Count) {}
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag Tag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Count;
};

/*
 *	A gameplay tag container with a numeric tag count assigned to each owned tag.
 *	Adding / removing tags will first increment / decrement the count for that tag before removing
 *	once the count reaches 0. An example is if you had 2 Item.Pickaxe and 5 of Item.Shovel
 *	you will have a count of 7 for GetTagCount("Item") and 0 for GetTagCountExact("Item")
 *	(because there are no tags explicitly called just "Item"). Theoretically should be fairly slow at
 *	Adding / Removing tags but fast at getting the desired tag's count. Supports dynamic Net Serialization.
 */
/*
USTRUCT(BlueprintType, Meta = (ShortTooltip = "Gameplay Tag Container with a numeric tag counter"))
struct WEAPONSYSTEMPLUGIN_API FAggregateTagContainer
{
	GENERATED_BODY()

	FAggregateTagContainer() = default;
	FAggregateTagContainer(const FAggregateTagContainer& Other) : TagCount(Other.TagCount), ExactTagCount(Other.ExactTagCount) {}
	FAggregateTagContainer(FAggregateTagContainer&& Other) noexcept : TagCount(MoveTemp(Other.TagCount)), ExactTagCount(MoveTemp(Other.ExactTagCount)) {}
	FAggregateTagContainer(const FGameplayTagContainer& Tags, const uint32 Count = 1) { AppendTags(Tags, Count); }
	
	bool operator==(const FAggregateTagContainer& Other) const;
	FORCEINLINE FAggregateTagContainer& operator=(const FAggregateTagContainer& Other) { TagCount = Other.TagCount; ExactTagCount = Other.ExactTagCount; return *this; }
	FORCEINLINE operator FGameplayTagContainer() const { return MakeTagContainer(); }
	
	FORCEINLINE bool HasTag(const FGameplayTag& Tag, const bool bExact = false) const { return bExact ? GetExactTags().Contains(Tag) : GetAllTags().Contains(Tag); }
	FORCEINLINE bool HasAll(const FGameplayTagContainer& Tags, const bool bExact = false) const { return bExact ? MakeTagContainer().HasAllExact(Tags) : MakeTagContainer().HasAll(Tags); }
	FORCEINLINE bool HasAny(const FGameplayTagContainer& Tags, const bool bExact = false) const { return bExact ? MakeTagContainer().HasAnyExact(Tags) : MakeTagContainer().HasAny(Tags); }
	FORCEINLINE bool IsEmpty() const { return ExactTagCount.IsEmpty(); }

	FORCEINLINE const TMap<FGameplayTag, uint32>& GetTagCountMap() const { return TagCount; }
	FORCEINLINE const TMap<FGameplayTag, uint32>& GetExactTagCountMap() const { return ExactTagCount; }
	
	TArray<FGameplayTag> GetExactTags() const;
	TArray<FGameplayTag> GetAllTags() const;
	FGameplayTagContainer MakeTagContainer() const;

	void Empty();
	void InitializeContainer(const TArray<FAggregateTagValue>& Values);
	void AddTag(const FGameplayTag& Tag, const int32 Num = 1);
	void AppendTags(const FGameplayTagContainer& Tags, const int32 Num = 1);
	void RemoveTag(const FGameplayTag& Tag, const int32 Num = 1, const bool bExact = false);
	void RemoveTags(const FGameplayTagContainer& Tags, const int32 Num = 1, const bool bExact = false);
	uint32 GetTagCount(const FGameplayTag& Tag, const bool bExact = false) const;
	FString ToString(const bool bExact = true) const;

	bool Serialize(FArchive& Ar);
	void PostSerialize(const FArchive& Ar);
	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);

protected:
	void Internal_AddTagToMap(const FGameplayTag& Tag, const int32 Num);
	void Internal_AppendTagsToMap(const FGameplayTagContainer& Tags, const int32 Num);

	// All tag counts, including parents
	UPROPERTY(EditAnywhere, NotReplicated)
	TMap<FGameplayTag, uint32> TagCount;

	// Exact tag count. Only count of specific tag
	TMap<FGameplayTag, uint32> ExactTagCount;
};

template<> 
struct TStructOpsTypeTraits<FAggregateTagContainer> : TStructOpsTypeTraitsBase2<FAggregateTagContainer>
{
	enum
	{
		WithCopy = true,
		WithSerializer = true,
		WithPostSerialize = true,
		WithNetSerializer = true,
		WithIdenticalViaEquality = true,
	};
};


/*
 *	An Aggregate Tag Container with a delegate for broadcasting changes. More expensive for
 *	Adding / Removing tags than the Aggregate Tag Container. Broadcasts changes on Net Serialized as well.
 *	Useful for tracking state
 */
/*
USTRUCT(BlueprintType, Meta = (ShortTooltip = "Aggregate Tag Container with a delegate for change events"))
struct WEAPONSYSTEMPLUGIN_API FAggregateTagContainerNotify : public FAggregateTagContainer
{
	GENERATED_BODY()
protected:
	typedef FAggregateTagContainer Super;
	typedef FAggregateTagContainerNotify ThisStruct;
public:
	FAggregateTagContainerNotify() = default;
	FAggregateTagContainerNotify(const FAggregateTagContainer& Other) : Super(Other) {}
	FAggregateTagContainerNotify(FAggregateTagContainer&& Other) : Super(Other) {}
	FAggregateTagContainerNotify(const FGameplayTagContainer& Tags, const uint32 Count = 1) : Super(Tags, Count) {}
	
	FORCEINLINE bool operator==(const ThisStruct& Other) const { return Super::operator==(Other); }
	FORCEINLINE ThisStruct& operator=(const ThisStruct& Other) { return (ThisStruct&)Super::operator=(Other); }
	FORCEINLINE ThisStruct& operator=(const FGameplayTagContainer& Tags) { Empty(); AppendTags(Tags, 1); return *this; }
	FORCEINLINE void PostSerialize(const FArchive& Ar) { Super::PostSerialize(Ar); }

	template<typename UserClass>
	void BindOnChanged(const FGameplayTag& Tag, UserClass* Target, TMemFunPtrType<false, UserClass, void(const FAggregateTagContainer&, const FGameplayTag&, int32, int32)> Function) const;
	void BindUFunction(const FGameplayTag& Tag, class UObject* Target, const FName& FunctionName) const;
	void BindScriptDelegate(const FGameplayTag& Tag, const class FAggregateContainerChangedUniDelegate& Delegate) const;
	void RemoveAll(class UObject* Target) const;
	void Remove(class UObject* Target, const FGameplayTag& Tag) const;
	void RemoveScriptDelegate(const class FAggregateContainerChangedUniDelegate& Delegate) const;

	FORCEINLINE void AddTag(const FGameplayTag& Tag, const int32 Num = 1)
	{
		if(Bindings.IsEmpty()) return Super::AddTag(Tag, Num);
		const auto OldTags = TagCount;
		Super::AddTag(Tag, Num);
		Internal_BroadcastChanges(OldTags);
	}
	FORCEINLINE void AppendTags(const FGameplayTagContainer& Tags, const int32 Num = 1)
	{
		if(Bindings.IsEmpty()) return Super::AppendTags(Tags, Num);
		const auto OldTags = TagCount;
		Super::AppendTags(Tags, Num);
		Internal_BroadcastChanges(OldTags);
	}
	FORCEINLINE void RemoveTag(const FGameplayTag& Tag, const int32 Num = 1, const bool bExact = false)
	{
		if(Bindings.IsEmpty()) return Super::RemoveTag(Tag, Num, bExact);
		const auto OldTags = TagCount;
		Super::RemoveTag(Tag, Num, bExact);
		Internal_BroadcastChanges(OldTags);
	}
	FORCEINLINE void RemoveTags(const FGameplayTagContainer& Tags, const int32 Num = 1, const bool bExact = false)
	{
		if(Bindings.IsEmpty()) return Super::RemoveTags(Tags, Num, bExact);
		const auto OldTags = TagCount;
		Super::RemoveTags(Tags, Num, bExact);
		Internal_BroadcastChanges(OldTags);
	}
	FORCEINLINE void Empty()
	{
		if(Bindings.IsEmpty()) return Super::Empty();
		const auto OldTags = TagCount;
		Super::Empty();
		Internal_BroadcastChanges(OldTags);
	}
	FORCEINLINE void InitializeContainer(const TArray<FAggregateTagValue>& Values)
	{
		if(Bindings.IsEmpty()) return Super::InitializeContainer(Values);
		const auto OldTags = TagCount;
		Super::InitializeContainer(Values);
		Internal_BroadcastChanges(OldTags);
	}
	FORCEINLINE bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
	{
		if(Bindings.IsEmpty()) return Super::NetSerialize(Ar, Map, bOutSuccess);
		const auto OldTags = TagCount;
		const bool bReturnVal = Super::NetSerialize(Ar, Map, bOutSuccess);
		Internal_BroadcastChanges(OldTags);
		return bReturnVal;
	}

protected:
	void Internal_BroadcastChanges(const TMap<FGameplayTag, uint32>& OldTagCount) const;
	void Internal_Broadcast(const FGameplayTag& Tag, const float CurrentValue, const float OldValue) const;

	typedef TDelegate<void(const FAggregateTagContainerNotify&, const FGameplayTag&, int32, int32)> CallbackDelegate;
	mutable TArray<TPair<FGameplayTag, CallbackDelegate>> Bindings;
};

template<>
struct TStructOpsTypeTraits<FAggregateTagContainerNotify> : TStructOpsTypeTraitsBase2<FAggregateTagContainerNotify>
{
	enum
	{
		WithCopy = true,
		WithSerializer = true,
		WithPostSerialize = true,
		WithNetSerializer = true,
		WithIdenticalViaEquality = true,
	};
};



/*
 *
 */
/*
UINTERFACE(MinimalAPI, BlueprintType)
class UAggregateTagInterface : public UInterface
{
	GENERATED_BODY()
};

class WEAPONSYSTEMPLUGIN_API IAggregateTagInterface
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void GetTags(FAggregateTagContainer& OutTags) const;
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Meta = (AutoCreateRefTerm = "Tag"))
	int32 GetTagCount(const FGameplayTag& Tag, const bool bExact = false) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Meta = (AutoCreateRefTerm = "Tag"))
	bool HasTag(const FGameplayTag& Tag) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Meta = (AutoCreateRefTerm = "Tags"))
	bool HasAny(const FGameplayTagContainer& Tags) const;
	
protected:
	virtual void GetTags_Implementation(FAggregateTagContainer& OutTags) const {}
	virtual int32 GetTagCount_Implementation(const FGameplayTag& Tag, const bool bExact = false) const { return 0; }
	virtual bool HasTag_Implementation(const FGameplayTag& Tag, const bool bExact = false) const { return GetTagCount(Tag) > 0; }
	virtual bool HasAny_Implementation(const FGameplayTagContainer& Tags, const bool bExact = false) const { return false; }
};

















DECLARE_DYNAMIC_DELEGATE_FourParams(FAggregateContainerChangedUniDelegate, const FAggregateTagContainerNotify&, TagContainer, const FGameplayTag&, Tag, int32, CurrentCount, int32, OldCount);

UCLASS(Meta = (Keywords = "aggregate,container,tag,num,count,tags,add,remove"))
class WEAPONSYSTEMPLUGIN_API UAggregateTagContainerUtils final : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Aggregate Tags to Tag Container"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static FGameplayTagContainer Conv_AggregateTagContainerToGameplayTagContainer(const FAggregateTagContainer& TagContainer) { return TagContainer.MakeTagContainer(); }

	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Aggregate Tags to String"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static FString Conv_AggregateTagContainerToString(const FAggregateTagContainer& TagContainer) { return TagContainer.ToString(); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Values"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static void MakeLiteralAggregateTagContainer(const TArray<FAggregateTagValue>& Values, FAggregateTagContainer& OutTagContainer) { OutTagContainer.InitializeContainer(Values); }

	UFUNCTION(BlueprintCallable, Category = "Weapon System Function Library|Aggregate Tag Container")
	static void Empty(UPARAM(ref) FAggregateTagContainer& TagContainer) { TagContainer.Empty(); }
	
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static void AppendTags(UPARAM(ref) FAggregateTagContainer& TagContainer, const FGameplayTagContainer& Tags, const int32 Count = 1) { TagContainer.AppendTags(Tags, Count); }

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static void AddTag(UPARAM(ref) FAggregateTagContainer& TagContainer, const FGameplayTag& Tag, const int32 Count = 1) { TagContainer.AddTag(Tag, Count); }

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Values"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static void InitializeContainer(UPARAM(ref) FAggregateTagContainer& TagContainer, const TArray<FAggregateTagValue>& Values) { TagContainer.InitializeContainer(Values); }

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static void RemoveTags(UPARAM(ref) FAggregateTagContainer& TagContainer, const FGameplayTagContainer& Tags, const int32 Count = 1, const bool bExact = false) { TagContainer.RemoveTags(Tags, Count, bExact); }

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static void RemoveTag(UPARAM(ref) FAggregateTagContainer& TagContainer, const FGameplayTag& Tag, const int32 Count = 1, const bool bExact = false) { TagContainer.RemoveTag(Tag, Count, bExact); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tag", DisplayName = "Get Tag Count", Keywords = "num,count"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static int32 GetTagCount(const FAggregateTagContainer& TagContainer, const FGameplayTag& Tag, const bool bExact = false) { return TagContainer.GetTagCount(Tag, bExact); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static bool HasTag(const FAggregateTagContainer& TagContainer, const FGameplayTag& Tag) { return TagContainer.HasTag(Tag); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static bool HasAny(const FAggregateTagContainer& TagContainer, const FGameplayTagContainer& Tags) { return TagContainer.HasAny(Tags); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static bool HasAll(const FAggregateTagContainer& TagContainer, const FGameplayTagContainer& Tags) { return TagContainer.HasAll(Tags); }

	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Aggregate Tag Container")
	static bool IsEmpty(const FAggregateTagContainer& TagContainer) { return TagContainer.IsEmpty(); }
};

UCLASS(Meta = (Keywords = "aggregate,container,tag,num,count,tags,add,remove,notify"))
class WEAPONSYSTEMPLUGIN_API UAggregateTagContainerNotifyUtils final : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static void BindOnChanged(const FAggregateTagContainerNotify& TagContainer, const FGameplayTag& Tag, const FAggregateContainerChangedUniDelegate& Delegate) { TagContainer.BindScriptDelegate(Tag, Delegate); }

	UFUNCTION(BlueprintCallable, Meta = (DefaultToSelf = "Target"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static void UnbindAll(class UObject* Target, const FAggregateTagContainerNotify& TagContainer) { TagContainer.RemoveAll(Target); }

	UFUNCTION(BlueprintCallable, Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static void Unbind(const FAggregateTagContainerNotify& TagContainer, const FAggregateContainerChangedUniDelegate& Delegate) { TagContainer.RemoveScriptDelegate(Delegate); }
	
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Aggregate Tags to Tag Container"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static FGameplayTagContainer Conv_AggregateTagContainerToGameplayTagContainer(const FAggregateTagContainerNotify& TagContainer) { return TagContainer.MakeTagContainer(); }

	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Aggregate Tags to String"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static FString Conv_AggregateTagContainerToString(const FAggregateTagContainerNotify& TagContainer) { return TagContainer.ToString(); }

	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Aggregate Tags Notify to Aggregate Tags"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static FAggregateTagContainer Conv_AggregateTagContainerNotifyToAggregateTagContainer(const FAggregateTagContainerNotify& TagContainer) { return static_cast<const FAggregateTagContainer&>(TagContainer); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Values"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static void MakeLiteralAggregateTagContainer(const TArray<FAggregateTagValue>& Values, FAggregateTagContainerNotify& OutTagContainer) { OutTagContainer.InitializeContainer(Values); }

	UFUNCTION(BlueprintCallable, Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static void Empty(UPARAM(ref) FAggregateTagContainerNotify& TagContainer) { TagContainer.Empty(); }
	
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static void AppendTags(UPARAM(ref) FAggregateTagContainerNotify& TagContainer, const FGameplayTagContainer& Tags, const int32 Count = 1) { TagContainer.AppendTags(Tags, Count); }

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static void AddTag(UPARAM(ref) FAggregateTagContainerNotify& TagContainer, const FGameplayTag& Tag, const int32 Count = 1) { TagContainer.AddTag(Tag, Count); }

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Values"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static void InitializeContainer(UPARAM(ref) FAggregateTagContainerNotify& TagContainer, const TArray<FAggregateTagValue>& Values) { TagContainer.InitializeContainer(Values); }

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static void RemoveTags(UPARAM(ref) FAggregateTagContainerNotify& TagContainer, const FGameplayTagContainer& Tags, const int32 Count = 1, const bool bExact = false) { TagContainer.RemoveTags(Tags, Count, bExact); }

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static void RemoveTag(UPARAM(ref) FAggregateTagContainerNotify& TagContainer, const FGameplayTag& Tag, const int32 Count = 1, const bool bExact = false) { TagContainer.RemoveTag(Tag, Count, bExact); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tag", DisplayName = "Get Tag Count", Keywords = "num,count"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static int32 GetTagCount(const FAggregateTagContainerNotify& TagContainer, const FGameplayTag& Tag, const bool bExact = false) { return TagContainer.GetTagCount(Tag, bExact); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static bool HasTag(const FAggregateTagContainerNotify& TagContainer, const FGameplayTag& Tag) { return TagContainer.HasTag(Tag); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static bool HasAny(const FAggregateTagContainerNotify& TagContainer, const FGameplayTagContainer& Tags) { return TagContainer.HasAny(Tags); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static bool HasAll(const FAggregateTagContainerNotify& TagContainer, const FGameplayTagContainer& Tags) { return TagContainer.HasAll(Tags); }

	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static bool IsEmpty(const FAggregateTagContainerNotify& TagContainer) { return TagContainer.IsEmpty(); }
};
*/






