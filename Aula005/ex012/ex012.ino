// 12) Faça dois botões de dupla função, um para cada led

int led1 = 13;
int led2 = 4;

int btn1 = 12;
int btn2 = 5;

int estLed1 = 0;
int estLed2 = 0;

int estBtn1 = 0;
int estBtn2 = 0;

int anterior1 = 0;
int anterior2 = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
}

void loop() {
  estBtn1 = digitalRead(btn1);  // Lê o estado do botão
  estBtn2 = digitalRead(btn2);  // Lê o estado do botão

  if (estBtn1 == HIGH && anterior1 == LOW) {  // Verifica se o botão 1 está pressionado e se anteriormente ele estava solto
    estLed1 = !estLed1; // Inverte o estado do led 1
  }

  if (estBtn2 == HIGH && anterior2 == LOW) {  // Verifica se o botão 2 está pressionado e se anteriormente ele estava solto
    estLed2 = !estLed2; // Inverte o estado do led 2
  }

  digitalWrite(led1, estLed1);  // Escreve o estado da variável no pino do led 1, ou seja, acende ou apaga o led
  digitalWrite(led2, estLed2);  // Escreve o estado da variável no pino do led 2, ou seja, acende ou apaga o led

  anterior1 = estBtn1;  // Armazena o estado do botão 1 para que a condicional seja executada com êxito
  anterior2 = estBtn2;  // Armazena o estado do botão 2 para que a condicional seja executada com êxito

  delay(50);  // Tempo para que a leitura seja executada corretamente
}