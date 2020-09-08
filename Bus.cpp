#include "Bus.h"
#include <iostream>
#include <stdlib.h>


 void Bus::displaySeats(std::vector<std::vector<char>> & seats) {

	system("cls");
    for (int i = 0; i < seats.size(); i++) {
        for (int j = 0; j < seats[i].size(); j++) {
            std::cout << seats[i][j] << " ";
        }
     std::cout << std::endl;
	}
}



 void Bus::reserveSeat(std::vector<std::vector<char>>& seats) {

	 std::cout << "On witch row do you want your seat?" << "\n";
	 std::cin >> seatRow;
	 std::cout << "On witch collumn?" << "\n";
	 std::cin >> seatCollumn;
	 std::cin.ignore(1000, '\n');

	 if (seats[seatRow][seatCollumn] == 'x')
		 std::cout << "This seat is already taken!";
	 else
		 seats[seatRow][seatCollumn] = 'x';
 }
