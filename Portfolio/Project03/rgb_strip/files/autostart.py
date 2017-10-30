# autostart.py is the autostart code for a ulnoiot node.
# Configure your devices, sensors and local interaction here.

# Always start with this to make everything from ulnoiot available.
# Therefore, do not delete the following line.
from ulnoiot import *

# RGB strip
rgb_multi("RGB_STRIP", d1, 8)

run()
