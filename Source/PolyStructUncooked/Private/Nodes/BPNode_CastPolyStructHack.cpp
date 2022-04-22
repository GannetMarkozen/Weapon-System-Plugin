// Fill out your copyright notice in the Description page of Project Settings.


#include "Nodes/BPNode_CastPolyStructHack.h"

#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "EdGraphUtilities.h"
#include "K2Node_CallFunction.h"
#include "K2Node_GetArrayItem.h"
#include "KismetCompiler.h"
#include "Polymorphic/PolymorphicStructFunctionLibrary.h"

#define LOCTEXT_NAMESPACE "UBPNode_CastPolyStructHack"




FText UBPNode_CastPolyStructHack::GetNodeTitle(ENodeTitleType::Type Title) const
{
	if(Title == ENodeTitleType::FullTitle)
	{
		return LOCTEXT("PolyStructCast_FullTitle", "CAST");
	}
	return LOCTEXT("PolyStructCast", "Cast Hack (a ref)");
}

FText UBPNode_CastPolyStructHack::GetTooltipText() const
{
	return LOCTEXT("RetRefTooltip", "Ensures the struct type is compatible and extracts the data into the new struct.");
}

FSlateIcon UBPNode_CastPolyStructHack::GetIconAndTint(FLinearColor& OutColor) const
{
	if (const UFunction* WrappedFunction = UPolyStructHack::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructHack, CastPolyStruct)))
	{
		return UK2Node_CallFunction::GetPaletteIconForFunction(WrappedFunction, OutColor);
	}
	return Super::GetIconAndTint(OutColor);
}

void UBPNode_CastPolyStructHack::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();

	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);
	GetSuccessPin()->PinFriendlyName = FText::FromString(TEXT("Success"));
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, TEXT("Fail"));
	
	// Input
	FCreatePinParams PolyStructParams;
	PolyStructParams.bIsReference = true;
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Struct, TEXT(""), FPolyStruct::StaticStruct(), TEXT("PolyStruct"), PolyStructParams);

	// Output
	FCreatePinParams OutStructParams;
	OutStructParams.bIsReference = true;
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Wildcard, TEXT("OutStruct"), OutStructParams);
}

void UBPNode_CastPolyStructHack::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

	// Make temporary array function
	auto* MakeTempArrFunc = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	MakeTempArrFunc->SetFromFunction(UPolyStructHack::StaticClass()->FindFunctionByName(
		GET_FUNCTION_NAME_CHECKED(UPolyStructHack, MakeTempArr)));
	MakeTempArrFunc->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateMacroNode(MakeTempArrFunc, this);

	// Array hack function
	auto* ArrayHackFunc = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	ArrayHackFunc->SetFromFunction(UPolyStructHack::StaticClass()->FindFunctionByName(
		GET_FUNCTION_NAME_CHECKED(UPolyStructHack, ArrayPointToPolyStructHack)));
	ArrayHackFunc->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(ArrayHackFunc, this);

	// Get (a ref) function
	auto* GetRefFunc = CompilerContext.SpawnIntermediateNode<UK2Node_GetArrayItem>(this, SourceGraph);
	GetRefFunc->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateMacroNode(GetRefFunc, this);

	// Array hack undo function
	auto* ArrayHackUndoFunc = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	ArrayHackUndoFunc->SetFromFunction(UPolyStructHack::StaticClass()->FindFunctionByName(
		GET_FUNCTION_NAME_CHECKED(UPolyStructHack, ArrayPointToPolyStructHackUndo)));
	ArrayHackUndoFunc->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(ArrayHackUndoFunc, this);


	NotifyPinConnectionListChanged(GetStructPin());

	/*
	 *
	 */

	// Make array pin type
	FEdGraphPinType ArrPinType = GetStructPin()->PinType;
	ArrPinType.ContainerType = EPinContainerType::Array;

	// Set array pin type to custom array params
	MakeTempArrFunc->FindPin(TEXT("OutArray"), EGPD_Output)->PinType = ArrPinType;
	ArrayHackFunc->FindPin(TEXT("OutArray"), EGPD_Input)->PinType = ArrPinType;
	GetRefFunc->FindPin(TEXT("Array"), EGPD_Input)->PinType = ArrPinType;
	ArrayHackUndoFunc->FindPin(TEXT("OutArray"), EGPD_Input)->PinType = ArrPinType;

	// Link make temp array to array hack
	CompilerContext.MovePinLinksToIntermediate(*GetExecPin(), *MakeTempArrFunc->GetExecPin());
	MakeTempArrFunc->GetThenPin()->MakeLinkTo(ArrayHackFunc->GetExecPin());
	MakeTempArrFunc->FindPin(TEXT("OutArray"), EGPD_Output)->MakeLinkTo(ArrayHackFunc->FindPin(TEXT("OutArray"), EGPD_Input));
	CompilerContext.CopyPinLinksToIntermediate(*GetPolyPin(), *ArrayHackFunc->FindPin(TEXT("PolyStruct"), EGPD_Input));

	// Plug in array param to get ref node
	MakeTempArrFunc->FindPin(TEXT("OutArray"), EGPD_Output)->MakeLinkTo(GetRefFunc->FindPin(TEXT("Array"), EGPD_Input));
	
	UEdGraphPin* ArrayPin = GetRefFunc->FindPin(TEXT("Array"), EGPD_Input);
	if(ArrayPin->HasAnyConnections())
	{
		UE_LOG(LogTemp, Warning, TEXT("Connected"));
	}
	else UE_LOG(LogTemp, Warning, TEXT("Not connected"));

	// Set output of get ref as our output
	CompilerContext.MovePinLinksToIntermediate(*GetStructPin(), *GetRefFunc->FindPin(TEXT("Output"), EGPD_Output));
	UEdGraphPin* OutputPin = GetRefFunc->FindPin(TEXT("Output"), EGPD_Output);
	if(OutputPin->HasAnyConnections())
	{
		if(OutputPin->PinType != OutputPin->LinkedTo[0]->PinType)
		{
			OutputPin->PinType = MoveTemp(OutputPin->LinkedTo[0]->PinType);
			OutputPin->PinType.bIsConst = false;
			OutputPin->PinType.bIsReference = true;
			GetGraph()->NotifyGraphChanged();
		}
	}
	
	// Set undo array hack node
	ArrayHackFunc->GetThenPin()->MakeLinkTo(ArrayHackUndoFunc->GetExecPin());
	MakeTempArrFunc->FindPin(TEXT("OutArray"), EGPD_Output)->MakeLinkTo(ArrayHackUndoFunc->FindPin(TEXT("OutArray"), EGPD_Input));
	CompilerContext.MovePinLinksToIntermediate(*GetSuccessPin(), *ArrayHackUndoFunc->GetThenPin());
	
	BreakAllNodeLinks();
}

bool UBPNode_CastPolyStructHack::IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const
{
	if(MyPin != GetStructPin()) return false;
	
	if(OtherPin->PinType.PinCategory != UEdGraphSchema_K2::PC_Struct)
	{
		OutReason = LOCTEXT("InvalidStructParam", "Must be a valid struct.").ToString();
		return true;
	}
	if(OtherPin->PinType.IsContainer())
	{
		OutReason = LOCTEXT("InvalidStructParam", "Struct cannot be in a container.").ToString();
		return true;
	}
	UScriptStruct* PinClass = Cast<UScriptStruct>(OtherPin->PinType.PinSubCategoryObject);
	if(PinClass && (PinClass->IsChildOf(FPolyStruct::StaticStruct()) || PinClass->IsChildOf(FPolyStructHandle::StaticStruct())))
	{
		OutReason = LOCTEXT("InvalidStructParam", "Can not be a Poly Struct type.").ToString();
		return true;
	}
	return false;
}

void UBPNode_CastPolyStructHack::NotifyPinConnectionListChanged(UEdGraphPin* Pin)
{
	Super::NotifyPinConnectionListChanged(Pin);
	
	if(Pin != GetStructPin()) return;
	if(!Pin->LinkedTo.IsEmpty())
	{
		if(Pin->PinType != Pin->LinkedTo[0]->PinType)
		{
			Pin->PinType = MoveTemp(Pin->LinkedTo[0]->PinType);
			Pin->PinType.bIsConst = false;
			Pin->PinType.bIsReference = true;
			GetGraph()->NotifyGraphChanged();
		}
	}
	else if(Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Wildcard)
	{
		Pin->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
		Pin->PinType.PinSubCategoryObject = nullptr;
		Pin->PinType.bIsConst = false;
		Pin->PinType.bIsReference = true;
		GetGraph()->NotifyGraphChanged();
	}
}

void UBPNode_CastPolyStructHack::PostReconstructNode()
{
	Super::PostReconstructNode();
	NotifyPinConnectionListChanged(GetStructPin());
}

FText UBPNode_CastPolyStructHack::GetMenuCategory() const
{
	static FNodeTextCache CachedCategory;
	if(CachedCategory.IsOutOfDate(this))
	{
		CachedCategory.SetCachedText(LOCTEXT("NodeMenu", "Weapon System Function Library|Polymorphic Struct"), this);
	}
	return CachedCategory;
}

void UBPNode_CastPolyStructHack::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	if(!ActionRegistrar.IsOpenForRegistration(GetClass())) return;
	UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
	check(NodeSpawner);
	ActionRegistrar.AddBlueprintAction(GetClass(), NodeSpawner);
}

FNodeHandlingFunctor* UBPNode_CastPolyStructHack::CreateNodeHandler(FKismetCompilerContext& CompilerContext) const
{
	//return new FKCHandler_CastPolyStruct(CompilerContext);
	return nullptr;
}


#undef LOCTEXT_NAMESPACE