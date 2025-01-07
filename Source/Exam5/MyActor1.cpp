#include "MyActor1.h"

// Sets default values
AMyActor1::AMyActor1()
{
    PrimaryActorTick.bCanEverTick = false;  // ƽ ��Ȱ��ȭ
    CurrentPosition = FVector2D(0, 0);      // �ʱ� ��ġ
    TotalMoveDistance = 0;                   // �� �̵� �Ÿ� �ʱ�ȭ
    TotalEventsTriggered = 0;                // �� �̺�Ʈ �߻� Ƚ�� �ʱ�ȭ
}

// ���Ͱ� ������ �� ȣ��Ǵ� �Լ�
void AMyActor1::BeginPlay()
{
    Super::BeginPlay();
    Move(); // ���� �� �ڵ����� 15ȸ �̵�
}

// �����ϰ� 0 �Ǵ� 1�� ��ȯ�ϴ� Step �Լ�
int32 AMyActor1::Step()
{
    return FMath::RandRange(0, 1);
}

// ���� �̺�Ʈ �߻� �Լ� (50% Ȯ��)
bool AMyActor1::TriggerEvent(int i)
{
    if (i > 10)
        return FMath::RandBool();  // 50% Ȯ���� �̺�Ʈ �߻�
    else return false;
}

// �̵� �Ÿ� ��� �Լ�
float AMyActor1::CalculateMoveDistance(FVector2D StartPosition, FVector2D EndPosition)
{
    return FVector2D::Distance(StartPosition, EndPosition);
}

// 10ȸ ���� �̵� �� �α� ����̾����� �̺�Ʈ ���� �� ��ǥ ǥ�� ������ �ƴ��� Ȯ���ϱ� ���� 15ȸ�� ����
void AMyActor1::Move()
{
    UE_LOG(LogTemp, Warning, TEXT("Starting Position: (%d, %d)"), (int32)CurrentPosition.X, (int32)CurrentPosition.Y);

    FVector2D PreviousPosition = CurrentPosition; // ���� ��ġ ����
    for (int i = 0; i < 15; ++i)
    {
        int32 XStep = Step();
        int32 YStep = Step();

        // ���� ��ġ ���� �̵� �Ÿ� ���
        FVector2D NewPosition = CurrentPosition;
        NewPosition.X += XStep;
        NewPosition.Y += YStep;
        
        

        // �̵� ����
        CurrentPosition.X = NewPosition.X;
        CurrentPosition.Y = NewPosition.Y;

        

        // 10ȸ �̻� �̵��� 50% Ȯ���� �̺�Ʈ �߻�, �̵��Ÿ� & �̺�Ʈ �߻� Ƚ�� ���
        if (i >= 9) {
            float MoveDistance = CalculateMoveDistance(PreviousPosition, NewPosition);
            TotalMoveDistance += MoveDistance;
            if (TriggerEvent(i))
            {
                UE_LOG(LogTemp, Warning, TEXT("Step %d: Event triggered!"), i + 1);
                TotalEventsTriggered++;
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Step %d: No event triggered."), i + 1);
            }

            PreviousPosition = CurrentPosition; // ���� ��ġ ������Ʈ
            // 10ȸ �̵� �� �� �̵� �Ÿ��� �̺�Ʈ �߻� Ƚ�� ���
            UE_LOG(LogTemp, Warning, TEXT("Total Move Distance After 10 + Move: %.2f"), TotalMoveDistance);
            UE_LOG(LogTemp, Warning, TEXT("Total Events Triggered: %d"), TotalEventsTriggered);
        }
    }
    
}

// Called every frame
void AMyActor1::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
