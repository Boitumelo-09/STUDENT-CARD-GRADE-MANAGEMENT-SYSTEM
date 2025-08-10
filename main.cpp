

#include <iostream>
#include "StudentData.h"
#include "StudentNode.h"
#include "StudentList.h"
#include "utilities.h"

int main() {

	StudentList list;
	displayMenu();
	
	list.addStudentFromUser();

	list.displayAllStudents();

	pressToContinue();

	clearScreen();

	std::cout <<  "\t\t\tDemo complete.\n ";
	return 0;

           }
  