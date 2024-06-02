#include "ProblemData.h"

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

using advent::ProblemData;
namespace py = pybind11;

PYBIND11_MODULE(_advent, m)
{
     py::class_<ProblemData>(m, "ProblemData")
         .def(py::init<Vector>(),
              py::arg("data"))
         .def("data", &ProblemData::data);
}