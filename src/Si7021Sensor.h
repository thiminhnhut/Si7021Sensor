#ifndef Si7021Sensor_h
#define Si7021Sensor_h

#include <Arduino.h>
#include <SI7021.h>

class Si7021Sensor : public SI7021 {
public:
    struct Sensor {
        float tempC;
        float tempF;
        float humi;
    };

    Si7021Sensor();

    Si7021Sensor::Sensor getData();
};
#endif
