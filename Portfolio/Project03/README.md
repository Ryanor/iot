# Project 3

Project 3 was built in cooperation with Gonaus Lisa and Khorkonen Viacheslav.

## User story
Homeautomation and security

Max and Erika together with their eldest son and their baby.
To make themselves as comfortable as possible the installed a temperature sensor
in the living room which sends its actual value to a central hub in the living room.
In the room of their son the installed a sound sensor which reads the acutal noise
level and sends its information also to the central hub.

Max has a fable for good wine, so he has a little wine cellar. To recognize fermentation
gases he installed a gas sensor. THe sensor sends its values also to the hub.

The central hub has a display, RGB-LED and a RGB-strip. The display shows the temperature of the living room.
The noise level is indicated with the RGB_strip. It shows green led for normal noise level, orange for increased noise level and red for to much noise.
The RGB-LED indicates the gas level in the wine cellar, at a specific treshold it turns the RGB-LED from GREEN to RED.

Wheater station for the green house ...

### Sensor
- Ultrasonic sensor
- Raindrop sensor
- Sound sensor
- Environment sensor for temperature and humidity
- Gas sensor
- Reed switch
- Touch button

### Actors
- Display
- RGB-led
- RGB-strip
- IFTTT events

- Windows are equipped with reed switches which trigger an IFTTT event when the window is opened
    but not if the window is tilted.
- A sound sensor is mounted in each child`s room to measure the noise level. This level is sent
to a central hub which indicates the level with an RGB-LED strip.
- A temperature sensor installed in every room send its information to the central hub
and shows the value on the display. 
    - The oven is triggered at a specific treshold of the temperature value to turn on or off
- A gas sensor in the wine cellar measures the occurence of fermentation gases and indicates
    this with a RGB-LED which turns from GRENN, no gases, to RED, dangerous gases.
- Button opens the garage door with an motor.
- An ultrasonic sensor measures the distance in the doorway and closes the garage door automatically
    if no obstacles are detected, else the door stays open.
- The greenhouse is equipped with a small weather station that monitors the humidity, temperature and light situation
- Remote access to the system