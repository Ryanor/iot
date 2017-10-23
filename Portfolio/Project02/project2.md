# Project 2

## Measuring liquids

### Time to Flight sensor VL53lox
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
  
### Reed switch
- connected the reed switch to the wemos board, swtich uses digital input
- switch connects at the influence of a magnetic field
- wrote a simple program that recognizes if the switch is connected or not
- measurement    
    - depending on the magnet position the switch closes faster when the 
        magnet is not in the center of the switch
    - the distance to close the switch is very small ~3cm
    - works through materials e.g. wood, plastic, aluminium
    - must be used as float switch
   
### Gas sensor
- conected the gas sensor to the wemos board
- used a simple program to get measurment values
    - the sensor does work and recognizes alcoholic damps
    - the longer the sensor stays in the environment the higher the values
    - even if the liquid is not pending
    - works to recognize gas damps but not to measure the level