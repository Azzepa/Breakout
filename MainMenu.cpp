
#include "Library.h"

MainMenu::MainMenu()
{
	imageManager = imageManager->GetInstance();
}

MainMenu::~MainMenu()
{
}

int MainMenu::HandleEvents()
{	
	int returnState = STATE_NONE;
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		if (event.type == SDL_QUIT)
			returnState = STATE_EXIT;
	}
	return returnState;
}

void MainMenu::DoLogic()
{	
}

void MainMenu::RenderGraphics()
{
	SDL_SetRenderDrawColor(gameSys->GetRenderer(), 0, 0, 0, 255);
	SDL_RenderClear(gameSys->GetRenderer());
	
	SDL_RenderPresent(gameSys->GetRenderer());
}
