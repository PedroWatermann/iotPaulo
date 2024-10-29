int valorPotenciometro = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valorPotenciometro = analogRead(A0);

  Serial.println(valorPotenciometro);
  
  delay(1);
}