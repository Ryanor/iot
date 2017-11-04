# Lab12

## Continued work on Project 3

- setup noise sensor
- setup gas sensor
- merged integrator run.py with Gabriels version
    - added rgb_strip as actor
    - rewrite noise callback function noise_cb(msg)
    - created an array to flat noise values to a mean value wich triggers 
    the rgb_strip

Failures:
- typecast of calback message to int
- flatten the values of the sound sensor insid integriot does not work as expected
	- to much values are published from the sound sensor
	- analog device driver has to be adopted to flatten the values there