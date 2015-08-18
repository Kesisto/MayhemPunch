#include "MayhemPunch.h"
#include "HighscoreManagerClass.h"

HighscoreManager::HighscoreManager() {
	loadHighscore();
	_highscores.push_back(Highscore("ASS", 3250));
	_highscores.push_back(Highscore("FCK", 72250));
	_highscores.push_back(Highscore("SHT", 5250));
	_highscores.push_back(Highscore("NUT", 4250));
	_highscores.push_back(Highscore("TIT", 3150));
	checkHighscore(Highscore("faggotass", 63525));
}

HighscoreManager::~HighscoreManager() {
	saveHighscore();
	_highscores.clear();
}

void HighscoreManager::checkHighscore(Highscore hs) {
	std::int32_t temp = hs.getscore();
	for (auto it = _highscores.begin(); it != _highscores.end(); it++) {
		if ((*it).getscore() > temp) {}
		else {
			_highscores.insert(--it, hs);
			break;
		}
	}
}

void HighscoreManager::saveHighscore() {

}

void HighscoreManager::loadHighscore() {

}