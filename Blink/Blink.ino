// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(11, HIGH);
    delay(500);
  digitalWrite(11, LOW);
    delay(500);

  digitalWrite(12, HIGH);
    delay(500);
  digitalWrite(12, LOW);
    delay(500);

  digitalWrite(13, HIGH);
    delay(500);
  digitalWrite(13, LOW);
    delay(500);
}
