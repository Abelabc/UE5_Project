// Fill out your copyright notice in the Description page of Project Settings.


#include "CCamera.h"

// Sets default values
ACCamera::ACCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));//创建相机组件
	RootComponent = Camera;

}

// Called when the game starts or when spawned
void ACCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

