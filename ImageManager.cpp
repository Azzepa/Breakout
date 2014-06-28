
#include "Library.h"

ImageManager* ImageManager::instance = nullptr;

ImageManager* ImageManager::GetInstance()
{
	if (instance == nullptr)
		instance = new ImageManager();
		
	return instance;
}

ImageManager::ImageManager()
{
}



