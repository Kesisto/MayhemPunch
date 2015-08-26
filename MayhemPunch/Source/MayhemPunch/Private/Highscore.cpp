#include "MayhemPunch.h"
#include "Highscore.h"

Highscore::Highscore(std::string name, std::int32_t score)
	: _name(name), _score(score) {}

Highscore::~Highscore(){}