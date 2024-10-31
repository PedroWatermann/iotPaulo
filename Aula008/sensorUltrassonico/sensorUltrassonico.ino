#include <Ultrasonic.h>

// ultrassonic(int trigger, int echo);
Ultrasonic ultrassonic(7, 8);
int distancia = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  distancia = ultrassonic.read();

  Serial.print("Distância em centímetros: ");
  Serial.print("\t");
  Serial.print(distancia);
  Serial.println("cm");
  delay(1000);
}