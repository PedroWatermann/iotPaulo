// 2) Conecte um led ao pino 12 e faça-o piscar com intervalo de tempo de 1s
void setup() {
  pinMode(12, OUTPUT); 
}

void loop() {
  digitalWrite(12, HIGH); 
  delay(1000);            
  digitalWrite(12, LOW);  
  delay(1000);            
}