# Participation 6
## Questions about ulnoiot

- Should we use analog to read the noise level from the sound and temperature sensors?
- If we change a button or light setting do we have to flash the board again?
- Is there a help on connecting the display to the right ports?
- At the end of configure all single boards are the merged together in the autostart.py?
- Is a sensor automatically started when powered up or do we need to type run in console?


### Issues
- missing help in integriot


### Analog sensor
to create an analog sensor use: 
- analog(name, precision, threshold);

 example:
- analog("light", precision=10);

to make a digital sensor do: 
- analog("light", precision=10, threshold = 290);

### Create drvier
- the file new_devices is the base class to create a new device

### RGB led and animation
- help("rgb_multi") shows how to create a new rgb strip as actor
- to set the brightness of a led use lower values for the colors
    - range is from 0 to 255 for r,g,b
- for animation use mqtt send rgb/animation/set "s 1 green s 2 blue p 1000"