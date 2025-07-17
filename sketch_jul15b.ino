int ledPin = 2; // Digital output pin for LED

void setup() {
  pinMode(ledPin, OUTPUT); 
  Serial.begin(115200);
}

void loop() {
  Serial.print("0");
  digitalWrite(ledPin, HIGH); 
  delay(500);

  Serial.println(" Kill!");
  digitalWrite(ledPin, LOW); 
  delay(500);
}

