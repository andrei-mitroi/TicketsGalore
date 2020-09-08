#pragma once
#include "PublicTransport.h"
#include "CountryTransit.h"
#include <vector>

class Airplane : public CountryTransit {

	int seatRow{}, seatCollumn{};
	bool repeat = true;

public:
	std::vector <std::vector <char>> airplaneSeatsTimisoara{ {' ','1','2','3','4'},
													         {'1','0','0','0','0'},
													         {'2','0','0','0','0'},
													         {'3','0','0','0','0'},
													         {'4','0','0','0','0'},
													         {'5','0','0','0','0'},
													         {'6','0','0','0','0'},
													         {'7','0','0','0','0'},
													         {'8','0','0','0','0'},
													         {'9','0','0','0','0'} };

	std::vector <std::vector <char>> airplaneSeatsConstanta{ {' ','1','2','3','4'},
												             {'1','0','0','0','0'},
												             {'2','0','0','0','0'},
												             {'3','0','0','0','0'},
												             {'4','0','0','0','0'},
												             {'5','0','0','0','0'},
												             {'6','0','0','0','0'},
												             {'7','0','0','0','0'},
												             {'8','0','0','0','0'},
												             {'9','0','0','0','0'} };

	std::vector <std::vector <char>> airplaneSeatsSuceava{ {' ','1','2','3','4'},
														   {'1','0','0','0','0'},
														   {'2','0','0','0','0'},
														   {'3','0','0','0','0'},
														   {'4','0','0','0','0'},
														   {'5','0','0','0','0'},
														   {'6','0','0','0','0'},
														   {'7','0','0','0','0'},
												           {'8','0','0','0','0'},
												           {'9','0','0','0','0'} };

	void displaySeats(std::vector<std::vector<char>>& seats);
	void reserveSeat(std::vector<std::vector<char>>& seats);

};

