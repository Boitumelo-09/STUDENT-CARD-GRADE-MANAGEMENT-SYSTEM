#include <string>
#include "utilities.h"
#include <cstdlib>
#include <iostream>

void clearScreen() {
    system(CLEAR_COMMAND); 
}

void pressToContinue() {
    std::cin.ignore();
    std::cout << "\t\t\tPress Enter To Proceed...";
    std::cin.get();
    clearScreen();
}