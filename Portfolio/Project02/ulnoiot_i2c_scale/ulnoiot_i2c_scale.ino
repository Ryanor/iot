// Example for an i2c connector to communicate with ulnoiot-node via i2c
// Its using a scale connected to a WemosD1mini board and publishes
// the weight as MQTT message
// Author: ulno (http://ulno.net)
// 
// Created: 2017-10-20


#include <UlnoiotI2c.h>
#include <HX711_ADC.h>

//HX711 constructor (dout pin, sck pin)
HX711_ADC LoadCell(9, 10);
// timer for scale
long t;


void myreceive( char *msg, int len ) {
    Serial.print("Received a message of length: ");
    Serial.println(len);
    Serial.print("Message:");
    Serial.println(msg); // is properly 0 terminated - but len can used to
}

UlnoiotI2c ui2c(1000,myreceive);

void setup() {
  Serial.begin(115200); // start serial for debug output
  Serial.println("Starting.");
  LoadCell.begin();
  long stabilisingtime = 2000; // tare preciscion can be improved by adding a few seconds of stabilising time
  LoadCell.start(stabilisingtime);
  LoadCell.setCalFactor(444.0); // user set calibration factor (float)
  Serial.println("Startup + tare is complete");
}



void loop() {
  char mystr[4];
  float weight;
  //update() should be called at least as often as HX711 sample rate; >10Hz@10SPS, >80Hz@80SPS
  //longer delay in scetch will reduce effective sample rate (be carefull with delay() in loop)
  LoadCell.update();

  //get smoothed value from data set + current calibration factor
  if (millis() > t + 250) {
    weight = LoadCell.getData();
    t = millis();
  }
  ui2c.suspend(100);
  // cast float to char*
  dtostrf(weight, 4, 2, mystr);
  // publish message
  ui2c.write(mystr);
  Serial.println(mystr);
  delay(1000);
}


