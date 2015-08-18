#ifndef _HIGHSCOREMANAGER_H
#define _HIGHSCOREMANAGER_H
#include "Highscore.h"
#include <vector>
#include <fstream>
class HighscoreManager
{
public:
	HighscoreManager();
	~HighscoreManager();

	void checkHighscore(Highscore);
	void saveHighscore();
	void loadHighscore();
private:
	std::vector<Highscore> _highscores;
};
#endif