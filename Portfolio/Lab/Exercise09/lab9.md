# Lab 9

For the last project we grouped up with team Gonaus Lisa and Viacheslav Korkhonen

## Prepare scenario for Project 3

### Scenario

Family with Parent and two children.
Family house with garden and wine cellar.

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