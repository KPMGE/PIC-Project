#define SIGNAL A0
#define RED 6
#define GREEN 5
#define BLUE 3 // constantes com os identificadores dos pinos

int distancia = 0;

long lerDistanciaUltrassonica(int pinoAcionador, int pinoEco)
{
	pinMode(pinoAcionador, OUTPUT); // limpar o acionador o deixando em LOW
	digitalWrite(pinoAcionador, LOW);
	delayMicroseconds(2);

	// deixar o acionador em HIGH por 10 microsegundos
	digitalWrite(pinoAcionador, HIGH);
	delayMicroseconds(10);
	digitalWrite(pinoAcionador, LOW);

	// ler o pino de eco e retornar o tempo de viagem da onda sonora em microsegundos
	pinMode(pinoEco, INPUT);
	return pulseIn(pinoEco, HIGH);
}

void setup()
{
	Serial.begin(9600); // iniciar troca de dados com o monitor serial a 9600 baunds
	pinMode(RED, OUTPUT); // definir pinos dos leds como saida
	pinMode(GREEN, OUTPUT);
	pinMode(BLUE, OUTPUT);
}

void loop()
{
	distancia = 0.01723 * lerDistanciaUltrassonica(SIGNAL, SIGNAL); // conversao de tempo de viagem recebido do eco para 'cm'

	Serial.print("Proximidade: ");
	Serial.print(distancia);
	Serial.println("cm");
	
	if (distancia <= 85)
	{
		digitalWrite(GREEN, LOW);
		digitalWrite(BLUE, LOW);
		digitalWrite(RED, HIGH);
	}
	else if (distancia > 85 && distancia <= 170)
	{
		digitalWrite(RED, LOW);
		digitalWrite(BLUE, LOW);
		digitalWrite(GREEN, HIGH);
	}
	else // distancia > 170
	{
		digitalWrite(RED, LOW);
		digitalWrite(GREEN, LOW);
		digitalWrite(BLUE, HIGH);
	}

	delay(10); // Delay para evitar alto custo de processamento
}

