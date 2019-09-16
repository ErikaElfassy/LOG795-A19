// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueWordWidget.h"

void UDialogueWordWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Bind delegates here.
}

bool UDialogueWordWidget::Initialize()
{
	Super::Initialize();

	TranslationButton->OnHovered.AddDynamic(this, &UDialogueWordWidget::OnTranslationHover);
	TranslationButton->OnUnhovered.AddDynamic(this, &UDialogueWordWidget::OnTranslationUnhover);
	TranslationButton->OnClicked.AddDynamic(this, &UDialogueWordWidget::ActivateTranslation);
	TranslationInput->OnTextCommitted.AddDynamic(this, &UDialogueWordWidget::DeactivateTranslation);

	UDialogueWordWidget::VerifyTranslated();

	return true;
}

void UDialogueWordWidget::OnTranslationHover()
{
	Translation->SetColorAndOpacity(FSlateColor(FColor::Purple));
}

void UDialogueWordWidget::OnTranslationUnhover()
{
	Translation->SetColorAndOpacity(FSlateColor(FColor::White));
}

void UDialogueWordWidget::ActivateTranslation()
{
	Translation->SetVisibility(ESlateVisibility::Hidden);
	TranslationInput->SetText(Translation->GetText());
	TranslationInput->SetVisibility(ESlateVisibility::Visible);
	TranslationInput->SetUserFocus(GetWorld()->GetFirstPlayerController());
}

void UDialogueWordWidget::DeactivateTranslation(const FText& InText, ETextCommit::Type InCommitType)
{
	Translation->SetVisibility(ESlateVisibility::Visible);
	UDialogueWordWidget::UpdateTranslation(TranslationInput->GetText());
	TranslationInput->SetVisibility(ESlateVisibility::Hidden);
	UDialogueWordWidget::VerifyTranslated();
}

void UDialogueWordWidget::VerifyTranslated()
{
	if (!Translation->GetText().EqualTo(Original->GetText()))
	{
		Original->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		Original->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UDialogueWordWidget::UpdateTranslation(FString TranslationText)
{
	UDialogueWordWidget::UpdateTranslation(FText::FromString(TranslationText));
}

void UDialogueWordWidget::UpdateTranslation(FText TranslationText)
{
	Translation->SetText(TranslationText);
	ParentWidget->UpdateDictionary(Original->Text.ToString(), Translation->Text.ToString());
	UDialogueWordWidget::VerifyTranslated();
}

void UDialogueWordWidget::UpdateOriginal(FString OriginalText)
{
	UDialogueWordWidget::UpdateOriginal(FText::FromString(OriginalText));
}

void UDialogueWordWidget::UpdateOriginal(FText OriginalText)
{
	Original->SetText(OriginalText);
	UDialogueWordWidget::VerifyTranslated();
}

void UDialogueWordWidget::SetParentWidget(UDialogueWidget* NewParent)
{
	this->ParentWidget = NewParent;
}

