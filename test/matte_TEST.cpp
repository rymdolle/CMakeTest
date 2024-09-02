#include <gtest/gtest.h>
#include <stdexcept>

#include "matte.h"

TEST(matteTest, add) {
  EXPECT_EQ(matte::add(4,1), 5);
  EXPECT_EQ(matte::add(-1,1), 0);
  EXPECT_EQ(matte::add(10, -10), 0);
  EXPECT_EQ(matte::add(10,10), 20);
  EXPECT_EQ(matte::add(100,15), 115);
}

TEST(matteTest, sub) {
  EXPECT_EQ(matte::sub(4,1), 3);
  EXPECT_EQ(matte::sub(-1,1), -2);
  EXPECT_EQ(matte::sub(10,-10), 20);
  EXPECT_EQ(matte::sub(100,40), 60);
}

TEST(matteTest, mul) {
  EXPECT_EQ(matte::mul(4,1), 4);
  EXPECT_EQ(matte::mul(10,12), 120);
  EXPECT_EQ(matte::mul(4,-10), -40);
  EXPECT_EQ(matte::mul(-10, 4), -40);
}

TEST(matteTest, div) {
  EXPECT_EQ(matte::div(4,1), 4);
  EXPECT_EQ(matte::div(10,5), 2);
  EXPECT_EQ(matte::div(40, -4), -10);
  EXPECT_EQ(matte::div(-40, 10), -4);
  EXPECT_THROW(matte::div(10, 0), std::invalid_argument);
}
