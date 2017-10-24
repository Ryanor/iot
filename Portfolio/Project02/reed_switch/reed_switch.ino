/**
 * Reed switch example with the WemosD1mini board and
 * the Sunfounder reed switch.
 * The switch is connected to the digital pin D1
 */

 const int digital = D1;

void setup() {
  // begin serial output
  Serial.begin(115200);
  // set pin mode
  pinMode(digital, INPUT);
}

void loop() {
  // print out the read digital value
  Serial.println(digitalRead(digital));
  delay(1000);
}
