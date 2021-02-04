int counter;

void setup()
{
	pinMode(10, OUTPUT);
	pinMode(12, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(5, OUTPUT);
}

void loop()
{
	digitalWrite(10, HIGH);
	for (counter = 0; counter < 10; ++counter) {
		digitalWrite(12, HIGH);
		digitalWrite(9, LOW);
		digitalWrite(5, LOW);
		delay(1000); // Wait for 1000 millisecond(s)
		digitalWrite(12, LOW);
		digitalWrite(9, HIGH);
		digitalWrite(5, LOW);
		delay(1000); // Wait for 1000 millisecond(s)
		digitalWrite(12, LOW);
		digitalWrite(9, LOW);
		digitalWrite(5, HIGH);
		delay(1000); // Wait for 1000 millisecond(s)
	}
	digitalWrite(10, LOW);
}
