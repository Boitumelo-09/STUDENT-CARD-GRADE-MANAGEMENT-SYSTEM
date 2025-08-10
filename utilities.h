#pragma once

#ifndef UTILITIES_H
#define UTILITIES_H


#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif
void clearScreen();
void newLine();
void pressToContinue();

std::string horizontalPadding();

void verticalPadding();


#endif
