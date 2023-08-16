char inChar;
int counter = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("UNO is ready!");
}

void loop() {
  Serial.print("counter: ");
  Serial.println(counter);
  delay(1000);
  counter++;
}

// void serialEvent() function here is the serial port interrupt function.
// When serial receives data, processor will jump to this funciton, and return
// to the original interrupt place to proceed after execution. So loop ()
// function's running is not affected.

void serialEvent() {
  if (Serial.available()) {
    inChar = Serial.read();
    Serial.print("UNO received: ");
    Serial.println(inChar);
  }
}