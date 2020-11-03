// ESTE ES FSM_led.h
// "PUBLICO"

/*
 * Esta es una maquina de estados que prende y apaga un led
 * Autor: soy Yo
 */
 
#ifndef FSM_LED_H
#define FSM_LED_H

#include <Arduino.h>

/*******************
 *  Prototipos de funciones
 ******************/
void FSM_init(uint8_t pin);        // Inicializa la maquina de estados
void FSM_update();      // Actualiza la FSM 
void FSM_debug();       // Muestra en el monitor serie el estado de la FSM

#endif
