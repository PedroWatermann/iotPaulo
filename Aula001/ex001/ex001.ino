// 1) Conecte um led ao pino 13 e faça-o piscar com intervalo de tempo de 1s
void setup() {
  pinMode(13, OUTPUT);    // OUTPUT => indica que o arduino enviará informações para o componente na saída 13
}

void loop() {
  digitalWrite(13, HIGH); // Habilita a passagem de energia para o pino 13
  delay(1000);            // Aplica um delay de 1s
  digitalWrite(13, LOW);  // Desabilita a passagem de energia
  delay(1000);            // Aplica um delay de 2s
}