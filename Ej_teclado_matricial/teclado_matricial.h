// Este es el .h todo lo que se escribe aca es PUBLICO
#ifndef _TECLADO_MATRICIAL_H_
#define _TECLADO_MATRICIAL_H_

#include <Arduino.h>
// macros

// variables publicas


// prototipos de funciones
/*
 * Funcion iniciarTeclado()
 * Paso como parametro 8 pines
 */
void iniciarTeclado(int f1,
                    int f2,
                    int f3,
                    int f4,
                    int c1,
                    int c2,
                    int c3,
                    int c4
                    );

/*
 * Funcion leerTeclado()
 * Descrip: Lee el teclado matricial y devuelve un entero
 * 0 -> 0
 * 1 -> 1
 *    ...
 * 9 -> 9
 * 10 -> A
 * 13 -> D
 * 14 -> *
 * 15 -> #
 * -1 -> NADA
 */
int leerTeclado();

/*
 * Funcion leerTeclado()
 * Descrip: Lee el teclado matricial y devuelve un char
 */
char leerTecladoChar();

#endif
