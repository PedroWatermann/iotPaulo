// 5) Faça uma sequência de 10 leds ligar sequencialmente
int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7; 
int led8 = 8;
int led9 = 9;
int led10 = 10;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
}

void loop() {
// Com utilização de variáveis
  // digitalWrite(led1, HIGH);
  // delay(50);
  // digitalWrite(led2, HIGH);
  // delay(50);
  // digitalWrite(led3, HIGH);
  // delay(50);
  // digitalWrite(led4, HIGH);
  // delay(50);
  // digitalWrite(led5, HIGH);
  // delay(50);
  // digitalWrite(led6, HIGH);
  // delay(50);
  // digitalWrite(led7, HIGH);
  // delay(50);
  // digitalWrite(led8, HIGH);
  // delay(50);
  // digitalWrite(led9, HIGH);
  // delay(50);
  // digitalWrite(led10, HIGH);
  // delay(50);
  // digitalWrite(led1, LOW);
  // delay(50);
  // digitalWrite(led2, LOW);
  // delay(50);
  // digitalWrite(led3, LOW);
  // delay(50);
  // digitalWrite(led4, LOW);
  // delay(50);
  // digitalWrite(led5, LOW);
  // delay(50);
  // digitalWrite(led6, LOW);
  // delay(50);
  // digitalWrite(led7, LOW);
  // delay(50);
  // digitalWrite(led8, LOW);
  // delay(50);
  // digitalWrite(led9, LOW);
  // delay(50);
  // digitalWrite(led10, LOW);
  // delay(50);


// Utilizando laço de repetição
  // for (int i = 1; i <= 10; i++) {
  //   digitalWrite(i, HIGH);
  //   delay(50);
  // }
  // for (int i = 10; i >= 1; i--) {
  //   digitalWrite(i, LOW);
  //   delay(50);
  // }


// Outro padrão de pisca
  for (int i = 1; i <= 10; i++) {
    digitalWrite(i, HIGH);
    delay(50);
  }
  for (int i = 1; i < 10; i++) {
    digitalWrite(i, LOW);
    delay(50);
  }
  for (int i = 10; i >= 1; i--) {
    digitalWrite(i, HIGH);
    delay(50);
  }
  for (int i = 10; i > 1; i--) {
    digitalWrite(i, LOW);
    delay(50);
  }
}