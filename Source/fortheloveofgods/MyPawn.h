// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

class UParticleSystemComponent;
class UPlayerCameraComponent;

UCLASS()
class FORTHELOVEOFGODS_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UPROPERTY(EditAnywhere)
    UStaticMeshComponent* OurVisibleComponent { nullptr };

    UPROPERTY(EditAnywhere)
    UParticleSystemComponent* OurParticleSystem { nullptr };

    UPROPERTY(EditAnywhere)
    UPlayerCameraComponent* OurThirdPersonCamera { nullptr };

private:
    FVector CurrentVelocity{ FVector(0.0f, 0.0f, 0.0f) };
    FRotator CurrentCameraRotation{ FRotator(0.0f, 0.0f, 0.0f) };
    bool IsGrowing{ false };
    bool IsParticuling{ false };

    void MoveForward (float AxisValue);
    void MoveRight(float AxisValue);
    
    void YawCamera(float AxisValue);
    void PitchCamera(float AxisValue);

    void StartGrowing();
    void StopGrowing();

    void StartParticles();
    void StopParticles();

    void FocusTarget();
};
