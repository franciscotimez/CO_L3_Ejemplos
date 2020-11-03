// ESTE ES FSM_led.cpp
// Acá se escriben las implementaciones

// "PRIVADO"
#include "FSM_led.h"

/****************
   Tipo de dato
 ***************/
typedef enum {
  LED_ON,
  LED_OFF
} estadoFSM_t;

estadoFSM_t estado;
uint8_t pinLed;

/****************************
   FSM_init FUNCTION
 ***************************/
// Inicializar el estado de la FSM
void FSM_init(uint8_t pin)
{
  estado = LED_OFF;
  pinLed = pin;
  pinMode(pinLed, OUTPUT);
}

/****************************
   FSM_update FUNCTION
 ***************************/
// Actualiza el estado de la FSM
void FSM_update()
{
  switch (estado)
  {
    case LED_ON:
      // Establezco el estado
      digitalWrite(pinLed, HIGH);
      // Checkeo transiciones
      estado = LED_OFF;
      break;

    case LED_OFF:
      // Establezco el estado
      digitalWrite(pinLed, LOW);
      // Checkeo transiciones
      estado = LED_ON;
      break;
  }
}

/****************************
   FSM_debug FUNCTION
 ***************************/
// Actualiza el estado de la FSM
void FSM_debug() {
  switch (estado) {
    case LED_ON:
      Serial.println("LED_ON");
      break;

    case LED_OFF:
      Serial.println("LED_OFF");
      break;
  }
}
