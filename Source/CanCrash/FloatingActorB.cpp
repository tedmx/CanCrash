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

	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetFinderResult(TEXT("/Game/BlenderImports/CanMesh"));

	if (AssetFinderResult.Succeeded())
	{
		VisualMesh->SetStaticMesh(AssetFinderResult.Object);
		VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		VisualMesh->SetSimulatePhysics(true);
		VisualMesh->SetMassOverrideInKg(NAME_None, 1.0f);
	}

	InitialLifeSpan = 10.0f;

	SetActorScale3D(FVector(0.75f, 0.75f, 0.75f));

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
}

