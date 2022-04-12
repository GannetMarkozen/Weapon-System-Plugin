
#include "WeaponSystem/ScriptBase.h"
#include "WeaponSystem/Weapons/WeaponScriptBase.h"
#include "Engine/ActorChannel.h"
#include "Net/UnrealNetwork.h"

void UScriptBase::BeginPlay()
{
	if(CanTick())
	{
		FTickerDelegate TickDelegate;
		TickDelegate.BindUObject(this, &ThisClass::Internal_Tick);
		TickHandle = FTicker::GetCoreTicker().AddTicker(TickDelegate);
	}

	BP_BeginPlay();
}

void UScriptBase::EndPlay()
{
	if(TickHandle.IsValid())
		FTicker::GetCoreTicker().RemoveTicker(TickHandle);

	BP_EndPlay();
}

void UScriptBase::OnDestroyed()
{
	if(TickHandle.IsValid())
		FTicker::GetCoreTicker().RemoveTicker(TickHandle);

	Super::OnDestroyed();
}





void UScriptContainerComponent::BeginPlay()
{
	Super::BeginPlay();

	static const auto ScriptProps = GetScriptProps();
	for(const auto* ScriptSingleProp : ScriptProps.Get<0>())
	{
		UScriptBase** const ScriptPtr = ScriptSingleProp->ContainerPtrToValuePtr<UScriptBase*>(this);
		if(!ScriptPtr || !*ScriptPtr) continue;
		(*ScriptPtr)->BeginPlay();
	}
	for(const auto* ScriptArrProp : ScriptProps.Get<1>())
	{
		const TArray<UScriptBase*>* const ScriptArrPtr = ScriptArrProp->ContainerPtrToValuePtr<TArray<UScriptBase*>>(this);
		if(!ScriptArrPtr) continue;
		for(UScriptBase* const Script : *ScriptArrPtr)
		{
			if(!Script) continue;
			Script->BeginPlay();
		}
	}
}

void UScriptContainerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	static const auto ScriptProps = GetScriptProps();
	ForEachScript(ScriptProps, [](UScriptBase* Script){ Script->EndPlay(); });
}

bool UScriptContainerComponent::ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool bWroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);
	
	static const auto ScriptProps = GetScriptProps();
	for(const auto* ScriptSingleProp : ScriptProps.Get<0>())
	{
		UScriptBase** const ScriptPtr = ScriptSingleProp->ContainerPtrToValuePtr<UScriptBase*>(this);
		if(!ScriptPtr || !*ScriptPtr) continue;
		bWroteSomething |= Channel->ReplicateSubobject(*ScriptPtr, *Bunch, *RepFlags);
	}
	for(const auto* ScriptArrProp : ScriptProps.Get<1>())
	{
		TArray<UScriptBase*>* const ScriptArrPtr = ScriptArrProp->ContainerPtrToValuePtr<TArray<UScriptBase*>>(this);
		if(!ScriptArrPtr) continue;
		bWroteSomething |= Channel->ReplicateSubobjectList(*ScriptArrPtr, *Bunch, *RepFlags);
	}

	return bWroteSomething;
}

void UScriptContainerComponent::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);
	static const auto ScriptProps = GetScriptProps();
	ForEachScript(ScriptProps, [](UScriptBase* Script){ Script->CallPreReplication(); });
}



TTuple<TArray<FObjectProperty*>, TArray<FArrayProperty*>> UScriptContainerComponent::GetScriptProps() const
{
	TTuple<TArray<FObjectProperty*>, TArray<FArrayProperty*>> ScriptProps;
	TArray<FObjectProperty*>& ScriptSingleProps = ScriptProps.Get<0>();
	TArray<FArrayProperty*>& ScriptArrayProps = ScriptProps.Get<1>();
	
	for(TFieldIterator<FObjectProperty> Itr(GetClass()); Itr; ++Itr)
	{
		if((*Itr)->PropertyClass->IsChildOf(UScriptBase::StaticClass()))
			ScriptSingleProps.Add(*Itr);
	}
	
	for(TFieldIterator<FArrayProperty> Itr(GetClass()); Itr; ++Itr)
	{
		if(const FObjectProperty* ObjProp = CastField<FObjectProperty>((*Itr)->Inner))
			if(ObjProp->PropertyClass->IsChildOf(UScriptBase::StaticClass()))
				ScriptArrayProps.Add(*Itr);
	}

	for(TFieldIterator<FStructProperty> Itr(GetClass()); Itr; ++Itr)
	{
		const FStructProperty* Prop = *Itr;
		if(Prop->Struct == FScriptObjectSingle::StaticStruct())
		{
			ScriptSingleProps.Add((FObjectProperty*)*Itr);
		}
		else if(Prop->Struct == FScriptObjectArray::StaticStruct())
		{
			ScriptArrayProps.Add((FArrayProperty*)*Itr);
		}
	}

	return ScriptProps;
}

void UScriptContainerComponent::ForEachScript(const TTuple<TArray<FObjectProperty*>, TArray<FArrayProperty*>>& ScriptProps, const TFunction<void(UScriptBase*)> Func)
{
	for(const auto* ScriptSingleProp : ScriptProps.Get<0>())
	{
		UScriptBase** const ScriptPtr = ScriptSingleProp->ContainerPtrToValuePtr<UScriptBase*>(this);
		if(!ScriptPtr || !*ScriptPtr) continue;
		Func(*ScriptPtr);
	}
	for(const auto* ScriptArrProp : ScriptProps.Get<1>())
	{
		TArray<UScriptBase*>* const ScriptArrPtr = ScriptArrProp->ContainerPtrToValuePtr<TArray<UScriptBase*>>(this);
		if(!ScriptArrPtr) continue;
		for(UScriptBase* const Script : *ScriptArrPtr)
		{
			if(!Script) continue;
			Func(Script);
		}
	}
}


template<typename UserClass>
void UScriptContainerComponent::ForEachScript(const TTuple<TArray<FObjectProperty*>, TArray<FArrayProperty*>>& ScriptProps, UserClass* UserObj, void(UserClass::*MemFunc)(UScriptBase*))
{
	if(!UserObj) return;
	for(const auto* ScriptSingleProp : ScriptProps.Get<0>())
	{
		UScriptBase** const ScriptPtr = ScriptSingleProp->ContainerPtrToValuePtr<UScriptBase*>(this);
		if(!ScriptPtr || !*ScriptPtr) continue;
		(*UserObj.*MemFunc)(*ScriptPtr);
	}
	for(const auto* ScriptArrProp : ScriptProps.Get<1>())
	{
		TArray<UScriptBase*>* const ScriptArrPtr = ScriptArrProp->ContainerPtrToValuePtr<TArray<UScriptBase*>>(this);
		if(!ScriptArrPtr) continue;
		for(UScriptBase* const Script : *ScriptArrPtr)
		{
			if(!Script) continue;
			(*UserObj.*MemFunc)(Script);
		}
	}
}



