// 13) Alterne dois leds utilizando um botão de dupla função

int led1 = 11;
int led2 = 12;

int btn = 13;

int estLed1 = 0;
int estLed2 = 0;
int estBtn = 0;

int anterior;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  estBtn = digitalRead(btn);

  if (estBtn == HIGH && anterior == LOW) {
    estLed1 = !estLed1;
    estLed2 = !estLed1;
  }

  digitalWrite(led1, estLed1);
  digitalWrite(led2, estLed2);

  anterior = estBtn;

  delay(50);
}