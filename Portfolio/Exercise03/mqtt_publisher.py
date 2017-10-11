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

temp = 10
delta = 1

while True:
    time.sleep(2)
    # create random delta temperature
    temp = temp + delta
    # even number add delta to temperature
    if temp > 28:	
         delta = -1
    # odd number subtract number from temperature
    else:
         delta = 1
    
    client.publish("test/temperature", temp)
