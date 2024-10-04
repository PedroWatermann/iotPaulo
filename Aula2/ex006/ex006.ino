
// 6) Fazer um semáforo igual ao da nossa cidade
int verm1 = 1;
int verm2 = 2;
int verm3 = 3;
int verm4 = 4;
int verm5 = 5;
int verm6 = 6;
int verd1 = 7;
int verd2 = 8;
int verd3 = 9;
int verd4 = 10;
int verd5 = 11;
int verd6 = 12;
int amare = 13;

void setup() {
  pinMode(verm1, OUTPUT);
  pinMode(verm2, OUTPUT);
  pinMode(verm3, OUTPUT);
  pinMode(verm4, OUTPUT);
  pinMode(verm5, OUTPUT);
  pinMode(verm6, OUTPUT);
  pinMode(verd1, OUTPUT);
  pinMode(verd2, OUTPUT);
  pinMode(verd3, OUTPUT);
  pinMode(verd4, OUTPUT);
  pinMode(verd5, OUTPUT);
  pinMode(verd6, OUTPUT);
  pinMode(amare, OUTPUT);
}

void loop() {
  // Liga os vermelhos da ponta
  digitalWrite(verm1, HIGH);
  digitalWrite(verm6, HIGH);
  delay(10000);
  // Desliga gradativamente os vermelhos
  digitalWrite(verm1, LOW);
  for (int j = 2; j <= 6; j++) {
    digitalWrite(j, HIGH);
    delay(1000);
    digitalWrite(j, LOW);
  }
  delay(500);

  // Liga todos os verdes
  digitalWrite(verd1, HIGH);
  digitalWrite(verd6, HIGH);
  delay(2000);
  // Desliga gradativamente os verdes
  for (int y = 7; y <= 12; y++) {
    digitalWrite(y, HIGH);
    delay(1000);
    digitalWrite(y, LOW);
  }
  delay(500);

  // Liga o amarelo, aguarda 2s e desliga
  digitalWrite(amare, HIGH);
  delay(2000);
  digitalWrite(amare, LOW);
  delay(500);
}