#pragma once

#include <iostream>
#include <string>
#include <cstdint>

class MAYHEMPUNCH_API Highscore
{
public:
	Highscore(std::string, std::int32_t);
	~Highscore();
	
	std::string getName()	{ return _name; }
	std::int32_t getScore()	{ return _score; }

private:
	std::string _name;
	std::int32_t _score;
};
