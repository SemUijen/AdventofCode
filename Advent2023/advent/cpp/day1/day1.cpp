#include "day1.h"
#include <iostream>
#include <string>

int advent::day1::solve_day1(ProblemData &input)
{
    int output = 0;

    for (String &row : input.data())
    {
        // initialze first 10 as digits (are smaller then 10)
        int first = 10;
        int second;

        for (char chr : row)
        {
            if (isdigit(chr))
            {
                if (first == 10)
                {
                    first = chr - '0';
                }
                second = chr - '0';
            };
        }
        output += (10 * first + second);
    }

    return output;
}

int advent::day1::solve_day1_part2(ProblemData &input)
{
    int output = 0;

    return output;
}