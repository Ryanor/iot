# Sensing/Acting
## Group 2
### Participants
- Michael Breiteneder
- Luis Hainberger
- Gabriel Schützeneder
- Gerhard Wührer

## 1. Smoke Sensor MQ-2
### Luis Hainberger

The Grove - Gas Sensor (MQ2) module is useful for gas leakage detection (home and industry).
It is suitable for detecting
- H2
- LPG
- CO
- Alcohol
- Smoke or Propane

Due to its high sensitivity and fast response time, measurement can be taken as soon as possible.
The sensitivity of the sensor can be adjusted by potentiometer.

The sensor value only reflects the approximated trend of gas concentration in a permissible error range, it does not represent the exact gas concentration. 
The detection of certain components in the air usually requires a more precise and costly instrument, which cannot be done with a single gas sensor.

Featues:
- Wide detecting scope
- Stable and long lifetime
- Fast response and high sensitivity

This is an analog output sensor. It needs to be connected to any one analog socket in Grove Base Shield. 
It is possible to connect the Grove module to Arduino directly by using jumper wires. 
The output voltage from the Gas sensor increases when the concentration of gas increases.

## 2. CO Sensor MQ-7
### Gabriel Schützeneder

- High sensitivity to carbon monoxide
- They are used in gas detecting equipment for carbon monoxide(CO) in family and industry or car. 
- The standard measuring circuit of MQ-7 sensitive components consists of 2 parts. One is heating circuit having time control function (the high voltage and the low voltage work circularly). The second is the signal output circuit, it can accurately respond changes of surface resistance of the sensor. 
- The MQ7 has 6 pins. 4 of them are used to fetch signal and the other two are used for heating current.

## 3. Alcohol-Sensor MQ-3
### Gerhard Wührer

- http://www.learningaboutelectronics.com/Articles/MQ-3-alcohol-sensor-circuit-with-arduino.php

Connections:

- +5V
- DOUT Digital OUT
- AOUT Analog OUT
- GND

Sensor lead analog output AOUT and a digital output DOUT. The higher the analog voltage level the higher the
alcohol the sensor detects. If the analog voltage reaches a certain treshold the DOUT is set to HIGH. This HIGH
can be detected by the arduino.

AOUT is connected to an analog pin of the arduino. With analogRead the alcohol value can be read from the
sensor. DOUT is connected to a digital pin of the arduino. If the digital Read detects a HIGH the alcohol level is to
high and a LED could be triggered to show that the limit is reached.

## 4. Digital Light Sensor TSL2561
### Michael Breiteneder

Details:
- advanced digital light sensor, ideal for use in a wide range of light situations
- more precise than low cost CdS cells
- exact Lux calculations
- different gain/timing ranges
- light ranges 0.1 - 40.000+ Lux
- contains infrared and full spectrum diodes
- seperatly measure infrared, full-sprectrum and human-visible light

Interface:
- digital I2C interface
- select one of three addresses -> up to three sensors on one board each with different I2C address
- built in ADC makes compatible with any microcontroller
- low power usage, great for low power data-logging systems
- 0.5mA when active, less than 15 uA when in powerdown mode

Stats:
- Approximates human eye response
- precisely measure illuminance in diverse lighting conditions
- -30 to 80 °C
- 0.1 to 40.000 Lux
- 2.7-3.6V
- I2C interface

Wiring up the sensor:

- Connect the VCC pin to a 3.3V or 5V power source
- Connect GND to the ground pin
- Connect the i2c SCL clock pin to your i2c clock pin (Classic Arduino -> Analog pin #5)
- Connect the i2c SDA data pin to your i2c data pin (Classic Arduino -> Analog pin #4)
- Dont need to connect the ADDR or INT pins
- ADDR can be used if you have a i2c conflict
- INT pin is an output from the sensor used when the sensor is configured to signal when the light level changes (if used -> 10K to 100K pullup from INT to 3.3V vcc)

Using the sensor:
- Math datasheet http://learn.adafruit.com/tsl2561/downloads
- Arduino library repo on github http://adafru.it/aZ9 and guide http://learn.adafruit.com/adafruit-all-about-arduino-libraries-install-use
- Ardafruit V2 library  https://github.com/adafruit/Adafruit_TSL2561/archive/master.zip
- Adafruit standard library https://github.com/adafruit/Adafruit_Sensor
- Adafruit sensor library https://github.com/adafruit/Adafruit_Sensor/archive/master.zip
- Restart IDE
- Run File>Examples>Adafruit_TSL2561>sensorapi
- Open serial monitor at 9600 baud to see measurements