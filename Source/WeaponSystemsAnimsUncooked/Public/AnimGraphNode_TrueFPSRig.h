// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_TwoBoneIK.h"
#include "AnimNode_TrueFPSRig.h"
#include "AnimGraphNode_TrueFPSRig.generated.h"

/**
 * 
 */
UCLASS()
class WEAPONSYSTEMANIMSUNCOOKED_API UAnimGraphNode_TrueFPSRig : public UAnimGraphNode_Base
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNode_TrueFPSRig Node;
	
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override { return FText::FromString(TEXT("True FPS Rig")); }
	virtual FText GetMenuCategory() const override { return FText::FromString(TEXT("Weapon System")); }
	virtual FLinearColor GetNodeTitleColor() const override { return FLinearColor::Red; }
	
	virtual FText GetTooltipText() const override {
		return FText::FromString(TEXT("Combines the Procedural Aim Offset and True FPS Arms IK nodes into one with some further logic to be able to apply montages beforehand and have them accurately line-up.")); }

	//virtual const FAnimNode_SkeletalControlBase* GetNode() const override { return &Node; }
};
