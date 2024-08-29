#include "matte.h"
#include <stdexcept>

int matte::add(int a, int b) {
  return a + b;
}

int matte::sub(int a, int b) {
  return a - b;
}

int matte::mul(int a, int b) {
  return a * b;
}

int matte::div(int a, int b) {
  if (b == 0)
    throw std::invalid_argument("Divisor can not be zero");
  return a / b;
}
