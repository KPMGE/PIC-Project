// Program to turn on a led gently

#define LED 11

void setup() {
  pinMode(LED, OUTPUT);
}

void turnOnLedGently() {
  for (int i = 0; i < 255; i++) {
    analogWrite(LED, i);
    delay(25);
  }
}

void turnOffLedGently() {
  for (int i = 255; i > 0; i--) {
    analogWrite(LED, i);
    delay(25);
  }
}

void loop() {
  turnOnLedGently();
  turnOffLedGently();
}
