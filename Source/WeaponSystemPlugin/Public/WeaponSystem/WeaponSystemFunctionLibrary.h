// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "Animation/PoseAsset.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/RepLayout.h"
#include "ReplicateUObject/RepChangedPropertyTracker.h"
#include "WeaponSystemFunctionLibrary.generated.h"



#define PRINT(...) if(GEngine) GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::White, FString::Printf(##__VA_ARGS__))
#define PRINTAUTH(...) if(GEngine) GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::White, AUTH + ": " + FString::Printf(##__VA_ARGS__))
#define PRINT_COLOR(Color, ...) if(GEngine) GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, Color, FString::Printf(##__VA_ARGS__))
#define AUTHTOSTRING(bAuth) FString(bAuth ? "Server" : "Client")
#define AUTH AUTHTOSTRING(HasAuthority())
#define PRINTLINE PRINT(TEXT("%s"), *FString(__FUNCTION__))
#define PRINTLINEAUTH PRINT(TEXT("%s: %s"), *AUTH, *FString(__FUNCTION__))

// Default Object: GetClass()->GetDefaultObject<ThisClass>()
#define DEFOBJ GetClass()->GetDefaultObject<ThisClass>()

#define CONCATE_(X, Y) X##Y
#define CONCATE(X, Y) CONCATE_(X, Y)

// Pre-requisite to calling ACCESS_PRIVATE_MEMBER to be able to access a private member. CLASS, MEMBER, TYPES
#define ALLOW_PRIVATE_ACCESS(CLASS, MEMBER, ...) \
	template<typename Only, __VA_ARGS__ CLASS::*Member> \
	struct CONCATE(MEMBER, __LINE__) { friend __VA_ARGS__ CLASS::*Access(Only*) { return Member; } }; \
	template<typename> struct Only_##MEMBER; \
	template<> struct Only_##MEMBER<CLASS> { friend __VA_ARGS__ CLASS::*Access(Only_##MEMBER<CLASS>*); }; \
	template struct CONCATE(MEMBER, __LINE__)<Only_##MEMBER<CLASS>, &CLASS::MEMBER>

// Access private member from an object. Must call ALLOW_PRIVATE_ACCESS in global-scope first
#define ACCESS_PRIVATE_MEMBER(OBJECT, MEMBER) \
	((OBJECT).*Access((Only_##MEMBER<std::remove_reference<decltype(OBJECT)>::type>*)nullptr))

UENUM(BlueprintType)
enum class EBoneSpaceTransform : uint8
{
	ParentBoneSpace		UMETA(DisplayName = "Parent Bone-Space"),
	WorldSpace			UMETA(DisplayName = "World-Space"),
};


DECLARE_DYNAMIC_DELEGATE(FPlaceholderDelegate);



ALLOW_PRIVATE_ACCESS(FAnimInstanceProxy, PoseSnapshots, TArray<FPoseSnapshot>);
class UAnimInstanceAccessor : public UAnimInstance { friend class UWeaponSystemFunctionLibrary; };

ALLOW_PRIVATE_ACCESS(FRepLayout, Parents, TArray<FRepParentCmd>);

/**
 * 
 */
UCLASS()
class WEAPONSYSTEMPLUGIN_API UWeaponSystemFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	template<typename EnumType>
	static FORCEINLINE FString EnumValueToString(const EnumType EnumValue)
	{
		static_assert(TIsEnum<EnumType>::Value, TEXT("EnumValueToString: Input is not an enum type"));
		return StaticEnum<EnumType>()->GetNameStringByIndex((int32)EnumValue);
	}

	template<typename EnumType>
	static FORCEINLINE FName EnumValueName(const EnumType EnumValue)
	{
		return FName(EnumValueToString<EnumType>(EnumValue));
	}

	// Returns nullptr if AnimInstance or AnimInstanceProxy are invalid. Direct access.
	static FORCEINLINE TArray<FPoseSnapshot>* GetPoseSnapshots(class UAnimInstance* AnimInstance)
	{
		if(IsValid(AnimInstance))
			if(FAnimInstanceProxy* Proxy = UAnimInstanceAccessor::GetProxyOnGameThreadStatic<FAnimInstanceProxy>(AnimInstance))
				return &ACCESS_PRIVATE_MEMBER(*Proxy, PoseSnapshots);// Black-magic to access private-member variable
		return nullptr;
	}

	// Caches pose snapshot within the passed in AnimInstance that can be accessed within it using the Pose Snapshot node. If a
	// pose snapshot has already been cached with the same name this will override it with the new pose snapshot.
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "SnapshotName"), Category = "Weapon System Function Library|Animation")
	static void CachePoseSnapshot(const FPoseSnapshot& PoseSnapshot, class UAnimInstance* AnimInstance, const FName& SnapshotName)
	{
		if(!AnimInstance || !PoseSnapshot.bIsValid)
		{
			if(!AnimInstance) { UE_LOG(LogTemp, Error, TEXT("%s: AnimInstance is invalid"), *FString(__FUNCTION__)); }
			if(!PoseSnapshot.bIsValid) { UE_LOG(LogTemp, Error, TEXT("%s: PoseSnapshot is invalid"), *FString(__FUNCTION__)); }
			return;
		}
		
		TArray<FPoseSnapshot>* ProxySnapshots = GetPoseSnapshots(AnimInstance);
		if(!ProxySnapshots) return;
		
		FPoseSnapshot* Snapshot = ProxySnapshots->FindByPredicate([SnapshotName](const FPoseSnapshot& Snapshot)->bool { return Snapshot.SnapshotName == SnapshotName; });
		if(!Snapshot)
			Snapshot = &(*ProxySnapshots)[ProxySnapshots->AddDefaulted()];
		
		*Snapshot = PoseSnapshot;
		Snapshot->SnapshotName = SnapshotName;
	}

	static const FPoseSnapshot EmptyPose;

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "SnapshotName"), Category = "Weapon System Function Library|Animation")
	static const FPoseSnapshot& GetCachedPoseSnapshot(class UAnimInstance* AnimInstance, const FName& SnapshotName, bool& bOutSuccess)
	{
		bOutSuccess = true;
		if(AnimInstance && SnapshotName.IsValid())
			if(const TArray<FPoseSnapshot>* PoseSnapshots = GetPoseSnapshots(AnimInstance))
				if(const FPoseSnapshot* PoseSnapshot = PoseSnapshots->FindByPredicate([SnapshotName](const FPoseSnapshot& PoseSnapshot)->bool { return PoseSnapshot.SnapshotName == SnapshotName; }))
					return *PoseSnapshot;

		bOutSuccess = false;
		return EmptyPose;
	}

	// Returns true if a snapshot under that name exists and was removed.
	UFUNCTION(BlueprintCallable, Meta = (AutoCreateRefTerm = "SnapshotName"), Category = "Weapon System Function Library|Animation")
	static bool RemoveCachedPoseSnapshot(class UAnimInstance* AnimInstance, const FName& SnapshotName)
	{
		if(AnimInstance && SnapshotName.IsValid())
			if(TArray<FPoseSnapshot>* PoseSnapshots = GetPoseSnapshots(AnimInstance))
				for(int32 i = 0; i < PoseSnapshots->Num(); i++)
					if((*PoseSnapshots)[i].SnapshotName == SnapshotName)
					{
						PoseSnapshots->RemoveAt(i);
						return true;
					}
		// Else fails
		return false;
	}

	// WARNING: Do not place in Anim-Graph
	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "SnapshotName", DefaultToSelf = "AnimInstance"), Category = "Weapon System Function Library|Animation")
	static FORCEINLINE bool CachedPoseSnapshotIsValid(class UAnimInstance* AnimInstance, const FName& SnapshotName)
	{
		bool bOutSuccess = false;
		const FPoseSnapshot& PoseSnapshot = GetCachedPoseSnapshot(AnimInstance, SnapshotName, bOutSuccess);
		return bOutSuccess && PoseSnapshot.bIsValid;
	}

	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "BoneName"), Category = "Weapon System Function Library|Animation")
	static FORCEINLINE FTransform GetBoneTransformFromAnimationSequence(const FName& BoneName, const class UAnimSequence* AnimationSequence,
		const float ExtractionTime = 0.f, const EBoneSpaceTransform Space = EBoneSpaceTransform::ParentBoneSpace)
	{
		if(!AnimationSequence || !BoneName.IsValid()) return FTransform::Identity;
		
		int32 BoneIndex = AnimationSequence->GetSkeleton()->GetReferenceSkeleton().FindBoneIndex(BoneName);
		if(BoneIndex == INDEX_NONE) return FTransform::Identity;

		FTransform BoneTransform;
		AnimationSequence->GetBoneTransform(BoneTransform, BoneIndex, ExtractionTime, true);

		if(Space == EBoneSpaceTransform::WorldSpace)
		{
			while(true)
			{
				const int32 ParentIndex = AnimationSequence->GetSkeleton()->GetReferenceSkeleton().GetParentIndex(BoneIndex);
				if(ParentIndex == INDEX_NONE) break; 

				FTransform ParentTransform;
				AnimationSequence->GetBoneTransform(ParentTransform, ParentIndex, ExtractionTime, true);

				BoneTransform *= ParentTransform;
				BoneIndex = ParentIndex;
			}
		}

		return BoneTransform;
	}

	UFUNCTION(BlueprintCallable, Category = "Weapon System Function Library|Animation")
	static void GetAnimationSequenceAsPoseSnapshot(FPoseSnapshot& OutPoseSnapshot, const class UAnimSequence* AnimSequence, const class USkeletalMeshComponent* TargetMesh, const float ExtractionTime = 0.f)
	{
		if(!AnimSequence || !TargetMesh) return;
		const FReferenceSkeleton& RefSkel = AnimSequence->GetSkeleton()->GetReferenceSkeleton();
		

		/*OutPoseSnapshot.SkeletalMeshName = AnimSequence->GetSkeleton()->GetFName();
		OutPoseSnapshot.BoneNames.Empty();
		OutPoseSnapshot.LocalTransforms.Empty();
		OutPoseSnapshot.bIsValid = true;

		const TArray<FTrackToSkeletonMap>& TrackMap = AnimSequence->GetCompressedTrackToSkeletonMapTable();

		for(int32 i = 0; i < TrackMap.Num(); i++)
		{
			const FName& BoneName = RefSkel.GetBoneName(i);
			if(!BoneName.IsValid()) continue;

			FTransform BoneTransform = FTransform::Identity;
			if(TrackMap.IsValidIndex(i) && TrackMap[i].BoneTreeIndex == i)
			{
				AnimSequence->GetBoneTransform(BoneTransform, i, ExtractionTime, false);
			}
			else for(int32 j = 0; j < TrackMap.Num(); j++)
			{
				if(TrackMap[i].BoneTreeIndex == j)
					AnimSequence->GetBoneTransform(BoneTransform, j, ExtractionTime, false);
			}

			OutPoseSnapshot.BoneNames.Add(BoneName);
			OutPoseSnapshot.LocalTransforms.Add(BoneTransform);
		}*/

		/*OutPoseSnapshot.BoneNames.AddUninitialized(RefSkel.GetNum());
		for(int32 i = 0; i < OutPoseSnapshot.BoneNames.Num(); i++)
			OutPoseSnapshot.BoneNames[i] = RefSkel.GetBoneName(i);

		const TArray<FTrackToSkeletonMap>& TrackMap = AnimSequence->GetCompressedTrackToSkeletonMapTable();
		int32 TrackIndex = INDEX_NONE;

		OutPoseSnapshot.LocalTransforms.AddUninitialized(RefSkel.GetNum());
		for(int32 i = 0; i < OutPoseSnapshot.BoneNames.Num(); i++)
			if(TrackMap.IsValidIndex(i) && TrackMap[i].BoneTreeIndex == i){
				AnimSequence->GetBoneTransform(OutPoseSnapshot.LocalTransforms[i], i, ExtractionTime, false);
				OutPoseSnapshot.LocalTransforms[i].NormalizeRotation();
			}
				*/

		
	}

	// For replication stuff to avoid calling GetObjectClassRepLayout from the NetDriver which won't compile because it's not exported
	static FORCEINLINE TSharedPtr<FRepLayout> GetObjectClassRepLayout(class UNetDriver* NetDriver, class UClass* Class)
	{
		if(!NetDriver) return nullptr;
		auto& RepLayoutMap = NetDriver->RepLayoutMap;
		TSharedPtr<FRepLayout>* RepLayoutPtr = RepLayoutMap.Find(Class);
		if(!RepLayoutPtr)
		{
			const ECreateRepLayoutFlags Flags = NetDriver->MaySendProperties() ? ECreateRepLayoutFlags::MaySendProperties : ECreateRepLayoutFlags::None;
			RepLayoutPtr = &RepLayoutMap.Add(Class, FRepLayout::CreateFromClass(Class, NetDriver->ServerConnection, Flags));
		}
		return *RepLayoutPtr;
	}

	static FORCEINLINE void InitChangedTracker(class FMyRepChangedPropertyTracker* ChangedTracker, const TSharedPtr<FRepLayout>& RepLayout)
	{
#if ENGINE_MAJOR_VERSION < 5
		
		const int32 NumParents = RepLayout.Get()->GetNumParents();
		ChangedTracker->Parents.SetNum(NumParents);
		for(int32 i = 0; i < NumParents; i++)
			ChangedTracker->Parents[i].IsConditional = ((ACCESS_PRIVATE_MEMBER(*RepLayout.Get(), Parents)[i].Flags & ERepParentFlags::IsConditional) != ERepParentFlags::None) ? 1 : 0;

#else// ENGINE_MAJOR_VERSION < 5
		
		const int32 NumParents = RepLayout.Get()->GetNumParents();
		ChangedTracker->InitActiveParents(NumParents);
		
#endif// ENGINE_MAJOR_VERSION < 5
	}

	static FORCEINLINE TSharedPtr<FMyRepChangedPropertyTracker> FindOrCreatePropertyTracker(class UObject* Obj)
	{
		if(Obj) if(const UWorld* World = Obj->GetWorld())
			return FindOrCreatePropertyTracker(World->GetNetDriver(), Obj);
		return nullptr;
	}

	static FORCEINLINE TSharedPtr<FMyRepChangedPropertyTracker> FindOrCreatePropertyTracker(class UNetDriver* NetDriver, class UObject* Obj)
	{
		if(!Obj || !NetDriver) return nullptr;
		
		check(NetDriver->IsServer() || NetDriver->MaySendProperties());

		UNetDriver::FRepChangedPropertyTrackerWrapper* GlobalPropertyTrackerPtr = NetDriver->RepChangedPropertyTrackerMap.Find(Obj);

		// Obj can be a new object with a pointer that matches an old, no longer valid, object
		if ( GlobalPropertyTrackerPtr != nullptr && !GlobalPropertyTrackerPtr->IsObjectValid() )
		{
			NetDriver->RepChangedPropertyTrackerMap.Remove(Obj);
			GlobalPropertyTrackerPtr = nullptr;
		}

		if ( !GlobalPropertyTrackerPtr ) 
		{
			const UWorld* const LocalWorld = Obj->GetWorld();
			const bool bIsReplay = LocalWorld != nullptr && static_cast<void*>(LocalWorld->GetDemoNetDriver()) == static_cast<void*>(NetDriver);
			const bool bIsClientReplayRecording = LocalWorld != nullptr ? LocalWorld->IsRecordingClientReplay() : false;

			FMyRepChangedPropertyTracker* Tracker = new FMyRepChangedPropertyTracker(bIsReplay, bIsClientReplayRecording);
			//InitChangedTracker(NetDriver, Tracker);
			const TSharedPtr<FRepLayout> RepLayout = UWeaponSystemFunctionLibrary::GetObjectClassRepLayout(NetDriver, Obj->GetClass());
			UWeaponSystemFunctionLibrary::InitChangedTracker(Tracker, RepLayout);

			//NetDriver->GetObjectClassRepLayout(GetClass())->InitChangedTracker((class FRepChangedPropertyTracker*)Tracker);
		
			TSharedPtr<FMyRepChangedPropertyTracker> Ptr = MakeShareable<FMyRepChangedPropertyTracker>(Tracker);
			GlobalPropertyTrackerPtr = &NetDriver->RepChangedPropertyTrackerMap.Add( Obj, UNetDriver::FRepChangedPropertyTrackerWrapper(Obj, reinterpret_cast<TSharedPtr<class FRepChangedPropertyTracker>&>(Ptr)));
		}

		return reinterpret_cast<TSharedPtr<FMyRepChangedPropertyTracker>&>(GlobalPropertyTrackerPtr->RepChangedPropertyTracker);
	}
	
	// Calls PreReplication on object and passes in required variables.
	// Must have a function with the exact signature: void PreReplication(IRepChangedPropertyTracker&)
	template<typename UserClass>
	static FORCEINLINE void CallPreReplication(UserClass* Object)
	{
		static_assert(TIsClass<UserClass>::Value, TEXT("UWeaponSystemFunctionLibrary::CallPreReplication UserClass is not a valid UCLASS"));
		if(IsValid(Object)) Object->PreReplication(*FindOrCreatePropertyTracker(Object).Get());
	}
	
	// Calls PreReplication on each object and passes in required variables.
	// Must have a function with the exact signature: void PreReplication(IRepChangedPropertyTracker&)
	template<typename UserClass>
	static FORCEINLINE void CallPreReplicationList(const TArray<UserClass*>& Objects)
	{
		static_assert(TIsClass<UserClass>::Value, TEXT("UWeaponSystemFunctionLibrary::CallPreReplicationList UserClass is not a valid UCLASS"));
		for(UserClass* const Object : Objects)
			if(IsValid(Object))
				Object->PreReplication(*FindOrCreatePropertyTracker(Object).Get());
	}

	/*
	static void ProcessRemoteFunctionForChannel(AActor* NetOwner, UObject* TargetObj, UFunction* Function, const bool bIsServer, void* Params, FOutParmRec* OutParams = nullptr);

	template<typename... ParamTypes>
	static void ProcessRemoteFunctionForChannel(AActor* NetOwner, UObject* TargetObj, UFunction* Function, const bool bIsServer, ParamTypes... Params)
	{
		TTuple<ParamTypes...> ParamsTuple(Params...);
		ProcessRemoteFunctionForChannel(NetOwner, TargetObj, Function, bIsServer, &ParamsTuple, nullptr);
	}
	*/

protected:
	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Class", DeterminesOutputType = "Class", AllowPrivateAccess = "true"), Category = "Weapon System Function Library")
	static FORCEINLINE class UObject* GetDefaultObject(const TSubclassOf<class UObject>& Class) { return Class ? Class->GetDefaultObject() : nullptr; }
	
	/*UFUNCTION(BlueprintCallable, CustomThunk, meta = (CustomStructureParam = "Delegate,Event", AllowPrivateAccess = "true"), Category = "Weapon System Function Library|Delegates")
	static FORCEINLINE void BindDelegate(const int32& Delegate, const int32& Event);
	static FORCEINLINE void execBindDelegate(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		//FDelegateProperty::TCppType DelegateValue;
		//Stack.StepCompiledInRef<FDelegateProperty>(&DelegateValue);
		P_GET_PROPERTY_REF(FDelegateProperty, DelegateValue);
		const auto* DelegateProp = CastField<FDelegateProperty>(Stack.MostRecentProperty);
		
		FDelegateProperty::TCppType EventValue;
		Stack.StepCompiledIn<FDelegateProperty>(&EventValue);
		const auto* EventProp = CastField<FDelegateProperty>(Stack.MostRecentProperty);

		P_FINISH;

		if(!DelegateProp || !DelegateProp->SignatureFunction->HasAnyFunctionFlags(FUNC_Delegate) ||
			!EventProp || EventProp->SignatureFunction->HasAnyFunctionFlags(FUNC_Event) ||
			 DelegateProp->SignatureFunction->ParmsSize != EventProp->SignatureFunction->ParmsSize ||
			  DelegateProp->SignatureFunction->NumParms != EventProp->SignatureFunction->NumParms)
		{
			Stack.bArrayContextFailed = true;
			UE_LOG(LogTemp, Error, TEXT("Bind Delegate: Parameters invalid"));
			return;
		}

		P_NATIVE_BEGIN;

		if(EventValue.GetUObject())
			DelegateValue.BindUFunction(EventValue.GetUObject(), EventValue.GetFunctionName());
			
		P_NATIVE_END;
	}

	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "Delegate", AllowPrivateAccess = "true"), Category = "Weapon System Function Library|Delegates")
	static FORCEINLINE void UnbindDelegate(const int32& Delegate) { LowLevelFatalError(TEXT("Called CustomThunk base function %s"), *FString(__FUNCTION__)); }
	static FORCEINLINE void execUnbindDelegate(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		P_GET_PROPERTY_REF(FDelegateProperty, DelegateValue);
		const auto* DelegateProp = CastField<FDelegateProperty>(Stack.MostRecentProperty);

		P_FINISH;

		if(!DelegateProp || !DelegateProp->SignatureFunction->HasAllFunctionFlags(FUNC_Delegate))
		{
			Stack.bArrayContextFailed = true;
			UE_LOG(LogTemp, Error, TEXT("Unbind Delegate: Invalid delegate"));
			return;
		}

		P_NATIVE_BEGIN;

		DelegateValue.Unbind();
		
		P_NATIVE_END;
	}

	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "Delegate", AllowPrivateAccess = "true", DisplayName = "Execute Delegate (No Params)"), Category = "Weapon System Function Library|Delegates")
	static FORCEINLINE bool ExecuteDelegate(const int32& Delegate) { LowLevelFatalError(TEXT("Called CustomThunk base function %s"), *FString(__FUNCTION__)); return false; }
	static FORCEINLINE void execExecuteDelegate(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		Stack.StepCompiledIn<FDelegateProperty>(nullptr);
		void* const DelegateValuePtr = Stack.MostRecentPropertyAddress;
		const FDelegateProperty* DelegateProp = CastField<FDelegateProperty>(Stack.MostRecentProperty);

		P_FINISH;

		if(!DelegateValuePtr || !DelegateProp || !DelegateProp->SignatureFunction->HasAnyFunctionFlags(FUNC_Delegate) || DelegateProp->SignatureFunction->NumParms != 0)
		{
			UE_LOG(LogTemp, Error, TEXT("Execute Delegate: Invalid delegate"));
			Stack.bArrayContextFailed = true;
			*(bool*)RESULT_PARAM = false;
			return;
		}

		P_NATIVE_BEGIN;

		const FDelegateProperty::TCppType& Delegate =
			*static_cast<FDelegateProperty::TCppType*>(DelegateValuePtr);

		if(Delegate.IsBound())
		{
			Delegate.ProcessDelegate<UObject>(nullptr);
			*(bool*)RESULT_PARAM = true;
		}
		else *(bool*)RESULT_PARAM = false;
		
		P_NATIVE_END;
	}

	// Executes if bound. Returns whether executed or not.
	UFUNCTION(BlueprintCallable, CustomThunk, Meta = (CustomStructureParam = "Delegate,Parameters", AllowPrivateAccess = "true", DisplayName = "Execute Delegate (With Params)"), Category = "Weapon System Function Library|Delegates")
	static FORCEINLINE bool ExecuteDelegateWithParams(const int32& Delegate, const int32& Parameters) { LowLevelFatalError(TEXT("Called CustomThunk base function %s"), *FString(__FUNCTION__)); return false; }
	static FORCEINLINE void execExecuteDelegateWithParams(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		//P_GET_PROPERTY_REF(FDelegateProperty, DelegateValue);
		Stack.StepCompiledIn<FDelegateProperty>(nullptr);
		void* const DelegateValuePtr = Stack.MostRecentPropertyAddress;
		const FDelegateProperty* DelegateProp = CastField<FDelegateProperty>(Stack.MostRecentProperty);

		//P_GET_STRUCT_REF(FEmptyPayload, Params);
		Stack.StepCompiledIn<FStructProperty>(nullptr);
		void* const Params = Stack.MostRecentPropertyAddress;
		const FStructProperty* ParamsProp = CastField<FStructProperty>(Stack.MostRecentProperty);

		P_FINISH;

		if(!DelegateValuePtr || !DelegateProp || !DelegateProp->SignatureFunction->HasAnyFunctionFlags(FUNC_Delegate) ||
			!ParamsProp || DelegateProp->SignatureFunction->ParmsSize != ParamsProp->Struct->PropertiesSize)
		{
			UE_LOG(LogTemp, Error, TEXT("Execute Delegate: Invalid delegate"));
			Stack.bArrayContextFailed = true;
			*(bool*)RESULT_PARAM = false;
			return;
		}

		P_NATIVE_BEGIN;

		const FDelegateProperty::TCppType& Delegate =
			*static_cast<FDelegateProperty::TCppType*>(DelegateValuePtr);
		
		if(Delegate.IsBound())
		{
			Delegate.ProcessDelegate<UObject>(Params);
			*(bool*)RESULT_PARAM = true;
		}	
		else *(bool*)RESULT_PARAM = false;

		P_NATIVE_END;
	}

	UFUNCTION(BlueprintPure, CustomThunk, Meta = (CustomStructureParam = "Delegate", AllowPrivateAccess = "true"), Category = "Weapon System Function Library|Delegates")
	static FORCEINLINE bool IsDelegateBound(const int32& Delegate) { LowLevelFatalError(TEXT("Called CustomThunk base function %s"), *FString(__FUNCTION__)); return false; }
	static FORCEINLINE void execIsDelegateBound(UObject* Context, FFrame& Stack, void* const RESULT_PARAM)
	{
		Stack.StepCompiledIn<FDelegateProperty>(nullptr);
		const void* DelegateValuePtr = Stack.MostRecentPropertyAddress;
		const auto* DelegateProp = CastField<FDelegateProperty>(Stack.MostRecentProperty);

		P_FINISH;

		if(!DelegateProp || !DelegateProp->SignatureFunction->HasAnyFunctionFlags(FUNC_Delegate))
		{
			Stack.bArrayContextFailed = true;
			UE_LOG(LogTemp, Error, TEXT("Is Delegate Bound: Invalid delegate"));
			*(bool*)RESULT_PARAM = false;
			return;
		}

		P_NATIVE_BEGIN;
		
		*(bool*)RESULT_PARAM = static_cast<const FDelegateProperty::TCppType*>(DelegateValuePtr)->IsBound();
		
		P_NATIVE_END;
	}
	
	
	// Uses the display name value
	/*
	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "EnumName", AllowPrivateAccess = "true"), Category = "Weapon System Function Library")
	static FORCEINLINE FString GetEnumValueToString(const int32 EnumValue, const FName& EnumName)
	{
		for(TObjectIterator<UEnum> Itr; Itr; ++Itr)
			if(const UEnum* Enum = *Itr)
				if(Enum->GetFName() == EnumName)
					return Enum->GetDisplayNameTextByValue(EnumValue).ToString();
		
		return FString();
	}

	
	// Uses the display name value
	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "EnumName", AllowPrivateAccess = "true"), Category = "Weapon System Function Library")
	static FORCEINLINE FName GetEnumValueName(const int32 EnumValue, const FName& EnumName) { return FName(GetEnumValueToString(EnumValue, EnumName)); }*/
};
