#include "StageManager.h"
#include "TitleStage.h"
#include "NewStage.h"
#include "MainStage.h"
#include "LoadStage.h"
#include "MiniGameStage.h"
#include "MiniGameRunStage.h"


StageManager::StageManager()
{

}

void StageManager::Render()
{
	if (currentStage != nullptr)
	{
		currentStage->Render();
	}
}

void StageManager::Update()
{
	if (currentStage != nullptr)
	{
		currentStage->Update();
	}
}

void StageManager::MakeTitleStage()
{

	if (currentStage != nullptr)
	{
		prevStage = currentStage;
		delete currentStage;
	}
	TitleStage* stage = new TitleStage();
	currentStage = stage;
}

void StageManager::MakeNewStage()
{
	if (currentStage != nullptr)
	{
		prevStage = currentStage;
		delete currentStage;
	}
	NewStage* stage = new NewStage();
	currentStage = stage;

}

void StageManager::MakeLoadStage()
{
	if (currentStage != nullptr)
	{
		prevStage = currentStage;
		delete currentStage ;
	}
	LoadStage* stage = new LoadStage();
	currentStage = stage;
}

void StageManager::MakeMiniGameChooseStage()
{
	if (currentStage != nullptr)
	{
		prevStage = currentStage;
		delete currentStage;
	}
	MiniGameStage* stage = new MiniGameStage();
	currentStage = stage;
}

void StageManager::MakeMiniGameRunStage()
{
	if (currentStage != nullptr)
	{
		prevStage = currentStage;
		delete currentStage;
	}
	MiniGameRunStage* stage = new MiniGameRunStage();
	currentStage = stage;
}

void StageManager::MakeMainStage()
{
	if (currentStage != nullptr)
	{
		prevStage = currentStage;
		delete currentStage;
	}
	MainStage* stage = new MainStage();
	currentStage = stage;
}