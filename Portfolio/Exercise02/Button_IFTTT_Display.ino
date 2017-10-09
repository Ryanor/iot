/*
 *  HTTP over TLS (HTTPS) example sketch
 *
 *  This example demonstrates how to use
 *  WiFiClientSecure class to access HTTPS API.
 *  We fetch and display the status of
 *  esp8266/Arduino project continuous integration
 *  build.
 *
 *  Created by Ivan Grokhotkov, 2015.
 *  This example is in public domain.
 */

#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

void triggerButtonPressed(void);

const char* ssid = "gwu_schuetzi";
const char* password = "password";

const char* host = "maker.ifttt.com";
const int httpsPort = 443;


WiFiClientSecure client;
int buttonState = 0;

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.print("connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  // Use WiFiClientSecure class to create TLS connection
  
  Serial.print("connecting to ");
  Serial.println(host);
  if (!client.connect(host, httpsPort)) {
    Serial.println("connection failed");
    return;
  }
  // button connected to pin 5
  pinMode(5, INPUT);
  
  // initialize the LCD
  lcd.begin(0,2);  // sda=0, scl=2
  lcd.backlight();
}

void loop() {
  // read button clicked
  buttonState = digitalRead(5);
  
  if (buttonState == HIGH) {
    // send url request and display response
    triggerButtonPressed();
  }
}

void triggerButtonPressed() {
  String url = "/trigger/button_pressed/with/key/SCOHcneD-FgeTh1ECL1RTLiXKDZ6so8Mxkx5OKHW7Q";
  Serial.print("requesting URL: ");
  Serial.println(url);

  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" +
               "User-Agent: BuildFailureDetectorESP8266\r\n" +
               "Connection: close\r\n\r\n");

  Serial.println("request sent");
  while (client.connected()) {
    String line = client.readStringUntil('\n');
    if (line == "\r") {
      Serial.println("headers received");
      break;
    }
  }
  String line = client.readStringUntil('\n');
  if (line.startsWith("{\"state\":\"success\"")) {
    Serial.println("esp8266/Arduino CI successfull!");
  } else {
    Serial.println("esp8266/Arduino CI has failed");
  }
  Serial.println("reply was:");
  Serial.println("==========");
  
  // print received message to display
  // Turn on the blacklight and print a message.
  lcd.clear();
  lcd.print(line);
  // lcd.write(line); // try this command if the above command is not working
  
  // and console
  Serial.println(line);
  Serial.println("==========");
  Serial.println("closing connection");
}
