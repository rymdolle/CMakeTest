#include "SensorData.h"

#include <algorithm>
#include <numeric>

void SensorData::addDataPoint(double dataPoint) {
  data_.push_back(dataPoint);
}

double SensorData::getAverage() const {
  if (data_.empty())
    return 0.0;

  return std::accumulate(data_.begin(), data_.end(), 0.0) / data_.size();
}

double SensorData::getMax() const {
  if (data_.empty())
    return 0.0;

  return *std::max_element(data_.begin(), data_.end());
}

double SensorData::getMin() const {
  if (data_.empty())
    return 0.0;

  return *std::min_element(data_.begin(), data_.end());
}
