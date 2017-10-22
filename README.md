# IoT - Internet of things

### Groupmembers:
* [Gabriel Schützeneder](https://github.com/schuetzi/IoT)
* Wührer Gerhard

## [Personal Introduction](https://github.com/Ryanor/iot/tree/master/Introduction)

## [Lecture 1](https://github.com/Ryanor/iot/tree/master/Portfolio/Lectures/Participation_01)
Used Google to search for IoT:
- Domains
- Data Protocols
- Devices
- Benefits of using IoT
- Challenges using IoT

## [Lab 1](https://github.com/Ryanor/iot/tree/master/Portfolio/Lab/Exercise01)
- Assembled the Raspberry Pi 3 and the case
- cloned ulnoiot image onto a new SD-card
- tunnel port 5901 and use vncviewer to get connected to the raspi
- soldered the pin connectors onto the WeMos D1 mini board
- flash blink example onto WeMos D1 min board
- try to trigger the led remotely via wifi

## [Lecture 2](https://github.com/Ryanor/iot/tree/master/Portfolio/Lectures/Participation_02)
First task:
- Find informations about low level buses
	- my task was to search for informations about SPI

Second task:
- Find informations about sensors
	- my task was to find informations about the alcohol sensor MQ-3

User stories:
- what is a user story
- how can a user story help us in development

## [Lab 2](https://github.com/Ryanor/iot/tree/master/Portfolio/Lab/Exercise02)
- finished remote trigger event work from Lab1
- Trigger a button event using IFTTT webhook and show message on a display
- write two user stories with scenarios where parts could be commercialized

## [Lecture 3](https://github.com/Ryanor/iot/tree/master/Portfolio/Lectures/Participation_03)
Exchange formats:
- CBOR Concise Binary Object Representation
- Text format
- JSON
- XML
- YAML

Who does IoT:
- OCF Open Connectivity Foundation
- Thread Group
- AllJoin
- AllSeen Alliance
- IIC

Publish - Subscribe Pattern

Protokols:
- HTTP
- CoAP
- MQTT
- AllJoyn

Scaling and testing

## [Lab 3](https://github.com/Ryanor/iot/tree/master/Portfolio/Lab/Exercise03)
- Searched for a CoAP library for the ESP8266 board
- Run a simple CoAP example and connected with COPPER
- Used the Firefox extension COPPER
- Installed MQTT-FX on my system
- Connected the MQTT client with the MQTT broker running on the Raspberry Pi
- Wrote a small python script to send a temperature value via MQTT
- installed Node-RED via npm package manager


## [Lecture 4](https://github.com/Ryanor/iot/tree/master/Portfolio/Lectures/Participation_04)
Scaling and testing of IoT projects
- Issues on scaling
- How can we do testing?
- What role play...
	- Simulators?
	- MQTT?
	- Stories?

IoT Frameworks
- Node-RED
- Iotivity
- iot.eclipse.org Kura

## [Lab 4](https://github.com/Ryanor/iot/tree/master/Portfolio/Lab/Exercise04)
- Used Node-RED to read the temperature sensor data form the 3 exercise and react to it triggering a LED
- Node-RED became the integrator to our python scripts
- installed MongooseOS
- small example in MongooseOS

## [Lecture 5](https://github.com/Ryanor/iot/tree/master/Portfolio/Lectures/Participation_05)
What I would like to see in an IoT Framework?
UlnoIoT
- Why was UlnoIoT created?
- Outline of UlnoIoT
	- System Overview
	- System definition
	- flashing and initialization
	- Remote login
	- update and deployment
Recap:
- how many features where integrated in UlnoIoT

## [Lab 5](https://github.com/Ryanor/iot/tree/master/Portfolio/Lab/Exercise05)
- demonstrated our MongooseOS example
- demonstrated our Project 1
- installed UlnoIoT on my linux machine
- began to implement Project 1 with UlnoIoT

## [Lecture 6](https://github.com/Ryanor/iot/tree/master/Portfolio/Lectures/Participation_06)
UlnoIoT
- Desktop interaction with Retro-Joystick
- Display
- RGB-LED
- RGB-LED animation

Introduction to Project 2

## [Lab 6](https://github.com/Ryanor/iot/tree/master/Portfolio/Lab/Exercise06)
- rebuild [Project 1 with the UlnoIoT framework](https://github.com/Ryanor/iot/tree/master/Portfolio/Lab/Exercise06/Project01_ulnoiot) completely in hardware
- Implement remote features such as the integrator with UlnoIoT-integriot

## [Lecture 7]()

## [Lab 7]()

## [Project 1](https://github.com/Ryanor/iot/tree/master/Portfolio/Project01)
- flashed another Raspberry Pi 3 with the ulnoiot image (see [Lab 1](https://github.com/Ryanor/iot/tree/master/Portfolio/Lab/Exercise01) for details)
- set up the childrens room sensors and the oven led
- tested the project with MQTT-FX to subscribe and publish the correct data
- merged project with Gabriels parts

## [Project 2]()
Liquid challenge