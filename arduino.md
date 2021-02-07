# Arduino


## Visão geral

_Arduino_ é uma plataforma de prototipagem eletrônica, criada em 2005 por um grupo de 5 pesquisadores : Massimo Banzi, David Cuartielles, Tom Igoe, Gianluca Martino e David Mellis.  
Ela usa do conceito de hardware livre, o que significa que qualquer um está livre a estudar a arquitetura do hardware (as placas de prototipagem e seus componentes) e reproduzir, contanto que não faça uso da marca registrada Arduino.  

As placas de prototipação possuem diversos componentes, como os **pinos** de entrada/saída Digitais e Analógicos, **portas** e interfaces (USB-B, micro-USB, Fonte de Tensão), um **microcontrolador** Atmel (ATmega8, ATmega328, ATmega1280), um **cristal oscilador** para realizar as funções do sistema em sincronia com por meio dos "clocks" além de suporte a uma linguagem de programação padrão, uma modificação baseada em C/C++ com bibliotecas e funções próprias.  
Além das placas, a plataforma possui projetos opensource, bibliotecas, interfaces para sensores e softwares como o Arduino IDE para o desenvolvimento de programas para as placas de prototipagem.  

O que torna o Arduino tão especial é sua acessibilidade, uma vez é possível realizar diversos projetos usando componentes, circuitos integrados e sensores amplamente aplicáveis rotineiramente a um baixo cursto em comparação com outras plataformas e tecnologias.  


## Modelos

Dentre os diversos modelos de placas, os mais conhecidos são:

* Arduino Uno  
* Arduino Uno R3  
* Arduino Mega  
* Arduino Leonardo  
* Arduino Micro  
* Arduino Nano  
* Arduino Mini  


## Arquitetura

###### Arduino Uno:  

![exemplo](https://d3b8hk1o42ev08.cloudfront.net/wp-content/uploads/2018/05/arduino-2168193_960_720.png)  

###### Arquitetura:  

![pinagem e entradas](https://www.electrofun.pt/blog/wp-content/uploads/2018/04/pinagem.png)  

![arduino pinout](http://4.bp.blogspot.com/-XLwbtKbSaYo/UdPD7RHMEGI/AAAAAAAAABg/mtylLXdbIWY/s961/ARDUINO_V2.png)  

###### Modelos:  

![modelos de arduino](https://electropeak.com/learn/wp-content/uploads/2019/08/Arduino-Buying-Guide-Arduino-Dimensions.jpg)  


### Diferença entre Microcontrolador e Microprocessador

* Microprocessador - conjunto de componentes [ unidades lógica, aritmética, unidade de controle, com diversos registradores de memória além das entradas e saídas ] que executam diversas tarefas/processos simultaneamente de programas diferentes, podendo adaptar uma tarefa de acordo com a situação do sistema  
* Microcontrolador - chip único que realiza todas as funções dos componentes do microprocessador [ chip All-in-One ] que executa apenas um processo pré-programado e, por isso, geralmente possui capacidade de armazenamento e processamento inferior aos microprocessadores  

Ambas as placas possuem chipset, processador(es), memórias RAM, memória ROM, EEPROM, memória Flash, unidades de armazenamento (dado o tamanho e as interfaces mais simples das placas, o mais comum é o MicroSD)...  

Comparando arquiteturas:  
![Arduino v.s. Raspberry Pi](https://media-ecn.s3.amazonaws.com/embedded_image/2017/12/171211-%20Arduino%20Vs%20Raspberry%20Pi.jpg)  

_Arduino Duemilanove (2009, em italiano), que possui um clock de 16MHz, 2kB de memória RAM, 32kB de memória flash, 14 portas digitais e 6 entradas analógicas._  
_Raspberry Pi 1 Model B+, com um processador Broadcom de núcleo único e 700 MHz, 512 MB de memória RAM padrão DDR2, 40 pinos, quatro portas USB 2.0, saída HDMI, slot para microSD, baixo consumo de energia (entre 0,5 e 1 watt), interface de conexão Ethernet, interface para câmera e tela, além de saída de som P2._  

## Exemplo de Código (Acender LEDs RGB em sequência):

```
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
```

![pisca-pisca](./img/tinkercad.png)  


### Referências e Links Úteis

Sobre:  
[wikipedia](https://pt.wikipedia.org/wiki/Arduino)  
[filipeflop](https://www.filipeflop.com/blog/o-que-e-arduino/)  

Arduino Datasheet:  
[datasheet.octopart.com](https://datasheet.octopart.com/A000066-Arduino-datasheet-38879526.pdf)  
[static.rapidonline.com](https://static.rapidonline.com/pdf/73-4443.pdf)  
[farnell.com](https://www.farnell.com/datasheets/1682209.pdf)  

Arduino Tutoriais e Documentação:  

Hardware - Modelos, Especificações, Esquemáticos, Documentação e Datasheets dos componentes: [clique aqui](https://www.arduino.cc/en/Main/Products)  
Fundamentos: [clique aqui](https://www.arduino.cc/en/Tutorial/Foundations)  
Tutoriais e Guias: [clique aqui](https://www.arduino.cc/en/Tutorial/BuiltInExamples)  
Exemplos das Bibliotecas: [clique aqui](https://www.arduino.cc/en/Tutorial/LibraryExamples)  
Referências de Funções built-in: [clique aqui](https://www.arduino.cc/reference/en/)  
Conhecimentos Aprofundados: [clique aqui](https://www.arduino.cc/en/Hacking/HomePage)  
Users Playground: [clique aqui](https://playground.arduino.cc/)  
Projetos: [clique aqui](https://create.arduino.cc/projecthub)  

PlataforIO (para o VSCode): [clique aqui](https://www.embarcados.com.br/arduino-vscode-platformio/)  


