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

/*// 7) Executar um circuito que utilize 2 botões: um para acender o led e outro para desligar o mesmo led
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
}*/

// 9) Utilize um botão para ligar o seu sequencial e outro botão para desligar
int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int btnLigar = 6;
int btnDesligar = 7;
int estadoBtnLigar = 0;
int estadoBtnDesligar = 0;
bool legal = false;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(btnLigar, INPUT);
  pinMode(btnDesligar, INPUT);
}

void loop() {
  /*ACENDE UMA VEZ / APAGA UMA VEZ
  estadoBtnLigar = digitalRead(btnLigar);
  estadoBtnDesligar = digitalRead(btnDesligar);

  if (estadoBtnLigar == HIGH) {
    for (int i = 1; i <= 5; i++) {
      digitalWrite(i, HIGH);
      delay(200);
    }
  }

  if (estadoBtnDesligar == HIGH) {
    for (int j = 1; j <= 5; j++) {
      digitalWrite(j, LOW);
      delay(200);
    }
  }*/

  // PISCA SEQUENCIALMENTE / DESLIGA TUDO
  estadoBtnLigar = digitalRead(btnLigar);

  if (estadoBtnLigar == HIGH) {
    while (estadoBtnDesligar == LOW) {
      for (int i = 1; i <= 5; i++) {
        digitalWrite(i, HIGH);
        delay(200);
      }
      for (int j = 1; j <= 5; j++) {
        digitalWrite(j, LOW);
        delay(200);
      }
      estadoBtnDesligar = digitalRead(btnDesligar);
    }
  }
}