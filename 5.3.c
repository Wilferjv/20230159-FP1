#include <stdio.h>

void main(void)
{
    int X = 3, Y = 7, Z[5] = {2, 4, 6, 8, 10};
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    int *IX; /* IX representa un apuntador a un entero. */
    IX = &X; /* IX apunta a X. IX tiene la dirección de X. */
    Y = *IX; /* Y toma el valor de X, ahora vale 3. */
    *IX = 1; /* X se modifica, ahora vale 1. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &Z[2]; /* IX apunta al tercer elemento del arreglo Z. */
    Y = *IX; /* Y toma el valor de Z[2], ahora vale 6. */
    *IX = 15; /* Z[2] se modifica, ahora vale 15. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *IX + 5; /* X se modifica, ahora vale 20. */
    *IX = *IX - 5; /* Z[2] se modifica, ahora vale 10. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    ++*IX; /* Z[2] se modifica, se incrementa en 1, ahora vale 11. */
    *IX += 1; /* Z[2] se modifica de nuevo, ahora vale 12. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *(IX + 1); /* X se modifica, ahora toma el valor 8. */
    Y = *IX; /* Y se modifica, toma el valor 12. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = IX + 1; /* IX se modifica y apunta al cuarto elemento de Z. */
    Y = *IX; /* Y toma el valor de Z[3], ahora vale 8. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = IX + 4; /* IX se modifica y apunta fuera del arreglo, lo cual resulta en un error. */
    Y = *IX; /* Y se modifica y toma un valor incorrecto. Es un error que no señala el compilador de C. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &X; /* IX apunta a la variable X. */
    IX = IX + 1; /* IX se mueve una posición y cae en una celda incorrecta. */
    X = *IX; /* X toma un valor incorrecto de la celda a la que apunta IX. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
}
