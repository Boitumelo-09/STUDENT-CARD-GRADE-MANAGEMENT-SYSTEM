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
	verticalPadding();
	   
	if (head == nullptr) {
		std::cout << horizontalPadding() << "No Students Available";
		return;
	}
	else {
		StudentNode* tempPtr = head;
		while (tempPtr != nullptr) {
			std::cout <<horizontalPadding()<< "STUDENT NUMBER : " << tempPtr->getStudentNumber();
			newLine();
			std::cout <<horizontalPadding()<< "STUDENT NAME   : " << tempPtr->getStudentName();
			newLine();
			std::cout <<horizontalPadding()<< "STUDENT MARK   : " << tempPtr->getStudentMark();
			newLine();
			std::cout <<horizontalPadding()<< std::string(38 , ':');
			newLine();
			

			tempPtr = tempPtr->getNext();
		  }
	}
}
void StudentList::addStudentFromUser() {
	verticalPadding();
	int studentNum;
	std::string studentName;
	float finalMark;

	std::cout << horizontalPadding()<<"Enter Student Number : ";
	std::cin >> studentNum;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << horizontalPadding()<<"Enter Student Name   : ";
	getline(std::cin, studentName);
	

	std::cout << horizontalPadding()<<"Enter Student Mark   : ";
	std::cin >> finalMark;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	addStudent(StudentData(studentNum, studentName, finalMark));
	clearScreen();
	newLine();
	std::cout << horizontalPadding() <<"Student Added Successfully";
	newLine();
	pressToContinue();
}