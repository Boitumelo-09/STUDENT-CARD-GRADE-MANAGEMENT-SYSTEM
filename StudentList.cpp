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


StudentNode* StudentList::searchStudentByName(std::string nameOfStudent) const {
	StudentNode* tempPointer = head;
	while (tempPointer != nullptr) {
		
		if (tempPointer->getStudentName() == nameOfStudent ) 
		{
			return tempPointer;
		}
		tempPointer = tempPointer->getNext();
		
	}
     return nullptr;
}
StudentNode* StudentList::searchStudentByNumber(int numberOfStudent) const {
	StudentNode* tempPoint = head;
	while (tempPoint != nullptr) {
		
		if (tempPoint->getStudentNumber() == numberOfStudent)
		{
			return tempPoint;
		}
		tempPoint = tempPoint->getNext();
		
	}
     return nullptr;
}

void StudentList::searchStudent(){

	
	std::string searchName;
	int searchNumber=0 , searchChoice;
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

       StudentNode* searchPtr = searchStudentByName(searchName);
		if (searchPtr) {
			clearScreen();
			verticalPadding();
			std::cout << horizontalPadding() << std::string(10, ':') << " S T U D E N T - F O U N D " << std::string(10, ':');
			newLine();
			std::cout << horizontalPadding() << "DETAILS:";
			newLine();
			std::cout << horizontalPadding() << "     STUDENT NUMBER : "<<searchPtr->getStudentNumber();
			newLine();
			std::cout << horizontalPadding() << "     STUDENT NAME   : "<<searchPtr->getStudentName();
			newLine();
			std::cout << horizontalPadding() << "     FINAL MARK     : "<<searchPtr->getStudentMark();
			newLine();

			pressToContinue();
			return;
			
		}
		else {
			clearScreen();
			verticalPadding();
			std::cout << horizontalPadding() << "     404 :(   ";
			newLine();
			std::cout << horizontalPadding() << searchName << " ,Is Not Found";
			pressToContinue();
			return;
		}
		

	}
	else if (searchChoice == 2) {
		clearScreen();
		verticalPadding();
		std::cout << horizontalPadding() << "SEARCHING FOR STUDENT BY NUMBER";
		newLine();
		std::cout << horizontalPadding() << "SEARCH : ";
		
		std::cin >> searchNumber;
		StudentNode* searchPtrNum = searchStudentByNumber(searchNumber);
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (searchPtrNum) {
			clearScreen();
			verticalPadding();
			std::cout << horizontalPadding() << std::string(10, ':') << " S T U D E N T - F O U N D " << std::string(10, ':');
			newLine();
			std::cout << horizontalPadding() << "DETAILS:";
			newLine();
			std::cout << horizontalPadding() << "     STUDENT NUMBER : " << searchPtrNum->getStudentNumber();
			newLine();
			std::cout << horizontalPadding() << "     STUDENT NAME   : " << searchPtrNum->getStudentName();
			newLine();
			std::cout << horizontalPadding() << "     FINAL MARK     : " << searchPtrNum->getStudentMark();
			newLine();

			pressToContinue();
			return;
		}
		else {

			clearScreen();
			verticalPadding();
			std::cout << horizontalPadding() << "     404 :(   ";
			newLine();
			std::cout << horizontalPadding() <<"Student Number : "<<searchNumber<<" ,Is Not Found";
			pressToContinue();
			return;
			 
		}
	}
	else {
		verticalPadding();
		std::cout<<horizontalPadding() << "Invalid Choice";
		return;

	}
	return;
}

void StudentList::editStudent() {
	int searchNumToUpdate , editOption=0;
	std::string newName;
	float newMark{0.0};
	clearScreen();
	verticalPadding();
	
	std::cout << horizontalPadding() << "EDITING STUDENT INFO";
	newLine();
	std::cout << horizontalPadding() << "Student Number : ";
	std::cin>>searchNumToUpdate;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	StudentNode* accessPtr = searchStudentByNumber(searchNumToUpdate);

	if (accessPtr)
	{
		clearScreen();
		verticalPadding();

		std::cout << horizontalPadding() << "Student Exists";
		newLine();
		std::cout << horizontalPadding()<<" OPTIONS ";
		newLine();
		std::cout << horizontalPadding()<<"     1. Edit Student Name";
		newLine();
		std::cout << horizontalPadding()<<"     2. Edit Student Mark";
		newLine();
		std::cout << horizontalPadding() << "Option : ";
		std::cin >> editOption;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		switch (editOption) {
		case 1: {
			clearScreen();
			verticalPadding();
			std::cout << horizontalPadding() << "EDITING STUDENT NAME";
			newLine();
			std::cout << horizontalPadding() << "Enter New Name:";
			getline(std::cin, newName);
			accessPtr->setStudentName(newName);
			clearScreen();
			verticalPadding();
			std::cout << horizontalPadding() << "Student Name Has Been Successfully Updated.";
			newLine();
			pressToContinue;
			break;
		}
		case 2: {
			clearScreen();
			verticalPadding();
			std::cout << horizontalPadding() << "EDITING STUDENT MARK";
			newLine();
			std::cout << horizontalPadding() << "Enter New Mark:";
			std::cin>>newMark;
			accessPtr->setStudentMark(newMark);
			clearScreen();
			verticalPadding();
			std::cout << horizontalPadding() << "Student Mark Has Been Successfully Updated.";
			newLine();
			pressToContinue;
			break;
		}
		default: {
			clearScreen();
			verticalPadding();
			std::cout << horizontalPadding() << "INVALID INPUT :(";
			newLine();
			pressToContinue();
			break;
		}
		}
		return;
	}
	else {
		clearScreen();
		verticalPadding();
		std::cout <<horizontalPadding()<< "The Student Number : " << searchNumToUpdate << " , Doesn't Exist.";
		newLine();
		pressToContinue();
		return;
	}
}
