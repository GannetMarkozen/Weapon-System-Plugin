
#include "WeaponSystem/ReplicateUObject/RepChangedPropertyTracker.h"

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
/*
#if WITH_PUSH_MODEL
	if (!Parent.OldActive && Parent.Active)
	{
		FNetPrivatePushIdHelper::MarkPropertyDirty(OwningObject, RepIndex);
	}
#endif	*/
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
