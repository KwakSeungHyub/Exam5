// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class EXAM5_API AMyActor : public AActor
{
    GENERATED_BODY()

public:
    AMyActor(); // 생성자

    virtual void BeginPlay() override; // 스폰 시 자동 실행

private:
    FVector2D CurrentPosition;
    // Called every frame
    virtual void Tick(float DeltaTime) override;
    int32 Step();      // 랜덤 이동 거리 반환 (0 혹은 1)
    void Move();       // 10회 랜덤 이동 및 로그 출력
};