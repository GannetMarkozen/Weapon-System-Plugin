// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "K2Node_AddPinInterface.h"
#include "BPNode_MakePolyStructHandle.generated.h"


UCLASS()
class POLYSTRUCTUNCOOKED_API UBPNode_MakePolyStructHandle : public UK2Node, public IK2Node_AddPinInterface
{
	GENERATED_BODY()
public:
	UBPNode_MakePolyStructHandle() : NumInputs(1) {}
	
	virtual void AllocateDefaultPins() override;
	virtual void ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual void GetNodeContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const override;
	virtual bool IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const override;
	virtual void PostReconstructNode() override;
	virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetMenuCategory() const override { return FText::FromString(TEXT("Weapon System Function Library|Polymorphic Struct")); }
	virtual FText GetTooltipText() const override { return FText::FromString(TEXT("Creates a Poly Struct Handle from an array of structs inline")); }
	virtual bool ShouldDrawCompact() const override { return false; }
	virtual bool IsNodePure() const override { return true; }
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual FNodeHandlingFunctor* CreateNodeHandler(FKismetCompilerContext& CompilerContext) const override;
	virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;

	virtual void AddInputPin() override;
	virtual bool CanRemovePin(const UEdGraphPin* Pin) const override { return Pin && Pins.Find((UEdGraphPin*)Pin) > INPUT_INDEX; }
	virtual bool CanAddPin() const override { return true; }
	virtual void RemoveInputPin(UEdGraphPin* Pin) override;

	void SyncPinNames();

	UPROPERTY()
	int32 NumInputs;
	
	FORCEINLINE UEdGraphPin* GetHandlePin() const { return Pins[0]; }
	FORCEINLINE static FCreatePinParams GetWildcardParams()
	{
		FCreatePinParams WildcardParams;
		WildcardParams.bIsReference = true;
		WildcardParams.bIsConst = true;
		WildcardParams.ContainerType = EPinContainerType::None;
		return WildcardParams;
	}

	// The index the input pins begin at
	static constexpr int32 INPUT_INDEX = 1;
};
