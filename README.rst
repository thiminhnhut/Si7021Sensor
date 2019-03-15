#####################################################################
Thư viện giao tiếp với cảm biến nhiệt độ Si7021 cho Arduino, ESP8266
#####################################################################

:Info: Github <https://github.com/thiminhnhut/Si7021Sensor>
:Author: Thi Minh Nhựt <thiminhnhut@gmail.com>
:Date: $Date: 15/03/2019 $
:Revision: $Revision: 1.0.0 $
:Description: Thư viện giao tiếp với cảm biến nhiệt độ Si7021 cho Arduino, ESP8266

==================================================================================

.. sectnum::

.. contents:: Nội dung

==================================================================================

Nội dung thực hiện
******************

Thư viện Si7021
===============

* Thư mục source: `src <https://github.com/thiminhnhut/Si7021Sensor/blob/master/src>`_.

  * File `Si7021Sensor.h <https://github.com/thiminhnhut/Si7021Sensor/blob/master/src/Si7021Sensor.h>`_:

  .. code::

    struct Sensor {
          float tempC;
          float tempF;
          float humi;
      };

    Si7021Sensor();

    Si7021Sensor::Sensor getData();

* Ví dụ: `TestSensor.ino <https://github.com/thiminhnhut/Si7021Sensor/blob/master/examples/TestSensor/TestSensor.ino>`_

Chức năng của thư viện Si7021Sensor
===================================

* Kế thừa từ thư viện: https://github.com/LowPowerLab/SI7021

* Đọc giá trị nhiệt độ và độ ẩm không khí của cảm biến Si7021.
