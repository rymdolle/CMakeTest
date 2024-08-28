#include <iostream>
#include "config.h"
int main() {
  std::cout << "Hello, CMake!\n"
            << "Version: " << CMakeTest_VERSION << '\n'
            << "Major:   " << CMakeTest_VERSION_MAJOR << '\n'
            << "Minor:   " << CMakeTest_VERSION_MINOR << '\n';
  return 0;
}
