#include <string>
#include "StudentData.h"
#include "StudentNode.h"
#include "StudentList.h"
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
	if (head == nullptr) {
		std::cout << "No Students Available";
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