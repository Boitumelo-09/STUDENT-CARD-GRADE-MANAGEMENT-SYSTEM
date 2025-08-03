#include "utilities.h"
#include <cstdlib>
#include<iostream>

void clearScreen() {
	system(clear);
}
void pressToContinue() {
	std::cin.ignore();
	std::cout << "Press Enter To Proceed...";
	std::cin.get();
	clearScreen();
}