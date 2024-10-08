// 11) Botão de dupla função: faça um programa onde o led acenderá com um click do botão e apagará com um click do mesmo botão

int led = 13;
int btn = 12;
int estLed = 0;
int estBtn = 0;
int anterior = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  estBtn = digitalRead(btn);

  if (estBtn == HIGH && anterior == LOW) {
    estLed = !estLed; // Inverte o estado do led
  }

  digitalWrite(led, estLed);  // Escreve o estado da variável no pino do led

  anterior = estBtn;  // Armazena o estado do botão

  delay(50);
}