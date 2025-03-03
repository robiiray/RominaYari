int buttonState;

void setup() {
  pinMode(13, OUTPUT);   // Set LED pin as output
  pinMode(7, INPUT); // Set button pin as input
  Serial.begin(9600);
}

void loop() {
  buttonState ^= digitalRead(7); // Read button state
  digitalWrite(13, buttonState);    // Set LED to match button state
  Serial.println(buttonState);
  delay(400)
}