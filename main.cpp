#include <iostream>
#include "config.h"
#include "matte.h"

int main() {
  std::cout << "Hello, CMake!\n"
            << "Version: " << CMakeTest_VERSION << '\n'
            << "Major:   " << CMakeTest_VERSION_MAJOR << '\n'
            << "Minor:   " << CMakeTest_VERSION_MINOR << '\n';

  std::cout << "\n\n"
            << "Matte:\n"
            << "Add(10, 10) = " << Add(10, 10) << '\n'
            << "Sub(10, 10) = " << Sub(10, 10) << '\n'
            << "Mul(10, 10) = " << Mul(10, 10) << '\n'
            << "Div(10, 10) = " << Div(10, 10) << '\n'
            << '\n';
  return 0;
}
