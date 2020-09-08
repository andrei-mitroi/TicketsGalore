#include <iostream>
#include <string>
#include <ctime>

#include "PublicTransport.h"

#define __STDC_WANT_LIB_EXT1__ 1

 double PublicTransport::getCostofTicket(double x, double y) {

	costOfTicket = x;
	costOfSeat = y;

	double totalCost{ costOfTicket + costOfSeat };

	std::cout << "Total: " << totalCost << std::endl;

	return totalCost;
}

 double PublicTransport::getCostofTicket(double x) {

	costOfTicket = x;
	std::cout << "Total: " << costOfTicket << std::endl;

	return costOfTicket;
}

void PublicTransport::getTimeAndDate() {

	std::time_t t = std::time(NULL);
	errno_t e = ctime_s(date, 26, &t);
	std::cout << date ;

}

int PublicTransport::getSerialNumber() {

	srand(time(NULL));
	serialNumber = ((rand() % 234553) + 786554);

	return serialNumber;
}