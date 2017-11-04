## CoAP

- searched and installed an ESP8266 [CoAP library](https://github.com/automote/ESP-CoAP)
- installed Firefox on Linux
	- Failed: Version of Firefox is 56 and no longer supporting the copper extension
- loaded the example code for the CoAP server and flashed it on the WeMos board

Gabriel:
- found and installed Firefox 55 with the copper extension
- used it to send data between our CoAP server on the WeMos board and the Firefox browser

## MQTT

- installed MQTTFX from the arch user repositories
- connected the MQTT client to the MQTT broker running on the raspberry pi
	- Failed: Used the common IP address from the WeMos examples 192.168.12.106 first
- after using the correct IP address MQTT client connected to the broker
- Gabriel used the command line on the raspberry pi to publish and subscribe data from my MQTT client.
- coded a small python programm to generate random values for a temperature and published it to the MQTT broker on the raspberry pi
