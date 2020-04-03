// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"

#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "fortheloveofgods/player/components/PlayerCameraComponent.h"
#include "Particles/ParticleSystemComponent.h"

#pragma optimize("", off)

// Sets default values
AMyPawn::AMyPawn()
{
    // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    AutoPossessPlayer = EAutoReceiveInput::Player0;

    // Create a dummy root component we can attach things to.
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    OurThirdPersonCamera = CreateDefaultSubobject<UPlayerCameraComponent>(TEXT("ThirdPersonCamera"));
    OurThirdPersonCamera->SetupAttachment(RootComponent);

    OurVisibleComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OurVisibleComponent"));
    OurVisibleComponent->SetupAttachment(RootComponent);

    OurParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MovementParticles"));
    OurParticleSystem->SetupAttachment(OurVisibleComponent);
    OurParticleSystem->bAutoActivate = false;
    OurParticleSystem->SetRelativeLocation(FVector(25.0f, 0.0f, 25.0f));
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    //Handle Grow Action
    {
        float CurrentScale{ OurVisibleComponent->GetComponentScale().X };
        if (IsGrowing == true)
        {
            CurrentScale += DeltaTime;
        }
        else
        {
            CurrentScale -= DeltaTime * 0.5f;
        }

        CurrentScale = FMath::Clamp(CurrentScale, 1.0f, 2.0f);
        OurVisibleComponent->SetWorldScale3D(FVector(CurrentScale));
    }

    //Handle Velocity
    {
        if (!CurrentVelocity.IsZero())
        {
            FRotator CameraRotator{ OurThirdPersonCamera->GetRelativeRotation() };
            CameraRotator.Normalize();
            CurrentVelocity = CameraRotator.RotateVector(CurrentVelocity);
            CurrentVelocity.Z = 0.0f;
            FVector NewLocation = GetActorLocation() + (CurrentVelocity * DeltaTime);
            SetActorLocation(NewLocation);
        }
    }

    //Handle Camera
    {
        const float CurrentYaw{ CurrentCameraRotation.Yaw };
        if (CurrentYaw != 0)
        {
            OurThirdPersonCamera->YawCamera(CurrentYaw * DeltaTime);
        }

        const float CurrentPitch{ CurrentCameraRotation.Pitch };
        if (CurrentPitch != 0)
        {
            OurThirdPersonCamera->PitchCamera(CurrentPitch * DeltaTime);
        }
    }
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("Grow", IE_Pressed, this, &AMyPawn::StartGrowing);
    PlayerInputComponent->BindAction("Grow", IE_Released, this, &AMyPawn::StopGrowing);

    PlayerInputComponent->BindAction("Particles", IE_Pressed, this, &AMyPawn::StartParticles);
    PlayerInputComponent->BindAction("Particles", IE_Released, this, &AMyPawn::StopParticles);

    PlayerInputComponent->BindAxis("MoveX", this, &AMyPawn::MoveForward);
    PlayerInputComponent->BindAxis("MoveY", this, &AMyPawn::MoveRight);

    PlayerInputComponent->BindAxis("YawCamera", this, &AMyPawn::YawCamera);
    PlayerInputComponent->BindAxis("PitchCamera", this, &AMyPawn::PitchCamera);

    PlayerInputComponent->BindAction("Focus", IE_Pressed, this, &AMyPawn::FocusTarget);
}

void AMyPawn::MoveRight(float AxisValue)
{
    CurrentVelocity.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.0f * -1.0f;
}

void AMyPawn::MoveForward(float AxisValue)
{
    CurrentVelocity.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.0f * -1.0f;
}

void AMyPawn::YawCamera(float AxisValue)
{
    CurrentCameraRotation.Yaw = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.0f * -1.0f;
}

void AMyPawn::PitchCamera(float AxisValue)
{
    CurrentCameraRotation.Pitch = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.0f * -1.0f;
}

void AMyPawn::StartGrowing()
{
    IsGrowing = true;
}

void AMyPawn::StopGrowing()
{
    IsGrowing = false;
}

void AMyPawn::StartParticles()
{
    if (OurParticleSystem && OurParticleSystem->Template)
    {
        OurParticleSystem->ActivateSystem();
    }
}

void AMyPawn::StopParticles()
{
    if (OurParticleSystem && OurParticleSystem->Template)
    {
        OurParticleSystem->DeactivateSystem();
    }
}

void AMyPawn::FocusTarget()
{
    OurThirdPersonCamera->OnFocusButtonPressed();
}
