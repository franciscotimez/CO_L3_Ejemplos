#include "teclado_matricial.h"

int teclaNum;
char teclaChar;
unsigned long inicio, fin, diferencia;
/*******************************************************
         setup FUNCTION
 *******************************************************/
void setup()
{
  Serial.begin(115200);
  iniciarTeclado(9, 8, 7, 6, 5, 4, 3, 2);
}

/*******************************************************
         loop FUNCTION
 *******************************************************/
void loop()
{
  inicio = micros();
  teclaNum = leerTeclado();
  fin = micros();
  diferencia = fin - inicio;
  Serial.print("Tecla sensada: ");
  Serial.println(teclaNum);
  Serial.print("Esta funcion tardo ");
  Serial.print(diferencia);
  Serial.println(" microsegundos");

  inicio = micros();
  teclaChar = leerTecladoChar();
  fin = micros();
  diferencia = fin - inicio;
  Serial.print("Tecla sensada: ");
  Serial.println(teclaChar);
  Serial.print("Esta funcion tardo ");
  Serial.print(diferencia);
  Serial.println(" microsegundos");

  delay(500);
}
