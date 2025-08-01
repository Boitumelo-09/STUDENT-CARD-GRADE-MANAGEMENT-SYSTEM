#include "StudentList.h"

StudentNode::StudentNode(Student studentInfo, StudentNode* next) {
    this->studentInfo = studentInfo;
    this->next = nullptr;
}