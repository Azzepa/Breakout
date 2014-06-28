
#include "Library.h"
#undef main

int main(int arc, char** args)
{
	GameSys* Game = Game->GetInstance();
	return Game->Run();
}