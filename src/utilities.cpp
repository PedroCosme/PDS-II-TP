#include "utilities.hpp"

std::string toLower(std::string in)
{
    std::string result = "";

    for (char c : in)
    {
        result += std::tolower(c);
    }

    return result;
}

std::string toUpper(std::string in)
{
    std::string result = "";

    for (char c : in)
    {
        result += std::toupper(c);
    }

    return result;
}

unsigned int genNum(uint minRange, uint maxRange)
{
    int roll;
    int min = minRange;
    int max = maxRange;

    roll = rand() % (max - min + 1) + min;

    return roll;
}
