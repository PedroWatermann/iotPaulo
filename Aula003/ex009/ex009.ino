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
  /*// ACENDE UMA VEZ / APAGA UMA VEZ
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
  estadoBtnDesligar = digitalRead(btnDesligar);

  if (estadoBtnLigar == HIGH) {
    legal = true;
  }

  if (legal) {
    for (int i = 1; i <= 5; i++) {
      estadoBtnDesligar = digitalRead(btnDesligar);
      if (estadoBtnDesligar == HIGH) {
        legal = false;
        desligar();
        break;
      }

      digitalWrite(i, HIGH);

      estadoBtnDesligar = digitalRead(btnDesligar);
      if (estadoBtnDesligar == HIGH) {
        legal = false;
        desligar();
        break;
      }

      delay(200);
    }

    for (int j = 1; j <= 5; j++) {
      estadoBtnDesligar = digitalRead(btnDesligar);
      if (estadoBtnDesligar == HIGH) {
        legal = false;
        desligar();
        break;
      }

      digitalWrite(j, LOW);

      estadoBtnDesligar = digitalRead(btnDesligar);
      if (estadoBtnDesligar == HIGH) {
        legal = false;
        desligar();
        break;
      }

      delay(200);
    }
  }
}

void desligar() {
  for (int j = 1; j <= 5; j++) {
      digitalWrite(j, LOW);
    }
}