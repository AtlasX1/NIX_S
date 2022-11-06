// Fill out your copyright notice in the Description page of Project Settings.

#include "NIX_SP_Lesson_2/Public/MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(TimerHandle, this, &AMyActor::TimerFunction,1.0f, true);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::TimerFunction()
{
	FString StringSeconds = FString::FromInt(SecondsToHide);

	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, StringSeconds);
	if(SecondsToHide == 0)
	{
		GetWorldTimerManager().ClearTimer(TimerHandle);
		this->Mesh->SetVisibility(false);
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, TEXT("Hide"));
		return;
	}
	SecondsToHide--;

}
