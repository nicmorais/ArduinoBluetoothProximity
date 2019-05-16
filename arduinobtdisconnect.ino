const int ledPin = 13;
const int statePin = 9;
const int piezoPin = 10;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(statePin, INPUT);
  pinMode(piezoPin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int state = digitalRead(statePin);
  Serial.println(state);
  if(state == 0) {
    
    digitalWrite(LED_BUILTIN, LOW);
    tone(piezoPin, 1000);
    delay(200);
  }

  noTone(piezoPin);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
}
