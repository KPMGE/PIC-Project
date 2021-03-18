// Simple program to conrol a rgb led

#define LEDAZUL 8
#define LEDVERDE 9
#define LEDVERMELHO 10
#define TIMEDELAY 500

void setup() {
  pinMode(LEDAZUL, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);
  pinMode(LEDVERMELHO, OUTPUT);
}

void loop() {
  digitalWrite(LEDAZUL, HIGH);
  delay(TIMEDELAY);
  digitalWrite(LEDAZUL, LOW);

  digitalWrite(LEDVERDE, HIGH);
  delay(TIMEDELAY);
  digitalWrite(LEDVERDE, LOW);

  digitalWrite(LEDVERMELHO, HIGH);
  delay(TIMEDELAY);
  digitalWrite(LEDVERMELHO, LOW);
}

