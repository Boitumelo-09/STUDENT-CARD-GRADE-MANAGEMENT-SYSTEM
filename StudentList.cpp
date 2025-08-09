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
		StudentNode* tempPtr = head; // preparing to traverse
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
			std::cout << "STUDENT NUMBER : " << tempPtr->getStudentNumber();
			std::cout << std::endl;
			std::cout << "STUDENT NAME   : " << tempPtr->getStudentName();
			std::cout << std::endl;
			std::cout << "STUDENT MARK : " << tempPtr->getStudentMark();
			std::cout << "\n::::::::::::::::::::::::::::::::::::::\n";

			tempPtr = tempPtr->getNext();
		  }
	}
}