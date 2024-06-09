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

    for (String &row : input.data())
    {
        std::istringstream stream(row);
        std::string c;
        int id, n, r{}, g{}, b{};

        // >> operator jumps to the next segment of string
        stream >> c;
        stream >> id;
        stream.ignore(1);
        while (stream >> n)
        {
            stream >> c;
            if ('r' == c[0])
            { // red
                r = std::max(r, n);
            }
            else if ('g' == c[0])
            { // green
                g = std::max(g, n);
            }
            else if ('b' == c[0])
            { // blue
                b = std::max(b, n);
            }
        }

        output += r * b * g;
    }

    return output;
}