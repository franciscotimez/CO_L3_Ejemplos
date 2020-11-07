// Este es el .cpp  todo lo que se escribe aca es PRIVADO
#include "teclado_matricial.h"

// macros
const int matrix[4][4] = {
  {1, 2, 3, 10},
  {4, 5, 6, 11},
  {7, 8, 9, 12},
  {14, 0, 15, 13}
};

// Variables
int pines[8];

// Prototipo funciones privadas

// Implementaciones de las funciones
/*
   Funcion iniciarTeclado()
   Paso como parametro 8 pines
*/
void iniciarTeclado(int f1, int f2, int f3, int f4, int c1, int c2, int c3, int c4 )
{
  pines[0] = f1;
  pines[1] = f2;
  pines[2] = f3;
  pines[3] = f4;
  pines[4] = c1;
  pines[5] = c2;
  pines[6] = c3;
  pines[7] = c4;
  for (int f = 0 ; f < 4 ; f++) // Recorro las filas
  {
    pinMode(pines[f], OUTPUT);
    digitalWrite(pines[f], HIGH);
  }
  for (int f = 4 ; f < 8 ; f++) // Recorro las filas
    pinMode(pines[f], INPUT_PULLUP);
  return;
}

/*
   Funcion leerTeclado()
   Descrip: Lee el teclado matricial y devuelve un entero
   0 -> 0
   1 -> 1
      ...
   9 -> 9
   10 -> A
   13 -> D
   14 -> *
   15 -> #
   -1 -> NADA
*/
int leerTeclado()
{
  int f, c;

  for (f = 0 ; f < 4 ; f++) // Recorro las filas
  {
    digitalWrite(pines[f], LOW);
    for (c = 4 ; c < 8 ; c++) // Recorro las columnas
    {
      if (!digitalRead(pines[c]))
      {
         digitalWrite(pines[f], HIGH);
         return matrix[f][c - 4];
      }   
    }
    digitalWrite(pines[f], HIGH);
  }

  return -1;
}

/*
   Funcion leerTeclado()
   Descrip: Lee el teclado matricial y devuelve un char
*/
char leerTecladoChar()
{
  char teclaChar;
  int teclaInt;

  teclaInt = leerTeclado();

  if (teclaInt >= 0)
  {
    if ( teclaInt < 10)
      return (teclaInt + '0');
    if (teclaInt < 14)
      return (teclaInt - 10 + 'A');
    if ( teclaInt == 14)
      return '*';
    else
      return '#';
  }
  return 0;
}
