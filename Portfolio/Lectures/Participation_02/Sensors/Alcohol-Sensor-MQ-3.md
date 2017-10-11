## Alcohol-Sensor MQ-3

<http://www.learningaboutelectronics.com/Articles/MQ-3-alcohol-sensor-circuit-with-arduino.php>

### Connections:
<img src="http://www.learningaboutelectronics.com/images/MQ3-alcohol-sensor-pinout.png" width = 250>

Sensor lead analog output AOUT and a digital output DOUT.
The higher the analog voltage level the higher the alcohol the sensor detects.
If the analog voltage reaches a certain treshold the DOUT is set to HIGH.
This HIGH can be detected by the arduino.

AOUT is connected to an analog pin of the arduino.
With analogRead the alcohol value can be read from the sensor.
DOUT is connected to a digital pin of the arduino.
If the digitalRead detects a HIGH the alcohol level is to high and a LED could be triggered to show that the limit is reached.
