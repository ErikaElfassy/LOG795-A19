// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SM_State.generated.h"

class USM_State;

UENUM()
enum class EStateMachineCompletionType : uint8
{
	// Implicit failure - this state is not marked as Accept.
	NotAccepted,

	// Success - this state is an Accept state.
	Accepted,

	// Explicit failure - this state is specifically marked as failure/not-accept.
	Rejected,

	// Our simulation ran out of steps while the machine was still running.
	OutOfSteps UMETA(Hidden)
};


USTRUCT(Blueprintable)
struct STATEMACHINE_API FStateMachineResult
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY()
		EStateMachineCompletionType CompletionType;

	UPROPERTY()
		USM_State* FinalState;

	UPROPERTY()
		int32 DataIndex;
};

UCLASS()
class STATEMACHINE_API USM_InputAtom : public UDataAsset
{
	GENERATED_BODY()

public:
	// Display value for this input atom, mainly for debugging purposes.
	UPROPERTY(EditAnywhere)
		FName Description;
};

UCLASS(EditInlineNew)
class STATEMACHINE_API USM_BranchBase : public UDataAsset
{
	GENERATED_BODY()

public:
	/** Returns DestinationState on success, NULL on failure.
	For subclasses, OutDataIndex can be changed to indicate consumption of data. */
	virtual USM_State* TryBranch(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32& OutDataIndex);

protected:
	// State where we will go next if this branch is taken. If null, this branch will be ignored.
	UPROPERTY(EditAnywhere)
		USM_State* DestinationState;
};

UCLASS(EditInlineNew)
class STATEMACHINE_API USM_Branch : public USM_BranchBase
{
	GENERATED_BODY()

public:
	/** Returns DestinationState on success, NULL on failure.
	For subclasses, OutDataIndex might be something other than 1, if a branch is made to consume multiple inputs. */
	virtual USM_State* TryBranch(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32& OutDataIndex) override;

protected:
	// If true, the meaning of AcceptableInputs is reversed.
	UPROPERTY(EditAnywhere)
		bool bReverseInputTest;

	// Acceptable inputs. The current input atom must be on this list.
	UPROPERTY(EditAnywhere)
		TArray<USM_InputAtom*> AcceptableInputs;
};

/**
 *
 */
UCLASS()
class STATEMACHINE_API USM_State : public UDataAsset
{
	GENERATED_BODY()

public:

	USM_State();

	/** Attempt to run the state with input from the given DataSource object.
	Will start reading input at DataIndex.
	Will decrement RemainingSteps and automatically fail after it hits 0. */
	UFUNCTION(BlueprintCallable, Category = "State Machine")
		virtual FStateMachineResult RunState(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex = 0, int32 RemainingSteps = -1);

protected:

	// Loop. Used when input atom being processed isn't recognized.
	virtual FStateMachineResult LoopState(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 RemainingSteps);

	/** If input runs out on this state (or TerminateImmediately is true),
	this is how the result will be interpreted. */
	UPROPERTY(EditAnywhere)
		EStateMachineCompletionType CompletionType;

	/** A state machine run that enters this state will terminate immediately,
	regardless of whether or not there is more input data. */
	UPROPERTY(EditAnywhere)
		bool bTerminateImmediately;

	// If this is set, this state will loop on itself whenever an unhandled input atom is detected.
	UPROPERTY(EditAnywhere)
		bool bLoopByDefault;

	/** Branches to other states. These are in priority order, so the first successful branch
	will be taken. */
	UPROPERTY(EditAnywhere, Instanced)
		TArray<USM_BranchBase*> InstancedBranches;

	/** Branches to other states. These are in priority order, so the first successful branch
	will be taken. These run after InstancedBranches. */
	UPROPERTY(EditAnywhere)
		TArray<USM_BranchBase*> SharedBranches;
};