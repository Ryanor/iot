# Lab 6

## Use ulnoiot to rebuild Project1
### Updated ulnoiot
update to get the latest driver updates and bugfixes
this was all done on my machine
- cd ulnoiot
- ulnoiot upgrade
	- in this upgrade the issue mentioned in [lab 5](/Portfolio/Lab/Exercise05) was also fixed

### Prepare the system
- change to folder system_template
- edit system.conf
- change follwing entries to fit your needs:
	- ULNOIOT_AP_NAME="your_ap_ip_here"
	- ULNOIOT_AP_PASSWORD="your_password_here"

### Set up analog sensor for sound sensor
- connected the sound sensor with the wemos board
- made a copy of the node_template in the system_template folder and named it noise
- in the noise folder removed the key.hex file
- edited README.rst to write a description for the node
- in the files directory edited autostart.py and created the analog sensor

### Failures:
- in lab 5 we got no connection to the access point because we did not change the system.conf
- missing system libraries on my machine blocked the correct data transmission to the WemosD1mini board
- installed mosquitto libraries with packet manager pacman

### Set up analog sensor for gas sensor
- connected the gas sensor with the wemos board
- made a copy of the node_template in the system_template folder and named it gas_sensor
- in the noise folder removed the key.hex file
- edited README.rst to write a description for the node
- in the files directory edited autostart.py and created the analog sensor

### Gabriel:
build his sensors and actors using the Raspberry Pi
- temperature sensor
- display44780 as first actor
- RGB-LED as second actor

### Itegrator "integriot"
As integrator between our sensors and the display hub we used ulnoiot-integriot.

- created a new folder /integriot in the sensor folder on the Raspberry Pi.
- created a new file [run.py](https://github.com/Ryanor/iot/tree/master/Portfolio/Lab/Exercise06/Project01_ulnoiot/integriot/run.py) which contains the integrating logic
- finished
