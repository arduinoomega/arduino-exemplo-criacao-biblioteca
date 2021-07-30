/*
 * Blog Arduino Omega
 * Aula Como criar ma Biblioteca
 * Arquivo Extensão .h
 * Autor: Sandro Mesquita
 */

 #ifndef pisca_1
 #define pisca_1
 #include "Arduino.h"

 class pisca
 {
  public:
    pisca(int pin);
    void piscaTempo(int ms);
  private:
    int _pin;
 };
 #endif
