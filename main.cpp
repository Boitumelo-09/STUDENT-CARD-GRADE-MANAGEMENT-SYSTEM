
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
		  std::cout << "case 2";
		  break;
	  }
	  case 4: {
		  std::cout << "case 4";
		  break;
	  }
	  case 5: {
		  std::cout << "case 5";
		  break;
	  }
	  default: {
		  std::cout << "default";
			  break;
	  }
	 }
	
	} while (option>=0 && option<=5);
	

	std::cout << horizontalPadding() << "Demo complete.\n ";
	return 0;

           }
  