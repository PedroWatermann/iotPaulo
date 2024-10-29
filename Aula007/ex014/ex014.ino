int led = 7;
int valPot = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  valPot = analogRead(A0);
  Serial.println(valPot);

  digitalWrite(led, HIGH);
  delay(valPot);
  digitalWrite(led, LOW);
  delay(valPot);
}