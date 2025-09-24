// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/APITest/APITestHUD.h"

#include "UI/APITest/APITestOverlay.h"

void AAPITestHUD::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* pPlayerController = GetOwningPlayerController();
	if (IsValid(pPlayerController) && m_APITestOverlayClass)
	{
		m_pAPITestOverlay = CreateWidget<UAPITestOverlay>(pPlayerController, m_APITestOverlayClass);
		m_pAPITestOverlay->AddToViewport();
	}
}
