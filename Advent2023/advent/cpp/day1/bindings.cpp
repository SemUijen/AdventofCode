#include "day1.h"

#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(_day1, m)
{
    m.def("solve_day1",
          &advent::day1::solve_day1,
          py::arg("input"));

    m.def("solve_day1_part2",
          &advent::day1::solve_day1_part2,
          py::arg("input"));
}