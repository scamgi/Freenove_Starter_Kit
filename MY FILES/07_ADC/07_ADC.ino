int adcValue;
float V;

void setup() {
  Serial.begin(9600);
  Serial.println("UNO is ready!");
}

void loop() {
  adcValue = analogRead(A0);              // convert analog of A0 port to digital
  V = adcValue * (5.0 / 1023.0);    // calculate voltage according to digital
  // Send the result to computer through serial
  Serial.print("convertValue: ");
  Serial.println(adcValue);
  Serial.print("Voltage: ");
  Serial.println(V);
  delay(500);
}
