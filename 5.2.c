#include <stdio.h>

void main(void)
{
    int ELE[5] = {0};   /* Declaración del arreglo entero ELE de cinco elementos. Todos sus elementos se inicializan en 0. */
    int I, VOT;

    printf("Ingresa el primer voto (0 - Para terminar): ");
    scanf("%d", &VOT);

    while (VOT)
    {
        if (VOT > 0 && VOT < 6) /* Se verifica que el voto sea correcto. */
        {
            ELE[VOT - 1]++; /* Los votos se almacenan en el arreglo. Recuerda que la primera posición del arreglo es 0, por esa razón a la variable VOT se le descuenta 1. Los votos del primer candidato se almacenan en la posición 0. */
        }
        else
        {
            printf("El voto ingresado es incorrecto.\n");
        }

        printf("Ingresa el siguiente voto (0 - Para terminar): ");
        scanf("%d", &VOT);
    }

    printf("\n\nResultados de la Elección\n");
    for (I = 0; I < 5; I++)
    {
        printf("Candidato %d: %d\n", I + 1, ELE[I]);
    }
}
