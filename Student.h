#pragma once
#include <iostream>

//You're building a system to:
//
//Add students with marks
//
//Display their reports(total, average, grade)
//
//Store them in a singly linked list(instead of array or vector)
//
//Perform actions like search, delete, display all, and (optionally)save to file

#ifndef STUDENT_H
#define STUDENT_H

class Student
{
private:
	std::string studentName{" "};
	int studentId{ 0 };
    float mathsMark{ 0.00 };
    float scienceMark{ 0.00 };
	float englishMark{ 0.00 };
public:
	Student();
	Student(std::string studentName,int studentId, float englishMark, float mathsMark, float scienceMark);
	~Student();

    void setID(int id);
    void setName(std::string name);
    void setMarks(float math, float science, float english);

  
    int getID() const;
    std::string getName() const;
    float getTotalMarks() const;
    float getAverage() const;
    char getGrade() const;


    void displayReport() const;
};



#endif