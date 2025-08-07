#pragma once 

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
	StudentList(StudentData s);
	~StudentList();


	void addStudent(StudentData s);

};


 
#endif 
