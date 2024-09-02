#include <gtest/gtest.h>
#include "SensorData.h"

class SensorDataClassTest : public testing::Test {
 protected:
  SensorDataClassTest() {
    data1_.addDataPoint(10.0);

    data2_.addDataPoint(10.0);
    data2_.addDataPoint(20.0);
    data2_.addDataPoint(30.0);
  }

  SensorData data0_;
  SensorData data1_;
  SensorData data2_;
};

TEST_F(SensorDataClassTest, HandlesNoData) {
  //Min: 0.0, Max 0.0, Avg: 0.0
  EXPECT_EQ(data0_.getMin(), 0.0);
  EXPECT_EQ(data0_.getMax(), 0.0);
  EXPECT_EQ(data0_.getAverage(), 0.0);
}

TEST_F(SensorDataClassTest, HandlesSingleDataPoint) {
  //Min: 10.0, Max: 10.0, Avg: 10.0
  EXPECT_EQ(data1_.getMin(), 10.0);
  EXPECT_EQ(data1_.getMax(), 10.0);
  EXPECT_EQ(data1_.getAverage(), 10.0);
}

TEST_F(SensorDataClassTest, HandlesMultipleDataPoints) {
  //Min: 10.0, Max, 30.0, Avg: 20.0
  EXPECT_EQ(data2_.getMin(), 10.0);
  EXPECT_EQ(data2_.getMax(), 30.0);
  EXPECT_EQ(data2_.getAverage(), 20.0);
}
