
#ifndef STATEMANAGER_H
#define STATEMANAGER_H

#include "State.h"
#include "MainMenu.h"
#include "Globals.h"

class StateManager
{
private:
	State* currentState;
	int stateID;
	int nextStateID;
	
	StateManager();	
public:
	static StateManager* instance;
	static StateManager* GetInstance();

	void SetNextState(const int &newStateID);
	void ChangeState();
	State* GetCurrentState();
	int GetCurrentStateID();
};

#endif
