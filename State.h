
#ifndef STATE_H
#define STATE_H

#include "GameSys.h"

class State
{
private:
	
public:
	GameSys* gameSys;
	State(){gameSys = gameSys->GetInstance();}
	virtual ~State(){};
	
	virtual int HandleEvents() = 0;
	virtual void DoLogic() = 0;
	virtual void RenderGraphics() = 0;
};

#endif
