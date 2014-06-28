
#ifndef IMAGEMANAGER_H
#define IMAGEMANAGER_H

class ImageManager
{
private:
	std::map<std::string, SDL_Texture*> textures;

	ImageManager();
public:
	static ImageManager* instance;
	static ImageManager* GetInstance();
	

};

#endif
