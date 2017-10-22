# user.py is the autostart code for a ulnoiot node.
# Configure your devices, sensors and local interaction here.

# Always start with this to make everything from ulnoiot available.
# Therefore, do not delete the following line.
from ulnoiot import *

# Define display and RGB-LED as actors to react on published sensor values
disp = display44780("display", d3,d4)
led = rgb("rgb_led", d5, d6, d7)

run()
