//
// Created by ahmed on 30/05/2021.
//
#include "sha256/sha256/sha256.h"
#include <string>
#include <fstream>
#include <iostream>


using std::cout;

class component_Hachage {
    public:
        component_Hachage() {}
        ~component_Hachage() {}

        std::string SHA256 (std::string input){

            std::string result = sha256(input);
            return result;
        }


};

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

PYBIND11_MODULE(component_Hachage, m) {
    py::class_<component_Hachage>(m, "component_Hachage")
        .def(py::init())
        .def("SHA256", &component_Hachage::SHA256);

}
