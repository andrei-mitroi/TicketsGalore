#include "Train.h"
#include <iostream>


void Train::displaySeats(std::vector<std::vector<char>>& seats) {

    for (int i = 0; i < seats.size(); i++) {
        for (int j = 0; j < seats[i].size(); j++) {
            std::cout << seats[i][j] << " ";
        }
        std::cout << std::endl;
    }
}