#define PIR_PIN 2 // PIR sensor connected to digital pin 2
#define LED_PIN 13 // LED connected to digital pin 13
void setup() { pinMode(PIR_PIN, INPUT); // Set PIR
sensor pin as input pinMode(LED_PIN, OUTPUT); // Set
LED pin as output
Serial.begin(9600); // Start serial communication
}
void loop() { int motionState = digitalRead(PIR_PIN); // Read PIR
sensor state
if (motionState == HIGH) { // Motion detected
digitalWrite(LED_PIN, HIGH); // Turn LED ON

Serial.println("Motion Detected!");
} else {
digitalWrite(LED_PIN, LOW); // Turn LED OFF
}
delay(500); // Wait 500ms before checking again
}

