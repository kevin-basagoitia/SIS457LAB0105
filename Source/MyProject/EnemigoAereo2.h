// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAereo2.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AEnemigoAereo2 : public AEnemigo
{
	GENERATED_BODY()
		/** The camera */
		UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* CameraComponent;

	    /** Camera boom positioning the camera above the character */
	   UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;
	
public:
	AEnemigoAereo2();
};
