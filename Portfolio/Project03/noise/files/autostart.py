# user.py is the autostart code for a ulnoiot node.
# Configure your devices, sensors and local interaction here.

# Always start with this to make everything from ulnoiot available.
# Therefore, do not delete the following line.
from ulnoiot import *


# Add a analog sensor as sound sensor to measure noise level
analog("noise", precision=10)


## Start to transmit every 10 seconds (or when status changed).
run(5, 1000)
