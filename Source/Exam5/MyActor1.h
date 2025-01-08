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
    AMyActor1(); // ������

    virtual void BeginPlay() override; // ���� �� �ڵ� ����

private:
    FVector2D CurrentPosition;
    // Called every frame
    virtual void Tick(float DeltaTime) override;
    int32 Step();      // ���� �̵� �Ÿ� ��ȯ (0 Ȥ�� 1)
    float TotalMoveDistance;            // �� �̵� �Ÿ�
    int32 TotalEventsTriggered;         // �� �̺�Ʈ �߻� Ƚ��
    bool TriggerEvent();                // ���� �̺�Ʈ �߻� (50% Ȯ��)
    float CalculateMoveDistance(FVector2D StartPosition, FVector2D EndPosition); // �̵� �Ÿ� ���
    void Move();       // 10ȸ ���� �̵� �� �α� ���
};