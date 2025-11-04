int ledPin = 13;
int ledPin = 14;

int buttonPin = 32;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  delay(500);

}
