int const buttonPin = 12;
int const ledPin = 9;
boolean isLighting = false;

void setup() {
  pinMode(buttonPin, INPUT); // set push button pin into input mode
  pinMode(ledPin, OUTPUT); // set led pin into output mode
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {      // if the buttton is pressed
    delay(10);                              // wait 10 ms to skip the bounce
    if (digitalRead(buttonPin) == LOW) {    // confirm again if the button is pressed
      reverseLED();                         // reverse LED
    }
    while (digitalRead(buttonPin) == LOW) ; // wait for releasing
    delay(10);                              // delay for a certain time to skip the bounce
  }
}

void reverseLED() {
  if (isLighting) {                 // if LED is lighting
    digitalWrite(ledPin, LOW);      // switch off LED
    isLighting = false;             // store the state of LED
  }
  else {                            // if LED is off
    digitalWrite(ledPin, HIGH);     // switch it on
    isLighting = true;              // store the state of LED
  }
}