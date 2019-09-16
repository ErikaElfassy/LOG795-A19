// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/HorizontalBox.h"
#include "Components/EditableTextBox.h"
#include "DialogueWidget.generated.h"

/**
 * 
 */
UCLASS()
class ROSETTA_API UDialogueWidget : public UUserWidget
{
	GENERATED_BODY()

	UDialogueWidget(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	virtual bool Initialize() override;

	void Setup();

	void GenerateWordWidgets(FString Sentence);

	UFUNCTION()
	void OkayPressed();

	void ActivateResponse();

	UFUNCTION()
	void DeactivateResponse(const FText& InText, ETextCommit::Type InCommitType);

	bool CompareResponse();

	void CloseWidget();

	UPROPERTY(meta = (BindWidget))
	UButton* OkayButton;

	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* WordsPanel;

	UPROPERTY()
	TSubclassOf<class UUserWidget> DWWClass;

	FString DialogueIntroLine = "Hey you! What color is the asdfgga over there ?";
	FString DialogueResponseGood = "Great! I love me a red asdfgga";
	FString DialogueResponseBad = "Hmm, that doesn't seem right";

	int DialogueStep;
	
	UPROPERTY(meta = (BindWidget))
	UEditableTextBox* ResponseInput;

	TMap<FString, FString> Dictionary;

public:
	void UpdateDictionary(FString OriginalWord, FString NewTranslation);
};
