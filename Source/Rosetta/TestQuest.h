// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "Components/ActorComponent.h"
#include "SM_State.h"
#include "TestQuest.generated.h"

UENUM()
enum class EQuestCompletion : uint8 {
	EQC_NotStarted,
	EQC_Started,
	EQC_Succeded,
	EQC_Failed
};

/**
 *
 */
UCLASS()
class ROSETTA_API UTestQuest : public UDataAsset
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere)
		FText QuestName;

	UPROPERTY(EditAnywhere)
		USM_State* QuestStateMachine;

	UPROPERTY(EditAnywhere)
		bool bInputBlackList;

	UPROPERTY(EditAnywhere)
		TArray<USM_InputAtom*> InputList;

	virtual void OnSucceeded(class UQuestStatus* QuestStatus) const;
	virtual void OnFailed(class UQuestStatus* QuestStatus) const;

};

//TODO To Add to player Controller
USTRUCT(Blueprintable)
struct FQuestInProgress
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere)
		const UTestQuest* Quest;

	UPROPERTY(EditAnywhere)
		EQuestCompletion QuestProgress;

protected:
	UPROPERTY(EditAnywhere)
		TArray<USM_InputAtom*> QuestActivities;

public:

	bool UpdateQuest(const UObject* ObjectRef, USM_InputAtom* QuestActivity)
	{
		if (Quest && (QuestProgress == EQuestCompletion::EQC_Started) && (Quest->bInputBlackList != Quest->InputList.Contains(QuestActivity))) {
			FStateMachineResult QuestResult;
			QuestActivities.Add(QuestActivity);
			QuestResult = Quest->QuestStateMachine->RunState(ObjectRef, QuestActivities);

			switch (QuestResult.CompletionType) {
			case EStateMachineCompletionType::Accepted:
				QuestProgress = EQuestCompletion::EQC_Succeded;
				return true;

			case EStateMachineCompletionType::Rejected:
				QuestProgress = EQuestCompletion::EQC_Failed;
				return true;
			}
		}

		return false;
	}

	static FQuestInProgress NewQuestInProgress(const UTestQuest* _Quest) {
		FQuestInProgress NewQIP;
		NewQIP.Quest = _Quest;
		NewQIP.QuestProgress = EQuestCompletion::EQC_Started;

		return NewQIP;
	}
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ROSETTA_API UQuestStatus : public UActorComponent {
	GENERATED_BODY()

public:
	UQuestStatus();

	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);

	UFUNCTION(BlueprintCallable, Category = "Quests")
		void UpdateQuests(USM_InputAtom* QuestActivity);

	UFUNCTION(BlueprintCallable, Category = "Quest")
		bool BeginQuest(const UTestQuest* Quest);

protected:
	UPROPERTY(EditAnywhere)
		TArray<USM_InputAtom*> QuestActivities;

	UPROPERTY(EditAnywhere)
		TArray<FQuestInProgress> QuestList;
};

UCLASS()
class ROSETTA_API UQuestWithResult : public UTestQuest {
	GENERATED_BODY()

public:
	virtual void OnSucceeded(class UQuestStatus* QuestStatus) const override;
	virtual void OnFailed(class UQuestStatus* QuestStatus) const override;

protected:
	UPROPERTY(EditAnywhere)
		TArray<UTestQuest*> SucessQuests;

	UPROPERTY(EditAnywhere)
		TArray<USM_InputAtom*> SuccessInputs;

	UPROPERTY(EditAnywhere)
		TArray<UTestQuest*> FailureQuests;

	UPROPERTY(EditAnywhere)
		TArray<USM_InputAtom*> FailureInputs;
};