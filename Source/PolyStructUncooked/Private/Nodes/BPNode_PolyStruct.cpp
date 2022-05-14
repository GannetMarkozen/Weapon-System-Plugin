// Fill out your copyright notice in the Description page of Project Settings.


#include "Nodes/BPNode_PolyStruct.h"

#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "CallFunctionHandler.h"
#include "EdGraphSchema_K2.h"
#include "EdGraphUtilities.h"
#include "KismetCompiler.h"
#include "EdGraph/EdGraphNodeUtils.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Polymorphic/PolymorphicStructFunctionLibrary.h"
#include "Polymorphic/PolymorphicStruct.h"

#define LOCTEXT_NAMESPACE "BPNode_PolyStructGet"

FText UBPNode_PolyStructGet::GetNodeTitle(ENodeTitleType::Type Title) const
{
	if(Title == ENodeTitleType::FullTitle)
	{
		return LOCTEXT("PolyStructGetCopy_FullTitle", "GET");
	}
	return LOCTEXT("PolyStructGetCopy", "Get (a copy)");
}

FText UBPNode_PolyStructGet::GetTooltipText() const
{
	return LOCTEXT("RetRefTooltip", "Ensures the struct type is compatible and extracts the data into the new struct.");
}

FSlateIcon UBPNode_PolyStructGet::GetIconAndTint(FLinearColor& OutColor) const
{
	if (const UFunction* WrappedFunction = UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, GetCopy)))
	{
		return UK2Node_CallFunction::GetPaletteIconForFunction(WrappedFunction, OutColor);
	}
	return Super::GetIconAndTint(OutColor);
}

void UBPNode_PolyStructGet::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();

	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);
	GetSuccessPin()->PinFriendlyName = FText::FromString(TEXT("Success"));
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, TEXT("Fail"));
	
	// Input
	FCreatePinParams PolyStructParams;
	PolyStructParams.bIsReference = true;
	PolyStructParams.bIsConst = true;
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Struct, TEXT(""), FPolyStruct::StaticStruct(), TEXT("PolyStruct"), PolyStructParams);

	// Output
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Wildcard, TEXT("OutStruct"));
}

void UBPNode_PolyStructGet::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

	UK2Node_CallFunction* Func = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	Func->SetFromFunction(UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, GetCopy)));
	Func->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(Func, this);

	// Set pin type otherwise it will throw error for invalid type
	Func->FindPin(TEXT("OutStruct"), EGPD_Output)->PinType = MoveTemp(GetStructPin()->PinType);

	CompilerContext.MovePinLinksToIntermediate(*GetStructPin(), *Func->FindPin(TEXT("OutStruct"), EGPD_Output));
	CompilerContext.MovePinLinksToIntermediate(*GetPolyPin(), *Func->FindPin(TEXT("PolyStruct"), EGPD_Input));
	CompilerContext.MovePinLinksToIntermediate(*GetExecPin(), *Func->GetExecPin());
	CompilerContext.MovePinLinksToIntermediate(*GetSuccessPin(), *Func->FindPin(TEXT("Success"), EGPD_Output));
	CompilerContext.MovePinLinksToIntermediate(*GetFailPin(), *Func->FindPin(TEXT("Fail"), EGPD_Output));
	
	BreakAllNodeLinks();
}

bool UBPNode_PolyStructGet::IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const
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
	/*UScriptStruct* PinClass = Cast<UScriptStruct>(OtherPin->PinType.PinSubCategoryObject);
	if(PinClass && (PinClass->IsChildOf(FPolyStruct::StaticStruct()) || PinClass->IsChildOf(FPolyStructHandle::StaticStruct())))
	{
		OutReason = LOCTEXT("InvalidStructParam", "Can not be a Poly Struct type.").ToString();
		return true;
	}*/
	return false;
}

void UBPNode_PolyStructGet::NotifyPinConnectionListChanged(UEdGraphPin* Pin)
{
	Super::NotifyPinConnectionListChanged(Pin);
	
	if(Pin != GetStructPin()) return;
	if(!Pin->LinkedTo.IsEmpty())
	{
		if(Pin->PinType != Pin->LinkedTo[0]->PinType)
		{
			Pin->PinType = MoveTemp(Pin->LinkedTo[0]->PinType);
			Pin->PinType.bIsConst = false;
			Pin->PinType.bIsReference = false;
			GetGraph()->NotifyGraphChanged();
		}
	}
	else if(Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Wildcard)
	{
		Pin->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
		Pin->PinType.PinSubCategoryObject = nullptr;
		Pin->PinType.bIsConst = false;
		Pin->PinType.bIsReference = false;
		GetGraph()->NotifyGraphChanged();
	}
}

void UBPNode_PolyStructGet::PostReconstructNode()
{
	Super::PostReconstructNode();
	NotifyPinConnectionListChanged(GetStructPin());
}

FText UBPNode_PolyStructGet::GetMenuCategory() const
{
	static FNodeTextCache CachedCategory;
	if(CachedCategory.IsOutOfDate(this))
	{
		CachedCategory.SetCachedText(LOCTEXT("NodeMenu", "Weapon System Function Library|Polymorphic Struct"), this);
	}
	return CachedCategory;
}

void UBPNode_PolyStructGet::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	if(!ActionRegistrar.IsOpenForRegistration(GetClass())) return;
	UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
	check(NodeSpawner);
	ActionRegistrar.AddBlueprintAction(GetClass(), NodeSpawner);
}

#undef LOCTEXT_NAMESPACE















#define LOCTEXT_NAMESPACE "UBPNode_PolyStructExtract"


FText UBPNode_PolyStructExtract::GetNodeTitle(ENodeTitleType::Type Title) const
{
	if(Title == ENodeTitleType::FullTitle)
	{
		return LOCTEXT("PolyStructSet_FullTitle", "EXTRACT");
	}
	return LOCTEXT("PolyStructSet", "Extract (to ref)");
}

FText UBPNode_PolyStructExtract::GetTooltipText() const
{
	return LOCTEXT("RetRefTooltip", "Ensures the underlying struct is the correct type. Extracts struct data to the Out Struct parameter if the types are compatible.");
}

FSlateIcon UBPNode_PolyStructExtract::GetIconAndTint(FLinearColor& OutColor) const
{
	if (const UFunction* WrappedFunction = UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, ExtractStruct)))
	{
		return UK2Node_CallFunction::GetPaletteIconForFunction(WrappedFunction, OutColor);
	}
	return Super::GetIconAndTint(OutColor);
}

void UBPNode_PolyStructExtract::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();

	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);
	GetSuccessPin()->PinFriendlyName = FText::FromString(TEXT("Success"));
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, TEXT("Fail"));
	
	// Input
	FCreatePinParams PolyStructParams;
	PolyStructParams.bIsReference = true;
	PolyStructParams.bIsConst = true;
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Struct, TEXT(""), FPolyStruct::StaticStruct(), TEXT("PolyStruct"), PolyStructParams);

	// Output
	FCreatePinParams StructParams;
	StructParams.bIsReference = true;
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Wildcard, TEXT("OutStruct"), StructParams);
}

void UBPNode_PolyStructExtract::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

	UK2Node_CallFunction* Func = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	Func->SetFromFunction(UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, ExtractStruct)));
	Func->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(Func, this);

	// Set pin type otherwise it will throw error for invalid type
	Func->FindPin(TEXT("OutStruct"), EGPD_Input)->PinType = GetStructPin()->PinType;

	CompilerContext.MovePinLinksToIntermediate(*GetStructPin(), *Func->FindPin(TEXT("OutStruct"), EGPD_Input));
	CompilerContext.MovePinLinksToIntermediate(*GetPolyPin(), *Func->FindPin(TEXT("PolyStruct"), EGPD_Input));
	CompilerContext.MovePinLinksToIntermediate(*GetSuccessPin(), *Func->FindPin(TEXT("Success"), EGPD_Output));
	CompilerContext.MovePinLinksToIntermediate(*GetFailPin(), *Func->FindPin(TEXT("Fail"), EGPD_Output));
	
	BreakAllNodeLinks();
}

bool UBPNode_PolyStructExtract::IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const
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
	/*UScriptStruct* PinClass = Cast<UScriptStruct>(OtherPin->PinType.PinSubCategoryObject);
	if(PinClass && (PinClass->IsChildOf(FPolyStruct::StaticStruct()) || PinClass->IsChildOf(FPolyStructHandle::StaticStruct())))
	{
		OutReason = LOCTEXT("InvalidStructParam", "Can not be a Poly Struct type.").ToString();
		return true;
	}*/
	return false;
}

void UBPNode_PolyStructExtract::NotifyPinConnectionListChanged(UEdGraphPin* Pin)
{
	Super::NotifyPinConnectionListChanged(Pin);
	
	if(Pin != GetStructPin()) return;
	if(!Pin->LinkedTo.IsEmpty())
	{
		if(Pin->PinType != Pin->LinkedTo[0]->PinType)
		{
			Pin->PinType = Pin->LinkedTo[0]->PinType;
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

void UBPNode_PolyStructExtract::PostReconstructNode()
{
	Super::PostReconstructNode();
	NotifyPinConnectionListChanged(GetStructPin());
}

FText UBPNode_PolyStructExtract::GetMenuCategory() const
{
	static FNodeTextCache CachedCategory;
	if(CachedCategory.IsOutOfDate(this))
	{
		CachedCategory.SetCachedText(LOCTEXT("NodeMenu", "Weapon System Function Library|Polymorphic Struct"), this);
	}
	return CachedCategory;
}

void UBPNode_PolyStructExtract::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	if(!ActionRegistrar.IsOpenForRegistration(GetClass())) return;
	UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
	check(NodeSpawner);
	ActionRegistrar.AddBlueprintAction(GetClass(), NodeSpawner);
}

#undef LOCTEXT_NAMESPACE


















#define LOCTEXT_NAMESPACE "UBPNode_PolyStructSet"


FText UBPNode_PolyStructSet::GetNodeTitle(ENodeTitleType::Type Title) const
{
	if(Title == ENodeTitleType::FullTitle)
	{
		return LOCTEXT("PolyStructSet_FullTitle", "SET");
	}
	return LOCTEXT("PolyStructSet", "Set (from ref)");
}

FText UBPNode_PolyStructSet::GetTooltipText() const
{
	return LOCTEXT("RetRefTooltip", "Ensures the OutStruct parameter will be a valid cast and then extracts the data into the output."
		"Returns by reference so changes made to the output will be reflected back to the Poly Struct");
}

FSlateIcon UBPNode_PolyStructSet::GetIconAndTint(FLinearColor& OutColor) const
{
	if (const UFunction* WrappedFunction = UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, GetCopy)))
	{
		return UK2Node_CallFunction::GetPaletteIconForFunction(WrappedFunction, OutColor);
	}
	return Super::GetIconAndTint(OutColor);
}

void UBPNode_PolyStructSet::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();

	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);
	GetThenPin()->PinFriendlyName = FText::FromString(TEXT("Success"));
	
	// Input
	FCreatePinParams PolyStructParams;
	PolyStructParams.bIsReference = true;
	PolyStructParams.bIsConst = false;
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Struct, TEXT(""), FPolyStruct::StaticStruct(), TEXT("PolyStruct"), PolyStructParams);

	// Output
	FCreatePinParams StructParams;
	StructParams.bIsReference = false;
	StructParams.bIsConst = false;
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Wildcard, TEXT("Struct"), StructParams);
}

void UBPNode_PolyStructSet::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

	UK2Node_CallFunction* Func = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	Func->SetFromFunction(UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, SetPolyStruct)));
	Func->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(Func, this);

	// Set pin type otherwise it will throw error for invalid type
	Func->FindPin(TEXT("Struct"), EGPD_Input)->PinType = GetStructPin()->PinType;

	CompilerContext.MovePinLinksToIntermediate(*GetStructPin(), *Func->FindPin(TEXT("Struct"), EGPD_Input));
	CompilerContext.MovePinLinksToIntermediate(*GetPolyPin(), *Func->FindPin(TEXT("PolyStruct"), EGPD_Input));
	CompilerContext.MovePinLinksToIntermediate(*GetExecPin(), *Func->GetExecPin());
	CompilerContext.MovePinLinksToIntermediate(*GetThenPin(), *Func->FindPin(UEdGraphSchema_K2::PN_Then, EGPD_Output));
	
	BreakAllNodeLinks();
}

bool UBPNode_PolyStructSet::IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const
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
	/*UScriptStruct* PinClass = Cast<UScriptStruct>(OtherPin->PinType.PinSubCategoryObject);
	if(PinClass && (PinClass->IsChildOf(FPolyStruct::StaticStruct()) || PinClass->IsChildOf(FPolyStructHandle::StaticStruct())))
	{
		OutReason = LOCTEXT("InvalidStructParam", "Can not be a Poly Struct type.").ToString();
		return true;
	}*/
	return false;
}

void UBPNode_PolyStructSet::NotifyPinConnectionListChanged(UEdGraphPin* Pin)
{
	Super::NotifyPinConnectionListChanged(Pin);
	
	if(Pin != GetStructPin()) return;
	if(!Pin->LinkedTo.IsEmpty())
	{
		if(Pin->PinType != Pin->LinkedTo[0]->PinType)
		{
			Pin->PinType = Pin->LinkedTo[0]->PinType;
			Pin->PinType.bIsConst = false;
			Pin->PinType.bIsReference = false;
			GetGraph()->NotifyGraphChanged();
		}
	}
	else if(Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Wildcard)
	{
		Pin->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
		Pin->PinType.PinSubCategoryObject = nullptr;
		Pin->PinType.bIsConst = false;
		Pin->PinType.bIsReference = false;
		GetGraph()->NotifyGraphChanged();
	}
}

void UBPNode_PolyStructSet::PostReconstructNode()
{
	Super::PostReconstructNode();
	NotifyPinConnectionListChanged(GetStructPin());
}

FText UBPNode_PolyStructSet::GetMenuCategory() const
{
	static FNodeTextCache CachedCategory;
	if(CachedCategory.IsOutOfDate(this))
	{
		CachedCategory.SetCachedText(LOCTEXT("NodeMenu", "Weapon System Function Library|Polymorphic Struct"), this);
	}
	return CachedCategory;
}

void UBPNode_PolyStructSet::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	if(!ActionRegistrar.IsOpenForRegistration(GetClass())) return;
	UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
	check(NodeSpawner);
	ActionRegistrar.AddBlueprintAction(GetClass(), NodeSpawner);
}

#undef LOCTEXT_NAMESPACE






#define LOCTEXT_NAMESPACE "UBPNode_PolyStructHandleAdd"

FText UBPNode_PolyStructHandleAdd::GetNodeTitle(ENodeTitleType::Type Title) const
{
	if(Title == ENodeTitleType::FullTitle)
	{
		return LOCTEXT("PolyStructSet_FullTitle", "ADD");
	}
	return LOCTEXT("PolyStructSet", "Add (struct ref)");
}

FText UBPNode_PolyStructHandleAdd::GetTooltipText() const
{
	return LOCTEXT("RetRefTooltip", "Converts the Struct parameter to a Poly Struct and adds it to the Poly Struct Handle array.");
}

FSlateIcon UBPNode_PolyStructHandleAdd::GetIconAndTint(FLinearColor& OutColor) const
{
	if (const UFunction* WrappedFunction = UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, AddStruct)))
	{
		return UK2Node_CallFunction::GetPaletteIconForFunction(WrappedFunction, OutColor);
	}
	return Super::GetIconAndTint(OutColor);
}

void UBPNode_PolyStructHandleAdd::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();

	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);

	// Out index
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Int, TEXT("Index"));
	
	// Input
	FCreatePinParams PolyStructParams;
	PolyStructParams.bIsReference = true;
	PolyStructParams.bIsConst = false;
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Struct, TEXT(""), FPolyStructHandle::StaticStruct(), TEXT("PolyStruct"), PolyStructParams);

	// Output
	FCreatePinParams StructParams;
	StructParams.bIsReference = true;
	StructParams.bIsConst = true;
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Wildcard, TEXT("Struct"), StructParams);
}

void UBPNode_PolyStructHandleAdd::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

	UK2Node_CallFunction* Func = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	Func->SetFromFunction(UPolyStructFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UPolyStructFunctionLibrary, AddStruct)));
	Func->AllocateDefaultPins();
	CompilerContext.MessageLog.NotifyIntermediateObjectCreation(Func, this);

	// Set pin type otherwise it will throw error for invalid type
	Func->FindPin(TEXT("Struct"), EGPD_Input)->PinType = GetStructPin()->PinType;

	CompilerContext.MovePinLinksToIntermediate(*GetStructPin(), *Func->FindPin(TEXT("Struct"), EGPD_Input));
	CompilerContext.MovePinLinksToIntermediate(*GetPolyPin(), *Func->FindPin(TEXT("PolyStructHandle"), EGPD_Input));
	CompilerContext.MovePinLinksToIntermediate(*GetThenPin(), *Func->GetThenPin());
	CompilerContext.MovePinLinksToIntermediate(*GetExecPin(), *Func->GetExecPin());
	CompilerContext.MovePinLinksToIntermediate(*GetIndexPin(), *Func->GetReturnValuePin());
	
	BreakAllNodeLinks();
}

bool UBPNode_PolyStructHandleAdd::IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const
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
	/*UScriptStruct* PinClass = Cast<UScriptStruct>(OtherPin->PinType.PinSubCategoryObject);
	if(PinClass && (PinClass->IsChildOf(FPolyStruct::StaticStruct()) || PinClass->IsChildOf(FPolyStructHandle::StaticStruct())))
	{
		OutReason = LOCTEXT("InvalidStructParam", "Can not be a Poly Struct type.").ToString();
		return true;
	}*/
	return false;
}

void UBPNode_PolyStructHandleAdd::NotifyPinConnectionListChanged(UEdGraphPin* Pin)
{
	Super::NotifyPinConnectionListChanged(Pin);
	
	if(Pin != GetStructPin()) return;
	if(!Pin->LinkedTo.IsEmpty())
	{
		if(Pin->PinType != Pin->LinkedTo[0]->PinType)
		{
			Pin->PinType = Pin->LinkedTo[0]->PinType;
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

void UBPNode_PolyStructHandleAdd::PostReconstructNode()
{
	Super::PostReconstructNode();
	NotifyPinConnectionListChanged(GetStructPin());
}

FText UBPNode_PolyStructHandleAdd::GetMenuCategory() const
{
	static FNodeTextCache CachedCategory;
	if(CachedCategory.IsOutOfDate(this))
	{
		CachedCategory.SetCachedText(LOCTEXT("NodeMenu", "Weapon System Function Library|Polymorphic Struct"), this);
	}
	return CachedCategory;
}

void UBPNode_PolyStructHandleAdd::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	if(!ActionRegistrar.IsOpenForRegistration(GetClass())) return;
	UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
	check(NodeSpawner);
	ActionRegistrar.AddBlueprintAction(GetClass(), NodeSpawner);
}

#undef LOCTEXT_NAMESPACE
