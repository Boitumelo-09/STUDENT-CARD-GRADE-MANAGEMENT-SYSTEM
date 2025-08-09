

#include <iostream>
#include "StudentData.h"
#include "StudentNode.h"
#include "StudentList.h"
#include "utilities.h"

int main() {

	StudentList list;

	list.addStudent(StudentData(1000, "ALIKO BOJO", 89.2));

	list.addStudent(StudentData(1001, "Quick Links", 65.8));

	list.addStudent(StudentData(1006, "Jeremiah Saliko", 65.8));

	list.addStudent(StudentData(1003, "BelmireDub Salamaliko", 65.9));

	list.displayAllStudents();

	pressToContinue();

	clearScreen();

	std::cout <<  "\t\t\tDemo complete.\n ";
	return 0;

           }