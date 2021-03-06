
from integriot import *
import numpy

noise_mean = numpy.array([0] * 10)
length = 0


def gas_cb(msg):
    global display
    display.publish("set","&&cursor 0 1")
    display.publish("set","Gas:" + msg)
    if int(msg) <  700:
        rgb_led.publish("set", "red")
    else:
        rgb_led.publish("set", "green")


def temp_cb(msg):
    global display
    display.publish("set","&&cursor 0 0")
    display.publish("set","Temp:" +  msg)


def noise_cb(msg):
    global rgb_strip
    global noise_mean
    global length
    
    if length < 10:
        noise_mean[length] = (int)msg
        length++
    else:
        length = 0
        noise_mean[length] = (int)msg
        length ++
        
    if noise_mean.mean() < 300:
        rgb_strip.publish("rgb/set","BLUE")
    elif noise_mean.mean() < 550:
        rgb_strip.publish("rgb/set","GREEN")
    elif noise_mean.mean() < 600:
         rgb_strip.publish("rgb/set","ORANGE")
    else:
        rgb_strip.publish("rgb/set","RED")


def hum_cb(msg):
    global display
    display.publish("set","&&cursor 8 0")
    display.publish("set","Hum:" + msg)


init("192.168.12.1")

gas_sensor = sensor("gas_sensor/gas_sensor")
gas_sensor.add_callback_change(callback=gas_cb)

temp_sensor = sensor("temp_sensor/sensor/temperature")
temp_sensor.add_callback_change(callback=temp_cb)

hum_sensor = sensor("temp_sensor/sensor/humidity")
hum_sensor.add_callback_change(callback=hum_cb)

noise_sensor = sensor("noise/noise")
noise_sensor.add_callback_change(callback=noise_cb)

prefix("display_rgb")
display = actor("display")
rgb_led = actor("rgb_led/rgb")
rgb_strip = actor("rgb_strip/RGB_STRIP")

run()
