
#include "Library.h"

StateManager* StateManager::instance = nullptr;

StateManager* StateManager::GetInstance()
{
	if (instance == nullptr)
		instance = new StateManager();
	
	return instance;
}

StateManager::StateManager()
{
	currentState = nullptr;
	nextStateID = STATE_NONE;
	stateID = STATE_NONE;
}

void StateManager::SetNextState(const int &newStateID)
{
	nextStateID = newStateID;
}

void StateManager::ChangeState()
{
	if (nextStateID != STATE_NONE)
	{
		if (nextStateID != STATE_EXIT)
			delete currentState;
		
		switch (nextStateID)
		{
			case STATE_MENU:
				currentState = new MainMenu();
		}
		stateID = nextStateID;
		nextStateID = STATE_NONE;
	}
}

int StateManager::GetCurrentStateID()
{
	return stateID;
}

void StateManager::HandleEvents()
{
	SetNextState(currentState->HandleEvents());
}

void StateManager::DoLogic()
{
	currentState->DoLogic();
}

void StateManager::RenderGraphics()
{
	currentState->RenderGraphics();
}