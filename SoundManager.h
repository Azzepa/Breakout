
#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

class SoundManager
{
private:
	//std::map<std::string, /*Sound*/> sounds;

	SoundManager();
public:
	static SoundManager* instance;
	static SoundManager* GetInstance();

};

#endif
