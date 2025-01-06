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
    AMyActor(); // ������

    virtual void BeginPlay() override; // ���� �� �ڵ� ����

private:
    FVector2D CurrentPosition;
    // Called every frame
    virtual void Tick(float DeltaTime) override;
    int32 Step();      // ���� �̵� �Ÿ� ��ȯ (0 Ȥ�� 1)
    void Move();       // 10ȸ ���� �̵� �� �α� ���
};