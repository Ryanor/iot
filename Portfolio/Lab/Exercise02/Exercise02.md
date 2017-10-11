# Exercise 02

- connect the button to the ESP8266 board
- create an account on maker.ifttt.com
- download ifttt app to receive notifications on the phone
- modified the "HttpsRequest" example to trigger the IFTTT event
	- Entered complete webhook url into the request url
	- tried to use http instead of https
	- used POST instead of GET command for the request
	- forgotten to set the button pin to input mode

Gabriel: 
- searched and downloaded the correct libraries for the LCD-display
- connected the display to the ESP8266 board
- used the example code to print a message on the dislay


Comination of all programs should result in:
- a button press triggers an IFTTT event
- this event is using the IFTTT webhook using a HTTPS Request
- the response message is printed on the LCD-display
