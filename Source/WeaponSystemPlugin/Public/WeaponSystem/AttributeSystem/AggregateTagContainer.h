#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AggregateTagContainer.generated.h"


USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FAggregateTagContainer
{
	GENERATED_BODY()

	FAggregateTagContainer() = default;
	FAggregateTagContainer(const FGameplayTagContainer& Tags) : OwnedTags(Tags) {}
	FAggregateTagContainer(const FAggregateTagContainer& Other) : OwnedTags(Other.OwnedTags), TagCount(Other.TagCount) {}
	
	bool operator==(const FAggregateTagContainer& Other) const;
	FORCEINLINE FAggregateTagContainer& operator=(const FAggregateTagContainer& Other) { OwnedTags = Other.OwnedTags; TagCount = Other.TagCount; ExactTagCount = Other.ExactTagCount; return *this; }
	FORCEINLINE operator const FGameplayTagContainer&() const { return OwnedTags; }

	FORCEINLINE const FGameplayTagContainer& GetTags() const { return OwnedTags; }
	FORCEINLINE bool HasTag(const FGameplayTag& Tag) const { return OwnedTags.HasTag(Tag); }
	FORCEINLINE bool HasAll(const FGameplayTagContainer& Tags) const { return OwnedTags.HasAll(Tags); }
	FORCEINLINE bool HasAny(const FGameplayTagContainer& Tags) const { return OwnedTags.HasAny(Tags); }
	FORCEINLINE bool IsEmpty() const { return OwnedTags.IsEmpty(); }

	void Empty();
	void AddTag(const FGameplayTag& Tag, const int32 Num = 1);
	void AppendTags(const FGameplayTagContainer& Tags, const int32 Num = 1);
	void RemoveTag(const FGameplayTag& Tag, const int32 Num = 1, const bool bExact = false);
	void RemoveTags(const FGameplayTagContainer& Tags, const int32 Num = 1, const bool bExact = false);
	uint32 GetNumTags(const FGameplayTag& Tag) const;
	uint32 GetNumTagsExact(const FGameplayTag& Tag) const;
	FString ToString(const bool bExactTags = false) const;

	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess);
	
protected:
	void Internal_AddTagToMap(const FGameplayTag& Tag, const int32 Num);
	void Internal_AppendTagsToMap(const FGameplayTagContainer& Tags, const int32 Num);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTagContainer OwnedTags;
	
	TMap<FGameplayTag, uint32> TagCount;
	TMap<FGameplayTag, uint32> ExactTagCount;
};

template<>
struct TStructOpsTypeTraits<FAggregateTagContainer> : TStructOpsTypeTraitsBase2<FAggregateTagContainer>
{
	enum
	{
		WithCopy = true,
		WithNetSerializer = true,
		WithIdenticalViaEquality = true,
	};
};




USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FAggregateTagValue
{
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag Tag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Count;
};


UCLASS(Meta = (Keywords = "aggregate,container,tag,num,count,tags,add,remove"))
class WEAPONSYSTEMPLUGIN_API UAggregateTagContainerUtils final : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Aggregate Tags to Tag Container"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static FGameplayTagContainer Conv_AggregateTagContainerToGameplayTagContainer(const FAggregateTagContainer& TagContainer) { return TagContainer.GetTags(); }

	UFUNCTION(BlueprintPure, Meta = (CompactNodeTitle = "->", BlueprintAutocast, DisplayName = "Aggregate Tags to String"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static FString Conv_AggregateTagContainerToString(const FAggregateTagContainer& TagContainer) { return TagContainer.ToString(); }

	UFUNCTION(BlueprintCallable, Category = "Weapon System Function Library|Aggregate Tag Container")
	static void Empty(UPARAM(ref) FAggregateTagContainer& TagContainer) { TagContainer.Empty(); }
	
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static void AppendTags(UPARAM(ref) FAggregateTagContainer& TagContainer, const FGameplayTagContainer& Tags, const int32 Count = 1) { TagContainer.AppendTags(Tags, Count); }

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static void AddTag(UPARAM(ref) FAggregateTagContainer& TagContainer, const FGameplayTag& Tag, const int32 Count = 1) { TagContainer.AddTag(Tag, Count); }

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Values"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static void SetValue(UPARAM(ref) FAggregateTagContainer& TagContainer, const TArray<FAggregateTagValue>& Values);

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static void RemoveTags(UPARAM(ref) FAggregateTagContainer& TagContainer, const FGameplayTagContainer& Tags, const int32 Count = 1, const bool bExact = false) { TagContainer.RemoveTags(Tags, Count, bExact); }

	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static void RemoveTag(UPARAM(ref) FAggregateTagContainer& TagContainer, const FGameplayTag& Tag, const int32 Count = 1, const bool bExact = false) { TagContainer.RemoveTag(Tag, Count, bExact); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tag", DisplayName = "Get Tag Count", Keywords = "num,count"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static int32 GetNumTags(const FAggregateTagContainer& TagContainer, const FGameplayTag& Tag, const bool bExact = false) { return bExact ? TagContainer.GetNumTagsExact(Tag) : TagContainer.GetNumTags(Tag); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tag"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static bool HasTag(const FAggregateTagContainer& TagContainer, const FGameplayTag& Tag) { return TagContainer.HasTag(Tag); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static bool HasAny(const FAggregateTagContainer& TagContainer, const FGameplayTagContainer& Tags) { return TagContainer.HasAny(Tags); }

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Tags"), Category = "Weapon System Function Library|Aggregate Tag Container")
	static bool HasAll(const FAggregateTagContainer& TagContainer, const FGameplayTagContainer& Tags) { return TagContainer.HasAll(Tags); }

	UFUNCTION(BlueprintPure, Category = "Weapon System Function Library|Aggregate Tag Container")
	static bool IsEmpty(const FAggregateTagContainer& TagContainer) { return TagContainer.IsEmpty(); }
};















