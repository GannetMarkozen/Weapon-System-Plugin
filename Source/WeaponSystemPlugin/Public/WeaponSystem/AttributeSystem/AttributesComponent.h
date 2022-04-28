// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Attribute.h"
#include "Components/ActorComponent.h"
#include "Polymorphic/PolymorphicStruct.h"
#include "AttributesComponent.generated.h"



UCLASS(BlueprintType, Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WEAPONSYSTEMPLUGIN_API UAttributesComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UAttributesComponent();

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) override;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, ReplicatedUsing = "OnRep_ActiveEffects", Meta = (AllowPrivateAccess = "true"), Category = "Attributes")
	TArray<class UAttributeEffectBase*> ActiveEffects;

	UFUNCTION()
	virtual void OnRep_ActiveEffects(const TArray<class UAttributeEffectBase*>& OldActiveEffects) {}

public:
	FORCEINLINE const TArray<class UAttributeEffectBase*>& GetActiveEffects() const { return ActiveEffects; }

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	virtual void ApplyEffect(TSubclassOf<class UAttributeEffectBase> Effect, const FPolyStructHandle& Context);

	// Finds the attribute with this name. Returns an empty handle if invalid
	UFUNCTION(BlueprintPure, Meta = (AutoCreateRefTerm = "Name"), Category = "Attributes")
	UPARAM(ref) FAttributeHandle FindAttributeByName(const FName& Name) { return FAttributeHandle(this, Name); }

private:
	// Creates an attribute handle from the attribute. Essentially allows passing the attribute by-reference
	UFUNCTION(BlueprintPure, CustomThunk, Meta = (DisplayName = "Make Attribute Handle", AllowPrivateAccess = "true"), Category = "Attributes")
	UPARAM(ref) FAttributeHandle BP_MakeAttributeHandle(UPARAM(ref) FAttribute& Attribute) { LowLevelFatalError(TEXT("Do not call MakeAttributeHandle directly!")); return FAttributeHandle(); }
	DECLARE_FUNCTION(execBP_MakeAttributeHandle)
	{
		Stack.StepCompiledIn<FStructProperty>(nullptr);
		auto* Prop = Stack.MostRecentProperty;
		P_FINISH P_NATIVE_BEGIN
		static_cast<FAttributeHandle*>(RESULT_PARAM)->Set(Cast<UAttributesComponent>(Context), Prop);
		P_NATIVE_END
	}
};





















