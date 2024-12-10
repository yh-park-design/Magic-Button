void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(2, INPUT_PULLUP);  // Button on pin 2
}

void loop() {
  if (digitalRead(2) == LOW) {
    Serial.println("Button Pressed");
    delay(500);  // Debounce delay
  }
}
