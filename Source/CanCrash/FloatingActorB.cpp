// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingActorB.h"

// Sets default values
AFloatingActorB::AFloatingActorB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	// VisualMesh->SetupAttachment(RootComponent);

	RootComponent = VisualMesh;

	// static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Game/BlenderImports/CanMesh"));

	if (CubeVisualAsset.Succeeded())
	{
		VisualMesh->SetStaticMesh(CubeVisualAsset.Object);
		VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		VisualMesh->SetSimulatePhysics(true);
	}

}

// Called when the game starts or when spawned
void AFloatingActorB::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello from floating actor B"));
	
}

// Called every frame
void AFloatingActorB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//FVector NewLocation = GetActorLocation();
	//FRotator NewRotation = GetActorRotation();
	//float RunningTime = GetGameTimeSinceCreation();
	//float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	//NewLocation.Z += DeltaHeight * 20.0f;       //Scale our height by a factor of 20
	//float DeltaRotation = DeltaTime * 20.0f;    //Rotate by 20 degrees per second
	//NewRotation.Yaw += DeltaRotation;
	//SetActorLocationAndRotation(NewLocation, NewRotation);

}

