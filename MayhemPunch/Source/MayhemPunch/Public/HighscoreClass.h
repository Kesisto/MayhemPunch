#pragma once

#include <iostream>
#include <string>
#include <cstdint>

class MAYHEMPUNCH_API Highscore
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