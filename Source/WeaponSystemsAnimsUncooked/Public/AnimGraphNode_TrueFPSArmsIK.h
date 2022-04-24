// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_TwoBoneIK.h"
#include "AnimNode_FPSArmsIK.h"
#include "AnimGraphNode_TrueFPSArmsIK.generated.h"

/**
 * 
 */
UCLASS()
class WEAPONSYSTEMANIMSUNCOOKED_API UAnimGraphNode_TrueFPSArmsIK : public UAnimGraphNode_Base
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNode_FPSArmsIK Node;
	
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override { return FText::FromString(TEXT("True FPS Arms IK")); }
	virtual FText GetMenuCategory() const override { return FText::FromString(TEXT("Weapon System")); }
	virtual FLinearColor GetNodeTitleColor() const override { return FLinearColor::Red; }
	
	virtual FText GetTooltipText() const override {
		return FText::FromString(TEXT("Deprecated node. Pure arms IK with no procedural aim offset. Decided to keep this here in-case anybody may need just arms IK for a"
			"True FPS but you can not accurately play montages using this node. If you would like to apply animations that are not the Reference Pose use the True FPS Rig.")); }
};
