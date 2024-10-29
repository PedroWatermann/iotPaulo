// Cálculo multiplicador para tensão: 5/1024 = 0,0048828125

float tensao = 0;
int valPot = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valPot = analogRead(A0);
  tensao = valPot * 0.0048828125;
  Serial.println(tensao);
  delay(100);
}