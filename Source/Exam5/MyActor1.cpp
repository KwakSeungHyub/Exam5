#include "MyActor1.h"

// Sets default values
AMyActor1::AMyActor1()
{
    PrimaryActorTick.bCanEverTick = false;  // 틱 비활성화
    CurrentPosition = FVector2D(0, 0);      // 초기 위치
    TotalMoveDistance = 0;                   // 총 이동 거리 초기화
    TotalEventsTriggered = 0;                // 총 이벤트 발생 횟수 초기화
}

// 엑터가 스폰될 때 호출되는 함수
void AMyActor1::BeginPlay()
{
    Super::BeginPlay();
    Move(); // 스폰 시 자동으로 15회 이동
}

// 랜덤하게 0 또는 1을 반환하는 Step 함수
int32 AMyActor1::Step()
{
    return FMath::RandRange(0, 1);
}

// 랜덤 이벤트 발생 함수 (50% 확률)
bool AMyActor1::TriggerEvent()
{
    
        return FMath::RandBool();  // 50% 확률로 이벤트 발생
    
}

// 이동 거리 계산 함수
float AMyActor1::CalculateMoveDistance(FVector2D StartPosition, FVector2D EndPosition)
{
    return FVector2D::Distance(StartPosition, EndPosition);
}

// 10회 랜덤 이동 및 로그 출력
void AMyActor1::Move()
{
    UE_LOG(LogTemp, Warning, TEXT("Starting Position: (%d, %d)"), (int32)CurrentPosition.X, (int32)CurrentPosition.Y);

    FVector2D PreviousPosition = CurrentPosition; // 이전 위치 저장
    for (int i = 0; i < 10; ++i)
    {
        int32 XStep = Step();
        int32 YStep = Step();

        // 이전 위치 기준 이동 거리 계산
        FVector2D NewPosition = CurrentPosition;
        NewPosition.X += XStep;
        NewPosition.Y += YStep;
        
        

        // 이동 적용
        CurrentPosition.X = NewPosition.X;
        CurrentPosition.Y = NewPosition.Y;
        // 이동시 50% 확률로 이벤트 발생, 이동거리 & 이벤트 발생 횟수 출력
        
            float MoveDistance = CalculateMoveDistance(PreviousPosition, NewPosition);
            TotalMoveDistance += MoveDistance;
            if (TriggerEvent())
            {
                UE_LOG(LogTemp, Warning, TEXT("Step %d: Event triggered!"), i + 1);
                TotalEventsTriggered++;
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Step %d: No event triggered."), i + 1);
            }
            UE_LOG(LogTemp, Warning, TEXT("Move Distance : %.2f"), MoveDistance);
            PreviousPosition = CurrentPosition; // 이전 위치 업데이트
        
    }
    // 총 이동 거리와 이벤트 발생 횟수 출력
    UE_LOG(LogTemp, Warning, TEXT("Total Move Distance : %.2f"), TotalMoveDistance);
    UE_LOG(LogTemp, Warning, TEXT("Total Events Triggered: %d"), TotalEventsTriggered);
}

// Called every frame
void AMyActor1::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
