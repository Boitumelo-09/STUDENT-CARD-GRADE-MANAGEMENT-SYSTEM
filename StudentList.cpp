#include <string>
#include "StudentData.h"
#include "StudentNode.h"
#include "StudentList.h"
#include "utilities.h"
#include <iostream>


StudentList::StudentList() { head = nullptr; }
StudentList::~StudentList(){
	StudentNode* tempPtr = head;
	while (tempPtr != nullptr) {
		StudentNode* currentPtr = tempPtr;
		tempPtr = tempPtr->getNext();
		delete currentPtr;
	}
}
void StudentList::addStudent(StudentData data){
	StudentNode* newStudent = new StudentNode(data);
	
	if (head == nullptr) {
		head = newStudent;
	}
	else {
		StudentNode* tempPtr = head; 
		while (tempPtr->getNext() != nullptr) {
			
			tempPtr=tempPtr->getNext();
		}
		tempPtr->setNext(newStudent);
	}
}
void StudentList::displayAllStudents() const {
	verticalPadding(4);
	   
	if (head == nullptr) {
		std::cout << "\t\t\tNo Students Available";
		return;
	}
	else {
		StudentNode* tempPtr = head;
		while (tempPtr != nullptr) {
			std::cout << "\t\t\tSTUDENT NUMBER : " << tempPtr->getStudentNumber();
			std::cout << std::endl;
			std::cout << "\t\t\tSTUDENT NAME   : " << tempPtr->getStudentName();
			std::cout << std::endl;
			std::cout << "\t\t\tSTUDENT MARK   : " << tempPtr->getStudentMark();
			std::cout << "\n\t\t\t::::::::::::::::::::::::::::::::::::::\n";

			tempPtr = tempPtr->getNext();
		  }
	}
}
void StudentList::addStudentFromUser() {
	verticalPadding(4);
	int studentNum;
	std::string studentName;
	float finalMark;

	std::cout << "\t\t\tEnter Student Number : ";
	std::cin >> studentNum;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "\t\t\tEnter Student Name   : ";
	getline(std::cin, studentName);
	

	std::cout << "\t\t\tEnter Student Mark   : ";
	std::cin >> finalMark;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	addStudent(StudentData(studentNum, studentName, finalMark));
	clearScreen();
	std::cout << "\n\t\t\tStudent Added Successfully\n";
	pressToContinue();
}