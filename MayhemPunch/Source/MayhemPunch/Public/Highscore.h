#ifndef _HIGHSCORE_H
#define _HIGHSCORE_H
#include <iostream>
#include <string>
#include <cstdint>
class Highscore
{
public:
	Highscore(std::string, std::int32_t);
	~Highscore();

	std::string getName();
	std::int32_t getscore();

private:
	std::string _name;
	std::int32_t _score;
};

Highscore::Highscore(std::string name, std::int32_t score)
	: _name(name), _score(score) {}

Highscore::~Highscore(){}

std::string Highscore::getName() { return _name; }

std::int32_t Highscore::getscore() { return _score; }

#endif