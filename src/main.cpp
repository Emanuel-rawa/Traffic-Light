#include <Arduino.h>

#define led_red 10
#define led_yel 9
#define led_gre 8

void setup() {
  // put your setup code here, to run once:
  pinMode(led_red, OUTPUT);
  pinMode(led_yel, OUTPUT);
  pinMode(led_gre, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_red, HIGH);
  delay(3000);
  digitalWrite(led_red, LOW);
  digitalWrite(led_gre, HIGH);
  delay(2000);
  digitalWrite(led_gre, LOW);
  digitalWrite(led_yel, HIGH);
  delay(1000);
  digitalWrite(led_yel, LOW);
}
