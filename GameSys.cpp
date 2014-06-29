
#include "Library.h"


GameSys* GameSys::instance = nullptr;

GameSys* GameSys::GetInstance()
{
	if (instance == nullptr)
		instance = new GameSys();
		
	return instance;
}

GameSys::GameSys()
{
	//Startup
	isRunning = true;
}

bool GameSys::Initialise()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		std::cout << "Error Initialising SDL: " << SDL_GetError() << std::endl;
		return false;
	}
	
	window = SDL_CreateWindow("Breakout", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
	if (window == nullptr)
	{
		std::cout << "Error creating SDL window: " << SDL_GetError() << std::endl; 
		return false;
	}
	
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (renderer == nullptr)
	{
		std::cout << "Error creating SDL renderer: " << SDL_GetError() << std::endl;
		return false;
	}
	
	return true;
}

void GameSys::Cleanup()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}

int GameSys::Run()
{
	if (!Initialise())
		return 1;
	
	//Main Loop
	StateManager* stateManager = stateManager->GetInstance();
	stateManager->SetNextState(STATE_MENU);
	stateManager->ChangeState();
	while (stateManager->GetCurrentStateID() != STATE_EXIT)
	{
		stateManager->HandleEvents();
		stateManager->DoLogic();
		stateManager->ChangeState();
		stateManager->RenderGraphics();
	}
	
	Cleanup();
	return 0;	
}
