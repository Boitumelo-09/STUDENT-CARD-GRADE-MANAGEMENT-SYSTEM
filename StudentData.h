#pragma once
#include <string> 
#include <iostream>


#ifndef STUDENTDATA_H
#define STUDENTDATA_H

struct StudentData
{
    int studentNumber;
    std::string studentName;
    float finalMark;

    StudentData(int studentNumber, std::string studentName, float finalMark);
};

#endif
