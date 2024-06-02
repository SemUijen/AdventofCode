#include "day1.h"
#include <iostream>

int advent::day1::solve_day1(ProblemData &input)
{
    int output = 0;

    for (String &row : input.data())
    {
        std::cout << row;
    }
    return output;
}