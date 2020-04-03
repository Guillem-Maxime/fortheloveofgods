// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraTargetSphereTrigger.h"
#include "Components/SphereComponent.h"
#include "UObject/NameTypes.h"

ACameraTargetSphereTrigger::ACameraTargetSphereTrigger()
{
    //Register Events
    OnActorBeginOverlap.AddDynamic(this, &ACameraTargetSphereTrigger::OnOverlapBegin);
    OnActorEndOverlap.AddDynamic(this, &ACameraTargetSphereTrigger::OnOverlapEnd);
}

void ACameraTargetSphereTrigger::SetRadius(float SphereRadius)
{
    USphereComponent* SphereCollisionComponent = CastChecked<USphereComponent>(GetCollisionComponent());
    SphereCollisionComponent->InitSphereRadius(+SphereRadius);
}

void ACameraTargetSphereTrigger::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    const auto& Predicate = [this](const FName& Tag) 
    { 
        return TargetTag.IsEqual(Tag);  
    };
    if (OtherActor != nullptr && (OtherActor != this) && OtherActor->Tags.ContainsByPredicate(Predicate)) {
        // print to screen using above defined method when actor enters trigger volume
        TargetsInZone.Add(OtherActor);
    }
}

void ACameraTargetSphereTrigger::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
    if (OtherActor != nullptr && (OtherActor != this) && TargetsInZone.Contains(OtherActor)) {
        // print to screen using above defined method when actor leaves trigger volume
        TargetsInZone.Remove(OtherActor);
    }
}