#pragma once

#include "Highscore.h"
#include <vector>
#include <fstream>

class MAYHEMPUNCH_API HighscoreManager
{
public:
	HighscoreManager();
	~HighscoreManager();

	void checkHighscore(Highscore);
	void loadHighscore();
	void saveHighscore();

private:
	std::vector<Highscore> _highscore;
};