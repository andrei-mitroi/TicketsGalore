#pragma once

class PublicTransport {

protected:

	int serialNumber{};
	double costOfTicket{}, costOfSeat{};
	char date[26]{};

public:

	double getCostofTicket(double x);
	double getCostofTicket(double x, double y);
	void getTimeAndDate();
	int getSerialNumber();

};