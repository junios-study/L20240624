// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "MyCustomStaticMeshComponent.generated.h"

/**
 * 
 */
UCLASS()
class L20240624_API UMyCustomStaticMeshComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

public:

	virtual void BeginPlay() override;
	
};
