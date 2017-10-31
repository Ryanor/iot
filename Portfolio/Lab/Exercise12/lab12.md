# Lab12

## continue work on project 3

- setup noise sensor
- setup gas sensor
- merged integrator run.py with Gabriels version
    - added rgb_strip as actor
    - rewrite noise callback function noise_cb(msg)
    - created an array to flat noise values to a mean value wich triggers 
    the rgb_strip

Failures:
- typecast of calback message to int