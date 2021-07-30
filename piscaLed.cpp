/*
 * Blog Arduino Omega
 * Aula Como criar ma Biblioteca
 * Arquivo arquivo C++
 * Autor: Sandro Mesquita
 */

 #include "Arduino.h"
 #include "piscaLed.h"

 pisca::pisca(int pin)
 {
  pinMode(13, OUTPUT);
  _pin = pin;
 }

 void pisca::piscaTempo(int ms)
 {
  digitalWrite(_pin, HIGH);
  delay(ms);
  digitalWrite(_pin, LOW);
  delay(ms);
 }
