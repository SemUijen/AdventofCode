#include "day2.h"
#include <iostream>
#include <string>
#include <sstream>

int advent::day2::solve_day2(ProblemData &input)
{
    int output = 0;

    for (String &row : input.data())
    {
        std::istringstream stream(row);
        std::string c;
        int id, n;

        // >> operator jumps to the next segment of string
        stream >> c;
        stream >> id;
        stream.ignore(1);
        bool valid_game = true;
        while (stream >> n)
        {
            stream >> c;
            if (('r' == c[0] && n > 12) || // red
                ('g' == c[0] && n > 13) || // green
                ('b' == c[0] && n > 14))   // blue
            {
                valid_game = false;
            }
        }
        if (valid_game)
        {
            output += id;
        }
    }

    return output;
}

int advent::day2::solve_day2_part2(ProblemData &input)
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