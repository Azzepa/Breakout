
#ifndef GAMESYS_H
#define GAMESYS_H

class GameSys
{
private:
	SDL_Window* window;
	SDL_Renderer* renderer;

	bool isRunning;

	GameSys();
	
	bool Initialise();
	void Cleanup();
public:
	static GameSys* instance;
	static GameSys* GetInstance();

	int Run();
};

#endif
