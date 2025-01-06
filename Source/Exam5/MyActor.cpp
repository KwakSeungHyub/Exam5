#include "MyActor.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/Engine.h"

// 생성자
AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = false;  // 틱 비활성화
    CurrentPosition = FVector2D(0, 0);      // 초기 위치
}

// 엑터가 스폰될 때 호출되는 함수
void AMyActor::BeginPlay()
{
    Super::BeginPlay();
    Move(); // 스폰 시 자동으로 10회 이동
}

// 랜덤하게 0 또는 1을 반환하는 Step 함수
int32 AMyActor::Step()
{
    return FMath::RandRange(0, 1);
}

// 10회 랜덤 이동 및 로그 출력
void AMyActor::Move()
{
    UE_LOG(LogTemp, Warning, TEXT("Starting Position: (%d, %d)"), (int32)CurrentPosition.X, (int32)CurrentPosition.Y);

    for (int i = 0; i < 10; ++i)
    {
        int32 XStep = Step();
        int32 YStep = Step();

        // 이동 적용
        CurrentPosition.X += XStep;
        CurrentPosition.Y += YStep;

        // 위치 출력
        UE_LOG(LogTemp, Warning, TEXT("Step %d: New Position: (%d, %d)"), i + 1, (int32)CurrentPosition.X, (int32)CurrentPosition.Y);
    }
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

