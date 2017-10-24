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
    
### Scale
- scale works correct to measure the amount of a fluid
    - each fluid has its own specific weight factor which is needed to 
    calculate the volume
- if the fluids are moving e.g. waves the scale also measures 
    the forces of the movement which causes inaccuracies
- compared to a kitchen scale no differences in weight
    - bottle with water 411g
    - bottle with oil 319.5g
	
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