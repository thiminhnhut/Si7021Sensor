#include "Si7021Sensor.h"

Si7021Sensor::Si7021Sensor() : SI7021() {

}

Si7021Sensor::Sensor Si7021Sensor::getData() {
    Si7021Sensor::Sensor sensor;
    sensor.tempC = getCelsiusHundredths()/100.0;
    sensor.tempF = getFahrenheitHundredths()/100.0;
    sensor.humi = getHumidityPercent();
    return sensor;
}
