// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueWidget.h"
#include <Engine/Engine.h>
#include <WidgetBlueprintLibrary.h>
#include <ConstructorHelpers.h>
#include "Blueprint/WidgetTree.h"
#include "DialogueWordWidget.h"
#include "Components/HorizontalBoxSlot.h"

UDialogueWidget::UDialogueWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	ConstructorHelpers::FClassFinder<UUserWidget> DWWClassFinder(TEXT("/Game/UI/DialogueWordWidget"));
	DWWClass = DWWClassFinder.Class;
}

void UDialogueWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Bind delegates here.
}

bool UDialogueWidget::Initialize()
{
	Super::Initialize();
	OkayButton->OnClicked.AddDynamic(this, &UDialogueWidget::OkayPressed);
	ResponseInput->OnTextCommitted.AddDynamic(this, &UDialogueWidget::DeactivateResponse);
	
	UDialogueWidget::Setup();

	UDialogueWidget::GenerateWordWidgets(DialogueIntroLine);
	return true;
}

void UDialogueWidget::Setup()
{
	DialogueStep = 0;

	UWorld* World = GetWorld();
	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;
	PlayerController->bShowMouseCursor = true;
	UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(PlayerController);
	ResponseInput->SetVisibility(ESlateVisibility::Hidden);
}

void UDialogueWidget::GenerateWordWidgets(FString Sentence)
{
	WordsPanel->SetVisibility(ESlateVisibility::Visible);
	WordsPanel->ClearChildren();

	TArray<FString> Words;
	Sentence.ParseIntoArray(Words, TEXT(" "));

	for (FString Word : Words)
	{
		UDialogueWordWidget* DWW = CreateWidget<UDialogueWordWidget>(GetWorld(), DWWClass);
		DWW->SetParentWidget(this);

		DWW->UpdateOriginal(Word);

		if (!Dictionary.Contains(Word))
		{
			UDialogueWidget::UpdateDictionary(Word, Word);
		}

		DWW->UpdateTranslation(Dictionary[Word]);

		FSlateChildSize Size = FSlateChildSize(ESlateSizeRule::Fill);
		WordsPanel->AddChild(DWW);
		UHorizontalBoxSlot* HBoxSlot = Cast<UHorizontalBoxSlot>(DWW->Slot);
		if (HBoxSlot)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Found box %s"), *HBoxSlot->GetName());
			HBoxSlot->SetSize(Size);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("No box found"));
		}
	}
}

void UDialogueWidget::OkayPressed()
{
	DialogueStep++;

	switch (DialogueStep)
	{
		case 1:
			// set up input
			UDialogueWidget::ActivateResponse();
			break;
		case 2:
			// true if the response was "red"
			if (UDialogueWidget::CompareResponse())
			{
				UDialogueWidget::GenerateWordWidgets(DialogueResponseGood);
			}
			else
			{
				UDialogueWidget::GenerateWordWidgets(DialogueResponseBad);
			}
			break;
		case 3:
			UDialogueWidget::CloseWidget();
			break;
	}
}

void UDialogueWidget::ActivateResponse()
{
	WordsPanel->SetVisibility(ESlateVisibility::Hidden);
	ResponseInput->SetVisibility(ESlateVisibility::Visible);
	ResponseInput->SetUserFocus(GetWorld()->GetFirstPlayerController());
}

void UDialogueWidget::DeactivateResponse(const FText& InText, ETextCommit::Type InCommitType)
{
	if (InCommitType == ETextCommit::OnEnter)
	{
		ResponseInput->SetVisibility(ESlateVisibility::Hidden);
		UDialogueWidget::OkayPressed();
	}
}

bool UDialogueWidget::CompareResponse()
{
	if (ResponseInput->GetText().EqualToCaseIgnored(FText::FromString("red")))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void UDialogueWidget::CloseWidget()
{
	UWorld* World = GetWorld();
	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;
	PlayerController->bShowMouseCursor = false;
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(PlayerController);

	//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("Widget closed"));
	RemoveFromParent();
}

void UDialogueWidget::UpdateDictionary(FString OriginalWord, FString NewTranslation)
{
	if (Dictionary.Contains(OriginalWord))
	{
		Dictionary[OriginalWord] = NewTranslation;
	}
	else
	{
		Dictionary.Add(OriginalWord, NewTranslation);
	}
}
