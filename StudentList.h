#pragma once 
#include <string>
#include "StudentData.h"
#include "StudentNode.h"
#include <iostream>

#ifndef STUDENTLIST_H
#define STUDENTLIST_H
 
class StudentList {
private : 
	StudentNode* head;
public:
	
	StudentList();
	
	~StudentList();
	void displayMenu(int* menuOption);
	void addStudent(StudentData data);
	void displayAllStudents() const;
	void addStudentFromUser();

};


 
#endif 
