#pragma once
#include <iostream>

#ifndef STUDENTDATA_H
#define STUDENTDATA_H

struct StudentData
{
	int studentNumber;
	std::string studentName;
	float finalMark;

	StudentData();
	StudentData(int studentNumber, std::string studentName, float finalMark);
};


#endif