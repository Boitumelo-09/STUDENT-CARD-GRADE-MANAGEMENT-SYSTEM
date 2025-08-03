#pragma once

#ifndef UTILITIES_H
#define UTILITIES_H


#ifdef _WIN32
#define clear "cls"
#else
#define clear "clear"
#endif
void clearScreen();
void pressToContinue();

#endif
