int counter = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);                     // initialize the serial port, set the baud rate to 9600
  Serial.println("UNO is ready!");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("counter: ");
  Serial.println(counter);
  delay(1000);
  counter++;
}
