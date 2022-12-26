// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActorB.generated.h"

UCLASS()
class CANCRASH_API AFloatingActorB : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* VisualMesh;
	
public:	
	// Sets default values for this actor's properties
	AFloatingActorB();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor")
	float FloatSpeed = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor")
	float RotationSpeed = 20.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
