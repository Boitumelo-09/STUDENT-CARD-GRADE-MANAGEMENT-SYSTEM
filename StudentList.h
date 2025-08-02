#pragma once
#include "Student.h"


#ifndef STUDENTLIST_H
#define STUDENTLIST_H


struct StudentNode
{
    Student studentInfo;
    StudentNode* next;

    StudentNode(Student studentInfo, StudentNode* next);
};

class StudentList {
private:
    StudentNode* head;

public:
    
    StudentList(); 

    ~StudentList();               

    void addStudent(const Student& student);
    void displayAll() const;
    bool deleteStudentByID(int id);
    Student* searchStudentByID(int id);
};

#endif



