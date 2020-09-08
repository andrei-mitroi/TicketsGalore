#include <iostream>
#include <string>
#include <limits>

#include "Traveler.h"



Traveler::Traveler() {

	std::cout << " ____________________________________________________________\n";
	std::cout << "| \t  Hello and welcome to Tickets Galore!               |\n";
	std::cout << "| With this app, you have the ability to purchase tickets for|\n";
	std::cout << "| any type of public transport available in our country,     |\n";
	std::cout << "| be it ground or air based.                                 |\n";
	std::cout << "|____________________________________________________________|\n";
}

std::string Traveler::getName() {

	std::cout << "Please enter your name!" << std::endl;
	std::getline(std::cin, name);

	return name;
}


int Traveler::getOption() {

	std::cin >> transportOption;

	return transportOption;
}

char Traveler::Repeat() {

	std::cin >> option;

	return option;
}