#!/usr/bin/env python
import time
import random

import paho.mqtt.client as mqtt

def on_connect(client, userdata, flags, rc):
    print("Connected with result code " + str(rc))

client = mqtt.Client()
client.on_connect = on_connect

client.connect("192.168.12.1", 1883, 60)

client.loop_start()

temp = 45

while True:
    time.sleep(2)
    # create random delta temperature
    delta = random.randint(1,6)
    # even number add delta to temperature
    if delta/2 == 0:	
         temp = temp + delta
    # odd number subtract number from temperature
    else:
         temp = temp - delta
    
    client.publish("test/temperature", temp)
