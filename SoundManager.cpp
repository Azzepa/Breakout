
#include "Library.h"

SoundManager* SoundManager::instance = nullptr;

SoundManager* SoundManager::GetInstance()
{
	if (instance == nullptr)
		instance = new SoundManager();
	
	return instance;
}

SoundManager::SoundManager()
{
}