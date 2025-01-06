// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor1.generated.h"

UCLASS()
class EXAM5_API AMyActor1 : public AActor
{
    GENERATED_BODY()

public:
    AMyActor1(); // 생성자

    virtual void BeginPlay() override; // 스폰 시 자동 실행

private:
    FVector2D CurrentPosition;
    // Called every frame
    virtual void Tick(float DeltaTime) override;
    int32 Step();      // 랜덤 이동 거리 반환 (0 혹은 1)
    float TotalMoveDistance;            // 총 이동 거리
    int32 TotalEventsTriggered;         // 총 이벤트 발생 횟수
    bool TriggerEvent();                // 랜덤 이벤트 발생 (50% 확률)
    float CalculateMoveDistance(FVector2D StartPosition, FVector2D EndPosition); // 이동 거리 계산
    void Move();       // 10회 랜덤 이동 및 로그 출력
};