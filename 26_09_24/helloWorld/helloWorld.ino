/*// 1) Conecte um led ao pino 13 e faça-o piscar com intervalo de tempo de 1s
void setup() {
  pinMode(13, OUTPUT);    // OUTPUT => indica que o arduino enviará informações para o componente na saída 13
}

void loop() {
  digitalWrite(13, HIGH); // Habilita a passagem de energia para o pino 13
  delay(1000);            // Aplica um delay de 1s
  digitalWrite(13, LOW);  // Desabilita a passagem de energia
  delay(1000);            // Aplica um delay de 2s
}*/


/*// 2) Conecte um led ao pino 12 e faça-o piscar com intervalo de tempo de 1s
void setup() {
  pinMode(12, OUTPUT); 
}

void loop() {
  digitalWrite(12, HIGH); 
  delay(1000);            
  digitalWrite(12, LOW);  
  delay(1000);            
}*/

/*// 3) Conecte um led ao pino 12 e outro ao pino 11 e faça-os piscar alternadamente
void setup() {
  pinMode(11, OUTPUT); 
  pinMode(12, OUTPUT); 
}

void loop() {
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
}*/

// 3) Conecte um led ao pino 12 e outro ao pino 11 e faça-os piscar alternadamente, utilizando variáveis
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