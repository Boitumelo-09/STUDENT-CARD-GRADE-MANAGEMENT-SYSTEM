
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
	  switch (option) {
	  case 1: {
		  list.addStudentFromUser();
		  break;
	  }
	  case 2: {
		  list.displayAllStudents();
		  break;
	  }
	  case 3: {
		  list.searchStudent();
		  break;
	  }
	  case 4: {
		  std::cout << "case 4";
		  break;
	  }
	  case 5: {
		  exitProgram();

		  std::cout << "case 4";
		  break;
	  }
	  case 0: {

		  exitProgram();
		  break;
	  }
	  default: {
		  clearScreen();
		  verticalPadding();
		  std::cout<<horizontalPadding() << "Undefined Input";
		  newLine();
		  exitProgram();
			  break;
	  }
	 }
	
	} while (option>=0 && option<=5);
	return 0;

           }
  