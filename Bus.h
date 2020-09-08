#pragma once

#include <vector>

#include "PublicTransport.h"
#include "CountryTransit.h"

class Bus : public CountryTransit {

	int numAvailableSeats{ 20 }, seatRow{}, seatCollumn{};




public:
	char option{};

	std::vector <std::vector <char>> busSeatsTimisoara{{' ','1','2','3','4'},
													   {'1','0','0','0','0'},
													   {'2','0','0','0','0'},
													   {'3','0','0','0','0'},
													   {'4','0','0','0','0'},
													   {'5','0','0','0','0'} };

	std::vector <std::vector <char>> busSeatsConstanta{{' ','1','2','3','4'},
													   {'1','0','0','0','0'},
													   {'2','0','0','0','0'},
													   {'3','0','0','0','0'},
													   {'4','0','0','0','0'},
													   {'5','0','0','0','0'} };

	std::vector <std::vector <char>> busSeatsSuceava{{' ','1','2','3','4'},
													 {'1','0','0','0','0'},
													 {'2','0','0','0','0'},
													 {'3','0','0','0','0'},
													 {'4','0','0','0','0'},
													 {'5','0','0','0','0'} };

	void displaySeats(std::vector<std::vector<char>> &seats);
	void reserveSeat(std::vector<std::vector<char>>& seats);

};

