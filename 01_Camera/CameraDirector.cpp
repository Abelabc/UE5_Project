// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraDirector.h"

#include "Kismet/GameplayStatics.h"
#include <CCamera.h>

// Sets default values
ACameraDirector::ACameraDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UGameplayStatics::GetAllActorsOfClass(this, ACCamera::StaticClass(), CameraArray);

}

// Called when the game starts or when spawned
void ACameraDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACameraDirector::Next()
{
	if(CameraArray.Num()>0)
	{
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
		AActor* current = CameraArray[0];
		PlayerController->SetViewTargetWithBlend(current, 0.5f);

		CameraArray.RemoveAt(0);
		CameraArray.Push(current);
		
	}
}

