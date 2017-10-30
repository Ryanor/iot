# user.py is the autostart code for a ulnoiot node.
# Configure your devices, sensors and local interaction here.

# Always start with this to make everything from ulnoiot available.
# Therefore, do not delete the following line.
from ulnoiot import *



## Add analog sensor to use it as gas sensor
analog("gas_sensor", precision = 10)


## Start to transmit every 10 seconds (or when status changed).
# Don't forget (uncomment!) the run-comamnd at the end.
run(10)
