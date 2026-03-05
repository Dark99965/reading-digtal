void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(8) == LOW) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
}
