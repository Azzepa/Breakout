
#ifndef STATEMANAGER_H
#define STATEMANAGER_H

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
	int GetCurrentStateID();
	
	void HandleEvents();
	void DoLogic();
	void RenderGraphics();
};

#endif
