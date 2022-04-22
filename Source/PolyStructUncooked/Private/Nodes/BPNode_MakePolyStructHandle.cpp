// Fill out your copyright notice in the Description page of Project Settings.


#include "Nodes/BPNode_MakePolyStructHandle.h"

#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "K2Node_CallFunction.h"
#include "K2Node_MakeArray.h"
#include "KismetCompiler.h"
#include "ToolMenu.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Polymorphic/PolymorphicStruct.h"
#include "Polymorphic/PolymorphicStructFunctionLibrary.h"

#define LOCTEXT_NAMESPACE "BPNode_MakePolyStructHandle"

void UBPNode_MakePolyStructHandle::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();

	// Execs
	//CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	//CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);

	constexpr int32 OUT_PIN_INDEX = 0;
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Struct, TEXT(""), FPolyStructHandle::StaticStruct(), TEXT("OutPolyStructHandle"));
	Pins[OUT_PIN_INDEX]->bAllowFriendlyName = true;
	Pins[OUT_PIN_INDEX]->PinFriendlyName = FText::FromString(TEXT("Handle"));
	//Pins[OUT_PIN_INDEX]->PinToolTip = TEXT("Poly Struct Handle");

	for(int32 i = 0; i < NumInputs; i++)
	{
		static const FCreatePinParams WildcardParams = GetWildcardParams();
		CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Wildcard, *FString::Printf(TEXT("[%d]"), i), WildcardParams);
	}
}

void UBPNode_MakePolyStructHandle::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);
	
	if(NumInputs <= 0) return;

	// Make an "Make Array" node. This will create our FPolyStruct array
	UK2Node_MakeArray* MakeArrNode = CompilerContext.SpawnIntermediateNode<UK2Node_MakeArray>(this, SourceGraph);
	MakeArrNode->NumInputs = NumInputs;
	MakeArrNode->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeArrNode, this);

	// For each struct input
	for(int32 i = INPUT_INDEX; i < Pins.Num(); i++)
	{
		// Create a "Make Poly Struct" node to convert struct to poly struct
		UK2Node_CallFunction* MakePolyFunc = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
		MakePolyFunc->SetFromFunction(UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, MakePolyStruct)));
		MakePolyFunc->AllocateDefaultPins();
		CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakePolyFunc, this);

		// Move our struct pin at index to the "Make Poly Struct" node
		CompilerContext.MovePinLinksToIntermediate(*Pins[i], *MakePolyFunc->FindPinChecked(TEXT("Struct"), EGPD_Input));
		MakePolyFunc->FindPinChecked(TEXT("Struct"), EGPD_Input)->PinType = MoveTemp(Pins[i]->PinType);

		// Link the "Make Poly Struct" poly struct output to "Make Array" node at index and tell it to update
		MakePolyFunc->FindPinChecked(TEXT("PolyStruct"), EGPD_Output)->MakeLinkTo(MakeArrNode->Pins[i - INPUT_INDEX + 1]);
		MakeArrNode->NotifyPinConnectionListChanged(MakeArrNode->Pins[i - INPUT_INDEX + 1]);
	}

	// Create a "Make Poly Struct Handle From Array" node which will convert the poly struct array to a poly struct handle
	UK2Node_CallFunction* MakePolyStructHandleFunc = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	MakePolyStructHandleFunc->SetFromFunction(UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, MakePolyStructHandleFromArray)));
	MakePolyStructHandleFunc->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakePolyStructHandleFunc, this);

	// Link output of "Make Poly Struct Handle From Array" to this node's output
	MakeArrNode->FindPinChecked(TEXT("Array"), EGPD_Output)->MakeLinkTo(MakePolyStructHandleFunc->FindPinChecked(TEXT("PolyStructs"), EGPD_Input));
	CompilerContext.MovePinLinksToIntermediate(*GetHandlePin(), *MakePolyStructHandleFunc->FindPinChecked(TEXT("PolyStructHandle")));

	BreakAllNodeLinks();

	/*UK2Node_CallFunction* MakeDefaultHandleFunc = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	MakeDefaultHandleFunc->SetFromFunction(UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, MakeDefaultPolyStructHandle)));
	MakeDefaultHandleFunc->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(MakeDefaultHandleFunc, this);
	
	CompilerContext.MovePinLinksToIntermediate(*GetExecPin(), *MakeDefaultHandleFunc->GetExecPin());
	CompilerContext.MovePinLinksToIntermediate(*GetHandlePin(), *MakeDefaultHandleFunc->FindPin(TEXT("OutPolyStructHandle"), EGPD_Output));

	UK2Node_CallFunction* LastAddFunc = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	LastAddFunc->SetFromFunction(UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, AddStruct)));
	LastAddFunc->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(LastAddFunc, this);

	MakeDefaultHandleFunc->GetThenPin()->MakeLinkTo(LastAddFunc->GetExecPin());
	MakeDefaultHandleFunc->FindPin(TEXT("OutPolyStructHandle"), EGPD_Output)->MakeLinkTo(LastAddFunc->FindPin(TEXT("PolyStructHandle"), EGPD_Input));

	CompilerContext.MovePinLinksToIntermediate(*Pins[3], *LastAddFunc->FindPin(TEXT("Struct"), EGPD_Input));
	LastAddFunc->FindPin(TEXT("Struct"), EGPD_Input)->PinType = Pins[3]->PinType;
	
	for(int32 i = INPUT_INDEX + 1; i < Pins.Num(); i++)
	{
		UK2Node_CallFunction* CurrentAddFunc = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
		CurrentAddFunc->SetFromFunction(UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, AddStruct)));
		CurrentAddFunc->AllocateDefaultPins();
		CompilerContext.MessageLog.NotifyIntermediateObjectCreation(CurrentAddFunc, this);

		LastAddFunc->GetThenPin()->MakeLinkTo(CurrentAddFunc->GetExecPin());
		MakeDefaultHandleFunc->FindPin(TEXT("OutPolyStructHandle"), EGPD_Output)->MakeLinkTo(CurrentAddFunc->FindPin(TEXT("PolyStructHandle"), EGPD_Input));

		CompilerContext.MovePinLinksToIntermediate(*Pins[i], *CurrentAddFunc->FindPin(TEXT("Struct"), EGPD_Input));
		CurrentAddFunc->FindPin(TEXT("Struct"), EGPD_Input)->PinType = Pins[i]->PinType;

		LastAddFunc = CurrentAddFunc;
	}

	UEdGraphPin* ThenPin = Pins[1];
	CompilerContext.MovePinLinksToIntermediate(*ThenPin, *LastAddFunc->GetThenPin());*/
}


void UBPNode_MakePolyStructHandle::AddInputPin()
{
	static const FCreatePinParams WildcardParams = GetWildcardParams();
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Wildcard, *FString::Printf(TEXT("[%d]"), NumInputs++), WildcardParams);
}

void UBPNode_MakePolyStructHandle::GetNodeContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const
{
	Super::GetNodeContextMenuActions(Menu, Context);

	if(Context->bIsDebugging || !Context->Pin || !CanRemovePin(Context->Pin)) return;
	static const FName CommutativeAssociativeBinaryOperatorNodeName("BPNode_MakePolyStructHandle");
	static const FText CommutativeAssociativeBinaryOperatorStr = LOCTEXT("BPNode_MakePolyStructHandle", "Make PolyStructHandle");
	
	FToolMenuSection& Section = Menu->AddSection(CommutativeAssociativeBinaryOperatorNodeName, CommutativeAssociativeBinaryOperatorStr);
	Section.AddMenuEntry(FName("RemovePin"), LOCTEXT("RemovePin", "Remove Pin"), LOCTEXT("RemovePinTooltip", "Remove this input pin"), FSlateIcon(),
		FToolUIActionChoice(FExecuteAction::CreateUObject((UBPNode_MakePolyStructHandle*)this, &ThisClass::RemoveInputPin, (UEdGraphPin*)Context->Pin)));
}

void UBPNode_MakePolyStructHandle::PostReconstructNode()
{
	Super::PostReconstructNode();
	for(int32 i = INPUT_INDEX; i < Pins.Num(); i++)
	{
		if(!Pins[i]) return;
		NotifyPinConnectionListChanged(Pins[i]);
	}
}


void UBPNode_MakePolyStructHandle::RemoveInputPin(UEdGraphPin* Pin)
{
	FScopedTransaction Transaction(FText::FromString("MakePolyStructHandle_RemoveInputPin"));
	Modify();
	--NumInputs;
	RemovePin(Pin);
	SyncPinNames();
	FBlueprintEditorUtils::MarkBlueprintAsModified(GetBlueprint());
	GetGraph()->NotifyGraphChanged();
}

void UBPNode_MakePolyStructHandle::SyncPinNames()
{
	int32 PinNum = 0;
	for(int32 i = INPUT_INDEX; i < Pins.Num(); i++)
	{
		if(!Pins.IsValidIndex(i)) return;
		Pins[i]->Modify();
		Pins[i]->PinName = *FString::Printf(TEXT("[%d]"), PinNum++);
	}
}



bool UBPNode_MakePolyStructHandle::IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const
{
	if(Pins.Find((UEdGraphPin*)MyPin) < INPUT_INDEX) return false;
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


void UBPNode_MakePolyStructHandle::NotifyPinConnectionListChanged(UEdGraphPin* Pin)
{
	Super::NotifyPinConnectionListChanged(Pin);

	if(!Pin || Pins.Find(Pin) < INPUT_INDEX) return;
	if(!Pin->LinkedTo.IsEmpty())
	{
		if(Pin->PinType != Pin->LinkedTo[0]->PinType)
		{
			Pin->PinType = MoveTemp(Pin->LinkedTo[0]->PinType);
			Pin->PinType.bIsConst = true;
			Pin->PinType.bIsReference = true;
			GetGraph()->NotifyGraphChanged();
		}
	}
	else if(Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Wildcard)
	{
		Pin->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
		Pin->PinType.PinSubCategoryObject = nullptr;
		Pin->PinType.bIsConst = true;
		Pin->PinType.bIsReference = true;
		GetGraph()->NotifyGraphChanged();
	}
}

FText UBPNode_MakePolyStructHandle::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	if(TitleType == ENodeTitleType::FullTitle)
	{
		return LOCTEXT("FullTitle", "Make PolyStructHandle");
	}
	return LOCTEXT("MenuTitle", "Make PolyStructHandle (from structs)");
}


void UBPNode_MakePolyStructHandle::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	if(!ActionRegistrar.IsOpenForRegistration(GetClass())) return;
	UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
	check(NodeSpawner);
	ActionRegistrar.AddBlueprintAction(GetClass(), NodeSpawner);
}

FSlateIcon UBPNode_MakePolyStructHandle::GetIconAndTint(FLinearColor& OutColor) const
{
	//if (const UFunction* WrappedFunction = UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, MakePolyStructHandleFromArray)))
	if(const UFunction* WrappedFunction = UKismetMathLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, MakeVector)))
	{
		return UK2Node_CallFunction::GetPaletteIconForFunction(WrappedFunction, OutColor);
	}
	return Super::GetIconAndTint(OutColor);
	//static FSlateIcon Icon("EditorStyle", "GraphEditor.MakeArray_16x");
	//return Icon;
}


FNodeHandlingFunctor* UBPNode_MakePolyStructHandle::CreateNodeHandler(FKismetCompilerContext& CompilerContext) const
{
	return Super::CreateNodeHandler(CompilerContext);
}

#undef LOCTEXT_NAMESPACE

