#include <Arduino.h>
#define led 13
#define time 1000

void setup() {
  Serial.begin(19200);
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(time);
  digitalWrite(led, LOW);
  delay(time);

}

