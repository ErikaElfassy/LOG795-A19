// Fill out your copyright notice in the Description page of Project Settings.

#include "Quest.h"


UQuestStatus::UQuestStatus() {
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
}

void UQuestStatus::BeginPlay() {
	Super::BeginPlay();
}

void UQuestStatus::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UQuestStatus::UpdateQuests(USM_InputAtom* QuestActivity) {
	TArray<int32> RecentlyCompletedQuests;

	QuestActivities.Add(QuestActivity);

	for (int32 i = QuestList.Num() - 1; i >= 0; --i) {
		if (QuestList[i].UpdateQuest(this, QuestActivity)) {
			RecentlyCompletedQuests.Add(i);
		}
	}

	for (int32 i = RecentlyCompletedQuests.Num() - 1; i >= 0; --i) {
		FQuestInProgress QIP = QuestList[RecentlyCompletedQuests[i]];

		if (QIP.QuestProgress == EQuestCompletion::EQC_Succeded) {
			QIP.Quest->OnSucceeded(this);
		}
		else {
			QIP.Quest->OnFailed(this);
		}
		RecentlyCompletedQuests.RemoveAtSwap(i);
	}
}

bool UQuestStatus::BeginQuest(const UQuest* Quest) {
	for (FQuestInProgress& QIP : QuestList) {
		if (QIP.Quest == Quest) {
			if (QIP.QuestProgress == EQuestCompletion::EQC_NotStarted) {
				UE_LOG(LogTemp, Warning, TEXT("Changing quest \"%s\" to started status."), *QIP.Quest->QuestName.ToString());
				QIP.QuestProgress = EQuestCompletion::EQC_Started;

				return true;
			}
			UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" is already in started status."), *QIP.Quest->QuestName.ToString());

			return false;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Adding quest \"%s\" to the list and starting it."), *Quest->QuestName.ToString());
	QuestList.Add(FQuestInProgress::NewQuestInProgress(Quest));

	return true;
}

bool UQuestStatus::QuestIsCompleted(const UQuest* Quest) {
	for (FQuestInProgress& QIP : QuestList) {
		if (QIP.Quest == Quest) {
			UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" is being checked for completion status."), *QIP.Quest->QuestName.ToString());
			if (QIP.QuestProgress == EQuestCompletion::EQC_Succeded) {
				UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" has been completed."), *QIP.Quest->QuestName.ToString());
				return true;
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" is still in started status."), *QIP.Quest->QuestName.ToString());
				return false; 
			}
		}
	}
	return false;
}

void UQuest::OnSucceeded(UQuestStatus* QuestStatus) const {
	UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" succeeded!"), *QuestName.ToString());
}

void UQuest::OnFailed(UQuestStatus* QuestStatus) const {
	UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" failed!"), *QuestName.ToString());
}

void UQuestWithResult::OnSucceeded(UQuestStatus* QuestStatus) const {
	Super::OnSucceeded(QuestStatus);

	for (UQuest* SuccessQuest : SucessQuests) {
		QuestStatus->BeginQuest(SuccessQuest);
	}

	for (int32 i = 0; i < SuccessInputs.Num(); ++i) {
		QuestStatus->UpdateQuests(SuccessInputs[i]);
	}
}

void UQuestWithResult::OnFailed(UQuestStatus* QuestStatus) const {
	Super::OnFailed(QuestStatus);

	for (UQuest* FailureQuest : FailureQuests) {
		QuestStatus->BeginQuest(FailureQuest);
	}

	for (int32 i = 0; i < FailureInputs.Num(); ++i) {
		QuestStatus->UpdateQuests(FailureInputs[i]);
	}
}
