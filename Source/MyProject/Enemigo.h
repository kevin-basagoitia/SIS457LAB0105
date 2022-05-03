// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enemigo.generated.h"

UCLASS()
class MYPROJECT_API AEnemigo : public APawn
{
	GENERATED_BODY()

		UPROPERTY( VisibleDefaultsOnly, BlueprintReadOnly, Category = "Ship", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* ShipMeshComponent;

public:
	// Sets default values for this pawn's properties
	AEnemigo();

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Ship")
		float MoveSpeed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY( EditAnyWhere, BlueprintReadWrite, Category = "Ship")
		float Energy;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Returns ShipMeshComponent subobject **/
	//FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }

	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;

};
