

#include <iostream>
#include "StudentData.h"
#include "StudentNode.h"
#include "StudentList.h"
#include "utilities.h"

int main() {
	int option = 0;
	StudentList list;
	do
	{
      list.displayMenu(&option);
	
	list.addStudentFromUser();

	list.displayAllStudents();

	pressToContinue();

	clearScreen();
	} while (option>=0 && option<=5);
	

	std::cout << horizontalPadding() << "Demo complete.\n ";
	return 0;

           }
  