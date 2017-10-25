# Projekt 02

## Regentropf Sensor (Gabriel)
|Trinkwasser|Schmutzwasser|Öl|
|---|---|---|
|~285 – wet|~190 – wet|987 – dry|

Anhand dieser Werte kann man sehr gut erkennen, dass der Regentropf Sensor sehr gut Wasser registriert. Öl hingegen kann der Sensor nicht wahrnehmen und wird als "trocken" interpretiert. Weder analoger noch digitaler Ausgang ändern sich.

Die Implementierung des Sensors wurde in der Arduino IDE realisiert. Die Werte des Sensors werden über MQTT an den Raspberry Pi gesendet.

[Implementierung](/Project02/raindrop_sensor/raindrop_sensor_mqtt.ino)

## Ultraschall Sensor (Gabriel)

|Trinkwasser|Schmutzwasser|Öl|
|---|---|---|
|7,5cm|7,5cm|7,5cm|


Der Ultraschall Sensor konnte trotz unterschiedlicher Flüssigkeiten immer den korrekten Wert liefern. Ein Becher war bis zum ersten Drittel mit der jeweiligen Flüssigkeit gefüllt. Den Füllstand eines Tankes kann man mithilfe eines zweiten Ultraschallsensor herausfinden. Dafür montiert man einen Sensor links oben und einen rechts oben. Anhand der Differenz kann man eventuelle Schwankungen der Flüssigkeit herausrechnen und den Füllstand ermitteln.

Die Implementierung dieses Sensors war ein bisschen aufwendiger als jener zuvor. Ich habe eine bereits fertige Library für den ESP8266 verwendet und diese so verändert, dass diese kompatibel mit der UlnoIoT Umgebung ist. Im autostart.py kann man den Sensor so konfigurieren. "hcsr04("_Name_", _Trigger Pin_, _Echo Pin_)" Als Trigger bzw. Echo bin müssen jedoch die GPIO Pins verwendet werden. z.B. d5 = 14 (GPIO14). Durch die Einbindung der Library in das Framework, habe ich erst richtig verstanden wie die Treiber mit dem MQTT verknüpft sind. An einen solchen Ansatz habe ich zuvor nicht gedacht.

[Library](/iot/Portfolio/Project02/_hcsr04.py)

[Device Konfiguration](/iot/Portfolio/Project02/new_devices.py)

## VL53lox (Gerhard)
- installed arduino library for the VL53lox time to flight sensor
- used the example code to measure differnte distances on different fluids
    - trink water
        - lid to bottom pending at 225mm
        - lid to water surface pending at 170mm
        
    - waste water
        - lid to bottom pending at 225mm
        - lid to water surface pending at 140mm
          
    - oil
        - lid to bootom pending at 225mm
        - lid to oil surfacce pending at 190mm (less oil than water in the bottle)
        
- the time to flight sensors work good with all fluids but the measurment is pending 
  +/- 10mm
  
[Implementation](/iot/Portfolio/Project02/vl53l0x/vl53l0x.ino)
  
## Reed switch (Gerhard)
- connected the reed switch to the wemos board, swtich uses digital input
- switch connects at the influence of a magnetic field
- wrote a simple program that recognizes if the switch is connected or not
- measurement    
    - depending on the magnet position the switch closes faster when the 
        magnet is not in the center of the switch
    - the distance to close the switch is very small ~3cm
    - works through materials e.g. wood, plastic, aluminium
    - must be used as float switch

[Implementation](/iot/Portfolio/Project02/reed_switch/reed_switch.ino)

   
## Gas sensor (Gerhard)
- conected the gas sensor to the wemos board
- used a simple program to get measurment values
    - the sensor does work and recognizes alcoholic damps
    - the longer the sensor stays in the environment the higher the values
    - even if the liquid is not pending
    - works to recognize gas damps but not to measure the level

[Implementation](/iot/Portfolio/Project02/gas_sensor/gas_sensor.ino)
    
## Scale (beide)
- scale works correct to measure the amount of a fluid
    - each fluid has its own specific weight factor which is needed to 
    calculate the volume
- if the fluids are moving e.g. waves the scale also measures 
    the forces of the movement which causes inaccuracies
- compared to a kitchen scale no differences in weight
    - bottle with water 411g
    - bottle with oil 319.5g
    
Gerhard und ich haben die Waage aufgebaut und gemeinsam kalibriert. Der Faktor, um diese zu kalibrieren war 444,2.

[Implementierung](/iot/Portfolio/Project02/ulnoiot_i2c_scale/ulnoiot_i2c_scale.ino)



![firstimg](/iot/Portfolio/Project02/fluid.JPG)
![firstimg](/iot/Portfolio/Project02/oil.JPG)
![firstimg](/iot/Portfolio/Project02/output.JPG)

## Summary
The ultrasonic sensor and time to flight sensor are useful to measure the level of the fluids. 
But if the fluids are moving, e.g. through waves, the measurement will not be correct. 
For this case the use of more sensors of the same typ and a meridian of all measurements
should return correct values for the fluid level.

The reed switch has to be used witch a magnet on a float to indicate a magnetic field to the switch.
It has the advantage to work through materials like wood, aluminium, plastic.
But also the disadvantage of a short range, which means the float has to be very close to the edge
of the tank.

The rain drop sensor works for water and waste water.
Oil or gasoline do not conduct electricity but
if Bioethanol is a part of the diesel it might conduct electricity.

The gas sensor is not useful to measure the level of any fluid,
but it works perfect to detect gas damps if there are leakages in the gas tank.
