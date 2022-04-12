
#pragma once


#if ENGINE_MAJOR_VERSION < 5

/** Stores meta data about a given Replicated property. */
class FMyRepChangedParent
{
public:
	FMyRepChangedParent():
		Active(1),
		OldActive(1),
		IsConditional(0)
	{}

	/** Whether or not this property is currently Active (i.e., considered for replication). */
	uint32 Active: 1;

	/** The last updated state of Active, used to track when the Active state changes. */
	uint32 OldActive: 1;

	/**
	 * Whether or not this property has conditions that may exclude it from replicating to a given connection.
	 * @see FRepState::ConditionMap.
	 */
	uint32 IsConditional: 1;
};

/**
 * This class is used to store meta data about properties that is shared between connections,
 * including whether or not a given property is Conditional, Active, and any external data
 * that may be needed for Replays.
 *
 * TODO: This class (and arguably IRepChangedPropertyTracker) should be renamed to reflect
 *			what they actually do now.
 */


PRAGMA_DISABLE_DEPRECATION_WARNINGS	// IsReplay()
class WEAPONSYSTEMPLUGIN_API FMyRepChangedPropertyTracker : public IRepChangedPropertyTracker
{
public:
	FMyRepChangedPropertyTracker(const bool InbIsReplay, const bool InbIsClientReplayRecording); 
	virtual ~FMyRepChangedPropertyTracker() override;

	//~ Begin IRepChangedPropertyTracker Interface.
	/**
	 * Manually set whether or not Property should be marked inactive.
	 * This will change the Active status for all connections.
	 *
	 * @see DOREPLIFETIME_ACTIVE_OVERRIDE
	 *
	 * @param OwningObject	The object that we're tracking.
	 * @param RepIndex		Replication index for the Property.
	 * @param bIsActive		The new Active state.
	 */
	virtual void SetCustomIsActiveOverride(
		UObject* OwningObject,
		const uint16 RepIndex,
		const bool bIsActive) override;

	/**
	 * Sets (or resets) the External Data.
	 * External Data is primarily used for Replays, and is used to track additional non-replicated
	 * data or state about an object.
	 *
	 * @param Src		Memory containing the external data.
	 * @param NumBits	Size of the memory, in bits.
	 */
	virtual void SetExternalData(const uint8* Src, const int32 NumBits) override;

	/** Whether or not this is being used for a replay (may be recording or playback). */

#if ENGINE_MAJOR_VERSION < 5
	virtual bool IsReplay() const override { return bIsReplay; }
#endif

	virtual void CountBytes(FArchive& Ar) const override;
	//~ End IRepChangedPropertyTracker Interface

	/** Activation data for top level Properties on the given Actor / Object. */
	TArray<FMyRepChangedParent>	Parents;

	/** Whether or not this is being used for a replay (may be recording or playback). */
	UE_DEPRECATED(4.26, "Will be removed in a future release.")
	bool bIsReplay;

	/** Whether or not this is being used for a client replay recording. */
	UE_DEPRECATED(4.26, "Will be removed in a future release.")
	bool bIsClientReplayRecording;

	TArray<uint8> ExternalData;
	uint32 ExternalDataNumBits;
};
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#else// ENGINE_MAJOR_VERSION < 5


/**
 * This class is used to store meta data about properties that is shared between connections,
 * including whether or not a given property is Conditional, Active, and any external data
 * that may be needed for Replays.
 *
 * TODO: This class (and arguably IRepChangedPropertyTracker) should be renamed to reflect
 *			what they actually do now.
 */
class FMyRepChangedPropertyTracker : public IRepChangedPropertyTracker
{
public:
	FMyRepChangedPropertyTracker() = delete;
	FMyRepChangedPropertyTracker(const bool InbIsReplay, const bool InbIsClientReplayRecording);

	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	virtual ~FMyRepChangedPropertyTracker() = default;
	PRAGMA_ENABLE_DEPRECATION_WARNINGS

	//~ Begin IRepChangedPropertyTracker Interface.
	/**
	 * Manually set whether or not Property should be marked inactive.
	 * This will change the Active status for all connections.
	 *
	 * @see DOREPLIFETIME_ACTIVE_OVERRIDE
	 *
	 * @param OwningObject	The object that we're tracking.
	 * @param RepIndex		Replication index for the Property.
	 * @param bIsActive		The new Active state.
	 */
	virtual void SetCustomIsActiveOverride(
		UObject* OwningObject,
		const uint16 RepIndex,
		const bool bIsActive) override;

	/**
	 * Sets (or resets) the External Data.
	 * External Data is primarily used for Replays, and is used to track additional non-replicated
	 * data or state about an object.
	 *
	 * @param Src		Memory containing the external data.
	 * @param NumBits	Size of the memory, in bits.
	 */
	UE_DEPRECATED(5.0, "Please use UReplaySubsystem::SetExternalDataForObject instead.")
	virtual void SetExternalData(const uint8* Src, const int32 NumBits) override;

	virtual void CountBytes(FArchive& Ar) const override;
	//~ End IRepChangedPropertyTracker Interface

	void InitActiveParents(int32 ParentCount)
	{
		ActiveParents.Init(true, ParentCount);
	}

	bool IsParentActive(int32 ParentIndex) const 
	{ 
		return ActiveParents[ParentIndex]; 
	}

	int32 GetParentCount() const
	{
		return ActiveParents.Num();
	}

private:
	/** Whether or not this is being used for a client replay recording. */
	bool bIsClientReplayRecording;

	/** Activation data for top level Properties on the given Actor / Object. */
	TBitArray<> ActiveParents;

public:
	UE_DEPRECATED(5.0, "No longer used, see UReplaySubsystem::SetExternalDataForObject")
	TArray<uint8> ExternalData;

	UE_DEPRECATED(5.0, "No longer used, see UReplaySubsystem::SetExternalDataForObject")
	uint32 ExternalDataNumBits;
};

#endif