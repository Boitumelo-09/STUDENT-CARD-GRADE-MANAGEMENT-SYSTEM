#include "Student.h"
#include <iostream>

    Student::Student() = default;
    Student::Student(std::string studentName, int studentId, float englishMark, float mathsMark, float scienceMark) :studentName(studentName), studentId(studentId), englishMark(englishMark), mathsMark(mathsMark), scienceMark(scienceMark) {}

    Student::~Student(){}

    void Student::setID(int id) { studentId = id;}
    void Student::setName(std::string name) { studentName = name; }
    void Student::setMarks(float math, float sci, float eng) {
        mathsMark = math; 
        scienceMark = sci; 
        englishMark = eng;
    };


    std::string Student::getName() const { 
        return studentName; 
    }

    int Student::getID() const{ 
        return studentId; 
    }

    float Student::getTotalMarks() const {
        return englishMark + mathsMark + scienceMark;
    }

    float Student::getAverage() const {
        return (englishMark + mathsMark + scienceMark) / 3.0f;
    }

    char Student::getGrade() const {
        float avg = getAverage();
        if (avg >= 90) return 'A';
        else if (avg >= 80) return 'B';
        else if (avg >= 70) return 'C';
        else if (avg >= 60) return 'D';
        else return 'F';
    }
    void Student::displayReport() const {
    std::cout << "    Student Report\n";
    std::cout << "    --------------\n";
    std::cout << "    Name      : " << studentName << "\n";
    std::cout << "    ID        : " << studentId << "\n";
    std::cout << "    English   : " << englishMark << "\n";
    std::cout << "    Maths     : " << mathsMark << "\n";
    std::cout << "    Science   : " << scienceMark << "\n";
    std::cout << "    --------------------------\n";
    std::cout << "    Total     : " << getTotalMarks() << "\n";
    std::cout << "    Average   : " << getAverage() << "\n";
    std::cout << "    Grade     : " << getGrade() << "\n";
    std::cout << std::endl;
}


    