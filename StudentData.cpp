#include "StudentData.h"

StudentData::StudentData() = default;
StudentData::StudentData(int studentNumber, std::string studentName, float finalMark) :studentNumber(studentNumber), studentName(studentName), finalMark(finalMark) {};