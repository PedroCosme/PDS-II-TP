#ifndef _UTILITIES_HPP_
#define _UTILITIES_HPP_

#include <string>
#include <iostream>
#include <cstdlib>

int max(int a, int b);

int min(int a, int b);

std::string toLower(std::string in);
std::string toUpper(std::string in);

unsigned int genNum(uint minRange, uint maxRange);

#endif