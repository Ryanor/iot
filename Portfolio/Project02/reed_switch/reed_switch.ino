/**
 * Redd switch example with the WemosD1mini board and
 * the Sunfounder reed switch.
 * The switch is connected to the digital pin D1
 */

 const int gas_sensor = A0;

void setup() {
  // begin serial output
  Serial.begin(115200);
  // set pin mode
  pinMode(gas_sensor, INPUT);
}

void loop() {
  // print out the read digital value
  Serial.println(analogRead(gas_sensor));
  delay(1000);
}
