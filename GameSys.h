
#ifndef GAMESYS_H
#define GAMESYS_H

class GameSys
{
private:
	SDL_Window* window;
	SDL_Renderer* renderer;

	GameSys();
	
	bool Initialise();
	void Cleanup();
public:
	static GameSys* instance;
	static GameSys* GetInstance();

	SDL_Window* GetWindow();
	SDL_Renderer* GetRenderer();

	int Run();
};

#endif
