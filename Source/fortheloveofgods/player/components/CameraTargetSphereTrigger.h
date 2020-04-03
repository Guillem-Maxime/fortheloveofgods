// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "CameraTargetSphereTrigger.generated.h"

class AActor;

UCLASS()
class FORTHELOVEOFGODS_API ACameraTargetSphereTrigger : public ATriggerSphere
{
    GENERATED_BODY()
public:
    ACameraTargetSphereTrigger();
    virtual ~ACameraTargetSphereTrigger() {}
    void SetRadius(float SphereRadius);

    UFUNCTION()
    void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
    UFUNCTION()
    void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);

    const TArray<AActor*>& GetTargetsInZone() const { return TargetsInZone;  }

private:
    TArray<AActor*> TargetsInZone{};
    FName TargetTag{ "FOCUS_TARGET" };
};
