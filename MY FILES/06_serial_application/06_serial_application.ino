int inInt;
int counter = 0;
int ledPin = 11;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("UNO is ready!");
}

void loop() {
  if (Serial.available()) {
    inInt = Serial.parseInt();
    Serial.print("UNO received: ");
    Serial.println(inInt);
    // convert the received integer into PWM duty cycle of ledPin port.
    analogWrite(ledPin, constrain(inInt, 0, 255));
  }
}
