// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

#include "MyPlayerController.h"
#include "MyPawn.h"

AMyGameModeBase::AMyGameModeBase()
{
	//C++
	//CDO 원본 초기화, 엔진 시작하자마 초기화 생성

	//UE_LOG(LogTemp, Warning, TEXT("안녕하세요."));

	//if (GEngine)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red,
	//		TEXT("Hello World"));
	//}

	PlayerControllerClass = AMyPlayerController::StaticClass(); //AMyPlayerController Class name
	DefaultPawnClass = AMyPawn::StaticClass(); //CDO 원본 가르키는 방법, 의미 클래스 이름
}
