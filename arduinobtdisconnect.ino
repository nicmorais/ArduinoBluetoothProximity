const int statePin = 9;
const int piezoPin = 2;

void setup() {
  pinMode(statePin, INPUT);
  pinMode(piezoPin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int state = digitalRead(statePin);
  if(state == 0) {
    
    digitalWrite(LED_BUILTIN, LOW);
    tone(piezoPin, 1000);
    delay(200);
  }

  noTone(piezoPin);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
}
