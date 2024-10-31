// 001) Faça um origrama com arduino que faça a leitura de temperatura de um sensor LM-35 e converta o número decimal de entrada para °C. Toda vez que a temperatura passar de 32°C deve-se acionar um alarme (led) indicando o excesso de calor. Imprimir no monitor a temperatura em °C.

int led = 7;
int tempSensor = 0;
float temperatura = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  tempSensor = analogRead(A0);

  temperatura = tempSensor * 0.48875855327468;

  Serial.print("Temperatura: ");
  Serial.println(temperatura);

  if ( temperatura > 32 ) {
    digitalWrite(led, HIGH);
    Serial.println("Atenção, excesso de calor!");
    delay(2000);
  } else {
    digitalWrite(led, LOW);
  }

  delay(100);
}