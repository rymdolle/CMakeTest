#include <gtest/gtest.h>

#include "matte.h"

class matteTest : public testing::Test {
protected:
  matteTest() {
  }

  ~matteTest() override {
  }

  void SetUp() override {
  }

  void TearDown() override {
  }
};

TEST_F(matteTest, add) {
  EXPECT_EQ(matte::add(4,1), 5);
}

TEST_F(matteTest, sub) {
  EXPECT_EQ(matte::sub(4,1), 3);
}

TEST_F(matteTest, mul) {
  EXPECT_EQ(matte::mul(4,1), 4);
}

TEST_F(matteTest, div) {
  EXPECT_EQ(matte::mul(4,1), 4);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
