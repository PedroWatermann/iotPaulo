// 1) Led 1 só pode ligar quando o botão 1 ou o botão 2 for pressionado

int led = 11;
int btn1 = 12;
int btn2 = 13;
int estBtn1 = 0;
int estBtn2 = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
}

void loop() {
  estBtn1 = digitalRead(btn1);
  estBtn2 = digitalRead(btn2);

  if (estBtn1 == HIGH || estBtn2 == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}