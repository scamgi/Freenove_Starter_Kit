const int ledCount = 10;
int ledPins[] = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < ledCount; i++)
    pinMode(ledPins[i], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < ledCount; i++) {
      barGraphDisplay(i, 1000);
    }
  }

  for (int i = 0; i < ledCount*3; i++) {
    barGraphDisplay3Led(i, 200);
  }
}

void barGraphDisplay(int ledOn, int d) {
  for (int i = 0; i < ledCount; i++) {
    if (i == ledOn)
      digitalWrite(ledPins[i], HIGH);
    else
      digitalWrite(ledPins[i], LOW);
  }
  delay(d);
}

void barGraphDisplay3Led(int ledOn, int d) {
  for (int i = 0; i < ledCount; i++) {
    if (i % 3 == ledOn % 3)
      digitalWrite(ledPins[i], HIGH);
    else
      digitalWrite(ledPins[i], LOW);
  }
  delay(d);
}