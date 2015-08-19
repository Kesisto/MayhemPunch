#include "MayhemPunch.h"
#include "HighscoreManager.h"

HighscoreManager::HighscoreManager() {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "HighscoreManager");
	_highscore.push_back(Highscore("ASS", 5000));
	_highscore.push_back(Highscore("TIT", 4000));
	saveHighscore();
}

HighscoreManager::~HighscoreManager() {}

void HighscoreManager::checkHighscore(Highscore hs) {

}

void HighscoreManager::loadHighscore() {
	std::ifstream input ("Data/Highscore.ass", std::ios::in | std::ios::binary);
	if (input.is_open()) {
		while (input.eof()) {

		}
		input.close();
	}
}

void HighscoreManager::saveHighscore() {
	std::ofstream output ("Data/Highscore.ass", std::ios::out | std::ios::trunc | std::ios::binary);
	if (output.is_open()) {
		output.write((char *)(_highscore[0]), sizeof(Highscore));
		//for (auto it = _highscore.begin(); it != _highscore.end(); it++) {
		//	
		//}
		output.close();
	}
}