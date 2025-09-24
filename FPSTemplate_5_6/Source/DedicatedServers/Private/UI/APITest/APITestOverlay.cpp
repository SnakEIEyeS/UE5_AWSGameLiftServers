// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/APITest/APITestOverlay.h"

#include "UI/APITest/APITestManager.h"
#include "UI/API/ListFleets/ListFleetsBox.h"
#include "Components/Button.h"

void UAPITestOverlay::NativeConstruct()
{
	Super::NativeConstruct();

	check(m_APITestManagerClass);
	m_APITestManager = NewObject<UAPITestManager>(this, m_APITestManagerClass);

	ListFleetsBox->Button_ListFleets->OnClicked.AddDynamic(m_APITestManager, &UAPITestManager::ListFleetsButtonClicked);
}
