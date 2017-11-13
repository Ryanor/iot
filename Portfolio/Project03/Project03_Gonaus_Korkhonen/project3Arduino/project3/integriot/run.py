from integriot import *

open = False 

def toggle(msg):
	global onboard_blue
	global open
	print("received",msg)

	if open:
		open = False 
		print("Close")
		servo.publish("set", 10)
	else:
		open = True
		print("Open")
		servo.publish("set", 130)

	
	onboard_blue.toggle()

def getDistance(msg):
	global open
	if int(msg) >= 100 and open == True:
		open = False
		print("Close (Distance)")
		servo.publish("set", 10)


init("192.168.12.1")

button = sensor("button_door/touch")
button.add_callback_change(callback=toggle)


distance = sensor("door/distance")
distance.add_callback_change(callback=getDistance)

onboard_blue = led("light/blue", init_state="off")
d = actor("button/display1")
servo = actor("door/servo")

run()