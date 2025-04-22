void setup() {
  // Set pin 12 as an output
  pinMode(12, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1 second

  // Turn the LED off
  digitalWrite(12, LOW);
  delay(1000); // Wait for 1 second
}