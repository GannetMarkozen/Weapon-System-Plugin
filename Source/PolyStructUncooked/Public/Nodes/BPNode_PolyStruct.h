// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "BPNode_PolyStruct.generated.h"


/**
 * 
 */

UCLASS(MinimalAPI, Meta = (KeyWords = "poly,polymorphic,struct"), Category = "Weapon System Function Library|Polymorphic Struct")
class UBPNode_PolyStructGet : public UK2Node
{
	GENERATED_BODY()

	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual bool ShouldDrawCompact() const override { return true; }
	virtual bool IsNodePure() const override { return false; }
	virtual void AllocateDefaultPins() override;
	virtual void ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual bool IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const override;
	virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;
	virtual void PostReconstructNode() override;
	virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;
	virtual FText GetMenuCategory() const override;
	virtual bool IsNodeSafeToIgnore() const override { return true; }
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	FORCEINLINE UEdGraphPin* GetInputPin() const { return Pins[0]; }
	FORCEINLINE UEdGraphPin* GetSuccessPin() const { return Pins[1]; }
	FORCEINLINE UEdGraphPin* GetFailPin() const { return Pins[2]; }
	FORCEINLINE UEdGraphPin* GetPolyPin() const { return Pins[3]; }
	FORCEINLINE UEdGraphPin* GetStructPin() const { return Pins[4]; }
};

UCLASS(MinimalAPI, Meta = (KeyWords = "poly,polymorphic,struct"), Category = "Weapon System Function Library|Polymorphic Struct")
class UBPNode_PolyStructSet : public UK2Node
{
	GENERATED_BODY()

	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual bool ShouldDrawCompact() const override { return true; }
	virtual bool IsNodePure() const override { return false; }
	virtual void AllocateDefaultPins() override;
	virtual void ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual bool IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const override;
	virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;
	virtual void PostReconstructNode() override;
	virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;
	virtual FText GetMenuCategory() const override;
	virtual bool IsNodeSafeToIgnore() const override { return true; }
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	FORCEINLINE UEdGraphPin* GetThenPin() const { return Pins[1]; }
	FORCEINLINE UEdGraphPin* GetPolyPin() const { return Pins[2]; }
	FORCEINLINE UEdGraphPin* GetStructPin() const { return Pins[3]; }
};


UCLASS(MinimalAPI, Meta = (KeyWords = "poly,polymorphic,struct"), Category = "Weapon System Function Library|Polymorphic Struct")
class UBPNode_PolyStructExtract : public UK2Node
{
	GENERATED_BODY()

	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual bool ShouldDrawCompact() const override { return true; }
	virtual bool IsNodePure() const override { return false; }
	virtual void AllocateDefaultPins() override;
	virtual void ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual bool IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const override;
	virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;
	virtual void PostReconstructNode() override;
	virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;
	virtual FText GetMenuCategory() const override;
	virtual bool IsNodeSafeToIgnore() const override { return true; }
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	FORCEINLINE UEdGraphPin* GetInputPin() const { return Pins[0]; }
	FORCEINLINE UEdGraphPin* GetSuccessPin() const { return Pins[1]; }
	FORCEINLINE UEdGraphPin* GetFailPin() const { return Pins[2]; }
	FORCEINLINE UEdGraphPin* GetPolyPin() const { return Pins[3]; }
	FORCEINLINE UEdGraphPin* GetStructPin() const { return Pins[4]; }
};




UCLASS(MinimalAPI, Meta = (KeyWords = "poly,polymorphic,struct,handle"), Category = "Weapon System Function Library|Polymorphic Struct")
class UBPNode_PolyStructHandleAdd : public UK2Node
{
	GENERATED_BODY()

	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual bool ShouldDrawCompact() const override { return true; }
	virtual bool IsNodePure() const override { return false; }
	virtual void AllocateDefaultPins() override;
	virtual void ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual bool IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const override;
	virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;
	virtual void PostReconstructNode() override;
	virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;
	virtual FText GetMenuCategory() const override;
	virtual bool IsNodeSafeToIgnore() const override { return true; }
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	FORCEINLINE UEdGraphPin* GetInputPin() const { return Pins[0]; }
	FORCEINLINE UEdGraphPin* GetThenPin() const { return Pins[1]; }
	FORCEINLINE UEdGraphPin* GetIndexPin() const { return Pins[2]; }
	FORCEINLINE UEdGraphPin* GetPolyPin() const { return Pins[3]; }
	FORCEINLINE UEdGraphPin* GetStructPin() const { return Pins[4]; }
};



