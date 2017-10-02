// Relay control using the ESP8266 WiFi chip

// Import required libraries
#include <ESP8266WiFi.h>
#include <aREST.h>
#include <aREST_UI.h>

// The port to listen for incoming TCP connections 
#define LISTEN_PORT           80

// WiFi parameters
const char* ssid = "your_wifi_ssid_name";
const char* password = "your_wifi_password";

// give UI button a value to check state for
const int UIbutton = 6;


// Create aREST instance
aREST_UI rest = aREST_UI();

// Create an instance of the server
WiFiServer server(LISTEN_PORT);

// Initialize program
void setup(void) {  
  // Start Serial
  Serial.begin(115200);
  
  // Create UI
  rest.title("Relay Control");
  // create On/Off button and link them to pin 6
  rest.button(UIbutton);
  
  // Connect to WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
 
  // Start the server
  server.begin();
  Serial.println("Server started");
  
  // Print the IP address
  Serial.println(WiFi.localIP());
  
  // Initialize digital pin 13 as an output.
  pinMode(2, OUTPUT);
}

void loop() {
  // Handle REST calls
  WiFiClient client = server.available();
  if (!client) {
    return;
  }
  while(!client.available()){
    delay(1);
  }
  rest.handle(client);
  
  // Check button state
  int buttonState = digitalRead( button);
  if(buttonState == LOW) {
	// turn LED off
	digitalWrite(2, LOW);
  } else {
	// let LED blink
	blink();
  }
}

// Turn LED on and off every second
void blink() {
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
}
