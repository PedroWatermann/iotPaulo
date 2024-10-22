// Laço While
/*int led = 13;
int i;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  while (i < 4) {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);

    i++;
  }

  i = 0;
  delay(2000);
}*/

// Laço For
int led = 13;
int i;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for (i = 0; i < 3; i++) {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
  }

  delay(5000);
}