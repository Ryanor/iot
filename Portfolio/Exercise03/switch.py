import paho.mqtt.client as mqtt


status = 1

def on_connect(client, userdata, flags, rc):
    print("Connected with result code " + str(rc))
    client.subscribe("test/switch")

    
def on_message(client, userdata, msg):
    print(msg.topic + " " + str(msg.payload))
    # cast payload to string
    message = msg.payload.decode();
    # cast string to int
    if int(message) == 0 and status == 1:
        off()
        client.publish("test/led", 0)
    elif int(message) == 1 and status == 0:
        on()
        client.publish("test/led", 1)        

        
def off():
    print("LED off")
    global status
    status = 0

    
def on():
    print("LED on")
    global status
    status = 1
        

client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message

client.connect("192.168.12.1", 1883, 60)

client.loop_forever()