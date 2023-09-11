// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CCharacterBase.h"
#include "CCharacterPlayer.generated.h"

/**
 * 
 */
UCLASS()
class CAIMAN_API ACCharacterPlayer : public ACCharacterBase
{
	GENERATED_BODY()
public:	
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = Camera)
	TObjectPtr<class USpringArmComponent>CameraBoom;//스프링암

	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = Camera)
		TObjectPtr<class UCameraComponent>Camera;//카메라

	ACCharacterPlayer();
};
