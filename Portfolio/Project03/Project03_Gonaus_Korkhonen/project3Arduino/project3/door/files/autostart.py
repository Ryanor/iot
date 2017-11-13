
from ulnoiot import *

led("blue",onboardled,"off","on")
hcsr04("distance",d5,d6)
servo("servo",d1, turn_time_ms=2000)

run()
