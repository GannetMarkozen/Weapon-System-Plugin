
#pragma once

#include "CoreMinimal.h"
#include "ReplicatedObject.h"
#include "ScriptBase.generated.h"

UCLASS(Abstract, Blueprintable, BlueprintType, DefaultToInstanced, EditInlineNew)
class WEAPONSYSTEMPLUGIN_API UScriptBase : public UReplicatedObject
{
	GENERATED_BODY()
public:
	UScriptBase() = default;
	
	virtual void BeginPlay();
	virtual void EndPlay();
	virtual void Tick(float DeltaTime) {}

protected:
	virtual void OnDestroyed() override;
	
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Begin Play"), Category = "Script")
	void BP_BeginPlay();

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "End Play"), Category = "Script")
	void BP_EndPlay();

	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "Tick"), Category = "Script")
	void BP_Tick(float DeltaTime);

	UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category = "Script")
	bool CanTick() const;
	virtual FORCEINLINE bool CanTick_Implementation() const { return false; }

private:
	FDelegateHandle TickHandle;
	FORCEINLINE bool Internal_Tick(const float DeltaTime)
	{
		Tick(DeltaTime);
		BP_Tick(DeltaTime);
		return true;
	}
};



/* Automatically calls begin play and replicates Scripts declared in this component.
 * Primarily for Blueprint users. Has not been tested thoroughly...
 */

UCLASS(BlueprintType, Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WEAPONSYSTEMPLUGIN_API UScriptContainerComponent : public UActorComponent
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) override;

	// Only modifies if not already set.
	TTuple<TArray<FObjectProperty*>, TArray<FArrayProperty*>> GetScriptProps() const;

	void ForEachScript(const TTuple<TArray<FObjectProperty*>, TArray<FArrayProperty*>>& ScriptProps, const TFunction<void(class UScriptBase*)> Func);
	template<typename UserClass>
	void ForEachScript(const TTuple<TArray<FObjectProperty*>, TArray<FArrayProperty*>>& ScriptProps, UserClass* UserObj, void(UserClass::*Func)(class UScriptBase*));
};

USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FScriptObjectSingle
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	class UScriptBase* Script;

	FORCEINLINE operator UScriptBase*&() { return Script; }
	FORCEINLINE FScriptObjectSingle& operator=(UScriptBase* OtherScript) { Script = OtherScript; return *this; }
	FORCEINLINE class UScriptBase* operator->() const { return Script; }
};

USTRUCT(BlueprintType)
struct WEAPONSYSTEMPLUGIN_API FScriptObjectArray
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	TArray<UScriptBase*> Scripts;

	FORCEINLINE operator TArray<UScriptBase*>&() { return Scripts; }
	FORCEINLINE FScriptObjectArray& operator=(const TArray<UScriptBase*>& OtherScripts) { Scripts = OtherScripts; return *this; }
	FORCEINLINE UScriptBase*& operator[](const int32 Index) { return Scripts[Index]; }
};

UCLASS()
class WEAPONSYSTEMPLUGIN_API UScriptObjectWrapperFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Meta = (DisplayName = "To Script Object", CompactNodeTitle = "->", BlueprintAutocast), Category = "Utilities|Script Wrappers")
	static FORCEINLINE UScriptBase*& Conv_ScriptObjectSingleToScriptBase(const FScriptObjectSingle& ScriptWrapper)
	{
		return (FScriptObjectSingle&)ScriptWrapper;
	}

	UFUNCTION(BlueprintPure, Meta = (DisplayName = "To Script Object Array", CompactNodeTitle = "->", BlueprintAutocast), Category = "Utilities|Script Wrappers")
	static FORCEINLINE TArray<UScriptBase*>& Conv_ScriptObjectArrayToScriptBases(const FScriptObjectArray& ScriptWrapper)
	{
		return (FScriptObjectArray&)ScriptWrapper;
	}
}; 















