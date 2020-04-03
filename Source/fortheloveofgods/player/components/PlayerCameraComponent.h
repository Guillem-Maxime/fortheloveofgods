// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CameraTargetSphereTrigger.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerCameraComponent.generated.h"

class UCameraComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FORTHELOVEOFGODS_API UPlayerCameraComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
    UPlayerCameraComponent();
    UPlayerCameraComponent(float Length);
    virtual ~UPlayerCameraComponent() {}

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    void PitchCamera(float Value);
    void YawCamera(float Value);
    void SetArmLength(float Value);
    void OnFocusButtonPressed();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

private:
    enum ECameraMode
    {
        NormalMode,
        FocusMode,
        Invalid
    };

    ACameraTargetSphereTrigger OurCameraTargetTriggerZone;
    UPROPERTY(VisibleAnywhere)
    UCameraComponent* OurCameraComponent;
    UPROPERTY(EditAnywhere)
    float MaxArmLength{ 250.0f };
    UPROPERTY(EditAnywhere)
    float MinArmLength{ 100.0f };
    UPROPERTY(EditAnywhere)
    float FocusAngleLimit{ 60.0f };

    AActor* FocusTarget{ nullptr };
    float CurrentArmLength{ 0.0f };
    ECameraMode CurrentCameraMode;

    void AcquireTarget();
    void PitchCameraInternal(float Value);
    void SetCameraMode(ECameraMode Mode);
    void YawCameraInternal(float Value);
};
