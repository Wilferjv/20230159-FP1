#include <stdio.h>
#include <stdlib.h>
/*El programa, al recibir como datos la longitud y el peso de un objeto expresados en pies y libras,
calcula los datos de este objeto peo en metros y kilos.
PIE, LIB, MET y KIL: Variabes de tipo real. */

void main(void)
{
float PIE, LIB, MET, KIL;
printf("Ingese los datos del objeto:" );
scanf("%f %f", &PIE, &LIB);
MET = PIE * 0.09290;
KIL = LIB * 0.45359;
printf("\nDatos del objeto \nLongitud: %5.2f  \t Peso: %5.2f", MET, KIL);


   }

