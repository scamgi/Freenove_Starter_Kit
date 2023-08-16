char inChar;

void setup() {
  Serial.begin(9600);
  Serial.println("UNO is ready!");
}

void loop() {
  if (Serial.available()) {           // judge wheter data has been received
    inChar = Serial.read();           // read one character
    Serial.print("UNO received: ");
    Serial.println(inChar);
  }
}
