#include "day2.h"

#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(_day2, m)
{
      m.def("solve_day2",
            &advent::day2::solve_day2,
            py::arg("input"));

      m.def("solve_day2_part2",
            &advent::day2::solve_day2_part2,
            py::arg("input"));
}