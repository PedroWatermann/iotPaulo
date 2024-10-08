/*// Faça um circuito que acenda um led quando pressionado
int pinoBotao = 2;
int led = 4;
int estadoBotao = 0;

void setup()
{
    pinMode(led, OUTPUT);
    pinMode(pinoBotao, INPUT);
}

void loop()
{
    estadoBotao = digitalRead(pinoBotao);
    if (estadoBotao == HIGH)
    {
        digitalWrite(led, HIGH);
    } 
    else
    {
        digitalWrite(led, LOW);
    }
}*/

// 7) Executar um circuito que utilize 2 botões: um para acender o led e outro para desligar o mesmo led
// https://www.tinkercad.com/things/5xxG6bnsyDM-exercicio-7
int led = 1;
int btnLigar = 2;
int btnDesligar = 3;
int estadoBtnLigar = 0;
int estadoBtnDesligar = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btnLigar, INPUT);
  pinMode(btnDesligar, INPUT);
}

void loop() {
  estadoBtnLigar = digitalRead(btnLigar);
  estadoBtnDesligar = digitalRead(btnDesligar);

  if (estadoBtnLigar == HIGH) {
    digitalWrite(led, HIGH);
  }

  if (estadoBtnDesligar == HIGH) {
    digitalWrite(led, LOW);
  }
}