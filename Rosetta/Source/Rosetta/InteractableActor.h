// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <WidgetComponent.h>
#include "InteractableActor.generated.h"

UCLASS()
class ROSETTA_API AInteractableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Interact();
	void SetInteractionIconVisibility(bool bIsVisible) const;

private:
	UWidgetComponent* InteractionIcon;
	UWidgetComponent* GetInteractionIcon() const;
	void UpdateInteractionIconToFaceCam() const;

	UPROPERTY()
	TSubclassOf<class UUserWidget> DWClass;
};
