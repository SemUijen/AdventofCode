#ifndef ADVENT_PROBLEMDATA_H
#define ADVENT_PROBLEMDATA_H

#include <string>
#include <vector>

using String = std::string;
using Vector = std::vector<String>;

namespace advent
{
    class ProblemData
    {
    private:
        Vector data_;
        int test_ = 1;

    public:
        /**
         * initialze Problem data
         */
        ProblemData(Vector data);

        /**
         * the data of the Problem
         */
        [[nodiscard]] Vector data() const;

        [[nodiscard]] int test() const;
    };

} // end of namespace

#endif // ADVENT_PROBLEMDATA_H
