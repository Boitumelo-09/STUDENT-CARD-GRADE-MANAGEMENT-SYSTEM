#pragma once
#include <string>
#include "StudentData.h"

#ifndef STUDENTNODE_H
#define STUDENTNODE_H


class StudentNode
{
private:
	StudentData data;
	StudentNode* next;
public:
	
	StudentNode(StudentData data); //this constructor accepts data in the form: StudentData's Constructor. i.e: studentData(name , number , mark) , this constructor accepts constructed data
	
	int getStudentNumber() const;
	std::string getStudentName() const;
	float getStudentMark() const;
	StudentNode* getNext() const;

	void setNext(StudentNode* nextptr);
	void setStudentName(std::string newName);
	void setStudentMark(float newMark);
};

#endif 
