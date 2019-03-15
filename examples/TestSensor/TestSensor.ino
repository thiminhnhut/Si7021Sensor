#include <Arduino.h>
#include <Wire.h>
#include <Si7021Sensor.h>

#define debug_port Serial
#define BAUD_RATE 115200
#define PIN_SDA 4
#define PIN_SCL 5

Si7021Sensor Si7021;

void setup() {
    debug_port.begin(BAUD_RATE);
    Si7021.begin(PIN_SDA, PIN_SCL);
}

void loop() {
    Si7021Sensor::Sensor sensor = Si7021.getData();
    debug_port.printf("Temp = %0.2fC, %0.2fF, Humi = %0.2f\n", sensor.tempC, sensor.tempF, sensor.humi);
    delay(1000);
}
