#include <string>
#include "StudentData.h"
#include "StudentNode.h"
#include <iostream>


StudentNode::StudentNode(StudentData data) : data(data), next(nullptr) {}


int StudentNode::getStudentNumber() const { return data.studentNumber; }
std::string StudentNode::getStudentName() const { return data.studentName; }
float  StudentNode::getStudentMark() const { return data.finalMark; }
StudentNode* StudentNode::getNext()const { return next; }
			
void StudentNode::setNext(StudentNode* nextptr) { next = nextptr; }
void StudentNode::setStudentName(std::string newName) { data.studentName = newName; }
void StudentNode::setStudentMark(float newMark) { data.finalMark = newMark; }