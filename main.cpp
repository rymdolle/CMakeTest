#include <iostream>
#include "config.h"
#include "matte.h"
#include "SensorData.h"

int main(int argc, char* argv[]) {
  for (int i = 1; i < argc; ++i) {
    if (argv[i] == std::string("--version") ||
        argv[i] == std::string("-v")) {
      std::cout << "CMakeTest " << CMakeTest_VERSION << '\n'
                << "Copyright (C) " << CMakeTest_AUTHOR << '\n'
                << '\n';
      exit(0);
    }
  }

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

  SensorData data;
  data.addDataPoint(10.0);
  data.addDataPoint(10.1);
  data.addDataPoint(10.2);

  std::cout << "Min: " << data.getMin() << '\n';
  std::cout << "Max: " << data.getMax() << '\n';
  return 0;
}
