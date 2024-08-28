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
            << "Add(10, 10) = " << matte::add(10, 10) << '\n'
            << "Sub(10, 10) = " << matte::sub(10, 10) << '\n'
            << "Mul(10, 10) = " << matte::mul(10, 10) << '\n'
            << "Div(10, 10) = " << matte::div(10, 10) << '\n'
            << '\n';
  return 0;
}
