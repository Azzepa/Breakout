
#ifndef STATE_H
#define STATE_H

class State
{
public:
	virtual ~State(){};
	
	virtual int HandleEvents() = 0;
	virtual void DoLogic() = 0;
	virtual void RenderGraphics() = 0;
};

#endif
