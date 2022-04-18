// Fill out your copyright notice in the Description page of Project Settings.


#include "Nodes/K2Node_CastPolyStructRef.h"

#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "CallFunctionHandler.h"
#include "EdGraphSchema_K2.h"
#include "EdGraphUtilities.h"
#include "KismetCompiledFunctionContext.h"
#include "KismetCompiler.h"
#include "EdGraph/EdGraphNodeUtils.h"
#include "Misc/ExpressionParser.h"
#include "Polymorphic/PolymorphicStructFunctionLibrary.h"
#include "Polymorphic/PolyStruct.h"

#define LOCTEXT_NAMESPACE "K2Node_PolyStructGetRef"


class FKCHandler_CastPolyStructRef : public FNodeHandlingFunctor
{
public:
	typedef FNodeHandlingFunctor Super;
	FKCHandler_CastPolyStructRef(FKismetCompilerContext& InCompilerContext) : FNodeHandlingFunctor(InCompilerContext) {}

	virtual void RegisterNets(FKismetFunctionContext& Context, UEdGraphNode* Node) override
	{
		UK2Node_CastPolyStructRef* CastNode = CastChecked<UK2Node_CastPolyStructRef>(Node);

		if(Context.NetMap.Find(CastNode->GetStructPin()))
		{
			Context.MessageLog.Error(*LOCTEXT("Errror_ReturnTermAlreadyRegistered", "Return term is already registered??? @@").ToString());
			return;
		}

		FBPTerminal* Term = new FBPTerminal();
		Context.InlineGeneratedValues.Add(Term);
		Term->CopyFromPin(CastNode->GetStructPin(), Context.NetNameMap->MakeValidName(CastNode->GetStructPin()));
		Context.NetMap.Add(CastNode->GetStructPin(), Term);

		UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));

		Super::RegisterNets(Context, Node);
	}

	virtual void Compile(FKismetFunctionContext& Context, UEdGraphNode* Node) override
	{
		UK2Node_CastPolyStructRef* CastNode = CastChecked<UK2Node_CastPolyStructRef>(Node);

		FBlueprintCompiledStatement* CastFunc = new FBlueprintCompiledStatement();
		//CastFunc->Type

		UEdGraphPin* PolyPinNet = FEdGraphUtilities::GetNetFromPin(CastNode->GetPolyPin());
		UEdGraphPin* StructPinNet = FEdGraphUtilities::GetNetFromPin(CastNode->GetStructPin());

		FBPTerminal** PolyTerm = Context.NetMap.Find(PolyPinNet);
		FBPTerminal** StructTerm = Context.NetMap.Find(StructPinNet);

		CastFunc->RHS.Add(*PolyTerm);
		CastFunc->RHS.Add(*StructTerm);

		
	}
};




UK2Node_CastPolyStructRef::UK2Node_CastPolyStructRef(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}

FText UK2Node_CastPolyStructRef::GetNodeTitle(ENodeTitleType::Type Title) const
{
	if(Title == ENodeTitleType::FullTitle)
	{
		return LOCTEXT("PolyStructGetRef_FullTitle", "CAST");
	}
	return LOCTEXT("GetStructByRef", "Cast (a ref)");
}

FText UK2Node_CastPolyStructRef::GetTooltipText() const
{
	return LOCTEXT("RetRefTooltip", "Ensures the OutStruct parameter will be a valid cast and then extracts the data into the output."
		"Returns by reference so changes made to the output will be reflected back to the Poly Struct");
}

FSlateIcon UK2Node_CastPolyStructRef::GetIconAndTint(FLinearColor& OutColor) const
{
	if (UFunction* WrappedFunction = FindUField<UFunction>(UPolyStructFunctionLibrary::StaticClass(), GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, CastCopy)))
	{
		return UK2Node_CallFunction::GetPaletteIconForFunction(WrappedFunction, OutColor);
	}
	return Super::GetIconAndTint(OutColor);
}


void UK2Node_CastPolyStructRef::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();

	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);
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

void UK2Node_CastPolyStructRef::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

	UK2Node_CallFunction* Func = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	//Func->SetFromFunction(UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, CastCopy)));
	//Func->SetFromFunction(UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, CastRef)));
	Func->FunctionReference.SetExternalMember(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, CastRef), UPolyStructFunctionLibrary::StaticClass());
	Func->AllocateDefaultPins();

	// Set pin type otherwise it will throw error for invalid type
	Func->FindPin(TEXT("OutStruct"), EGPD_Output)->PinType = MoveTemp(GetStructPin()->PinType);

	CompilerContext.MovePinLinksToIntermediate(*GetStructPin(), *Func->FindPin(TEXT("OutStruct"), EGPD_Output));
	CompilerContext.MovePinLinksToIntermediate(*GetPolyPin(), *Func->FindPin(TEXT("PolyStruct"), EGPD_Input));
	CompilerContext.MovePinLinksToIntermediate(*GetExecPin(), *Func->GetExecPin());
	CompilerContext.MovePinLinksToIntermediate(*GetSuccessPin(), *Func->FindPin(TEXT("Success"), EGPD_Output));
	CompilerContext.MovePinLinksToIntermediate(*GetFailPin(), *Func->FindPin(TEXT("Fail"), EGPD_Output));
	
	BreakAllNodeLinks();
}

bool UK2Node_CastPolyStructRef::IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const
{
	if(MyPin == GetStructPin() && (OtherPin->PinType.PinCategory != UEdGraphSchema_K2::PC_Struct || OtherPin->PinType.IsContainer()))
	{
		OutReason = LOCTEXT("InvalidStructParam", "Out Struct parameter must be a valid struct").ToString();
		return true;
	}
	return false;
}

void UK2Node_CastPolyStructRef::NotifyPinConnectionListChanged(UEdGraphPin* Pin)
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



FText UK2Node_CastPolyStructRef::GetMenuCategory() const
{
	static FNodeTextCache CachedCategory;
	if(CachedCategory.IsOutOfDate(this))
	{
		CachedCategory.SetCachedText(LOCTEXT("NodeMenu", "Weapon System Function Library|Polymorphic Struct"), this);
	}
	return CachedCategory;
}


void UK2Node_CastPolyStructRef::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	if(!ActionRegistrar.IsOpenForRegistration(GetClass())) return;
	UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
	check(NodeSpawner);
	ActionRegistrar.AddBlueprintAction(GetClass(), NodeSpawner);
}

FNodeHandlingFunctor* UK2Node_CastPolyStructRef::CreateNodeHandler(FKismetCompilerContext& CompilerContext) const
{
	return new FKCHandler_CastPolyStructRef(CompilerContext);
	//return Super::CreateNodeHandler(CompilerContext);
}


#undef LOCTEXT_NAMESPACE
