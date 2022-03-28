// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystem/Weapons/Scripts/SetupAttachmentsScriptBase.h"
#include "Net/UnrealNetwork.h"
#include "WeaponSystem/Weapons/Interfaces.h"
#include "WeaponSystem/Weapons/Attachments/WeaponAttachmentPoint.h"


void USetupAttachmentsScriptBase::BeginPlay()
{
	Super::BeginPlay();

	if(!Curve) return;
	
	FOnTimelineFloat TimelineFloat;
	TimelineFloat.BindDynamic(this, &ThisClass::TimelineProgress);
	PoseTimeline.AddInterpFloat(Curve, TimelineFloat);
	
	Curve->GetValueRange(MinValue, MaxValue);

	PoseTimeline.SetPlayRate(PlayRate);
}

void USetupAttachmentsScriptBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, bIsAttaching);
}

void USetupAttachmentsScriptBase::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);
}



void USetupAttachmentsScriptBase::SetupAttachments()
{
	Server_SetupAttachments();
}

void USetupAttachmentsScriptBase::Server_SetupAttachments_Implementation()
{
	if(!IsValid(OwningWeapon) || !IsValid(OwningWeapon->GetOwningCharacter())) return;
	bIsAttaching = !bIsAttaching;
	OnRep_IsAttaching();
}

void USetupAttachmentsScriptBase::OnRep_IsAttaching()
{
	bIsAttaching ? TimelinePlay() : TimelineReverse();
	bIsAttaching ? PoseTimeline.Play() : PoseTimeline.Reverse();
}

void USetupAttachmentsScriptBase::TimelineProgress(const float Value)
{
	if(!IsValid(OwningWeapon) || !IsValid(OwningWeapon->GetOwningCharacter())) return;
	FTransform BlendedTransform = FTransform::Identity;
	BlendedTransform.BlendWith(TargetPoseTransform, Value);
	OwningWeapon->GetOwningCharacter()->WeaponOffsetTransform = BlendedTransform;

	if(bIsTimelineAtBeginning)
	{
		if(Value == MaxValue)
		{
			bIsTimelineAtBeginning = false;
			TimelineEnd();
		}
	}
	else
	{
		if(Value == MinValue)
		{
			bIsTimelineAtBeginning = true;
			TimelineBeginning();
		}
	}
}

void USetupAttachmentsScriptBase::TimelinePlay()
{
	if(IsLocallyControlled())
	{
		if(APlayerController* Controller = OwningWeapon->GetOwningCharacter()->GetController<APlayerController>())
		{
			Controller->InputComponent->bBlockInput = true;
			Controller->SetShowMouseCursor(true);
		}
	}
	
	BP_TimelinePlay();
}

void USetupAttachmentsScriptBase::TimelineReverse()
{
	if(IsLocallyControlled())
	{
		DestroyAttachmentWidgetsByClass(WidgetClass);
		if(APlayerController* Controller = OwningWeapon->GetOwningCharacter()->GetController<APlayerController>())
		{
			Controller->SetShowMouseCursor(false);
		}
	}
		
	
	BP_TimelineReverse();
}

void USetupAttachmentsScriptBase::TimelineBeginning()
{
	if(IsLocallyControlled())
	{
		if(APlayerController* Controller = OwningWeapon->GetOwningCharacter()->GetController<APlayerController>())
		{
			Controller->InputComponent->bBlockInput = false;
		}
	}
	
	BP_TimelineBeginning();
}

void USetupAttachmentsScriptBase::TimelineEnd()
{
	if(IsLocallyControlled())
	{
		SpawnAttachmentWidgets(WidgetClass);
	}
		
	
	BP_TimelineEnd();
}

TArray<UWidgetComponent*> USetupAttachmentsScriptBase::SpawnAttachmentWidgets(const TSubclassOf<UUserWidget>& Class) const
{
	TArray<UWidgetComponent*> Widgets;
	if(!OwningWeapon || !Class) return Widgets;
	TArray<UWeaponAttachmentPoint*> OutAttachmentPoints;
	OwningWeapon->GetAttachmentPoints(OutAttachmentPoints);
	for(UWeaponAttachmentPoint* AttachmentPoint : OutAttachmentPoints)
	{
		UWidgetComponent* const NewWidget = NewObject<UWidgetComponent>(OwningWeapon, UWidgetComponent::StaticClass());
		if(!NewWidget) continue;
		NewWidget->CreationMethod = EComponentCreationMethod::Instance;
		NewWidget->SetWidgetClass(Class);
		NewWidget->SetWidgetSpace(EWidgetSpace::Screen);
		NewWidget->SetupAttachment(AttachmentPoint);

		// Use the muzzle transform as the center-line
		const FTransform Origin = OwningWeapon->GetOriginRelativeTransform();
		const FVector Offset = Origin.GetRotation().RotateVector(AttachmentPoint->GetRelativeLocation() - OwningWeapon->GetMuzzleWorldTransform().GetRelativeTransform(OwningWeapon->GetActorTransform()).GetLocation());
		NewWidget->SetRelativeLocation(Origin.GetRotation().UnrotateVector(FVector(0.f, Offset.Y, Offset.Z)).GetUnsafeNormal() * 10.f);
		NewWidget->RegisterComponent();

		Widgets.Add(NewWidget);
	}

	for(const UWidgetComponent* WidgetComp : Widgets)
		if(UUserWidget* const Widget = WidgetComp->GetUserWidgetObject())
			if(Widget->Implements<UWeaponAttachmentWidgetInterface>())
				IWeaponAttachmentWidgetInterface::Execute_WidgetConstructed(Widget, Cast<UWeaponAttachmentPoint>(WidgetComp->GetAttachParent()));

	return Widgets;
}

void USetupAttachmentsScriptBase::DestroyAttachmentWidgetsByClass(const TSubclassOf<UUserWidget>& Class) const
{
	if(!Class || !OwningWeapon) return;
	TArray<UWeaponAttachmentPoint*> OutAttachmentPoints;
	OwningWeapon->GetAttachmentPoints(OutAttachmentPoints);
	for(const UWeaponAttachmentPoint* AttachmentPoint : OutAttachmentPoints)
	{
		for(int32 i = 0; i < AttachmentPoint->GetAttachChildren().Num(); i++)
		{
			if(UWidgetComponent* WidgetComp = Cast<UWidgetComponent>(AttachmentPoint->GetAttachChildren()[i]))
			{
				if(WidgetComp->GetWidgetClass() && WidgetComp->GetWidgetClass().Get()->IsChildOf(Class))
				{
					WidgetComp->DestroyComponent();
					i--;
				}
			}
		}
	}
}

















