#include "ProblemData.h"

using advent::ProblemData;

ProblemData::ProblemData(Vector data)
    : data_(data)
{
}

Vector ProblemData::data() const { return data_; }
