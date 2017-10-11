#include <Wire.h> 
#include <ESP8266WiFi.h>
#include "math.h"

//WIFI connection informations
const char* ssid = "gwu_schuetzi";
const char* password = "password";

float value = 0;
float db = 0;

void setup() //Initialisations
{
  Serial.begin(115200);

  // Connect to WiFi network
  Serial.print("Connecting to ");
  Serial.println(ssid);  
  
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(100);
    Serial.print(".");
  }
  
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println(WiFi.localIP());
    
  //Configure LED pin as output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  value = analogRead(PIN_ANALOG_IN);
  db = 20*log10(value)+20;
  
  if(db > 70) {
	Serial.print("too much noise");
	digitalWrite(LED_BUILTIN, HIGH);
  } else {
	Serial.print("relax zone");
	digitalWrite(LED_BUILTIN, LOW);
  }	  
}