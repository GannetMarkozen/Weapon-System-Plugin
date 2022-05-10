#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AggregateTagContainer.generated.h"


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
	
	FORCEINLINE bool HasTag(const FGameplayTag& Tag) const { return GetAllTags().Contains(Tag); }
	FORCEINLINE bool HasAll(const FGameplayTagContainer& Tags) const { return MakeTagContainer().HasAll(Tags); }
	FORCEINLINE bool HasAny(const FGameplayTagContainer& Tags) const { return MakeTagContainer().HasAny(Tags); }
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
	uint32 GetTagCount(const FGameplayTag& Tag) const;
	uint32 GetTagCountExact(const FGameplayTag& Tag) const;
	FString ToString(const bool bExact = true) const;
	
	//bool Serialize(FArchive& Ar);
	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);

protected:
	void Internal_AddTagToMap(const FGameplayTag& Tag, const int32 Num);
	void Internal_AppendTagsToMap(const FGameplayTagContainer& Tags, const int32 Num);

	// All tag counts, including parents
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
		//WithSerializer = true,
		WithNetSerializer = true,
		WithIdenticalViaEquality = true,
	};
};


/*
 *	An Aggregate Tag Container with a delegate for broadcasting changes. More expensive for
 *	Adding / Removing tags than the Aggregate Tag Container. Broadcasts changes on Net Serialized as well.
 *	Useful for tracking state
 */
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
		//WithSerializer = true,
		WithNetSerializer = true,
		WithIdenticalViaEquality = true,
	};
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
	static int32 GetNumTags(const FAggregateTagContainer& TagContainer, const FGameplayTag& Tag, const bool bExact = false) { return bExact ? TagContainer.GetTagCountExact(Tag) : TagContainer.GetTagCount(Tag); }

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
	static int32 GetNumTags(const FAggregateTagContainerNotify& TagContainer, const FGameplayTag& Tag, const bool bExact = false) { return bExact ? TagContainer.GetTagCountExact(Tag) : TagContainer.GetTagCount(Tag); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static bool HasTag(const FAggregateTagContainerNotify& TagContainer, const FGameplayTag& Tag) { return TagContainer.HasTag(Tag); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static bool HasAny(const FAggregateTagContainerNotify& TagContainer, const FGameplayTagContainer& Tags) { return TagContainer.HasAny(Tags); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static bool HasAll(const FAggregateTagContainerNotify& TagContainer, const FGameplayTagContainer& Tags) { return TagContainer.HasAll(Tags); }

	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Aggregate Tag Container Notify")
	static bool IsEmpty(const FAggregateTagContainerNotify& TagContainer) { return TagContainer.IsEmpty(); }
};













