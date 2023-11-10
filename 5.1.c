#include <stdio.h>

void main(void)
{
    int I, NUM, CUE = 0;
    int ARRE[100]; // Declaración del arreglo

    for (I = 0; I < 100; I++)
    {
        printf("Ingrese el elemento %d del arreglo: ", I + 1);
        scanf("%d", &ARRE[I]); // Lectura y asignación de elementos en el arreglo
    }

    printf("\n\nIngrese el número que se va a buscar en el arreglo: ");
    scanf("%d", &NUM);

    for (I = 0; I < 100; I++)
    {
        if (ARRE[I] == NUM) // Comparación del número con los elementos del arreglo
            CUE++;
    }

    printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);
}
