#include <string>
#include "utilities.h"
#include <cstdlib>
#include <iostream>

void clearScreen() {
    system(CLEAR_COMMAND); 
}

void pressToContinue() {
    
    std::cout << "\n\t\t\tPress Enter To Proceed...";
    std::cin.get();
    clearScreen();
}

void verticalPadding(int padNumber) {
    std::cout << std::string(padNumber, '\n');
}