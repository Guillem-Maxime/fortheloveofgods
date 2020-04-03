// Fill out your copyright notice in the Description page of Project Settings.
#include "FloatingActor.h"

#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    m_VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    m_VisualMesh->SetupAttachment(RootComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> cubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

    if (cubeVisualAsset.Succeeded())
    {
        m_VisualMesh->SetStaticMesh(cubeVisualAsset.Object);
        m_VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    }
}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingActor::Tick(float deltaTime)
{
    Super::Tick(deltaTime);

    FVector newLocation{ GetActorLocation() };
    FRotator newRotation{ GetActorRotation() };
    
    float runningTime{ GetGameTimeSinceCreation() };
    float deltaHeight{ FMath::Sin(runningTime + deltaTime) - FMath::Sin(runningTime) };

    newLocation.Z += deltaHeight * 20.0f;
    float deltaRotation{ deltaTime * 20.0f };

    newRotation.Yaw += deltaRotation;

    SetActorLocationAndRotation(newLocation, newRotation);
}

