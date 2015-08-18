#pragma once
#include "HighscoreClass.h"
#include <vector>
#include <fstream>

class MAYHEMPUNCH_API HighscoreManager
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