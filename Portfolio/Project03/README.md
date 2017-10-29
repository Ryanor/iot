# Project 3

I cooperation with team Gonaus Lisa and Khorkonen Viacheslav.

## User story
Homeautomation and security

Lorem ipsum ...

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