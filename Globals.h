
#ifndef GLOBALS_H
#define GLOBALS_H

enum STATES
{
	STATE_NONE = 0,
	STATE_MENU,
	STATE_GAME,
	
	STATE_EXIT
};

struct Coords
{
	int x, y;
};

#endif