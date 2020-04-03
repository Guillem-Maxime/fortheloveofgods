// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCameraComponent.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UPlayerCameraComponent::UPlayerCameraComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
    //OurArmComponent = CreateDefaultSubobject<USceneComponent>(TEXT("OurArmComponent"));

    OurCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("OurCameraComponent"));
    OurCameraTargetTriggerZone.SetRadius(1000.0f);
}


// Called when the game starts
void UPlayerCameraComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

    if (OurCameraComponent != nullptr)
    {
        OurCameraComponent->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
        SetArmLength(MaxArmLength);
        OurCameraComponent->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));
    }

    PitchCamera(45.0f);
}


// Called every frame
void UPlayerCameraComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (CurrentCameraMode == ECameraMode::FocusMode)
    {
        if (FocusTarget != nullptr)
        {
            const FVector TargetLocation{ FocusTarget->GetActorLocation() };
            const FRotator TargetOrientation{ TargetLocation.ToOrientationRotator() };
            const FRotator CurrentRotation{ GetComponentRotation() };
            PitchCameraInternal(CurrentRotation.Pitch - TargetOrientation.Pitch);
            YawCameraInternal(CurrentRotation.Yaw - TargetOrientation.Yaw);
        }
        else
        {
            CurrentCameraMode = ECameraMode::NormalMode;
        }
    }
	// ...
}

void UPlayerCameraComponent::PitchCamera(const float Value)
{
    if (CurrentCameraMode == ECameraMode::NormalMode)
    {
        PitchCameraInternal(Value);
    }
}

void UPlayerCameraComponent::YawCameraInternal(const float Value)
{
    if (CurrentCameraMode == ECameraMode::NormalMode)
    {
        YawCameraInternal(Value);
    }
}

void UPlayerCameraComponent::PitchCameraInternal(const float Value)
{
    const float CurrentPitch{ GetRelativeRotation().Pitch };
    FRotator NewRotator{ GetRelativeRotation() + FRotator(Value, 0.0f, 0.0f) };
    if (CurrentPitch < 0.0f)
    {
        SetArmLength(((MinArmLength - MaxArmLength) / -45.0f)*(NewRotator.Pitch) + MaxArmLength);
    }
    NewRotator.Pitch = FMath::Clamp(NewRotator.Pitch, -45.0f, 80.0f);
    SetRelativeRotation( NewRotator );
}

void UPlayerCameraComponent::YawCamera(const float Value)
{
    FRotator NewRotator{ GetRelativeRotation() + FRotator(0.0f, Value, 0.0f) };
    SetRelativeRotation(NewRotator);
}

void UPlayerCameraComponent::OnFocusButtonPressed()
{
    if (CurrentCameraMode == ECameraMode::FocusMode)
    {
        SetCameraMode(ECameraMode::NormalMode);
        FocusTarget = nullptr;
    }
    else
    {
        //TODO
        AcquireTarget();
        if (FocusTarget != nullptr)
        {
            SetCameraMode(ECameraMode::FocusMode);
        }
    }
}

void UPlayerCameraComponent::SetCameraMode(ECameraMode Mode)
{
    CurrentCameraMode = Mode;
}

void UPlayerCameraComponent::SetArmLength(const float Value)
{
    CurrentArmLength = Value;
    OurCameraComponent->SetRelativeLocation(GetRelativeLocation() + FVector(CurrentArmLength, 0.0f, 0.0f));
}

void UPlayerCameraComponent::AcquireTarget()
{
    const FRotator CurrentRotation{ GetComponentRotation() };
    const FVector CurrentOrientation{ CurrentRotation.Vector() };
    float MinAngle{ FocusAngleLimit };
    const auto& TargetsInZone{ OurCameraTargetTriggerZone.GetTargetsInZone() };
    FocusTarget = nullptr;
    for (const auto& TargetInZone : TargetsInZone)
    {
        FVector TargetLocation{ TargetInZone->GetActorLocation() };
        TargetLocation.Normalize();
        float AngleWithTarget{ FVector::DotProduct(TargetLocation, CurrentOrientation) };
        if (AngleWithTarget < MinAngle)
        {
            MinAngle = AngleWithTarget;
            FocusTarget = TargetInZone;
        }
    }
}

