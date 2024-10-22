int rele = 2;
char tecla;

void setup() {
  Serial.begin(9600);
  pinMode(rele, OUTPUT);
  digitalWrite(rele, HIGH);
}

void loop() {
  tecla = Serial.read();
  if (tecla == 'l') {
    digitalWrite(rele, LOW);
  }

  if (tecla == 'd') {
    digitalWrite(rele, HIGH);
  }

  delay(10);
}