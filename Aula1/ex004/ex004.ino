// 4) Conecte um led ao pino 12 e outro ao pino 11 e faça-os piscar alternadamente, utilizando variáveis
int led1 = 11;
int led2 = 12;

void setup() {
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);
}