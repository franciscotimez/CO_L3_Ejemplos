
char buffers[10];
unsigned long inicio = 1243312;

typedef struct{
   int var1;
   int var2;
   int resul;
} tipo_t;

tipo_t estructura;

volatile int resultado;

int variable1 = 10;
int variable2 = 15;

unsigned long *puntero;

void setup() {
   // put your setup code here, to run once:
Serial.begin(115200);
  //iniciarTeclado(pines_matriz);
Serial.println();
Serial.println();
  puntero = &inicio;

  Serial.print("La direccion de la variable inicio es: ");
  sprintf(buffers, "0x%X" , &inicio );
  Serial.println(buffers);

  Serial.print("El contenido de la variable inicio es: ");
  sprintf(buffers, "0x%X" , inicio );
  Serial.println(buffers);

  Serial.print("El contenido del puntero puntero es: ");
  sprintf(buffers, "0x%X" , puntero );
  Serial.println(buffers);

  Serial.print("La direccion del puntero puntero es: ");
  sprintf(buffers, "0x%X" , &puntero );
  Serial.println(buffers);

  Serial.print("El contenido de la direcciona la que apunta el puntero puntero es: ");
  sprintf(buffers, "0x%X" , *puntero );
  Serial.println(buffers);
  
   estructura.var1 = 12;
   estructura.var2 = 8;
   estructura.resul = 0;
   
   suma(estructura);
   Serial.print("resultado: ");
   Serial.println(estructura.resul);

   suma2(&estructura);
   Serial.print("resultado: ");
   Serial.println(estructura.resul);
  
}

void loop() {
   // put your main code here, to run repeatedly:

}

void suma(tipo_t & stru)
{
   stru.resul = stru.var1 + stru.var2;
   return;
}

void suma2(tipo_t * stru)
{
   stru->resul = stru->var1 + stru->var2;
   return;
}
