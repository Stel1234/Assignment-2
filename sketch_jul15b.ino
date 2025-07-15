int potPin = 34; // ADC pin
int value = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  value = analogRead(potPin);
  Serial.println(value);
  Serial.print("ADC Value: ");
  delay(500);
}
