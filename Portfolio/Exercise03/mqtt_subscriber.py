import paho.mqtt.client as mqtt


status = 0

def on_connect(client, userdata, flags, rc):
    print("Connected with result code " + str(rc))

    client.subscribe("test/temperature")


def on_message(client, userdata, msg):
    print(msg.topic + " " + str(msg.payload))
    if msg.payload > 20 and status == 1:
        off()
        client.publish("test/switch", 0)
    elif msg.payload < 20 and status == 0:
        on()
        client.publish("test/switch", 0)

def off():
    print("Turned off")
    global status
    status = 0

def on():
    print("Turned on")
    global status
    status = 1


client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message

client.connect("192.168.12.1", 1883, 60)

client.loop_forever()