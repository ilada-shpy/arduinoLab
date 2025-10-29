#include <Arduino.h>

#define RLED_GNT 13 //Pin 13 connected to the Red LED 

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(RLED_GNT, OUTPUT);
}

void loop()
{
  digitalWrite(RLED_GNT, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(RLED_GNT, LOW); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
} 