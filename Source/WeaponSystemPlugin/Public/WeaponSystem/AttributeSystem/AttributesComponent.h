// Copyright 2022, Gannet Markozen, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
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

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, ReplicatedUsing = "OnRep_ActiveEffects", Meta = (AllowPrivateAccess = "true"), Category = "Attributes")
	TArray<class UEffect*> ActiveEffects;

	UFUNCTION()
	virtual void OnRep_ActiveEffects(const TArray<class UEffect*>& OldActiveEffects) {}

public:
	FORCEINLINE const TArray<class UEffect*>& GetActiveEffects() const { return ActiveEffects; }
	
};
