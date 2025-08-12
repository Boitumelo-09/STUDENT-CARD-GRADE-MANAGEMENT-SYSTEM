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

void StudentList::displayMenu( int* menuOption) {
	verticalPadding();
	   
	std::cout << horizontalPadding() << std::string(10, ':') << "M A I N - M E N U" << std::string(10, ':');
	newLine();
	std::cout << horizontalPadding() << "1. Add Student\n";
	std::cout << horizontalPadding() << "2. View Students\n";
	std::cout << horizontalPadding() << "3. Search Student\n";
	std::cout << horizontalPadding() << "4. Edit Student\n";
	std::cout << horizontalPadding() << "5. Delete Student\n";
	std::cout << horizontalPadding() << "0. Exit\n";
	std::cout << horizontalPadding() << "Option : "; 
	std::cin >> *menuOption;
	pressToContinue();
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
		pressToContinue();
		return;
	}
}
void StudentList::displayAllStudents() const {
	verticalPadding();
	std::cout << horizontalPadding() << std::string(12, ':')<<" S T U D E N T - L I S T "<<std::string(12, ':');
	newLine();
	if (head == nullptr) {
		std::cout << horizontalPadding() << "No Students Available";
		newLine();
		pressToContinue();
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
			std::cout <<horizontalPadding()<< std::string(50 , ':');
			newLine();
			tempPtr = tempPtr->getNext();
		  }
		newLine();
		pressToContinue();
	}
	
}
void StudentList::addStudentFromUser() {
	verticalPadding();

	int studentNum;
	std::string studentName;
	float finalMark;
	std::cout << horizontalPadding()<<"ADDING STUDENT";
	newLine();
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
	return;  
}
void StudentList::searchStudent() {
	StudentNode* tempPtr = head;
	std::string searchName;
	int searchNumber , searchChoice;
	verticalPadding();
	std::cout << horizontalPadding()<< "SEARCHING FOR STUDENT";
	newLine();
	std::cout <<horizontalPadding()<< "Search By: ";
	newLine();
	std::cout <<horizontalPadding()<< "     1. Name ";
	newLine();
	std::cout <<horizontalPadding()<< "     2. Student Number ";
	newLine();
	std::cout <<horizontalPadding()<< "0ption : ";
	std::cin >> searchChoice;
	if (searchChoice == 1)
	{
		clearScreen();
		verticalPadding();
		std::cout << horizontalPadding() << "SEARCHING FOR STUDENT BY NAME";
		newLine();
		std::cout << horizontalPadding() << "SEARCH : ";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(std::cin, searchName);
		      
		   
		 
	}
	
	pressToContinue();
	return;
}
