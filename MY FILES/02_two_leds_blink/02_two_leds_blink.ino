int led1Pin = 4;
int led2Pin = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  setLed(HIGH, LOW);
  setLed(LOW, HIGH);
}

void setLed(int led1, int led2) {
  digitalWrite(led1Pin, led1);
  digitalWrite(led2Pin, led2);
  delay(1000);
}