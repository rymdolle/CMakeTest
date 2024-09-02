// -*- c++ -*-
#ifndef SENSORDATA_H
#define SENSORDATA_H

#include <vector>

class SensorData {
public:
  void addDataPoint(double dataPoint);
  double getAverage() const;
  double getMax() const;
  double getMin() const;
private:
  std::vector<double> data_;
};

#endif /* SENSORDATA_H */
