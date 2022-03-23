// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraph/Public/AnimGraphNode_Base.h"
#include "AnimNode_ProceduralAimOffset.h"
#include "AnimGraphNode_ProceduralAimOffset.generated.h"

/**
 * 
 */
UCLASS(MinimalAPI)
class UAnimGraphNode_ProceduralAimOffset : public UAnimGraphNode_Base
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNode_ProceduralAimOffset Node;
	
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override { return FText::FromString(TEXT("Procedural Aim Offset")); }
	virtual FText GetMenuCategory() const override { return FText::FromString(TEXT("Weapon System")); }
	virtual FLinearColor GetNodeTitleColor() const override { return FLinearColor::Red; }
	
	virtual FText GetTooltipText() const override {
		return FText::FromString(TEXT("Orient the selected bones to match the look-rotation using the Reference Pose as the target pose for the additives")); }
};
