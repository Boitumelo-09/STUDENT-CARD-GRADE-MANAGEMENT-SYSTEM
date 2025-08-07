#include "StudentData.h"
#include "StudentNode.h"
#include <iostream>
StudentNode::StudentNode() = default;
StudentNode::StudentNode(StudentData data) : data(data), next(nullptr) {};


int StudentNode::getStudentNumber() const { return data.studentNumber; }
std::string StudentNode::getStudentName() const { return data.studentName; }
float  StudentNode::getStudentMark() const { return data.finalMark; }
StudentNode* StudentNode::getNext()const { return next; }
			
void StudentNode::setNext(StudentNode* nextptr) { nextptr = next; }
void StudentNode::setStudentName(std::string newName) { newName = data.studentName; }
void StudentNode::setStudentMark(float newMark) { newMark = data.finalMark; }