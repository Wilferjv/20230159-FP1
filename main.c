#include <stdio.h>

/* invierte datos
el programa, al recibir como dato un conjunto de datos de entrada invierte el
orden de los mismo cuando los imprime.

A, B, C, y D> Variables de tipo entero. */

void main(void)
{
    int A, B, C, D;
    printf("ingrese cuatro datos de tipo entero: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    printf("/n %d %d %d %d", D, C, B, A);
}
