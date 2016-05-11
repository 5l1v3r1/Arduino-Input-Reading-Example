int potPin = A0;
void setup()
{
  Serial.begin(9600);
  Serial.println("Analog input reading example");
}
void loop() {
  int value = analogRead(potPin);
  Serial.println(value);
  delay(100);
}
