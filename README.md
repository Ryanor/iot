# IoT - Internet of things

### Groupmembers:
* [Gabriel Schützeneder](https://github.com/schuetzi/IoT)
* Wührer Gerhard

## [Personal Introduction](/Introduction)

## [Lecture 1](/Portfolio/Lectures/Participation_01)
Used Google to search for IoT:
- Domains
- Data Protocols
- Devices
- Benefits of using IoT
- Challenges using IoT

## [Lab 1](/Portfolio/Lab/Exercise01)
- Assembled the Raspberry Pi 3 and the case
- cloned ulnoiot image onto a new SD-card
- tunnel port 5901 and use vncviewer to get connected to the raspi
- soldered the pin connectors onto the WeMos D1 mini board
- flash blink example onto WeMos D1 min board
- try to trigger the led remotely via wifi

## [Lecture 2](/Portfolio/Lectures/Participation_02)
First task:
- Find informations about low level buses
	- my task was to search for informations about SPI

Second task:
- Find informations about sensors
	- my task was to find informations about the alcohol sensor MQ-3

User stories:
- what is a user story
- how can a user story help us in development

## [Lab 2](/Portfolio/Lab/Exercise02)
- finished remote trigger event work from Lab1
- Trigger a button event using IFTTT webhook and show message on a display
- write two user stories with scenarios where parts could be commercialized

## [Lecture 3](/Portfolio/Lectures/Participation_03)
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

## [Lab 3](/Portfolio/Lab/Exercise03)
- Searched for a CoAP library for the ESP8266 board
- Run a simple CoAP example and connected with COPPER
- Used the Firefox extension COPPER
- Installed MQTT-FX on my system
- Connected the MQTT client with the MQTT broker running on the Raspberry Pi
- Wrote a small python script to send a temperature value via MQTT
- installed Node-RED via npm package manager


## [Lecture 4](/Portfolio/Lectures/Participation_04)
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

## [Lab 4](/Portfolio/Lab/Exercise04)
- Used Node-RED to read the temperature sensor data form the 3 exercise and react to it triggering a LED
- Node-RED became the integrator to our python scripts
- installed MongooseOS
- small example in MongooseOS

## [Lecture 5](/Portfolio/Lectures/Participation_05)
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

## [Lab 5](/Portfolio/Lab/Exercise05)
- demonstrated our MongooseOS example
- demonstrated our Project 1
- installed UlnoIoT on my linux machine
- began to implement Project 1 with UlnoIoT

## [Lecture 6](/Portfolio/Lectures/Participation_06)
UlnoIoT
- Desktop interaction with Retro-Joystick
- Display
- RGB-LED
- RGB-LED animation

Introduction to Project 2

## [Lab 6](/Portfolio/Lab/Exercise06)
- rebuild [Project 1 with the UlnoIoT framework](https://github.com/Ryanor/iot/tree/master/Portfolio/Lab/Exercise06/Project01_ulnoiot) completely in hardware
- Implement remote features such as the integrator with UlnoIoT-integriot

## [Lecture 7](/Portfolio/Lectures/Participation_07)
Research work Internet of Broken Things:
- What is broken?
- How can it be fixed?
- Newsworthy failures/successes
- Debate about the results

## [Lab 7](/Portfolio/Lab/Exercise07)
- Assembling the scale for the second project
- Calibration of the scale to get correct measurements

## [Lecture 8](/Portfolio/Lectures/Participation_08)
Discussion about what is broken in the Internet of Things

- What is broken?
- What is fixed

LORA

- LoRaWAN
    - relation bandwith / power/ range
    - Link budget
    - benefits of LoRa
    - problems of LoRa

Google research to the topics above

TTN

- The Things Network


## [Lab 8](/Portfolio/Lab/Exercise08)
- finisched the calibration of the scale
- integrated the scale in ulnoiot with i2c_connector
- got the weight for different fluids with the scale for Project 2

TTN
- assembled Dragoino board onto the Raspberry Pi 3
- intalled source for single-channel-gateway from github and builded the program
- connected to the TTN network and received a transmission from team Schweighofer, Lugstein



## [Lecture09](/Portfolio/Lectures/Participation_09)
IoT maintenance
- predictive maintenance
- heartbeat monitoring

Announcement of Project 3

Data analysing and visualisation demonstration

## [Lab9](/Portfolio/Lab/Exercise09)
- grouped up with team Gonaus Lisa and Viacheslav Korkhonen
- User story for project 3

## [Lecture10](/Portfolio/Lectures/Participation_10)
IoT business opportunities
- What means IoT to small businesses
- Research on successful and failing Start-ups

Introduction, talk and interview
- Michael Schloh von Bennewitz

Project 3
- pros
- cons

## [Lab10](/Portfolio/Lab/Exercise10)
- working with features of ulnoiot
- started Project 3

## [Lecture11](/Portfolio/Lectures/Participation_11)
Introduction, talk and interview
- Tamer Aslan

IoT successes stories
- Runtastic
- Pebble
- ...

Scrum

## [Lab11](/Portfolio/Lab/Exercise11)
Continued work on Project 3

## [Lab12](/Portfolio/Lab/Exercise12)
Continued work on Project 3

## [Project 1](/Portfolio/Project01/project1.md)
- flashed another Raspberry Pi 3 with the ulnoiot image (see [Lab 1](https://github.com/Ryanor/iot/tree/master/Portfolio/Lab/Exercise01) for details)
- set up the childrens room sensors and the oven led
- tested the project with MQTT-FX to subscribe and publish the correct data
- merged project with Gabriels parts

## [Project 2](/Portfolio/Project02/project2.md)
Liquid challenge
- Assembled the scale
- Calibrated the scale
- Used different sensor to measure distances to the liquids surfaces
- Make a table about useful sensors
- field of use for the sensors

## [Project 3](/Portfolio/Project03/README.md)