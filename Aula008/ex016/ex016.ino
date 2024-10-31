/* 15) Utilizando o sensor DHT11, verifique:
    a) se temperatura > 25°C, acione led 1.
    b) se humidade >= 23%, acione led 2.
    c) se temperatura > 25°C e humidade > 23%, acione led3.
*/

#include "DHT11.h"

int temp = 0;
int humi = 0;
int resu = 0;
int led1 = 11;
int led2 = 12;
int led3 = 13;

// Cria uma instância da classe --> variável = dht11 / classe = DHT11
DHT11 dht11(2);

void setup() {
  Serial.begin(9600);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  resu = dht11.readTemperatureHumidity(temp, humi);
  // temp = dht11.readTemperature();
  // humi = dht11.readHumidity();

  if (resu == 0) {
      Serial.print("Temperatura: ");
      Serial.print(temp);
      Serial.println("°C");
      Serial.print("\tHumidade: ");
      Serial.print(humi);
      Serial.println("%");
    
    if (temp > 25) {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
    }

    if (humi >= 23) {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
    }

    if (temp > 25 && humi > 23) {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
    }
  }
}