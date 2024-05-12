#include "day1.h"

#include <pybind11/pybind11.h>

namespace py=pybind11;

PYBIND11_MODULE(_day1, m)
{
    m.def("solve",
          &advent::day1::solve,
          py::arg("input"));
}