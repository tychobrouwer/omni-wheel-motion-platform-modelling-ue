// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReadWriteTextFile.generated.h"

/**
 *
 */
UCLASS()
class OMNIWHEELROBOT_API UReadWriteTextFile : public UBlueprintFunctionLibrary {
  GENERATED_BODY()
 public:
  UFUNCTION(BlueprintCallable, Category = "Read Write File")
  static FString ReadStringFromFile(const FString &FilePath, bool &bOutSuccess,
                                    FString &OutInfoMessage);

  UFUNCTION(BlueprintCallable, Category = "Read Input File Line")
  static TArray<float> ReadLineFromInput(const FString &FilePath,
                                         const int32 LineIndex,
                                         bool &bOutSuccess,
                                         FString &OutInfoMessage);

  UFUNCTION(BlueprintCallable, Category = "Read Input File All Lines")
  static TArray<float> ReadLinesFromInput(const FString &FilePath,
                                          bool &bOutSuccess,
                                          FString &OutInfoMessage);

  UFUNCTION(BlueprintCallable, Category = "Read Write File")
  static void WriteStringToFile(const FString &FilePath, const FString &String,
                                bool &bOutSuccess, FString &OutInfoMessage);

  UFUNCTION(BlueprintCallable, Category = "Write Output File All Lines")
  static void WriteLinesFromOutput(const FString &FilePath,
                                   const TArray<float> &OutputValues,
                                   const int32 &NrValuesPerLine,
                                   bool &bOutSuccess, FString &OutInfoMessage);
};
