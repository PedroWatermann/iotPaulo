// Exemplo de programa monitor serial

int btn = 6;

void setup() {
  Serial.begin(9600);   // Inicia a comunicação serial com 9600 bits
  pinMode(btn, INPUT);  // Declara o botão como pino de entrada
}

void loop() {
  Serial.println(digitalRead(btn));   // Imprime o valor do botão
  delay(1);                           // Delay entre as leituras para estabilidade
}