#include "arduino_secrets.h"
#include "thingProperties.h"

const int led0 = D0;
const int led1 = D1;
const int led2 = D2;
const int led3 = D3;
const int led4 = D4;

void setup() {
  Serial.begin(9600);
  delay(1500); 

  initProperties();

  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();

  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  ArduinoCloud.update();  
}

void onLedD0Change()  {
  digitalWrite(led0, led_D0 ? HIGH : LOW);
}

void onLedD1Change()  {
  digitalWrite(led1, led_D1 ? HIGH : LOW);
}

void onLedD2Change()  {
  digitalWrite(led2, led_D2 ? HIGH : LOW);
}

void onLedD3Change()  {
  digitalWrite(led3, led_D3 ? HIGH : LOW);
}

void onLedD4Change()  {
  digitalWrite(led4, led_D4 ? HIGH : LOW);
}
