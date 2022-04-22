// Fill out your copyright notice in the Description page of Project Settings.


#include "Nodes/BPNode_CastPolyStruct.h"

#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "EdGraphUtilities.h"
#include "K2Node_CallFunction.h"
#include "K2Node_GetArrayItem.h"
#include "KismetCompiler.h"
#include "Polymorphic/PolymorphicStructFunctionLibrary.h"

#define LOCTEXT_NAMESPACE "UBPNode_CastPolyStruct"

class FKCHandler_CastPolyStruct : public FNodeHandlingFunctor
{
protected:
	FBPTerminal* IsValidTerm = nullptr;
	FBPTerminal* ArrTerm = nullptr;
	FBPTerminal* LiteralZeroIndex = nullptr;
	
public:
	typedef FNodeHandlingFunctor Super;
	FKCHandler_CastPolyStruct(FKismetCompilerContext& InCompilerContext) : Super(InCompilerContext) {}

	virtual void RegisterNets(FKismetFunctionContext& Context, UEdGraphNode* Node) override
	{
		const UBPNode_CastPolyStruct* CastNode = CastChecked<UBPNode_CastPolyStruct>(Node);

		if(Context.NetMap.Find(CastNode->GetStructPin()))
		{
			Context.MessageLog.Error(*LOCTEXT("Error_TermAlreadyRegistered", "Struct parameter is already registered@@").ToString(), Node);
			return;
		}
		if(Context.NetMap.Find(CastNode->GetPolyPin()))
		{
			Context.MessageLog.Error(*LOCTEXT("Error_TermAlreadyRegistered", "Poly struct parameter is already registered@@").ToString(), Node);
			return;
		}
		
		FBPTerminal* PolyStructTerm = Context.CreateLocalTerminal();
		//Context.InlineGeneratedValues.Add(PolyStructTerm);
		PolyStructTerm->CopyFromPin(CastNode->GetPolyPin(), Context.NetNameMap->MakeValidName(CastNode->GetPolyPin()));
		Context.NetMap.Add(CastNode->GetPolyPin(), PolyStructTerm);

		FBPTerminal* OutStructTerm = new FBPTerminal();//Context.CreateLocalTerminal();
		Context.InlineGeneratedValues.Add(OutStructTerm);
		OutStructTerm->CopyFromPin(CastNode->GetStructPin(), Context.NetNameMap->MakeValidName(CastNode->GetStructPin()));
		Context.NetMap.Add(CastNode->GetStructPin(), OutStructTerm);

		IsValidTerm = Context.CreateLocalTerminal();
		IsValidTerm->Type.PinCategory = UEdGraphSchema_K2::PC_Boolean;
		IsValidTerm->Source = Node;
		IsValidTerm->Name = Context.NetNameMap->MakeValidName(Node) + TEXT("_Result");

		ArrTerm = Context.CreateLocalTerminal();
		//ArrTerm->CopyFromPin(CastNode->GetStructPin(), Context.NetNameMap->MakeValidName(CastNode->GetStructPin()) + TEXT("_TempArr"));
		ArrTerm->Type.PinCategory = CastNode->GetStructPin()->PinType.PinCategory;
		ArrTerm->Type.PinSubCategoryObject = CastNode->GetStructPin()->PinType.PinSubCategoryObject;
		ArrTerm->Name = Context.NetNameMap->MakeValidName(CastNode->GetStructPin()) + TEXT("_Arr");
		ArrTerm->bPassedByReference = true;
		ArrTerm->Type.ContainerType = EPinContainerType::Array;
		ArrTerm->Source = Node;
		
		LiteralZeroIndex = Context.CreateLocalTerminal(TS_Literal);
		LiteralZeroIndex->bIsLiteral = true;
		LiteralZeroIndex->Type.PinCategory = UEdGraphSchema_K2::PC_Int;
		LiteralZeroIndex->Name = TEXT("0");
		LiteralZeroIndex->Source = Node;

		Super::RegisterNets(Context, Node);
	}

	virtual void Compile(FKismetFunctionContext& Context, UEdGraphNode* Node) override
	{
		const UBPNode_CastPolyStruct* CastNode = CastChecked<UBPNode_CastPolyStruct>(Node);

		UEdGraphPin* PolyPinNet = FEdGraphUtilities::GetNetFromPin(CastNode->GetPolyPin());
		FBPTerminal** PolyTermPtr = PolyPinNet ? Context.NetMap.Find(PolyPinNet) : nullptr;
		FBPTerminal* PolyTerm = PolyTermPtr ? *PolyTermPtr : nullptr;

		UEdGraphPin* OutStructPin = FEdGraphUtilities::GetNetFromPin(CastNode->GetStructPin());
		FBPTerminal** OutStructTermPtr = OutStructPin ? Context.NetMap.Find(OutStructPin) : nullptr;
		FBPTerminal* OutStructTerm = OutStructTermPtr ? *OutStructTermPtr : nullptr;

		if(!PolyTerm || !OutStructTerm)
		{
			Context.MessageLog.Error(*LOCTEXT("Error", "Term is invalid @@").ToString(), Node);
			return;
		}

		
		// Check is valid cast. Goto failed pin immediately if invalid.
		/*FBlueprintCompiledStatement& GetIsValid = Context.AppendStatementForNode(Node);
		GetIsValid.Type = KCST_CallFunction;
		GetIsValid.LHS = IsValidTerm;
		GetIsValid.RHS.Add(PolyTerm);
		GetIsValid.RHS.Add(OutStructTerm);
		GetIsValid.FunctionToCall = UPolyStructHack::StaticClass()->FindFunctionByName(
			GET_FUNCTION_NAME_CHECKED(UPolyStructHack, IsAFromRef));

		// Check IsValidTerm. Set above. Jumps to failed if invalid
		FBlueprintCompiledStatement& FailIfInvalid = Context.AppendStatementForNode(Node);
		FailIfInvalid.Type = KCST_GotoIfNot;
		FailIfInvalid.LHS = IsValidTerm;

		FBlueprintCompiledStatement& SetOutStruct = Context.AppendStatementForNode(Node);
		SetOutStruct.Type = KCST_CallFunction;
		SetOutStruct.RHS.Add(PolyTerm);
		SetOutStruct.RHS.Add(OutStructTerm);
		SetOutStruct.FunctionToCall = UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(
			GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, ExtractStructUnchecked));*/

		// Array Hack, kinda worked. Crashes
		
		FBlueprintCompiledStatement& CallArrHack = Context.AppendStatementForNode(Node);
		CallArrHack.Type = KCST_CallFunction;
		CallArrHack.RHS.Add(PolyTerm);
		CallArrHack.RHS.Add(ArrTerm);
		CallArrHack.FunctionToCall = UPolyStructHack::StaticClass()->FindFunctionByName(
			GET_FUNCTION_NAME_CHECKED(UPolyStructHack, ArrayPointToPolyStructHack));

		FBlueprintCompiledStatement& GetByRef = Context.AppendStatementForNode(Node);
		GetByRef.Type = KCST_ArrayGetByRef;
		GetByRef.RHS.Add(ArrTerm);
		GetByRef.RHS.Add(LiteralZeroIndex);
		OutStructTerm->InlineGeneratedParameter = &GetByRef;

		FBlueprintCompiledStatement& CallArrHackUndo = Context.AppendStatementForNode(Node);
		CallArrHackUndo.Type = KCST_CallFunction;
		CallArrHackUndo.RHS.Add(ArrTerm);
		CallArrHackUndo.FunctionToCall = UPolyStructHack::StaticClass()->FindFunctionByName(
			GET_FUNCTION_NAME_CHECKED(UPolyStructHack, ArrayPointToPolyStructHackUndo));
		
		// Executes Success pin
		FBlueprintCompiledStatement& CallSuccessPin = Context.AppendStatementForNode(Node);
		CallSuccessPin.Type = KCST_UnconditionalGoto;
		Context.GotoFixupRequestMap.Add(&CallSuccessPin, CastNode->GetSuccessPin());

		
		/*
		 * If invalid type
		 */
		

		// Executes failed pin. Goto on failed
		/*FBlueprintCompiledStatement& CallFailedPin = Context.AppendStatementForNode(Node);
		CallFailedPin.Type = KCST_UnconditionalGoto;
		CallFailedPin.bIsJumpTarget = true;
		Context.GotoFixupRequestMap.Add(&CallFailedPin, CastNode->GetFailPin());

		FailIfInvalid.TargetLabel = &CallFailedPin;*/
	}
};







FText UBPNode_CastPolyStruct::GetNodeTitle(ENodeTitleType::Type Title) const
{
	if(Title == ENodeTitleType::FullTitle)
	{
		return LOCTEXT("PolyStructGetCopy_FullTitle", "CAST");
	}
	return LOCTEXT("PolyStructGetCopy", "Cast (a ref)");
}

FText UBPNode_CastPolyStruct::GetTooltipText() const
{
	return LOCTEXT("RetRefTooltip", "Ensures the struct type is compatible and extracts the data into the new struct.");
}

FSlateIcon UBPNode_CastPolyStruct::GetIconAndTint(FLinearColor& OutColor) const
{
	if (const UFunction* WrappedFunction = UPolyStructHack::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructHack, CastPolyStruct)))
	{
		return UK2Node_CallFunction::GetPaletteIconForFunction(WrappedFunction, OutColor);
	}
	return Super::GetIconAndTint(OutColor);
}

void UBPNode_CastPolyStruct::AllocateDefaultPins()
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

void UBPNode_CastPolyStruct::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);
	

	/*UK2Node_CallFunction* Func = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	Func->SetFromFunction(UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, GetCopy)));
	Func->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(Func, this);

	// Set pin type otherwise it will throw error for invalid type
	Func->FindPin(TEXT("OutStruct"), EGPD_Output)->PinType = MoveTemp(GetStructPin()->PinType);

	CompilerContext.MovePinLinksToIntermediate(*GetInputPin(), *Func->GetExecPin());
	CompilerContext.MovePinLinksToIntermediate(*GetSuccessPin(), *Func->FindPin(TEXT("Success"), EGPD_Output));
	CompilerContext.MovePinLinksToIntermediate(*GetFailPin(), *Func->FindPin(TEXT("Fail"), EGPD_Output));
	CompilerContext.MovePinLinksToIntermediate(*GetStructPin(), *Func->FindPin(TEXT("OutStruct"), EGPD_Output));
	CompilerContext.MovePinLinksToIntermediate(*GetPolyPin(), *Func->FindPin(TEXT("PolyStruct"), EGPD_Input));
	CompilerContext.MovePinLinksToIntermediate(*GetExecPin(), *Func->GetExecPin());
	
	BreakAllNodeLinks();*/
}

bool UBPNode_CastPolyStruct::IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const
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

void UBPNode_CastPolyStruct::NotifyPinConnectionListChanged(UEdGraphPin* Pin)
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

void UBPNode_CastPolyStruct::PostReconstructNode()
{
	Super::PostReconstructNode();
	NotifyPinConnectionListChanged(GetStructPin());
}

FText UBPNode_CastPolyStruct::GetMenuCategory() const
{
	static FNodeTextCache CachedCategory;
	if(CachedCategory.IsOutOfDate(this))
	{
		CachedCategory.SetCachedText(LOCTEXT("NodeMenu", "Weapon System Function Library|Polymorphic Struct"), this);
	}
	return CachedCategory;
}

void UBPNode_CastPolyStruct::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	if(!ActionRegistrar.IsOpenForRegistration(GetClass())) return;
	UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
	check(NodeSpawner);
	ActionRegistrar.AddBlueprintAction(GetClass(), NodeSpawner);
}

FNodeHandlingFunctor* UBPNode_CastPolyStruct::CreateNodeHandler(FKismetCompilerContext& CompilerContext) const
{
	return new FKCHandler_CastPolyStruct(CompilerContext);
}


#undef LOCTEXT_NAMESPACE