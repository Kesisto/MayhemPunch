// Fill out your copyright notice in the Description page of Project Settings.

#include "MayhemPunch.h"
#include "CPPGameInstance.h"




void UCPPGameInstance::BeginPlay() {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "BeginPlay");

}