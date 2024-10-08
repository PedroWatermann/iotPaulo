// 10) Utilizar o monitor serial para controlar um led. Aqui a letra l liga o led e a letra d irá desligar o led

int led = 13;
char valor;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  valor = Serial.read();

  if (valor == 'l') 
  {
    digitalWrite(led, HIGH);
  } 
  else if (valor == 'd') 
  {
    digitalWrite(led, LOW);
  }

  delay(1);
}