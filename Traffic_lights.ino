/*
  Author: Youssef Attia
  Description: control 3 LED to manipulate the Traffic lights
*/
#define red 8
#define yellow 9
#define green 10
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  delay(2000);
  digitalWrite(red, LOW);
  for (int i = 1; i <= 5; i++) {
    digitalWrite(yellow, HIGH);
    delay(500);
    digitalWrite(yellow, LOW);
    delay(500);
  }
  digitalWrite(green, HIGH);
  delay(2000);
  digitalWrite(green, LOW);
  delay(500);
}
