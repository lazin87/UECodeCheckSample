// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "UECodeCheckSampleGameInstance.generated.h"

/**
 *
 */
UCLASS()
class UECODECHECKSAMPLE_API UUECodeCheckSampleGameInstance
    : public UGameInstance {
  GENERATED_BODY()
  
protected:
  TObjectPtr<UWorld> WorldWithoutUProp;
  
  UPROPERTY()
  TObjectPtr<UWorld> WorldWithUProp;
};
