#include <gtest/gtest.h>

#include "matte.h"

TEST(matteTest, add) {
  EXPECT_EQ(matte::add(4,1), 5);
}

TEST(matteTest, sub) {
  EXPECT_EQ(matte::sub(4,1), 3);
}

TEST(matteTest, mul) {
  EXPECT_EQ(matte::mul(4,1), 4);
}

TEST(matteTest, div) {
  EXPECT_EQ(matte::mul(4,1), 4);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
