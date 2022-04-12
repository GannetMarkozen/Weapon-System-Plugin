
#include "WeaponSystem/ReplicateUObject/RepChangedPropertyTracker.h"

#if ENGINE_MAJOR_VERSION < 5

PRAGMA_DISABLE_DEPRECATION_WARNINGS
FMyRepChangedPropertyTracker::FMyRepChangedPropertyTracker(const bool InbIsReplay, const bool InbIsClientReplayRecording) :
	bIsReplay(InbIsReplay),
	bIsClientReplayRecording(InbIsClientReplayRecording),
	ExternalDataNumBits(0)
{}
PRAGMA_ENABLE_DEPRECATION_WARNINGS

FMyRepChangedPropertyTracker::~FMyRepChangedPropertyTracker() {}


void FMyRepChangedPropertyTracker::SetCustomIsActiveOverride(UObject* OwningObject, const uint16 RepIndex, const bool bIsActive)
{
	FMyRepChangedParent& Parent = Parents[RepIndex];

	Parent.OldActive = Parent.Active;
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	Parent.Active = (bIsActive || bIsClientReplayRecording) ? 1 : 0;
	PRAGMA_ENABLE_DEPRECATION_WARNINGS

#if WITH_PUSH_MODEL
	if (!Parent.OldActive && Parent.Active)
	{
		FNetPrivatePushIdHelper::MarkPropertyDirty(OwningObject, RepIndex);
	}
#endif
}

void FMyRepChangedPropertyTracker::SetExternalData(const uint8* Src, const int32 NumBits)
{
	ExternalDataNumBits = NumBits;
	const int32 NumBytes = (NumBits + 7) >> 3;
	ExternalData.Reset(NumBytes);
	ExternalData.AddUninitialized(NumBytes);
	FMemory::Memcpy(ExternalData.GetData(), Src, NumBytes);
}

void FMyRepChangedPropertyTracker::CountBytes(FArchive& Ar) const
{
	// Include our size here, because the caller won't know.
	Ar.CountBytes(sizeof(FMyRepChangedPropertyTracker), sizeof(FMyRepChangedPropertyTracker));
	Parents.CountBytes(Ar);
	ExternalData.CountBytes(Ar);

}


#else// ENGINE_MAJOR_VERSION < 5

#if (WITH_PUSH_MODEL)
struct FNetPrivatePushIdHelper
{
	static void SetNetPushID(UObject* InObject, const UEPushModelPrivate::FNetPushObjectId ObjectId)
	{
		const UEPushModelPrivate::FNetPushObjectId CurrentId = InObject->GetNetPushIdDynamic();
		if (CurrentId != ObjectId)
		{
			if (CurrentId != INDEX_NONE)
			{
				UE_LOG(LogRep, Error, TEXT("SetNetPushID: %s already has a push id. Existing ID = %s, New ID = %s"),
					*InObject->GetPathName(),
					*UEPushModelPrivate::ToString(CurrentId),
					*UEPushModelPrivate::ToString(ObjectId));

				if (!UEPushModelPrivate::ValidateObjectIdReassignment(CurrentId, ObjectId))
				{
					return;
				}
			}

			FObjectNetPushIdHelper::SetNetPushIdDynamic(InObject, ObjectId);
		}
	}

	static void MarkPropertyDirty(const UObject* const InObject, const int32 RepIndex)
	{
		MARK_PROPERTY_DIRTY_UNSAFE(InObject, RepIndex);
	}
};
#endif // (WITH_PUSH_MODEL)

PRAGMA_DISABLE_DEPRECATION_WARNINGS
FMyRepChangedPropertyTracker::FMyRepChangedPropertyTracker(const bool InbIsReplay, const bool InbIsClientReplayRecording) :
	bIsClientReplayRecording(InbIsClientReplayRecording),
	ExternalDataNumBits(0)
{}
PRAGMA_ENABLE_DEPRECATION_WARNINGS

void FMyRepChangedPropertyTracker::SetCustomIsActiveOverride(UObject* OwningObject, const uint16 RepIndex, const bool bIsActive)
{
	FBitReference Active = ActiveParents[RepIndex];

	const bool bOldActive = Active;
	Active = (bIsActive || bIsClientReplayRecording);

#if WITH_PUSH_MODEL
	if (!bOldActive && Active)
	{
		FNetPrivatePushIdHelper::MarkPropertyDirty(OwningObject, RepIndex);
		//MARK_PROPERTY_DIRTY_UNSAFE(OwningObject, RepIndex);
	}
#endif	
}

PRAGMA_DISABLE_DEPRECATION_WARNINGS
void FMyRepChangedPropertyTracker::SetExternalData(const uint8* Src, const int32 NumBits)
{
	ExternalDataNumBits = NumBits;
	const int32 NumBytes = (NumBits + 7) >> 3;
	ExternalData.Reset(NumBytes);
	ExternalData.AddUninitialized(NumBytes);
	FMemory::Memcpy(ExternalData.GetData(), Src, NumBytes);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS

void FMyRepChangedPropertyTracker::CountBytes(FArchive& Ar) const
{
	// Include our size here, because the caller won't know.
	Ar.CountBytes(sizeof(FMyRepChangedPropertyTracker), sizeof(FMyRepChangedPropertyTracker));
	ActiveParents.CountBytes(Ar);
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	ExternalData.CountBytes(Ar);
	PRAGMA_ENABLE_DEPRECATION_WARNINGS
}





#endif// ENGINE_MAJOR_VERSION < 5

