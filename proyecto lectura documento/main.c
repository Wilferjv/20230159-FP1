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
        fseek(archivo, 0, SEEK_CUR); // Ajustar el puntero después de la escritura
    }

    fclose(archivo);

    printf("Conversión a mayúsculas completada.\n");

    return 0;
}
