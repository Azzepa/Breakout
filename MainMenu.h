
#ifndef MAINMENU_H
#define MAINMENU_H

class MainMenu: public State
{
private:
	ImageManager* imageManager;
public:
	MainMenu();
	~MainMenu();
	
	int HandleEvents();
	void DoLogic();
	void RenderGraphics();
};

#endif
