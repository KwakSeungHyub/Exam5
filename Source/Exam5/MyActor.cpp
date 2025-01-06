#include "MyActor.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/Engine.h"

// ������
AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = false;  // ƽ ��Ȱ��ȭ
    CurrentPosition = FVector2D(0, 0);      // �ʱ� ��ġ
}

// ���Ͱ� ������ �� ȣ��Ǵ� �Լ�
void AMyActor::BeginPlay()
{
    Super::BeginPlay();
    Move(); // ���� �� �ڵ����� 10ȸ �̵�
}

// �����ϰ� 0 �Ǵ� 1�� ��ȯ�ϴ� Step �Լ�
int32 AMyActor::Step()
{
    return FMath::RandRange(0, 1);
}

// 10ȸ ���� �̵� �� �α� ���
void AMyActor::Move()
{
    UE_LOG(LogTemp, Warning, TEXT("Starting Position: (%d, %d)"), (int32)CurrentPosition.X, (int32)CurrentPosition.Y);

    for (int i = 0; i < 10; ++i)
    {
        int32 XStep = Step();
        int32 YStep = Step();

        // �̵� ����
        CurrentPosition.X += XStep;
        CurrentPosition.Y += YStep;

        // ��ġ ���
        UE_LOG(LogTemp, Warning, TEXT("Step %d: New Position: (%d, %d)"), i + 1, (int32)CurrentPosition.X, (int32)CurrentPosition.Y);
    }
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

