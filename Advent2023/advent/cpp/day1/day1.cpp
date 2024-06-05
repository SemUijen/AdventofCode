#include "day1.h"
#include <iostream>
#include <string>
#include <string_view>
#include <cstring>
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

    for (std::string row : input.data())
    {
        // initialze first 10 as digits (are smaller then 10)
        int first = 10;
        int second = 10;

        int i = 0;
        for (char chr : row)
        {
            if (isdigit(chr))
            {
                if (isdigit(chr))
                {
                    if (first == 10)
                    {
                        first = chr - '0';
                    }
                    second = chr - '0';
                }
            }

            int i2 = 1;
            std::string digitStrings[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            for (String digits : digitStrings)
            {
                if (row.substr(i, digits.size()) == digits)
                {
                    if (first == 10)
                    {
                        first = i2;
                    }
                    second = i2;
                }
                i2 += 1;
            }
            i += 1;
        }
        output += 10 * first + second;
    }

    return output;
}