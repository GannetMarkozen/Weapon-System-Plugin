// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/ReplicatedObject.h"

#include "Net/RepLayout.h"
#include "WeaponSystem/WeaponSystemFunctionLibrary.h"
#include "WeaponSystem/ReplicateUObject/RepChangedPropertyTracker.h"


/*
TSharedPtr<FMyRepChangedPropertyTracker> UReplicatedObject::FindOrCreatePropertyTracker(UNetDriver* NetDriver)
{
	if(!NetDriver) return nullptr;
	check(NetDriver->IsServer() || NetDriver->MaySendProperties());

	UNetDriver::FRepChangedPropertyTrackerWrapper* GlobalPropertyTrackerPtr = NetDriver->RepChangedPropertyTrackerMap.Find(this);

	// Obj can be a new object with a pointer that matches an old, no longer valid, object
	if ( GlobalPropertyTrackerPtr != nullptr && !GlobalPropertyTrackerPtr->IsObjectValid() )
	{
		NetDriver->RepChangedPropertyTrackerMap.Remove(this);
		GlobalPropertyTrackerPtr = nullptr;
	}

	if ( !GlobalPropertyTrackerPtr ) 
	{
		const UWorld* const LocalWorld = GetWorld();
		const bool bIsReplay = LocalWorld != nullptr && static_cast<void*>(LocalWorld->GetDemoNetDriver()) == static_cast<void*>(NetDriver);
		const bool bIsClientReplayRecording = LocalWorld != nullptr ? LocalWorld->IsRecordingClientReplay() : false;

		FMyRepChangedPropertyTracker* Tracker = new FMyRepChangedPropertyTracker(bIsReplay, bIsClientReplayRecording);
		//InitChangedTracker(NetDriver, Tracker);
		const TSharedPtr<FRepLayout> RepLayout = UWeaponSystemFunctionLibrary::GetObjectClassRepLayout(NetDriver, GetClass());
		UWeaponSystemFunctionLibrary::InitChangedTracker(Tracker, RepLayout);

		//NetDriver->GetObjectClassRepLayout(GetClass())->InitChangedTracker((class FRepChangedPropertyTracker*)Tracker);
		
		TSharedPtr<FMyRepChangedPropertyTracker> Ptr = MakeShareable<FMyRepChangedPropertyTracker>(Tracker);
		GlobalPropertyTrackerPtr = &NetDriver->RepChangedPropertyTrackerMap.Add( this, UNetDriver::FRepChangedPropertyTrackerWrapper(this, reinterpret_cast<TSharedPtr<class FRepChangedPropertyTracker>&>(Ptr)));
	}

	return reinterpret_cast<TSharedPtr<FMyRepChangedPropertyTracker>&>(GlobalPropertyTrackerPtr->RepChangedPropertyTracker);
}*/

//ALLOW_PRIVATE_ACCESS(FRepLayout, Parents, TArray<FRepParentCmd>);
/*
void UReplicatedObject::InitChangedTracker(UNetDriver* NetDriver, FMyRepChangedPropertyTracker* ChangedTracker) const
{
	auto& RepLayoutMap = NetDriver->RepLayoutMap;
	TSharedPtr<class FRepLayout>* RepLayoutPtr = RepLayoutMap.Find(GetClass());
	if(!RepLayoutPtr)
	{
		const ECreateRepLayoutFlags Flags = NetDriver->MaySendProperties() ? ECreateRepLayoutFlags::MaySendProperties : ECreateRepLayoutFlags::None;
		RepLayoutPtr = &RepLayoutMap.Add(GetClass(), FRepLayout::CreateFromClass(GetClass(), NetDriver->ServerConnection, Flags));
	}

	const int32 NumParents = (*RepLayoutPtr).Get()->GetNumParents();
	ChangedTracker->Parents.SetNum(NumParents);
	for(int32 i = 0; i < NumParents; i++)
		ChangedTracker->Parents[i].IsConditional = ((ACCESS_PRIVATE_MEMBER(*(*RepLayoutPtr).Get(), Parents)[i].Flags & ERepParentFlags::IsConditional) != ERepParentFlags::None) ? 1 : 0;
}*/
