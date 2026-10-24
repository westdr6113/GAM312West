// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjectiveWidget.generated.h"

/**
 * 
 */
UCLASS()
class GAM312_WEST_API UObjectiveWidget : public UUserWidget
{
	GENERATED_BODY()

public:

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateMats(float matsCollected);

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateBuildObj(float objectsBuilt);
	
};
