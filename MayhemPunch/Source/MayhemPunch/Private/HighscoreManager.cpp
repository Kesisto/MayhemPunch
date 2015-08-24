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
	std::ifstream input ("Highscore.dat", std::ios::in);
	if (input.is_open()) {
		while (input.eof()) {

		}
		input.close();
	}
}

void HighscoreManager::saveHighscore() {
	std::ofstream output ("Highscore.dat", std::ios::out | std::ios::trunc);
	if (output.is_open()) {
		output.write((char *)(_highscore[0]), sizeof(Highscore));
		//for (auto it = _highscore.begin(); it != _highscore.end(); it++) {
		//	
		//}
		output.close();
	}
}