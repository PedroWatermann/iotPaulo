int led = 3;
int valPot = 0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  valPot = analogRead(A0);
  analogWrite(led, valPot / 4); // A divisão é necessária pois a entrada do potenciômetro é 4x maior que a saída do PWM
}