// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"
#include "MySpartaLog/MySpartaLog.h"

ATestActor::ATestActor()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogMySpartaModule, Display, TEXT("Actor call MySpartaLog Module!"));
}

