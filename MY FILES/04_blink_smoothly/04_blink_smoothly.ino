const int ledPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  breath(ledPin, 6);
  delay(500);
}

void breath(int ledPin, int delayMe) {
  for (int i = 0; i < 255; i++) {
    analogWrite(ledPin, i);
    delay(delayMe);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);
    delay(delayMe);
  }
}