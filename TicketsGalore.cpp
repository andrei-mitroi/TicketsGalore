#include <iostream>

#include <string>
#include <ctime>
#include <vector>
#include <stdlib.h>

#include "PublicTransport.h"
#include "Traveler.h"
#include "UrbanTransit.h"
#include "CountryTransit.h"
#include "Bus.h"
#include "Train.h"
#include "Airplane.h"


int main() {

	Traveler traveler;
	UrbanTransit urban;
	CountryTransit country;

	Bus bus;
	Airplane airplane;
	Train train;

	traveler.getName();

	do {
		system("cls");
		std::cout << "\nPlease select from the menu bellow what type of transport are you looking for.\n";

		std::cout << "1. Urban Area Transit.\n";
		std::cout << "2. Intercity Transit\n";

		switch (traveler.getOption()) {
		case 1:
			urban.openingMessage();
			break;

		case 2:
			country.openingMessage();
			std::cout << "Please select a city that you want to travel to! \n"
				<< "1. Timisoara: \n"
				<< "2. Constanta \n"
				<< "3. Suceava\n";

			switch (traveler.getOption()) {
			case 1:
				std::cout << "You have selected Timisoara!\n";

				std::cout << "How would you like to get there? \n"
					<< "1. Bus \n"
					<< "2. Train \n"
					<< "3. Airplane\n";

				switch (traveler.getOption()) {
				case 1:
					std::cout << "You have selected Bus!\n";

				bus.displaySeats(bus.busSeatsTimisoara);
				bus.reserveSeat(bus.busSeatsTimisoara);
				bus.displaySeats(bus.busSeatsTimisoara);
//construct ticket
				std::cout << " _________________________________________\n";
				std::cout << "|				          |\n";
				std::cout << "| " << traveler.name << "                        \t|\n";
				std::cout << "| S/N <" << bus.CountryTransit::getSerialNumber() << ">" << "\t";
				bus.CountryTransit::getTimeAndDate();
				std::cout << "| "; bus.CountryTransit::getCostofTicket(23, 2);
				std::cout << "|_________________________________________|\n";

					break;
				case 2:
					std::cout << "You have selected Train!\n";
					break;
				case 3:
					std::cout << "You have selected Airplane!\n";
					break;
				default:
					std::cout << "Please enter a valid option!\n\n";
				}
				break;

			case 2:
				std::cout << "You have selected Constanta!\n";
				std::cout << "How would you like to get there? \n"
					<< "1. Bus \n"
					<< "2. Train \n"
					<< "3. Airplane\n";

				switch (traveler.getOption()) {
				case 1:
					std::cout << "You have selected Bus!\n";
//construct ticket
					bus.displaySeats(bus.busSeatsConstanta);
					bus.reserveSeat(bus.busSeatsConstanta);
					bus.displaySeats(bus.busSeatsConstanta);


					std::cout << " _________________________________________\n";
					std::cout << "|				          |\n";
					std::cout << "| " << traveler.name << "               bla           \t\t|\n";
					std::cout << "| S/N <" << bus.CountryTransit::getSerialNumber() << ">" << "\t";
					bus.CountryTransit::getTimeAndDate();
					std::cout << "| "; bus.CountryTransit::getCostofTicket(78, 2);
					std::cout << "|_________________________________________|\n";


					break;
				case 2:
					std::cout << "You have selected Train!\n";
					break;
				case 3:
					std::cout << "You have selected Airplane!\n";
					break;
				default:
					std::cout << "Please enter a valid option!\n\n";
					break;
				}
				break;

			case 3:
				std::cout << "You have selected Suceava!\n";
				std::cout << "How would you like to get there? \n"
					<< "1. Bus \n"
					<< "2. Train \n"
					<< "3. Airplane\n";

				switch (traveler.getOption()) {
				case 1:
					std::cout << "You have selected Bus!\n";

					bus.displaySeats(bus.busSeatsSuceava);
					bus.reserveSeat(bus.busSeatsSuceava);
					bus.displaySeats(bus.busSeatsSuceava);


					std::cout << " _________________________________________\n";
					std::cout << "|				          |\n";
					std::cout << "| " << traveler.name << "                        \t|\n";
					std::cout << "| S/N <" << bus.CountryTransit::getSerialNumber() << ">" << "\t";
					bus.CountryTransit::getTimeAndDate();
					std::cout << "| "; bus.CountryTransit::getCostofTicket(72, 2);
					std::cout << "|_________________________________________|\n";

					break;
				case 2:
					std::cout << "You have selected Train!\n";
					break;
				case 3:
					std::cout << "You have selected Airplane!\n";
					break;
				default:
					std::cout << "Please enter a valid option!\n\n";
					break;
				}
				break;
			}

		}

	std::cout << "Would you like to buy another ticket? (y/n)\n";
		
	} while (traveler.Repeat() == 'y');

	return 0;
}

