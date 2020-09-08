#pragma once

class Traveler{

	int transportOption{};
	char option{};


public:
	Traveler();
	std::string name{};
	std::string getName();
	int getOption();
	char Repeat();

};