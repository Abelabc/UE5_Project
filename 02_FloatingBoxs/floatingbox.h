// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "floatingbox.generated.h"

UCLASS()
class LEARNUE_API Afloatingbox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Afloatingbox();
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* VisualMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
