#include <stdio.h>

int main(void)
{
    FILE *archivo = fopen("texto.txt", "r+");
    if (!archivo)
    {
        printf("No se puede abrir el archivo.\n");
        return 1;
    }

    fseek(archivo, 0, SEEK_END);
    long tamano = ftell(archivo);
    rewind(archivo);

    for (int i = 0; i < tamano; i++)
    {
        int c = fgetc(archivo);
        if ('a' <= c && c <= 'z')
        {
            fseek(archivo, i, SEEK_SET);
            fputc(c - 'a' + 'A', archivo);
        }
        fseek(archivo, 0, SEEK_CUR); // Ajustar el puntero despu�s de la escritura
    }

    fclose(archivo);

    printf("Conversi�n a may�sculas completada.\n");

    return 0;
}
