#include "MayhemPunch.h"
#include "HighscoreClass.h"

Highscore::Highscore(std::string name, std::int32_t score)
	: _name(name), _score(score) {}

Highscore::~Highscore(){}

std::string Highscore::getName() { return _name; }

std::int32_t Highscore::getscore() { return _score; }