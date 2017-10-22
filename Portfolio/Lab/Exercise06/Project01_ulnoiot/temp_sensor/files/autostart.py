# user.py is the autostart code for a ulnoiot node.
# Configure your devices, sensors and local interaction here.

from ulnoiot import *

# initialize the temperature sensor


t = dht11("sensor", d1)
run(10)
